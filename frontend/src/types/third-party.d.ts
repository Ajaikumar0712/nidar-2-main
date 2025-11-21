declare module 'roslib' {
  const RosLib: any;
  export = RosLib;
}

declare module 'togeojson' {
  export function kml(doc: Document): any;
  export function gpx(doc: Document): any;
  export default { kml, gpx };
}
