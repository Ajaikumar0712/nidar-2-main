import { Card, CardContent, CardHeader, CardTitle } from "@/components/ui/card";
import { Plane, Navigation2, Gauge, MapPin, Activity, Droplets, AlertCircle } from "lucide-react";
import { useDroneGPSContext } from "@/context/DroneGPSContext";

const StatusItem = ({ icon: Icon, label, value }: { icon: any, label: string, value: string }) => (
  <div className="flex items-center justify-between p-2 rounded bg-secondary/30">
    <div className="flex items-center gap-2 text-muted-foreground text-sm">
      <Icon className="h-4 w-4" />
      <span>{label}</span>
    </div>
    <span className="text-sm font-medium">{value}</span>
  </div>
);

export const DroneStatusCards = () => {
  const { droneState } = useDroneGPSContext();
  
  const scanDrone = droneState.scanDrone;
  const sprayDrone = droneState.sprayDrone;

  const formatLocation = (lat: number, lon: number) => {
    const latDir = lat >= 0 ? "N" : "S";
    const lonDir = lon >= 0 ? "E" : "W";
    return `${Math.abs(lat).toFixed(4)}°${latDir}, ${Math.abs(lon).toFixed(4)}°${lonDir}`;
  };

  return (
    <div className="grid grid-cols-1 md:grid-cols-1 gap-2">
      {/* Scan Drone */}
      {scanDrone && (
        <Card className="relative overflow-hidden">
          <div className="absolute top-0 left-0 right-0 h-1 bg-drone-scan" />
          <CardHeader className="pb-2">
            <CardTitle className="flex items-center justify-between">
              <div className="flex items-center gap-2 text-base">
                <Plane className="h-4 w-4 text-drone-scan" />
                <span className="text-sm">Scan Drone</span>
              </div>
              <div className="px-2 py-0.5 rounded-full text-xs font-bold bg-drone-scan/20 text-drone-scan">
                {Math.round(scanDrone.battery)}%
              </div>
            </CardTitle>
          </CardHeader>
          <CardContent className="space-y-1">
            <div className="space-y-0.5">
              <div className="flex items-center justify-between p-1 rounded bg-secondary/30">
                <div className="flex items-center gap-1 text-xs text-muted-foreground">
                  <Gauge className="h-3 w-3" />
                  <span>Alt:</span>
                </div>
                <span className="text-xs font-medium">{Math.round(scanDrone.altitude)}m</span>
              </div>
              <div className="flex items-center justify-between p-1 rounded bg-secondary/30">
                <div className="flex items-center gap-1 text-xs text-muted-foreground">
                  <Activity className="h-3 w-3" />
                  <span>Speed:</span>
                </div>
                <span className="text-xs font-medium">{Math.round(scanDrone.speed)} m/s</span>
              </div>
              <div className="flex items-center justify-between p-1 rounded bg-secondary/30">
                <div className="flex items-center gap-1 text-xs text-muted-foreground">
                  <Navigation2 className="h-3 w-3" />
                  <span>Heading:</span>
                </div>
                <span className="text-xs font-medium">{Math.round(scanDrone.heading)}°</span>
              </div>
              <div className="flex items-center justify-between p-1 rounded bg-secondary/30">
                <div className="flex items-center gap-1 text-xs text-muted-foreground">
                  <MapPin className="h-3 w-3" />
                  <span>Loc:</span>
                </div>
                <span className="text-xs font-medium truncate">{formatLocation(scanDrone.latitude, scanDrone.longitude)}</span>
              </div>

              {/* Telemetry Status */}
              <div className="space-y-1 p-2 rounded bg-secondary/30 mt-2">
                <div className="text-xs font-semibold text-muted-foreground">Telemetry</div>
                <div className="flex items-center justify-between">
                  <span className="text-xs text-muted-foreground">Signal:</span>
                  <span className="inline-flex items-center gap-1 px-2 py-0.5 rounded text-xs bg-green-500/20 text-green-600 font-semibold">
                    <span className="inline-block w-1.5 h-1.5 rounded-full bg-green-600" />
                    Connected
                  </span>
                </div>
                <div className="flex items-center justify-between">
                  <span className="text-xs text-muted-foreground">Timestamp:</span>
                  <span className="text-xs font-medium">{scanDrone.timestamp ? new Date(scanDrone.timestamp).toLocaleTimeString() : 'N/A'}</span>
                </div>
              </div>
            </div>
          </CardContent>
        </Card>
      )}

      {/* Spray Drone */}
      {sprayDrone && (
        <Card className="relative overflow-hidden">
          <div className="absolute top-0 left-0 right-0 h-1 bg-drone-spray" />
          <CardHeader className="pb-2">
            <CardTitle className="flex items-center justify-between">
              <div className="flex items-center gap-2 text-base">
                <Plane className="h-4 w-4 text-drone-spray" />
                <span className="text-sm">Spray Drone</span>
              </div>
              <div className="px-2 py-0.5 rounded-full text-xs font-bold bg-drone-spray/20 text-drone-spray">
                {Math.round(sprayDrone.battery)}%
              </div>
            </CardTitle>
          </CardHeader>
          <CardContent className="space-y-1">
            <div className="space-y-0.5">
              <div className="flex items-center justify-between p-1 rounded bg-secondary/30">
                <div className="flex items-center gap-1 text-xs text-muted-foreground">
                  <Gauge className="h-3 w-3" />
                  <span>Alt:</span>
                </div>
                <span className="text-xs font-medium">{Math.round(sprayDrone.altitude)}m</span>
              </div>
              <div className="flex items-center justify-between p-1 rounded bg-secondary/30">
                <div className="flex items-center gap-1 text-xs text-muted-foreground">
                  <Activity className="h-3 w-3" />
                  <span>Speed:</span>
                </div>
                <span className="text-xs font-medium">{Math.round(sprayDrone.speed)} m/s</span>
              </div>
              <div className="flex items-center justify-between p-1 rounded bg-secondary/30">
                <div className="flex items-center gap-1 text-xs text-muted-foreground">
                  <Navigation2 className="h-3 w-3" />
                  <span>Heading:</span>
                </div>
                <span className="text-xs font-medium">{Math.round(sprayDrone.heading)}°</span>
              </div>
              <div className="flex items-center justify-between p-1 rounded bg-secondary/30">
                <div className="flex items-center gap-1 text-xs text-muted-foreground">
                  <MapPin className="h-3 w-3" />
                  <span>Loc:</span>
                </div>
                <span className="text-xs font-medium truncate">{formatLocation(sprayDrone.latitude, sprayDrone.longitude)}</span>
              </div>
              
              {/* Tank Level with Progress Bar */}
              <div className="space-y-1 p-2 rounded bg-secondary/30">
                <div className="flex items-center justify-between">
                  <div className="flex items-center gap-1 text-xs text-muted-foreground">
                    <Droplets className="h-3 w-3" />
                    <span>Tank:</span>
                  </div>
                  <div className="flex items-center gap-2">
                    <div className="text-right">
                      <div className="text-xs font-medium">{(sprayDrone.tankLevel ?? 0).toFixed(1)}L - {Math.round(((sprayDrone.tankLevel ?? 0) / (sprayDrone.maxTankCapacity ?? 10)) * 100)}%</div>
                      <div className="text-xs text-muted-foreground">Used: {((sprayDrone.maxTankCapacity ?? 10) - (sprayDrone.tankLevel ?? 0)).toFixed(1)}L</div>
                    </div>
                    {sprayDrone.isSpraying && (
                      <span className="inline-flex items-center gap-1 px-1.5 py-0.5 rounded text-xs bg-green-500/20 text-green-600 font-semibold">
                        <span className="inline-block w-1.5 h-1.5 rounded-full bg-green-600 animate-pulse" />
                        Spraying
                      </span>
                    )}
                  </div>
                </div>
                
                {/* Tank Level Progress Bar */}
                <div className="w-full h-2 rounded-full bg-secondary overflow-hidden">
                  <div
                    className={`h-full transition-all duration-300 ${
                      (sprayDrone.tankLevel ?? 0) > (sprayDrone.maxTankCapacity ?? 10) * 0.5
                        ? 'bg-green-500'
                        : (sprayDrone.tankLevel ?? 0) > (sprayDrone.maxTankCapacity ?? 10) * 0.2
                        ? 'bg-yellow-500'
                        : 'bg-red-500'
                    }`}
                    style={{ width: `${Math.min(((sprayDrone.tankLevel ?? 0) / (sprayDrone.maxTankCapacity ?? 10)) * 100, 100)}%` }}
                  />
                </div>
                
                {(sprayDrone.tankLevel ?? 0) <= (sprayDrone.maxTankCapacity ?? 10) * 0.2 && (
                  <div className="flex items-center gap-1 text-xs text-red-600 font-semibold">
                    <AlertCircle className="h-3 w-3" />
                    Low fuel - refill needed
                  </div>
                )}
              </div>
            </div>
          </CardContent>
        </Card>
      )}
    </div>
  );
};
