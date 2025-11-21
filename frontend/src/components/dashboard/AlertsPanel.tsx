import { Card, CardContent, CardHeader, CardTitle } from "@/components/ui/card";
import { Button } from "@/components/ui/button";
import { AlertTriangle, CheckCircle2, WifiOff, Battery, Navigation } from "lucide-react";
import { useState } from "react";
import { toast } from "sonner";

interface Alert {
  id: string;
  type: "warning" | "error" | "success";
  icon: any;
  message: string;
  active: boolean;
}

const initialAlerts: Alert[] = [
  {
    id: "1",
    type: "warning",
    icon: Battery,
    message: "Low Battery - Scan Drone",
    active: false,
  },
  {
    id: "2",
    type: "error",
    icon: Navigation,
    message: "Obstacle Detected - Zone B-3",
    active: false,
  },
  {
    id: "3",
    type: "warning",
    icon: WifiOff,
    message: "Signal Lost - Spray Drone",
    active: false,
  },
];

export const AlertsPanel = () => {
  const [alerts, setAlerts] = useState<Alert[]>(initialAlerts);

  const handleResetAll = () => {
    setAlerts([]);
    toast.success("All alerts cleared");
  };

  return (
    <Card>
      <CardHeader className="border-b border-border pb-2">
        <div className="flex items-center justify-between">
          <CardTitle className="flex items-center gap-2">
            <AlertTriangle className="h-4 w-4 text-status-warning" />
            <span className="text-sm">Alerts</span>
          </CardTitle>
          <Button variant="outline" size="sm" className="text-xs h-7 px-2" onClick={handleResetAll}>
            Reset All
          </Button>
        </div>
      </CardHeader>
      <CardContent className="pt-2 flex flex-col overflow-hidden">
        <div className="flex-1 overflow-y-auto space-y-1 pr-2">
          {alerts.map((alert) => {
            const Icon = alert.icon;
            const isActive = alert.active;
            
            return (
              <div
                key={alert.id}
                className={`flex items-center gap-2 p-1.5 rounded border transition-all ${
                  isActive
                    ? "bg-destructive/10 border-destructive animate-pulse-glow"
                    : "bg-secondary/30 border-border"
                }`}
              >
                {isActive ? (
                  <Icon className="h-4 w-4 text-destructive animate-pulse flex-shrink-0" />
                ) : (
                  <CheckCircle2 className="h-4 w-4 text-status-success flex-shrink-0" />
                )}
                <span className={`text-xs flex-1 ${isActive ? "text-foreground font-medium" : "text-muted-foreground"}`}>
                  {alert.message}
                </span>
                <div className={`h-1.5 w-1.5 rounded-full flex-shrink-0 ${isActive ? "bg-destructive" : "bg-status-success"}`} />
              </div>
            );
          })}
        </div>
        
        <div className="pt-1 mt-1 border-t border-border">
          <div className="flex items-center justify-center gap-1 text-xs text-status-success">
            <CheckCircle2 className="h-3 w-3" />
            <span className="font-medium">Systems Operational</span>
          </div>
        </div>
      </CardContent>
    </Card>
  );
};
