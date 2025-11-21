import React, { createContext, useContext, ReactNode } from 'react';
import { useDroneGPS, DroneState, DroneGPSData } from '@/hooks/useDroneGPS';

interface DroneGPSContextType {
  droneState: DroneState;
  updateScanDroneGPS: (data: Partial<DroneGPSData>) => void;
  updateSprayDroneGPS: (data: Partial<DroneGPSData>) => void;
}

const DroneGPSContext = createContext<DroneGPSContextType | undefined>(undefined);

export const DroneGPSProvider = ({ children }: { children: ReactNode }) => {
  const { droneState, updateScanDroneGPS, updateSprayDroneGPS } = useDroneGPS();

  return (
    <DroneGPSContext.Provider
      value={{
        droneState,
        updateScanDroneGPS,
        updateSprayDroneGPS,
      }}
    >
      {children}
    </DroneGPSContext.Provider>
  );
};

export const useDroneGPSContext = () => {
  const context = useContext(DroneGPSContext);
  if (!context) {
    throw new Error('useDroneGPSContext must be used within DroneGPSProvider');
  }
  return context;
};
