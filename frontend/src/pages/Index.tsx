import { ManualControls } from "@/components/dashboard/ManualControls";
import { DroneStatusCards } from "@/components/dashboard/DroneStatusCards";
import { VideoFeedTabs } from "@/components/dashboard/VideoFeedTabs";
import { DroneMap } from "@/components/dashboard/DroneMap";
import { MissionControl } from "@/components/dashboard/MissionControl";
import { MissionStats } from "@/components/dashboard/MissionStats";
import { AlertsPanel } from "@/components/dashboard/AlertsPanel";
import { FileUpload } from "@/components/dashboard/FileUpload";
import { ROS2Settings } from "@/components/dashboard/ROS2Settings";

import { SystemLog } from "@/components/dashboard/SystemLog";
import { Plane, Settings, Wifi } from "lucide-react";
import { useEffect, useState } from "react";
import { Button } from "@/components/ui/button";
import { Sheet, SheetContent, SheetHeader, SheetTitle } from "@/components/ui/sheet";

const Index = () => {
  const [showROS2Settings, setShowROS2Settings] = useState(false);
  const [isConnected] = useState(true);
  const [currentTime, setCurrentTime] = useState(new Date());
  const [kmlData, setKmlData] = useState<string | null>(null);

  useEffect(() => {
    const timer = setInterval(() => {
      setCurrentTime(new Date());
    }, 1000);

    return () => clearInterval(timer);
  }, []);

  const formatDate = (date: Date) => {
    return date.toLocaleDateString("en-US", {
      weekday: "short",
      year: "numeric",
      month: "short",
      day: "numeric",
    });
  };

  const formatTime = (date: Date) => {
    return date.toLocaleTimeString("en-US", {
      hour: "2-digit",
      minute: "2-digit",
      second: "2-digit",
    });
  };

  return (
    <div className="min-h-screen flex flex-col bg-background ">
      {/* Header */}
      <header className="border-b border-border bg-card shrink-0">
        <div className="px-4 py-1">
          <div className="flex items-center justify-between gap-2">
            <div className="flex items-center gap-3">
              <Plane className="h-5 w-5 text-primary" />
              <div>
                <h1 className="text-base font-bold">Dual Drone Control System</h1>
                <p className="text-xs text-muted-foreground">Scan & Spray Drone Monitoring Dashboard</p>
              </div>
              {/* System Status */}
              <div className="flex items-center gap-1.5 ml-3 pl-3 border-l border-border">
                <Wifi className="h-3 w-3 text-status-success" />
                <span className="text-xs font-medium text-status-success">Connected</span>
                <div className="h-1.5 w-1.5 rounded-full bg-status-success animate-pulse" />
              </div>
            </div>
            {/* Settings button top right */}
            <div className="flex items-center gap-2 ml-auto">
              <div className="flex items-center gap-2 text-xs">
                <span className="text-muted-foreground">{formatDate(currentTime)}</span>
                <span className="font-mono font-bold text-xs">{formatTime(currentTime)}</span>
              </div>
              <Button
                variant="ghost"
                size="icon"
                onClick={() => setShowROS2Settings(true)}
                className="h-8 w-8"
              >
                <Settings className="h-4 w-4" />
                <span className="sr-only">Settings</span>
              </Button>
            </div>
          </div>
        </div>
      </header>

      {/* Main Dashboard Grid */}
      <main className="flex-1 p-2">
        <div className="grid grid-cols-1 lg:grid-cols-12 gap-2 max-w-[2000px] mx-auto">
          {/* Left Column - Manual Controls */}
          <div className="lg:col-span-3 flex flex-col gap-2">
            
            <VideoFeedTabs />
            <DroneStatusCards />
             
            {/* <ManualControls /> */}
          </div>

          {/* Center Column - Status, Feed, Map, Mission */}
          <div className="lg:col-span-6 flex flex-col gap-2 flex-1">
           
            
            <DroneMap kmlData={kmlData} />
            
            
            
          </div>

          {/* Right Column - Settings, Upload, Flight Time, Logs */}
          <div className="lg:col-span-3 flex flex-col gap-2">
            <FileUpload kmlData={kmlData} setKmlData={setKmlData} />
            <MissionControl />
            <MissionStats />
            
            {/* <SystemLog /> */}
            <AlertsPanel />
          </div>
        </div>
      </main>

      {/* ROS2 Settings Overlay */}
      <Sheet open={showROS2Settings} onOpenChange={setShowROS2Settings}>
        <SheetContent side="right" className="w-[600px] max-w-[90vw] overflow-y-auto">
          <SheetHeader>
            <SheetTitle>ROS2 Settings</SheetTitle>
          </SheetHeader>
          <div className="mt-6">
            <ROS2Settings />
          </div>
        </SheetContent>
      </Sheet>
    </div>
  );
};

export default Index;
