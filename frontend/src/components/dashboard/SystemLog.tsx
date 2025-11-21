import { Card, CardContent, CardHeader, CardTitle } from "@/components/ui/card";
import { ScrollArea } from "@/components/ui/scroll-area";
import { FileText, Info, CheckCircle, AlertCircle } from "lucide-react";

interface LogEntry {
  id: string;
  timestamp: string;
  type: "info" | "success" | "warning";
  message: string;
}

const logs: LogEntry[] = [
  {
    id: "1",
    timestamp: "14:32:15",
    type: "success",
    message: "Mission MISSION-2024-001 started successfully",
  },
  {
    id: "2",
    timestamp: "14:30:42",
    type: "info",
    message: "Scan Drone GPS lock acquired",
  },
  {
    id: "3",
    timestamp: "14:29:18",
    type: "info",
    message: "Spray Drone connected to ROS2",
  },
  {
    id: "4",
    timestamp: "14:28:05",
    type: "success",
    message: "Both drones pre-flight check passed",
  },
  {
    id: "5",
    timestamp: "14:27:33",
    type: "warning",
    message: "Weather condition: Light wind detected",
  },
  {
    id: "6",
    timestamp: "14:25:12",
    type: "info",
    message: "System initialization complete",
  },
];

const getIcon = (type: LogEntry["type"]) => {
  switch (type) {
    case "success":
      return <CheckCircle className="h-4 w-4 text-status-success" />;
    case "warning":
      return <AlertCircle className="h-4 w-4 text-status-warning" />;
    default:
      return <Info className="h-4 w-4 text-primary" />;
  }
};

export const SystemLog = () => {
  return (
    <Card className="h-full">
      <CardHeader className="border-b border-border pb-3">
        <CardTitle className="flex items-center gap-2">
          <FileText className="h-5 w-5 text-primary" />
          Recent Events / System Log
        </CardTitle>
      </CardHeader>
      <CardContent className="p-0">
        <ScrollArea className="h-[300px] p-4">
          <div className="space-y-3">
            {logs.map((log) => (
              <div
                key={log.id}
                className="flex gap-3 p-3 rounded-lg bg-secondary/30 hover:bg-secondary/50 transition-colors"
              >
                {getIcon(log.type)}
                <div className="flex-1 min-w-0">
                  <div className="flex items-start justify-between gap-2">
                    <p className="text-sm">{log.message}</p>
                    <span className="text-xs text-muted-foreground font-mono whitespace-nowrap">
                      {log.timestamp}
                    </span>
                  </div>
                </div>
              </div>
            ))}
          </div>
        </ScrollArea>
      </CardContent>
    </Card>
  );
};
