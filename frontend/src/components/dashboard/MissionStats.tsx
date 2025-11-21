import { Card, CardContent } from "@/components/ui/card";
import { Leaf, Droplets } from "lucide-react";

export const MissionStats = () => {
  const leavesDetected = 156;
  const sprayedCount = 89;

  return (
    <div className="grid grid-cols-2 gap-2">
      {/* Leaves Patches Detected */}
      <Card>
        <CardContent className="p-3">
          <div className="flex items-center justify-between">
            <div className="space-y-1">
              <p className="text-xs text-muted-foreground">Leaves patches Detected</p>
              <p className="text-2xl font-bold text-primary">{leavesDetected}</p>
            </div>
            <div className="p-2 rounded-lg bg-primary/10">
              <Leaf className="h-6 w-6 text-primary" />
            </div>
          </div>
        </CardContent>
      </Card>

      {/* Sprayed Count */}
      <Card>
        <CardContent className="p-3">
          <div className="flex items-center justify-between">
            <div className="space-y-1">
              <p className="text-xs text-muted-foreground">Sprayed Count</p>
              <p className="text-2xl font-bold text-status-success">{sprayedCount}</p>
            </div>
            <div className="p-2 rounded-lg bg-status-success/10">
              <Droplets className="h-6 w-6 text-status-success" />
            </div>
          </div>
        </CardContent>
      </Card>
    </div>
  );
};
