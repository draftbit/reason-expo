type eventSubscription = {remove: unit => unit};

[@bs.module "expo-location"]
external hasServicesEnabledAsync: unit => Js.Promise.t(bool) =
  "hasServicesEnabledAsync";

type requestPermissionResult = {
  status: [ | `granted | `denied | `undetermined],
};

[@bs.module "expo-location"]
external requestPermissionsAsync:
  unit => Js.Promise.t(requestPermissionResult) =
  "requestPermissionsAsync";

module Accuracy = {
  type t = int;
  [@bs.module "expo-location"] [@bs.scope "Accuracy"]
  external lowest: t = "Lowest";
  [@bs.module "expo-location"] [@bs.scope "Accuracy"] external low: t = "Low";
  [@bs.module "expo-location"] [@bs.scope "Accuracy"]
  external balanced: t = "Balanced";
  [@bs.module "expo-location"] [@bs.scope "Accuracy"]
  external high: t = "High";
  [@bs.module "expo-location"] [@bs.scope "Accuracy"]
  external highest: t = "Highest";
  [@bs.module "expo-location"] [@bs.scope "Accuracy"]
  external bestForNavigation: t = "BestForNavigation";
};

module GeofencingEventType = {
  type t = int;
  [@bs.module "expo-location"] [@bs.scope "GeofencingEventType"]
  external enter: t = "Enter";
  [@bs.module "expo-location"] [@bs.scope "GeofencingEventType"]
  external exit: t = "Exit";
};

module GeofencingRegionState = {
  type t = int;
  [@bs.module "expo-location"] [@bs.scope "GeofencingRegionState"]
  external inside: t = "Inside";
  [@bs.module "expo-location"] [@bs.scope "GeofencingRegionState"]
  external outside: t = "Outside";
};

type region = {
  identifier: string,
  latitude: float,
  longitude: float,
  radius: float,
  state: GeofencingRegionState.t,
};

type coords = {
  latitude: float,
  longitude: float,
  altitude: float,
  accuracy: float,
  altitudeAccuracy: float,
  heading: float,
  speed: float,
};

type location = {
  coords,
  timestamp: int,
};

type getCurrentPositionAsyncOptions;
[@bs.obj]
external getCurrentPositionAsyncOptions:
  (~maximumAge: int=?, ~accuracy: Accuracy.t=?) =>
  getCurrentPositionAsyncOptions;

[@bs.module "expo-location"]
external getCurrentPositionAsync:
  getCurrentPositionAsyncOptions => Js.Promise.t(location) =
  "getCurrentPositionAsync";

type watchPositionAsyncOptions;
[@bs.obj]
external watchPositionAsyncOptions:
  (
    ~accuracy: Accuracy.t,
    ~timeInterval: int,
    ~distanceInterval: float,
    ~mayShowUserSettingsDialog: bool=?
  ) =>
  watchPositionAsyncOptions;

[@bs.module "expo-location"]
external watchPositionAsync:
  (watchPositionAsyncOptions, location => unit) =>
  Js.Promise.t(eventSubscription) =
  "watchPositionAsync";

type getProviderStatusAsyncResult = {
  locationServicesEnabled: bool,
  gpsAvailable: bool,
  networkAvailable: bool,
  passiveAvailable: bool,
};

[@bs.module "expo-location"]
external getProviderStatusAsync:
  unit => Js.Promise.t(getProviderStatusAsyncResult) =
  "getProviderStatusAsync";

type getHeadingAsyncResult = {
  magHeading: float,
  trueHeading: float,
  accuracy: int,
};

[@bs.module "expo-location"]
external getHeadingAsync: unit => Js.Promise.t(getHeadingAsyncResult) =
  "getHeadingAsync";

type watchHeadingAsyncResult = {
  magHeading: float,
  trueHeading: float,
  accuracy: int,
};

[@bs.module "expo-location"]
external watchHeadingAsync:
  (watchHeadingAsyncResult => unit) => Js.Promise.t(eventSubscription) =
  "watchHeadingAsync";

type geocodeAsyncResult = {
  latitude: float,
  longitude: float,
  altitude: float,
  accuracy: float,
};

[@bs.module "expo-location"]
external geocodeAsync: string => Js.Promise.t(geocodeAsyncResult) =
  "geocodeAsync";

type reverseGeocodeAsyncOptions;
[@bs.obj]
external reverseGeocodeAsyncOptions:
  (~latitude: float, ~longitude: float) => reverseGeocodeAsyncOptions;

type reverseGeocodeAsyncResult = {
  city: string,
  street: string,
  region: string,
  postalCode: string,
  country: string,
  name: string,
};

[@bs.module "expo-location"]
external reverseGeocodeAsync:
  reverseGeocodeAsyncOptions =>
  Js.Promise.t(array(reverseGeocodeAsyncResult)) =
  "reverseGeocodeAsync";

[@bs.module "expo-location"] external setApiKey: string => unit = "setApiKey";

[@bs.module "expo-location"]
external installWebGeolocationPolyfill: unit => unit =
  "installWebGeolocationPolyfill";

type startLocationUpdatesAsyncOptions;
[@bs.obj]
external startLocationUpdatesAsyncOptions:
  (
    ~accuracy: Accuracy.t,
    ~timeInterval: int,
    ~distanceInterval: float,
    ~showsBackgroundLocationIndicator: bool
  ) =>
  startLocationUpdatesAsyncOptions;

[@bs.module "expo-location"]
external startLocationUpdatesAsync:
  (string, startLocationUpdatesAsyncOptions) => Js.Promise.t(unit) =
  "startLocationUpdatesAsync";

[@bs.module "expo-location"]
external stopLocationUpdatesAsync: string => Js.Promise.t(unit) =
  "stopLocationUpdatesAsync";

[@bs.module "expo-location"]
external hasStartedLocationUpdatesAsync: string => Js.Promise.t(bool) =
  "hasStartedLocationUpdatesAsync";

type geofencingRegion = {
  identifier: string,
  latitude: float,
  longitude: float,
  radius: float,
  notifyOnEnter: bool,
  notifyOnExit: bool,
};

[@bs.module "expo-location"]
external startGeofencingAsync:
  (string, array(geofencingRegion)) => Js.Promise.t(unit) =
  "startGeofencingAsync";

[@bs.module "expo-location"]
external stopGeofencingAsync: string => Js.Promise.t(unit) =
  "stopGeofencingAsync";
[@bs.module "expo-location"]
external hasStartedGeofencingAsync: string => Js.Promise.t(bool) =
  "hasStartedGeofencingAsync";
