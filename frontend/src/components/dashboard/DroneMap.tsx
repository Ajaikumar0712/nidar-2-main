import { Card, CardContent, CardHeader, CardTitle } from "@/components/ui/card";
import { Map as MapIcon } from "lucide-react";
import L from "leaflet";
import "leaflet/dist/leaflet.css";
import { useEffect, useRef } from "react";
import { toast } from "sonner";
import { useDroneGPSContext } from "@/context/DroneGPSContext";

interface DroneMapProps {
  kmlData: string | null;
}

// Custom icons for drones
const scanDroneIcon = new L.Icon({
  iconUrl:
    "data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMzAiIGhlaWdodD0iMzAiIHZpZXdCb3g9IjAgMCAzMCAzMCIgZmlsbD0ibm9uZSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48Y2lyY2xlIGN4PSIxNSIgY3k9IjE1IiByPSIxMiIgZmlsbD0iIzNiODJmNiIgc3Ryb2tlPSIjZmZmZmZmIiBzdHJva2Utd2lkdGg9IjIiLz48L3N2Zz4=",
  iconSize: [30, 30],
  iconAnchor: [15, 15],
  popupAnchor: [0, -15],
});

const sprayDroneIcon = new L.Icon({
  iconUrl:
    "data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMzAiIGhlaWdodD0iMzAiIHZpZXdCb3g9IjAgMCAzMCAzMCIgZmlsbD0ibm9uZSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48Y2lyY2xlIGN4PSIxNSIgY3k9IjE1IiByPSIxMiIgZmlsbD0iIzIyYzU1ZSIgc3Ryb2tlPSIjZmZmZmZmIiBzdHJva2Utd2lkdGg9IjIiLz48L3N2Zz4=",
  iconSize: [30, 30],
  iconAnchor: [15, 15],
  popupAnchor: [0, -15],
});

// KML waypoint icon
const waypointIcon = new L.Icon({
  iconUrl:
    "data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMjQiIGhlaWdodD0iMjQiIHZpZXdCb3g9IjAgMCAyNCAyNCIgZmlsbD0ibm9uZSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48cmVjdCB4PSI0IiB5PSI0IiB3aWR0aD0iMTYiIGhlaWdodD0iMTYiIGZpbGw9IiNmNTk2MzAiIHN0cm9rZT0iI2ZmZmZmZiIgc3Ryb2tlLXdpZHRoPSIyIi8+PC9zdmc+",
  iconSize: [24, 24],
  iconAnchor: [12, 12],
  popupAnchor: [0, -12],
});

// Simulated data - India coordinates
let scanDronePos: [number, number] = [11.9570, 79.5521];
let sprayDronePos: [number, number] = [11.9565, 79.5525];

let scanDronePath: [number, number][] = [
  [11.9568, 79.5520],
  [11.9570, 79.5521],
  [11.9570, 79.5522],
];

let sprayDronePath: [number, number][] = [
  [11.9562, 79.5523],
  [11.9565, 79.5524],
  [11.9565, 79.5525],
];

export const DroneMap = ({ kmlData }: DroneMapProps) => {
  const mapDivRef = useRef<HTMLDivElement | null>(null);
  const mapRef = useRef<L.Map | null>(null);
  const kmlLayerRef = useRef<L.LayerGroup | null>(null);
  const droneMarkersRef = useRef<{ scan: L.Marker | null; spray: L.Marker | null }>({
    scan: null,
    spray: null,
  });
  const { droneState } = useDroneGPSContext();

  // Update drone positions when GPS data changes
  useEffect(() => {
    if (droneState.scanDrone && droneMarkersRef.current.scan && mapRef.current) {
      const { latitude, longitude } = droneState.scanDrone;
      droneMarkersRef.current.scan.setLatLng([latitude, longitude]);
      scanDronePos = [latitude, longitude];
    }

    if (droneState.sprayDrone && droneMarkersRef.current.spray && mapRef.current) {
      const { latitude, longitude } = droneState.sprayDrone;
      droneMarkersRef.current.spray.setLatLng([latitude, longitude]);
      sprayDronePos = [latitude, longitude];
    }
  }, [droneState]);

  const parseKML = (kmlString: string) => {
    const parser = new DOMParser();
    const kmlDoc = parser.parseFromString(kmlString, "text/xml");

    if (kmlDoc.getElementsByTagName("parsererror").length > 0) {
      toast.error("Invalid KML file");
      console.error("KML Parse error");
      return;
    }

    const placemarks = kmlDoc.getElementsByTagName("Placemark");
    let totalElements = 0;
    let allBounds: [number, number][] = [];

    console.log("Found placemarks:", placemarks.length);

    Array.from(placemarks).forEach((placemark, index) => {
      const pointElement = placemark.getElementsByTagName("Point")[0];
      const lineElement = placemark.getElementsByTagName("LineString")[0];
      const polygonElement = placemark.getElementsByTagName("Polygon")[0];
      const nameElement = placemark.getElementsByTagName("name")[0];
      const name = nameElement?.textContent || `Waypoint ${index + 1}`;

      console.log(`Placemark ${index}:`, { hasPoint: !!pointElement, hasLine: !!lineElement, hasPolygon: !!polygonElement, name });

      if (pointElement) {
        const coordElement = pointElement.getElementsByTagName("coordinates")[0];
        if (coordElement && coordElement.textContent) {
          const coordText = coordElement.textContent.trim();
          console.log(`Point coordinates raw:`, coordText);
          
          const parts = coordText.split(",").map(p => parseFloat(p.trim()));
          const lon = parts[0];
          const lat = parts[1];
          
          console.log(`Parsed - Lon: ${lon}, Lat: ${lat}`);
          
          if (!isNaN(lat) && !isNaN(lon)) {
            allBounds.push([lat, lon]);
            totalElements++;
            if (mapRef.current && kmlLayerRef.current) {
              L.marker([lat, lon], { icon: waypointIcon })
                .addTo(kmlLayerRef.current)
                .bindPopup(`<strong>${name}</strong><br/>Lat: ${lat.toFixed(4)}<br/>Lon: ${lon.toFixed(4)}`);
            }
          }
        }
      }

      if (lineElement) {
        const coordElement = lineElement.getElementsByTagName("coordinates")[0];
        if (coordElement && coordElement.textContent) {
          const coordText = coordElement.textContent.trim();
          console.log("Line coordinates raw:", coordText);
          
          const coords = coordText
            .split(/\s+/)
            .filter(c => c.length > 0)
            .map((coord) => {
              const parts = coord.split(",").map(p => parseFloat(p.trim()));
              const lon = parts[0];
              const lat = parts[1];
              console.log(`Line coord - Lon: ${lon}, Lat: ${lat}`);
              return [lat, lon] as [number, number];
            })
            .filter(c => !isNaN(c[0]) && !isNaN(c[1]));

          console.log("Parsed line coords count:", coords.length);

          if (coords.length > 0) {
            allBounds.push(...coords);
            totalElements++;
            if (mapRef.current && kmlLayerRef.current) {
              L.polyline(coords, {
                color: "#f59630",
                weight: 2,
                opacity: 0.8,
              }).addTo(kmlLayerRef.current);
            }
          }
        }
      }

      if (polygonElement) {
        const outerBoundary = polygonElement.getElementsByTagName("outerBoundaryIs")[0];
        if (outerBoundary) {
          const linearRing = outerBoundary.getElementsByTagName("LinearRing")[0];
          if (linearRing) {
            const coordElement = linearRing.getElementsByTagName("coordinates")[0];
            if (coordElement && coordElement.textContent) {
              const coordText = coordElement.textContent.trim();
              console.log("Polygon coordinates raw:", coordText);
              
              const coords = coordText
                .split(/\s+/)
                .filter(c => c.length > 0)
                .map((coord) => {
                  const parts = coord.split(",").map(p => parseFloat(p.trim()));
                  const lon = parts[0];
                  const lat = parts[1];
                  console.log(`Polygon coord - Lon: ${lon}, Lat: ${lat}`);
                  return [lat, lon] as [number, number];
                })
                .filter(c => !isNaN(c[0]) && !isNaN(c[1]));

              console.log("Parsed polygon coords count:", coords.length);

              if (coords.length > 0) {
                allBounds.push(...coords);
                totalElements++;
                if (mapRef.current && kmlLayerRef.current) {
                  L.polygon(coords, {
                    color: "#f59630",
                    weight: 2,
                    opacity: 0.8,
                    fillOpacity: 0.2,
                  }).addTo(kmlLayerRef.current);
                  // Send the polygon to the backend WebSocket to request a
                  // lawnmower path. The backend expects polygon_x = [lon...]
                  // and polygon_y = [lat...]. We only send the first polygon
                  // occurrence (if there are multiple placemarks you can
                  // customize as needed).
                  try {
                    const polygon_x = coords.map(c => c[1]); // lon
                    const polygon_y = coords.map(c => c[0]); // lat
                    // Build WS URL dynamically so it works with http/https and remote hosts
                    const wsProtocol = window.location.protocol === 'https:' ? 'wss:' : 'ws:';
                    const wsHost = window.location.hostname || 'localhost';
                    const wsPort = 8765; // change if your server uses a different port
                    const wsUrl = `${wsProtocol}//${wsHost}:${wsPort}/ws/lawnmower`;
                    console.debug('Connecting to lawnmower WS at', wsUrl);
                    const ws = new WebSocket(wsUrl);
                    ws.onopen = () => {
                      console.debug('WS open, sending polygon', { polygon_x, polygon_y });
                      try {
                        ws.send(JSON.stringify({ polygon_x, polygon_y, safe_margin: 1.0, spacing: 5.0 }));
                      } catch (e) {
                        console.error('Failed to send polygon over WS', e);
                        toast.error('Failed to send polygon to lawnmower server');
                        try { ws.close(); } catch (_) {}
                      }
                    };
                    ws.onmessage = (ev) => {
                      try {
                        const res = JSON.parse(ev.data);
                        if (res.error) {
                          console.warn('lawnmower ws error', res.error);
                          toast.error('Lawnmower service error: ' + res.error);
                        } else {
                          const wx = res.waypoint_x || [];
                          const wy = res.waypoint_y || [];
                          const waypoints = wx.map((lon: number, i: number) => [wy[i], lon] as [number, number]);
                          if (mapRef.current && kmlLayerRef.current && waypoints.length > 0) {
                            L.polyline(waypoints, { color: '#7c3aed', weight: 3, opacity: 0.9 }).addTo(kmlLayerRef.current);
                            toast.success(`Lawnmower path received (${waypoints.length} points)`);
                          }
                        }
                      } catch (e) {
                        console.error('Failed to parse lawnmower ws reply', e);
                        toast.error('Invalid response from lawnmower server');
                      } finally {
                        try { ws.close(); } catch (_) {}
                      }
                    };
                    ws.onerror = (ev) => {
                      console.error('lawnmower websocket error', ev);
                      toast.error('Cannot connect to lawnmower server (check uvicorn is running and reachable)');
                    };
                  } catch (err) {
                    console.error('Error sending polygon to lawnmower WS', err);
                  }
                }
              }
            }
          }
        }
      }
    });

    console.log("Total elements found:", totalElements);
    console.log("All bounds points:", allBounds.length);

    if (totalElements > 0) {
      toast.success(`KML loaded with ${totalElements} element(s)`);

      // Zoom to bounds after a short delay to ensure rendering
      if (allBounds.length > 0 && mapRef.current) {
        setTimeout(() => {
          const bounds = L.latLngBounds(allBounds);
          console.log("Zooming to bounds:", bounds);
          mapRef.current?.fitBounds(bounds, { padding: [50, 50] });
        }, 100);
      }
    } else {
      toast.error("No waypoints or areas found in KML file");
    }
  };

  const handleKMLUpload = (event: React.ChangeEvent<HTMLInputElement>) => {
    const file = event.target.files?.[0];
    if (!file) return;

    if (!file.name.toLowerCase().endsWith(".kml")) {
      toast.error("Please upload a KML file");
      return;
    }

    const reader = new FileReader();
    reader.onload = (e) => {
      const kmlContent = e.target?.result as string;
      parseKML(kmlContent);
    };
    reader.readAsText(file);
  };

  useEffect(() => {
    if (mapRef.current && kmlLayerRef.current) {
      if (kmlData) {
        // Clear previous KML and parse new KML
        kmlLayerRef.current.clearLayers();
        parseKML(kmlData);
      } else {
        // Clear KML when kmlData is null
        kmlLayerRef.current.clearLayers();
      }
    }
  }, [kmlData]);

  useEffect(() => {
    if (!mapDivRef.current) return;

    // Initialize map
    const map = L.map(mapDivRef.current, {
      center: [11.9567, 79.5523],
      zoom: 18,
      zoomControl: true,
      scrollWheelZoom: true,
    });
    mapRef.current = map;

    // Create KML layer group
    kmlLayerRef.current = L.layerGroup().addTo(map);

    // Satellite tile layer
    L.tileLayer("https://server.arcgisonline.com/ArcGIS/rest/services/World_Imagery/MapServer/tile/{z}/{y}/{x}", {
      attribution: "Tiles &copy; Esri &mdash; Source: Esri, i-cubed, USDA, USGS, AEX, GeoEye, Getmapping, Aerogrid, IGN, IGP, UPR-EGP, and the GIS User Community",
      maxZoom: 18,
    }).addTo(map);

    // Paths
    L.polyline(scanDronePath, {
      color: "#3b82f6",
      weight: 3,
      opacity: 0.7,
      dashArray: "10, 10",
    }).addTo(map);

    L.polyline(sprayDronePath, {
      color: "#22c55e",
      weight: 3,
      opacity: 0.7,
      dashArray: "10, 10",
    }).addTo(map);

    // Markers
    droneMarkersRef.current.scan = L.marker(scanDronePos, { icon: scanDroneIcon })
      .addTo(map)
      .bindPopup(
        `<div style="font-size:12px"><strong>Scan Drone</strong><br/>Position: ${scanDronePos[0].toFixed(
          4
        )}°N, ${Math.abs(scanDronePos[1]).toFixed(4)}°E<br/>Status: Active - Scanning</div>`
      );

    droneMarkersRef.current.spray = L.marker(sprayDronePos, { icon: sprayDroneIcon })
      .addTo(map)
      .bindPopup(
        `<div style="font-size:12px"><strong>Spray Drone</strong><br/>Position: ${sprayDronePos[0].toFixed(
          4
        )}°N, ${Math.abs(sprayDronePos[1]).toFixed(4)}°E<br/>Status: Active - Spraying</div>`
      );

    // Legend control
    const legend = new L.Control({ position: "bottomright" });
    (legend as any).onAdd = (_map: L.Map) => {
      const div = L.DomUtil.create("div", "rounded-md shadow p-2 text-xs");
      div.style.background = "hsl(" + getComputedStyle(document.documentElement).getPropertyValue("--card") + ")";
      div.style.color = "hsl(" + getComputedStyle(document.documentElement).getPropertyValue("--foreground") + ")";
      div.style.border = "1px solid hsl(" + getComputedStyle(document.documentElement).getPropertyValue("--border") + ")";
      div.innerHTML = `
        <div style="display:flex;align-items:center;gap:6px;margin-bottom:4px;">
          <span style="display:inline-block;width:10px;height:10px;border-radius:999px;background:#3b82f6;"></span>
          <span>Blue = Scan Drone</span>
        </div>
        <div style="display:flex;align-items:center;gap:6px;margin-bottom:4px;">
          <span style="display:inline-block;width:10px;height:10px;border-radius:999px;background:#22c55e;"></span>
          <span>Green = Spray Drone</span>
        </div>
        <div style="display:flex;align-items:center;gap:6px;">
          <span style="display:inline-block;width:10px;height:10px;background:#f59630;"></span>
          <span>Orange = KML Area</span>
        </div>
      `;
      return div as HTMLElement;
    };
    legend.addTo(map);

    return () => {
      legend.remove();
      map.remove();
    };
  }, []);

  return (
    <Card className="flex flex-col flex-1">
      <CardHeader className="border-b border-border pb-3 shrink-0">
        <CardTitle className="flex items-center justify-between">
          <div className="flex items-center gap-2">
            <MapIcon className="h-5 w-5 text-primary" />
            <span className="text-lg">Drone Position Map</span>
          </div>
          <div className="flex items-center gap-4 text-sm">
            <div className="flex items-center gap-2">
              <div className="h-3 w-3 rounded-full bg-drone-scan" />
              <span className="text-muted-foreground">Scan Drone</span>
            </div>
            <div className="flex items-center gap-2">
              <div className="h-3 w-3 rounded-full bg-drone-spray" />
              <span className="text-muted-foreground">Spray Drone</span>
            </div>
          </div>
        </CardTitle>
      </CardHeader>
      <CardContent className="p-0 flex-1 overflow-hidden">
        <div className="h-full w-full">
          <div ref={mapDivRef} className="h-full w-full rounded-lg" />
        </div>
      </CardContent>
    </Card>
  );
};
