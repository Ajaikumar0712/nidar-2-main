import { Card, CardContent, CardHeader, CardTitle } from "@/components/ui/card";
import { Button } from "@/components/ui/button";
import { Progress } from "@/components/ui/progress";
import { Target, Play, Pause, XCircle, Clock, Zap } from "lucide-react";
import { useState } from "react";

export const MissionControl = () => {
  const [missionProgress, setMissionProgress] = useState(67);
  const [elapsedTime, setElapsedTime] = useState("00:14:32");
  const [missionId] = useState("MISSION-2024-001");

  return (
    <Card>
      <CardHeader className="border-b border-border pb-2">
        <CardTitle className="flex items-center gap-2">
          <Target className="h-4 w-4 text-primary" />
          <span className="text-sm">Mission Control</span>
        </CardTitle>
      </CardHeader>
      <CardContent className="space-y-2 pt-3">
        {/* Mission Info */}
        <div className="grid grid-cols-2 gap-2">
          <div className="space-y-0.5">
            <p className="text-xs text-muted-foreground">Mission ID</p>
            <p className="font-mono font-bold text-primary text-xs">{missionId}</p>
          </div>
          <div className="space-y-0.5">
            <p className="text-xs text-muted-foreground">Elapsed Time</p>
            <div className="flex items-center gap-1">
              <Clock className="h-3 w-3 text-muted-foreground" />
              <p className="font-mono font-bold text-xs">{elapsedTime}</p>
            </div>
          </div>
        </div>

        {/* Progress Bar */}
        <div className="space-y-1">
          <div className="flex items-center justify-between text-xs">
            <span className="text-muted-foreground">Mission Progress</span>
            <span className="font-bold text-primary text-xs">{missionProgress}%</span>
          </div>
          <Progress value={missionProgress} className="h-2" />
        </div>

        {/* Control Buttons */}
        <div className="grid grid-cols-2 gap-2 pt-1">
          <Button 
            variant="default" 
            className="bg-status-success hover:bg-status-success/90 text-xs h-8"
          >
            <Play className="h-3 w-3 mr-1" />
            Start
          </Button>
          
          <Button 
            variant="destructive"
            className="glow-alert text-xs h-8"
          >
            <XCircle className="h-3 w-3 mr-1" />
            Abort
          </Button>
        </div>

        {/* Mission Summary */}
        <div className="pt-2 mt-2 border-t border-border">
          <h4 className="text-xs font-semibold text-muted-foreground mb-2">Summary</h4>
          <div className="grid grid-cols-2 gap-2">
            <div className="space-y-0.5">
              <div className="flex items-center gap-1">
                <div className="h-2 w-2 rounded-full bg-status-warning" />
                <span className="text-xs text-muted-foreground">Active</span>
              </div>
              <p className="text-sm font-bold">2</p>
            </div>
            <div className="space-y-0.5">
              <div className="flex items-center gap-1">
                <div className="h-2 w-2 rounded-full bg-status-success" />
                <span className="text-xs text-muted-foreground">Battery</span>
              </div>
              <p className="text-sm font-bold">77%</p>
            </div>
            <div className="space-y-0.5">
              <div className="flex items-center gap-1">
                <div className="h-2 w-2 rounded-full bg-primary" />
                <span className="text-xs text-muted-foreground">Distance</span>
              </div>
              <p className="text-sm font-bold">16 km</p>
            </div>
            <div className="space-y-0.5">
              <div className="flex items-center gap-1">
                <div className="h-2 w-2 rounded-full bg-primary" />
                <span className="text-xs text-muted-foreground">ETA</span>
              </div>
              <p className="text-sm font-bold">9 min</p>
            </div>
          </div>
        </div>
      </CardContent>
    </Card>
  );
};
