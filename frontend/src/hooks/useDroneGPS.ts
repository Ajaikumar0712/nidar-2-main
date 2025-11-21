import { useState, useCallback } from 'react';

export interface DroneGPSData {
  latitude: number;
  longitude: number;
  altitude: number;
  speed: number;
  heading: number;
  battery: number;
  timestamp: Date;
  tankLevel?: number; // Spray drone tank in liters
  isSpraying?: boolean; // Is drone currently spraying
  maxTankCapacity?: number; // Total tank capacity in liters
}

export interface DroneState {
  scanDrone: DroneGPSData | null;
  sprayDrone: DroneGPSData | null;
}

const defaultScanDroneGPS: DroneGPSData = {
  latitude: 11.9570,
  longitude: 79.5521,
  altitude: 45,
  speed: 12,
  heading: 45,
  battery: 87,
  timestamp: new Date(),
};

const defaultSprayDroneGPS: DroneGPSData = {
  latitude: 11.9565,
  longitude: 79.5525,
  altitude: 32,
  speed: 8,
  heading: 90,
  battery: 92,
  tankLevel: 10, // Full tank: 10 liters
  isSpraying: false,
  maxTankCapacity: 10, // Total capacity: 10 liters
  timestamp: new Date(),
};

export const useDroneGPS = () => {
  const [droneState, setDroneState] = useState<DroneState>({
    scanDrone: defaultScanDroneGPS,
    sprayDrone: defaultSprayDroneGPS,
  });

  // Update scan drone GPS data
  const updateScanDroneGPS = useCallback((gpsData: Partial<DroneGPSData>) => {
    setDroneState((prev) => ({
      ...prev,
      scanDrone: prev.scanDrone
        ? {
            ...prev.scanDrone,
            ...gpsData,
            timestamp: new Date(),
          }
        : { ...defaultScanDroneGPS, ...gpsData, timestamp: new Date() },
    }));
  }, []);

  // Update spray drone GPS data
  const updateSprayDroneGPS = useCallback((gpsData: Partial<DroneGPSData>) => {
    setDroneState((prev) => ({
      ...prev,
      sprayDrone: prev.sprayDrone
        ? {
            ...prev.sprayDrone,
            ...gpsData,
            timestamp: new Date(),
          }
        : { ...defaultSprayDroneGPS, ...gpsData, timestamp: new Date() },
    }));
  }, []);

  return {
    droneState,
    updateScanDroneGPS,
    updateSprayDroneGPS,
  };
};
