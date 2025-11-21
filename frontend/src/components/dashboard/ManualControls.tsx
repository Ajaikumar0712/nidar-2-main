import { Card, CardContent, CardHeader, CardTitle } from "@/components/ui/card";
import { Home, AlertTriangle, Zap, TrendingUp } from "lucide-react";
import { useState } from "react";

export const ManualControls = () => {
  const [takeoffAltitude, setTakeoffAltitude] = useState("10");
  const [takeoffSpeed, setTakeoffSpeed] = useState("medium");

  return (
    <Card className="h-full flex flex-col">
      <CardHeader className="border-b border-border pb-1.5 pt-2 px-3 shrink-0">
        <CardTitle className="flex items-center gap-2 text-sm">
          <Zap className="h-4 w-4 text-primary" />
          Manual Controls
        </CardTitle>
      </CardHeader>
      <CardContent className="space-y-1.5 pt-2 px-3 pb-2 flex-1 overflow-hidden flex flex-col">
        {/* Takeoff Settings */}
        <div className="space-y-1 pb-1 border-b border-border">
          {/* Takeoff Altitude */}
          <div className="space-y-0.5">
            <label className="text-xs text-muted-foreground block">Takeoff Alt (m)</label>
            <select 
              value={takeoffAltitude} 
              onChange={(e) => setTakeoffAltitude(e.target.value)}
              className="w-full text-xs p-0.5 rounded bg-secondary/50 border border-secondary text-foreground"
            >
              <option value="5">5m</option>
              <option value="10">10m</option>
              <option value="15">15m</option>
              <option value="20">20m</option>
              <option value="30">30m</option>
            </select>
          </div>

          {/* Takeoff Speed */}
          <div className="space-y-0.5">
            <label className="text-xs text-muted-foreground block">Takeoff Speed</label>
            <div className="flex gap-1">
              {["slow", "medium", "fast"].map((speed) => (
                <button
                  key={speed}
                  onClick={() => setTakeoffSpeed(speed)}
                  className={`flex-1 text-xs py-0.5 px-1 rounded transition-colors ${
                    takeoffSpeed === speed
                      ? "bg-primary text-white"
                      : "bg-secondary/50 hover:bg-secondary text-foreground"
                  }`}
                >
                  {speed.charAt(0).toUpperCase() + speed.slice(1)}
                </button>
              ))}
            </div>
          </div>
        </div>

        {/* Buttons - Compact */}
        <div className="space-y-1">
          <button className="w-full p-1 rounded bg-primary/80 hover:bg-primary transition-colors flex items-center justify-center gap-1 text-xs text-white">
            <TrendingUp className="h-3.5 w-3.5" />
            <span>Manual Takeoff</span>
          </button>

          <button className="w-full p-1 rounded bg-muted hover:bg-muted/70 transition-colors flex items-center justify-center gap-1 text-xs">
            <Home className="h-3.5 w-3.5" />
            <span>Home</span>
          </button>

          <button className="w-full p-1 rounded bg-destructive hover:bg-destructive/90 transition-colors flex items-center justify-center gap-1 text-xs">
            <AlertTriangle className="h-3.5 w-3.5" />
            <span>E-Stop</span>
          </button>
        </div>
      </CardContent>
    </Card>
  );
};
