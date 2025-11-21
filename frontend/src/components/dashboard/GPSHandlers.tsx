import { useEffect, useRef } from 'react';
import { useDroneGPSContext } from '@/context/DroneGPSContext';
import { toast } from 'sonner';

/**
 * ============================================
 * INTEGRATION HANDLERS - PICK ONE FOR YOUR APP
 * ============================================
 * 
 * Choose based on your setup:
 * 1. WebSocketGPSHandler - Real-time streaming (needs backend)
 * 2. HTTPGPSHandler - Polling (REST API)
 * 3. PX4GPSReceiver - ROS2 topics (already implemented)
 * 4. MAVLinkHandler - Direct serial connection
 */

// ==========================================
// OPTION 1: WebSocket Handler (Real-time)
// ==========================================
export const WebSocketGPSHandler = () => {
  const { updateScanDroneGPS, updateSprayDroneGPS } = useDroneGPSContext();
  const wsRef = useRef<WebSocket | null>(null);
  const reconnectTimeoutRef = useRef<NodeJS.Timeout | null>(null);

  useEffect(() => {
    const connect = () => {
      try {
        const wsUrl = (import.meta as any).env.VITE_GPS_SERVER_URL || 'ws://localhost:3000';
        console.log('[WebSocket] Connecting to:', wsUrl);
        
        wsRef.current = new WebSocket(wsUrl);

        wsRef.current.onopen = () => {
          console.log('[WebSocket] ✓ Connected');
          toast.success('GPS Server Connected');
        };

        wsRef.current.onmessage = (event) => {
          try {
            const message = JSON.parse(event.data);

            if (message.type === 'gps_update' && message.data) {
              if (message.droneType === 'scan') {
                updateScanDroneGPS(message.data);
              } else if (message.droneType === 'spray') {
                updateSprayDroneGPS(message.data);
              }
            } else if (message.type === 'initial_state' && message.data) {
              if (message.data.scan) updateScanDroneGPS(message.data.scan);
              if (message.data.spray) updateSprayDroneGPS(message.data.spray);
            }
          } catch (error) {
            console.error('[WebSocket] Parse error:', error);
          }
        };

        wsRef.current.onerror = (error) => {
          console.error('[WebSocket] Error:', error);
          toast.error('GPS Server Connection Error');
        };

        wsRef.current.onclose = () => {
          console.log('[WebSocket] ✗ Disconnected');
          toast.error('GPS Server Disconnected - Reconnecting...');
          reconnectTimeoutRef.current = setTimeout(connect, 3000);
        };
      } catch (error) {
        console.error('[WebSocket] Setup error:', error);
        reconnectTimeoutRef.current = setTimeout(connect, 3000);
      }
    };

    connect();

    return () => {
      if (wsRef.current) wsRef.current.close();
      if (reconnectTimeoutRef.current) clearTimeout(reconnectTimeoutRef.current);
    };
  }, [updateScanDroneGPS, updateSprayDroneGPS]);

  return null;
};

// ==========================================
// OPTION 2: HTTP Polling Handler
// ==========================================
export const HTTPGPSHandler = () => {
  const { updateScanDroneGPS, updateSprayDroneGPS } = useDroneGPSContext();
  const pollIntervalRef = useRef<NodeJS.Timeout | null>(null);
  const isConnectedRef = useRef(false);

  useEffect(() => {
    const pollGPSData = async () => {
      try {
        const apiUrl = (import.meta as any).env.VITE_GPS_API_URL || 'http://localhost:3000/api/drone/gps';

        const [scanResponse, sprayResponse] = await Promise.all([
          fetch(`${apiUrl}/scan`),
          fetch(`${apiUrl}/spray`)
        ]);

        if (scanResponse.ok) {
          const scanData = await scanResponse.json();
          updateScanDroneGPS(scanData);
          
          if (!isConnectedRef.current) {
            isConnectedRef.current = true;
            console.log('[HTTP] ✓ Connected to GPS API');
            toast.success('GPS API Connected');
          }
        }

        if (sprayResponse.ok) {
          const sprayData = await sprayResponse.json();
          updateSprayDroneGPS(sprayData);
        }
      } catch (error) {
        console.error('[HTTP] Polling error:', error);
        
        if (isConnectedRef.current) {
          isConnectedRef.current = false;
          toast.error('GPS API Connection Error');
        }
      }
    };

    console.log('[HTTP] Starting GPS polling...');
    
    pollIntervalRef.current = setInterval(pollGPSData, 1000);
    pollGPSData(); // Initial fetch

    return () => {
      if (pollIntervalRef.current) {
        clearInterval(pollIntervalRef.current);
      }
    };
  }, [updateScanDroneGPS, updateSprayDroneGPS]);

  return null;
};

// ==========================================
// OPTION 3: MAVLink Handler (Serial)
// ==========================================
export const MAVLinkHandler = () => {
  const { updateScanDroneGPS } = useDroneGPSContext();
  const wsRef = useRef<WebSocket | null>(null);
  const batteryRef = useRef<number>(100);
  const lastUpdateRef = useRef<number>(0);

  useEffect(() => {
    const connect = () => {
      try {
        const wsUrl = (import.meta as any).env.VITE_MAVLINK_URL || 'ws://localhost:3000/mavlink';
        console.log('[MAVLink] Connecting to:', wsUrl);
        
        wsRef.current = new WebSocket(wsUrl);

        wsRef.current.onopen = () => {
          console.log('[MAVLink] ✓ Connected');
          toast.success('MAVLink Bridge Connected');
        };

        wsRef.current.onmessage = (event) => {
          try {
            const mavlinkData = JSON.parse(event.data);
            const now = Date.now();

            // Only update if we haven't updated in 100ms (limit frequency)
            if (now - lastUpdateRef.current < 100) return;
            lastUpdateRef.current = now;

            if (mavlinkData.type === 'GLOBAL_POSITION_INT') {
              const speed = Math.sqrt(
                (mavlinkData.vx ** 2 + mavlinkData.vy ** 2) / 10000
              );

              updateScanDroneGPS({
                latitude: mavlinkData.lat / 1e7,
                longitude: mavlinkData.lon / 1e7,
                altitude: mavlinkData.alt / 1000,
                speed: parseFloat(speed.toFixed(2)),
                heading: mavlinkData.hdg / 100,
                battery: batteryRef.current
              });
            } else if (mavlinkData.type === 'BATTERY_STATUS') {
              batteryRef.current = Math.round(mavlinkData.battery_remaining);
            }
          } catch (error) {
            console.error('[MAVLink] Parse error:', error);
          }
        };

        wsRef.current.onerror = () => {
          console.error('[MAVLink] Connection error');
          toast.error('MAVLink Connection Error');
        };

        wsRef.current.onclose = () => {
          console.log('[MAVLink] ✗ Disconnected');
          setTimeout(connect, 3000);
        };
      } catch (error) {
        console.error('[MAVLink] Setup error:', error);
        setTimeout(connect, 3000);
      }
    };

    connect();

    return () => {
      if (wsRef.current) wsRef.current.close();
    };
  }, [updateScanDroneGPS]);

  return null;
};

// ==========================================
// OPTION 4: Debug/Demo Mode
// ==========================================
export const DebugGPSHandler = () => {
  const { updateScanDroneGPS, updateSprayDroneGPS } = useDroneGPSContext();

  useEffect(() => {
    // Expose update functions to window for manual testing
    (window as any).updateScanDroneGPS = updateScanDroneGPS;
    (window as any).updateSprayDroneGPS = updateSprayDroneGPS;

    // Simulate moving drone
    let angle = 0;
    const simulationInterval = setInterval(() => {
      angle += 0.05;
      
      updateScanDroneGPS({
        latitude: 11.9570 + Math.sin(angle) * 0.001,
        longitude: 79.5521 + Math.cos(angle) * 0.001,
        altitude: 50 + Math.sin(angle * 2) * 10,
        speed: 10 + Math.sin(angle * 3) * 5,
        heading: (angle * 180 / Math.PI) % 360,
        battery: 100 - (angle / 100 % 20)
      });
    }, 1000);

    console.log('[Debug] Simulation mode active');
    console.log('[Debug] Call: window.updateScanDroneGPS({...}) to test');

    return () => clearInterval(simulationInterval);
  }, [updateScanDroneGPS, updateSprayDroneGPS]);

  return null;
};

// ==========================================
// HELPER: Multi-Mode Selector
// ==========================================
export const AutoGPSHandler = () => {
  const mode = (import.meta as any).env.VITE_GPS_MODE || 'websocket';

  switch (mode.toLowerCase()) {
    case 'websocket':
      return <WebSocketGPSHandler />;
    case 'http':
    case 'api':
      return <HTTPGPSHandler />;
    case 'mavlink':
      return <MAVLinkHandler />;
    case 'debug':
    case 'simulate':
      return <DebugGPSHandler />;
    default:
      console.warn(`Unknown GPS mode: ${mode}`);
      return <WebSocketGPSHandler />;
  }
};
