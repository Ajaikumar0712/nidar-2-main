import { Card, CardContent, CardHeader } from "@/components/ui/card";
import { Tabs, TabsContent, TabsList, TabsTrigger } from "@/components/ui/tabs";
import { Button } from "@/components/ui/button";
import { Play, Square, Video,Droplet } from "lucide-react";
import { useState } from "react";

type VideoFeedTabsProps = {
  // Optional feed URLs. If not provided the component will try to read
  // global/window variables `__SCAN_FEED_URL` and `__SPRAY_FEED_URL`.
  scanFeedUrl?: string;
  sprayFeedUrl?: string;
};

export const VideoFeedTabs = ({ scanFeedUrl, sprayFeedUrl }: VideoFeedTabsProps) => {
  const [isStreaming, setIsStreaming] = useState(false);
  const [activeTab, setActiveTab] = useState("scan");

  // Resolve feed urls: prefer props, then window globals, then empty string.
  const resolvedScanUrl =
    scanFeedUrl || (typeof window !== "undefined" ? (window as any).__SCAN_FEED_URL : undefined) || "";
  const resolvedSprayUrl =
    sprayFeedUrl || (typeof window !== "undefined" ? (window as any).__SPRAY_FEED_URL : undefined) || "";

  const startStream = () => setIsStreaming(true);
  const stopStream = () => setIsStreaming(false);

  return (
    <Card>
      <CardHeader className="pb-3">
        <div className="flex items-center gap-2">
          <Video className="h-5 w-5 text-primary" />
          <h3 className="font-semibold  ">Live Feed</h3>
        </div>
      </CardHeader>
      <CardContent>
        <Tabs defaultValue="scan" className="w-full" onValueChange={(v) => { setActiveTab(v); setIsStreaming(false); }}>
          <TabsList className="grid w-full grid-cols-2 mb-4">
            <TabsTrigger value="scan">Scan Drone</TabsTrigger>
            <TabsTrigger value="spray">Spray Drone</TabsTrigger>
          </TabsList>

          <TabsContent value="scan" className="space-y-4">
            <div className="aspect-video bg-secondary rounded-lg flex items-center justify-center border-2 border-drone-scan/30 overflow-hidden">
              {isStreaming && activeTab === "scan" && resolvedScanUrl ? (
                // Use img/video tag depending on feed
                <img src={resolvedScanUrl} alt="Scan Drone Feed" className="object-cover w-full h-full" />
              ) : (
                <div className="text-center space-y-2">
                  <Video className="h-12 w-12 mx-auto text-drone-scan" />
                  <p className="text-sm text-muted-foreground">
                    {isStreaming && activeTab === "scan" ? "Connecting to Scan Drone..." : "Scan Drone Feed - Inactive"}
                  </p>
                </div>
              )}
            </div>
          </TabsContent>

          <TabsContent value="spray" className="space-y-4">
            <div className="aspect-video bg-secondary rounded-lg flex items-center justify-center border-2 border-drone-spray/30 overflow-hidden">
              {isStreaming && activeTab === "spray" && resolvedSprayUrl ? (
                <img src={resolvedSprayUrl} alt="Spray Drone Feed" className="object-cover w-full h-full" />
              ) : (
                <div className="text-center space-y-2">
                  <Droplet className="h-12 w-12 mx-auto text-drone-spray" />
                  <p className="text-sm text-muted-foreground">
                    {isStreaming && activeTab === "spray" ? "Connecting to Spray Drone..." : "Spray Drone Feed - Inactive"}
                  </p>
                </div>
              )}
            </div>
          </TabsContent>

          <div className="flex gap-2 pt-3">
            <Button
              variant="default"
              className="flex-1"
              onClick={startStream}
              disabled={isStreaming || !(activeTab === "scan" ? resolvedScanUrl || true : resolvedSprayUrl || true)}
            >
              <Play className="h-4 w-4 mr-2" />
              Start Stream
            </Button>
            <Button
              variant="secondary"
              className="flex-1"
              onClick={stopStream}
              disabled={!isStreaming}
            >
              <Square className="h-4 w-4 mr-2" />
              Stop Stream
            </Button>
          </div>
        </Tabs>
      </CardContent>
    </Card>
  );
};
