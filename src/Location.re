[@bs.deriving abstract]
type eventSubscription;

[@bs.send] external remove : (eventSubscription, unit) => unit = "remove";

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
type coordsAndTimestamp = {
  coords,
  timestamp: int,
};

[@bs.deriving abstract]
type getProviderStatusAsyncOptions = {
  enableHighAccuracy: bool,
  maximumAge: int,
};

[@bs.module "expo"] [@bs.scope "Location"]
external getCurrentPositionAsync :
  getCurrentPositionAsyncOptions => coordsAndTimestamp =
  "getCurrentPositionAsync";

[@bs.deriving abstract]
type watchPositionAsyncOptions = {
  enableHighAccuracy: bool,
  timeInterval: int,
  distanceInterval: float,
};

[@bs.module "expo"] [@bs.scope "Location"]
external watchPositionAsync :
  (watchPositionAsyncOptions, coordsAndTimestamp => unit) => eventSubscription =
  "watchPositionAsync";

[@bs.deriving abstract]
type getProviderStatusAsyncResult = {
  locationServicesEnabled: bool,
  gpsAvailable: bool,
  networkAvailable: bool,
  passiveAvailable: bool,
};

[@bs.module "expo"] [@bs.scope "Location"]
external getProviderStatusAsync : unit => getProviderStatusAsyncResult =
  "getProviderStatusAsync";

[@bs.deriving abstract]
type getHeadingAsyncResult = {
  magHeading: float,
  trueHeading: float,
  accuracy: int,
};

[@bs.module "expo"] [@bs.scope "Location"]
external getHeadingAsync : unit => getHeadingAsyncResult = "getHeadingAsync";

[@bs.deriving abstract]
type watchHeadingAsyncResult = {
  magHeading: float,
  trueHeading: float,
  accuracy: int,
};

[@bs.module "expo"] [@bs.scope "Location"]
external watchHeadingAsync :
  (watchHeadingAsyncResult => unit) => eventSubscription =
  "watchHeadingAsync";

[@bs.deriving abstract]
type geocodeAsyncResult = {
  latitude: float,
  longitude: float,
  altitude: float,
  accuracy: float,
};

[@bs.module "expo"] [@bs.scope "Location"]
external geocodeAsync : string => geocodeAsyncResult = "geocodeAsync";

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
external reverseGeocodeAsync :
  reverseGeocodeAsyncOptions => reverseGeocodeAsyncResult =
  "reverseGeocodeAsync";

[@bs.module "expo"] [@bs.scope "Location"]
external setApiKey : string => unit = "setApiKey";