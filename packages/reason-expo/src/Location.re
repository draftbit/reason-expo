[@bs.deriving abstract]
type eventSubscription;

[@bs.send] external remove: (eventSubscription, unit) => unit = "remove";

[@bs.module "expo"] [@bs.scope "Location"]
external hasServicesEnabledAsync: unit => Js.Promise.t(bool) = "";

[@bs.module "expo"] [@bs.scope "Location"]
external requestPermissionsAsync: unit => Js.Promise.t(unit) = "";

module Accuracy = {
  type t = int;
  [@bs.module "expo"] [@bs.scope ("Location", "Accuracy")]
  external lowest: t = "Lowest";
  [@bs.module "expo"] [@bs.scope ("Location", "Accuracy")]
  external low: t = "Low";
  [@bs.module "expo"] [@bs.scope ("Location", "Accuracy")]
  external balanced: t = "Balanced";
  [@bs.module "expo"] [@bs.scope ("Location", "Accuracy")]
  external high: t = "High";
  [@bs.module "expo"] [@bs.scope ("Location", "Accuracy")]
  external highest: t = "Highest";
  [@bs.module "expo"] [@bs.scope ("Location", "Accuracy")]
  external bestForNavigation: t = "BestForNavigation";
};

module GeofencingEventType = {
  type t = int;
  [@bs.module "expo"] [@bs.scope ("Location", "GeofencingEventType")]
  external enter: t = "Enter";
  [@bs.module "expo"] [@bs.scope ("Location", "GeofencingEventType")]
  external exit: t = "Exit";
};

module GeofencingRegionState = {
  type t = int;
  [@bs.module "expo"] [@bs.scope ("Location", "GeofencingRegionState")]
  external inside: t = "Inside";
  [@bs.module "expo"] [@bs.scope ("Location", "GeofencingRegionState")]
  external outside: t = "Outside";
};

[@bs.deriving abstract]
type region = {
  identifier: string,
  latitude: float,
  longitude: float,
  radius: float,
  state: GeofencingRegionState.t,
};

[@bs.deriving abstract]
type coords = {
  latitude: float,
  longitude: float,
  altitude: float,
  accuracy: float,
  altitudeAccuracy: float,
  heading: float,
  speed: float,
};

[@bs.deriving abstract]
type location = {
  coords,
  timestamp: int,
};

[@bs.deriving abstract]
type getCurrentPositionAsyncOptions = {
  accuracy: Accuracy.t,
  maximumAge: int,
};

[@bs.module "expo"] [@bs.scope "Location"]
external getCurrentPositionAsync:
  getCurrentPositionAsyncOptions => Js.Promise.t(location) =
  "getCurrentPositionAsync";

[@bs.deriving abstract]
type watchPositionAsyncOptions = {
  accuracy: Accuracy.t,
  timeInterval: int,
  distanceInterval: float,
};

[@bs.module "expo"] [@bs.scope "Location"]
external watchPositionAsync:
  (watchPositionAsyncOptions, location => unit) =>
  Js.Promise.t(eventSubscription) =
  "watchPositionAsync";

[@bs.deriving abstract]
type getProviderStatusAsyncResult = {
  locationServicesEnabled: bool,
  gpsAvailable: bool,
  networkAvailable: bool,
  passiveAvailable: bool,
};

[@bs.module "expo"] [@bs.scope "Location"]
external getProviderStatusAsync:
  unit => Js.Promise.t(getProviderStatusAsyncResult) =
  "getProviderStatusAsync";

[@bs.deriving abstract]
type getHeadingAsyncResult = {
  magHeading: float,
  trueHeading: float,
  accuracy: int,
};

[@bs.module "expo"] [@bs.scope "Location"]
external getHeadingAsync: unit => Js.Promise.t(getHeadingAsyncResult) =
  "getHeadingAsync";

[@bs.deriving abstract]
type watchHeadingAsyncResult = {
  magHeading: float,
  trueHeading: float,
  accuracy: int,
};

[@bs.module "expo"] [@bs.scope "Location"]
external watchHeadingAsync:
  (watchHeadingAsyncResult => unit) => Js.Promise.t(eventSubscription) =
  "watchHeadingAsync";

[@bs.deriving abstract]
type geocodeAsyncResult = {
  latitude: float,
  longitude: float,
  altitude: float,
  accuracy: float,
};

[@bs.module "expo"] [@bs.scope "Location"]
external geocodeAsync: string => Js.Promise.t(geocodeAsyncResult) =
  "geocodeAsync";

[@bs.deriving abstract]
type reverseGeocodeAsyncOptions = {
  latitude: float,
  longitude: float,
};

[@bs.deriving abstract]
type reverseGeocodeAsyncResult = {
  city: string,
  street: string,
  region: string,
  postalCode: string,
  country: string,
  name: string,
};

[@bs.module "expo"] [@bs.scope "Location"]
external reverseGeocodeAsync:
  reverseGeocodeAsyncOptions =>
  Js.Promise.t(array(reverseGeocodeAsyncResult)) =
  "reverseGeocodeAsync";

[@bs.module "expo"] [@bs.scope "Location"]
external setApiKey: string => unit = "setApiKey";

[@bs.module "expo"] [@bs.scope "Location"]
external installWebGeolocationPolyfill: unit => unit = "";

[@bs.deriving abstract]
type startLocationUpdatesAsyncOptions = {
  accuracy: Accuracy.t,
  timeInterval: int,
  distanceInterval: float,
  showsBackgroundLocationIndicator: bool,
};

[@bs.module "expo"] [@bs.scope "Location"]
external startLocationUpdatesAsync:
  (string, startLocationUpdatesAsyncOptions) => Js.Promise.t(unit) =
  "";

[@bs.module "expo"] [@bs.scope "Location"]
external stopLocationUpdatesAsync: string => Js.Promise.t(unit) = "";

[@bs.module "expo"] [@bs.scope "Location"]
external hasStartedLocationUpdatesAsync: string => Js.Promise.t(bool) = "";

type geofencingRegion = {
  identifier: string,
  latitude: float,
  longitude: float,
  radius: float,
  notifyOnEnter: bool,
  notifyOnExit: bool,
};

[@bs.module "expo"] [@bs.scope "Location"]
external startGeofencingAsync:
  (string, array(geofencingRegion)) => Js.Promise.t(unit) =
  "";

[@bs.module "expo"] [@bs.scope "Location"]
external stopGeofencingAsync: string => Js.Promise.t(unit) = "";
[@bs.module "expo"] [@bs.scope "Location"]
external hasStartedGeofencingAsync: string => Js.Promise.t(bool) = "";