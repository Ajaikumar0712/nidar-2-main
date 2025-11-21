import { Card, CardContent, CardHeader, CardTitle } from "@/components/ui/card";
import { Button } from "@/components/ui/button";
import { Input } from "@/components/ui/input";
import { Label } from "@/components/ui/label";
import { Separator } from "@/components/ui/separator";
import { Settings, Link, Unlink, Clock, Save, Wifi, AlertCircle } from "lucide-react";
import { useState } from "react";
import { toast } from "sonner";


export const ROS2Settings = () => {
  const [host, setHost] = useState("localhost");
  const [port, setPort] = useState("9090");
  const [scanConnected, setScanConnected] = useState(false);
  const [sprayConnected, setSprayConnected] = useState(false);
  const [maxFlightTime, setMaxFlightTime] = useState("30");

  const handleConnect = (drone: "scan" | "spray") => {
    if (drone === "scan") {
      setScanConnected(!scanConnected);
      toast.success(`Scan Drone ${!scanConnected ? "connected" : "disconnected"}`);
    } else {
      setSprayConnected(!sprayConnected);
      toast.success(`Spray Drone ${!sprayConnected ? "connected" : "disconnected"}`);
    }
  };

  const handleSave = () => {
    toast.success(`Maximum flight time saved: ${maxFlightTime} minutes`);
  };

  const handleConnectionSave = () => {
    toast.success(`Connection settings saved: ${host}:${port}`);
  };

  return (
    <div className="space-y-4">
      {/* ROS2 Connection Settings Section */}
      <Card>
        <CardHeader className="pb-3">
          <CardTitle className="flex items-center gap-2 text-base">
            <Wifi className="h-5 w-5 text-primary" />
            Connection Settings
          </CardTitle>
        </CardHeader>
        <CardContent className="space-y-4">
          <div className="grid grid-cols-2 gap-4">
            <div className="space-y-2">
              <Label htmlFor="host" className="text-sm">Host</Label>
              <Input
                id="host"
                value={host}
                onChange={(e) => setHost(e.target.value)}
                placeholder="localhost"
                className="text-sm"
              />
            </div>
            <div className="space-y-2">
              <Label htmlFor="port" className="text-sm">Port</Label>
              <Input
                id="port"
                value={port}
                onChange={(e) => setPort(e.target.value)}
                placeholder="9090"
                className="text-sm"
              />
            </div>
          </div>
          <p className="text-xs text-muted-foreground">
            Configure the ROS2 server connection parameters
          </p>
          <Button className="w-full text-sm h-8" onClick={handleConnectionSave}>
            <Save className="h-4 w-4 mr-2" />
            Apply Settings
          </Button>
        </CardContent>
      </Card>

      {/* Drone Connections Section */}
      <Card>
        <CardHeader className="pb-3">
          <CardTitle className="flex items-center gap-2 text-base">
            <AlertCircle className="h-5 w-5 text-drone-scan" />
            Scan Drone
          </CardTitle>
        </CardHeader>
        <CardContent className="space-y-3">
          <div className="flex items-center justify-between p-2 rounded bg-secondary/30">
            <div>
              <p className="text-sm font-medium">Connection Status</p>
              <p className="text-xs text-muted-foreground">
                {scanConnected ? "Connected" : "Disconnected"}
              </p>
            </div>
            <div className={`h-3 w-3 rounded-full ${scanConnected ? "bg-drone-scan animate-pulse" : "bg-muted"}`} />
          </div>
          <Button
            variant={scanConnected ? "destructive" : "default"}
            className="w-full text-sm h-8"
            onClick={() => handleConnect("scan")}
          >
            {scanConnected ? (
              <>
                <Unlink className="h-4 w-4 mr-2" />
                Disconnect
              </>
            ) : (
              <>
                <Link className="h-4 w-4 mr-2" />
                Connect
              </>
            )}
          </Button>
        </CardContent>
      </Card>

      {/* Spray Drone Section */}
      <Card>
        <CardHeader className="pb-3">
          <CardTitle className="flex items-center gap-2 text-base">
            <AlertCircle className="h-5 w-5 text-drone-spray" />
            Spray Drone
          </CardTitle>
        </CardHeader>
        <CardContent className="space-y-3">
          <div className="flex items-center justify-between p-2 rounded bg-secondary/30">
            <div>
              <p className="text-sm font-medium">Connection Status</p>
              <p className="text-xs text-muted-foreground">
                {sprayConnected ? "Connected" : "Disconnected"}
              </p>
            </div>
            <div className={`h-3 w-3 rounded-full ${sprayConnected ? "bg-drone-spray animate-pulse" : "bg-muted"}`} />
          </div>
          <Button
            variant={sprayConnected ? "destructive" : "default"}
            className="w-full text-sm h-8"
            onClick={() => handleConnect("spray")}
          >
            {sprayConnected ? (
              <>
                <Unlink className="h-4 w-4 mr-2" />
                Disconnect
              </>
            ) : (
              <>
                <Link className="h-4 w-4 mr-2" />
                Connect
              </>
            )}
          </Button>
        </CardContent>
      </Card>

      {/* Flight Time Management Section */}
      <Card>
        <CardHeader className="pb-3">
          <CardTitle className="flex items-center gap-2 text-base">
            <Clock className="h-5 w-5 text-primary" />
            Flight Time Management
          </CardTitle>
        </CardHeader>
        <CardContent className="space-y-4">
          <div className="space-y-2">
            <Label htmlFor="flight-time" className="text-sm">Maximum Flight Time</Label>
            <div className="flex items-center gap-2">
              <Input
                id="flight-time"
                type="number"
                value={maxFlightTime}
                onChange={(e) => setMaxFlightTime(e.target.value)}
                min="1"
                max="120"
                className="text-sm"
              />
              <span className="text-sm text-muted-foreground whitespace-nowrap">minutes</span>
            </div>
            <p className="text-xs text-muted-foreground">
              Set the maximum allowed flight time per mission (1-120 min)
            </p>
          </div>

          <Button className="w-full text-sm h-8" onClick={handleSave}>
            <Save className="h-4 w-4 mr-2" />
            Save Configuration
          </Button>
        </CardContent>
      </Card>
    </div>
  );
};
