import React, { useState } from 'react';
// We'll use a direct WebSocket to the backend lawnmower WebSocket API instead
// of using rosbridge/roslib. The backend should be running at
// ws://localhost:8765/ws/lawnmower (see mission_manager/lawnmower_ws.py).

// This component provides a simple KML upload UI that connects to rosbridge
// and calls the GetLawnmowerPath service. It does NOT draw on the map itself
// but returns the waypoints via the `onWaypoints` callback prop.
type Props = {
  onWaypoints?: (waypoints: Array<[number, number]>) => void; // [lat, lon]
};

export default function KmlRosbridgeUploader({ onWaypoints }: Props) {
  const [status, setStatus] = useState<string>('idle');

  async function handleFile(e: React.ChangeEvent<HTMLInputElement>) {
    const file = e.target.files?.[0];
    if (!file) return;
    setStatus('parsing');
    const text = await file.text();
    const parser = new DOMParser();
    const kmlDoc = parser.parseFromString(text, 'application/xml');

    // load togeojson dynamically (optional import)
    let geojson: any = null;
    try {
      const tj = await import('togeojson');
      // @ts-ignore
      geojson = tj.kml(kmlDoc);
    } catch (err) {
      console.error('togeojson import failed', err);
      setStatus('error: missing togeojson');
      return;
    }

    // find first Polygon geometry
    const polygonFeature = geojson.features?.find((f: any) => f.geometry?.type === 'Polygon');
    if (!polygonFeature) {
      setStatus('no polygon found in KML');
      return;
    }

    const coords = polygonFeature.geometry.coordinates[0]; // [ [lon, lat, alt?], ... ]
    const polygon_x = coords.map((c: any) => c[0]);
    const polygon_y = coords.map((c: any) => c[1]);

    setStatus('connecting websocket');
    try {
      const wsProtocol = window.location.protocol === 'https:' ? 'wss:' : 'ws:';
      const wsHost = window.location.hostname || 'localhost';
      const wsPort = 8765;
      const wsUrl = `${wsProtocol}//${wsHost}:${wsPort}/ws/lawnmower`;
      console.debug('Connecting to lawnmower WS at', wsUrl);
      const ws = new WebSocket(wsUrl);
      ws.onopen = () => {
        setStatus('sending polygon');
        const msg = JSON.stringify({ polygon_x, polygon_y, safe_margin: 1.0, spacing: 5.0, angle: 0.0 });
        try {
          ws.send(msg);
        } catch (e) {
          console.error('ws send failed', e);
          setStatus('ws send failed');
          ws.close();
        }
      };
      ws.onmessage = (ev) => {
        try {
          const res = JSON.parse(ev.data);
          if (res.error) {
            setStatus('error: ' + res.error);
            ws.close();
            return;
          }
          const waypoint_x: number[] = res.waypoint_x || [];
          const waypoint_y: number[] = res.waypoint_y || [];
          const waypoints: Array<[number, number]> = waypoint_x.map((lon: number, i: number) => [waypoint_y[i], lon]);
          setStatus(`received ${waypoints.length} waypoints`);
          if (onWaypoints) onWaypoints(waypoints);
        } catch (err) {
          console.error('failed to parse websocket message', err);
          setStatus('invalid response');
        } finally {
          ws.close();
        }
      };
      ws.onerror = (ev) => {
        console.error('websocket error', ev);
        setStatus('websocket error');
      };
    } catch (err) {
      console.error('websocket connection failed', err);
      setStatus('websocket connect failed');
    }
  }

  return (
    <div className="kml-uploader">
      <label htmlFor="kml-input">Upload KML (polygon):</label>
      <input id="kml-input" type="file" accept=".kml" onChange={handleFile} />
      <div>Status: {status}</div>
    </div>
  );
}
