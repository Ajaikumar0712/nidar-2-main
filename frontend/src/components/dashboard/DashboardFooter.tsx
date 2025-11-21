import { useState } from "react";
import { Wifi, WifiOff } from "lucide-react";

export const DashboardFooter = () => {
  const [isConnected] = useState(true);

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
    <footer className="border-t border-border bg-card px-4 py-2">
      <div className="flex items-center justify-between text-sm">
        <div className="flex items-center gap-2">
          <span className="text-xs text-muted-foreground">System Status:</span>
          <div className="flex items-center gap-1.5">
            {isConnected ? (
              <>
                <Wifi className="h-3.5 w-3.5 text-status-success" />
                <span className="text-xs font-medium text-status-success">Connected</span>
                <div className="h-1.5 w-1.5 rounded-full bg-status-success animate-pulse" />
              </>
            ) : (
              <>
                <WifiOff className="h-3.5 w-3.5 text-destructive" />
                <span className="text-xs font-medium text-destructive">Disconnected</span>
                <div className="h-1.5 w-1.5 rounded-full bg-destructive" />
              </>
            )}
          </div>
        </div>
      </div>
    </footer>
  );
};
