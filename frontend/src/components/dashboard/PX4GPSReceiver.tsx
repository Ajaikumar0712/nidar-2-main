import { useEffect, useRef } from 'react';
import { useDroneGPSContext } from '@/context/DroneGPSContext';

interface VehicleGlobalPosition {
  lat: number;
  lon: number;
  alt: number;
  vel_n: number;
  vel_e: number;
  vel_d: number;
}

interface VehicleAttitude {
  q: [number, number, number, number]; // quaternion
  rollspeed: number;
  pitchspeed: number;
  yawspeed: number;
}

interface BatteryStatus {
  remaining: number; // 0.0 to 1.0
  voltage_v: number;
}

export const PX4GPSReceiver = () => {
  const { updateScanDroneGPS } = useDroneGPSContext();
  const gpsDataRef = useRef<Partial<VehicleGlobalPosition>>({});
  const attitudeDataRef = useRef<Partial<VehicleAttitude>>({});
  const batteryDataRef = useRef<Partial<BatteryStatus>>({});

  // Helper function to extract yaw (heading) from quaternion
  const getHeadingFromQuaternion = (q: [number, number, number, number]): number => {
    const [qx, qy, qz, qw] = q;
    const yaw = Math.atan2(
      2 * (qw * qz + qx * qy),
      1 - 2 * (qy * qy + qz * qz)
    );
    return ((yaw * 180) / Math.PI + 360) % 360; // Convert to 0-360 degrees
  };

  // Combine all telemetry data and update context
  const updateDroneData = () => {
    const gps = gpsDataRef.current;
    const attitude = attitudeDataRef.current;
    const battery = batteryDataRef.current;

    if (gps.lat !== undefined && gps.lon !== undefined) {
      const speed = Math.sqrt((gps.vel_n || 0) ** 2 + (gps.vel_e || 0) ** 2);
      const heading = attitude.q ? getHeadingFromQuaternion(attitude.q) : 0;
      const batteryPercent = battery.remaining ? Math.round(battery.remaining * 100) : 0;

      updateScanDroneGPS({
        latitude: gps.lat,
        longitude: gps.lon,
        altitude: gps.alt || 0,
        speed: Math.round(speed * 100) / 100, // Round to 2 decimals
        heading: Math.round(heading * 10) / 10,
        battery: batteryPercent
      });
    }
  };

  useEffect(() => {
    const setupPX4Subscriptions = async () => {
      try {
        // Check if ROS2 bridge is available
        if (!window.ros) {
          console.warn('ROS2 bridge not available. Ensure ros2-web-bridge is initialized.');
          return;
        }

        const ros = window.ros as any;

        console.log('Setting up PX4 UXRCE-DDS subscriptions...');

        // Subscribe to vehicle global position
        const gpsSubscription = ros.subscribe(
          '/fmu/out/vehicle_global_position',
          'px4_msgs/msg/VehicleGlobalPosition',
          (msg: VehicleGlobalPosition) => {
            gpsDataRef.current = msg;
            updateDroneData();
          },
          {
            qos_profile: 'sensor_data'
          }
        );

        // Subscribe to vehicle attitude for heading
        const attitudeSubscription = ros.subscribe(
          '/fmu/out/vehicle_attitude',
          'px4_msgs/msg/VehicleAttitude',
          (msg: VehicleAttitude) => {
            attitudeDataRef.current = msg;
            updateDroneData();
          },
          {
            qos_profile: 'sensor_data'
          }
        );

        // Subscribe to battery status
        const batterySubscription = ros.subscribe(
          '/fmu/out/battery_status',
          'px4_msgs/msg/BatteryStatus',
          (msg: BatteryStatus) => {
            batteryDataRef.current = msg;
            updateDroneData();
          },
          {
            qos_profile: 'sensor_data'
          }
        );

        console.log('✓ PX4 UXRCE-DDS subscriptions active');

        // Cleanup function
        return () => {
          console.log('Cleaning up PX4 subscriptions...');
          gpsSubscription?.unsubscribe?.();
          attitudeSubscription?.unsubscribe?.();
          batterySubscription?.unsubscribe?.();
        };
      } catch (error) {
        console.error('Error setting up PX4 subscriptions:', error);
      }
    };

    const cleanup = setupPX4Subscriptions();

    return () => {
      cleanup.then((cleanupFn) => cleanupFn?.());
    };
  }, [updateScanDroneGPS]);

  // This component doesn't render anything, just handles data flow
  return null;
};

// Type augmentation for window object
declare global {
  interface Window {
    ros?: any;
  }
}
