type eventSubscription = {remove: unit => unit};

type location = {
  x: int,
  y: int,
  z: int,
};

[@bs.module "expo-sensors"] [@bs.scope "Gyroscope"]
external addListener: (location => unit) => eventSubscription = "addListener";

[@bs.module "expo-sensors"] [@bs.scope "Gyroscope"]
external removeAllListeners: unit => unit = "removeAllListeners";

[@bs.module "expo-sensors"] [@bs.scope "Gyroscope"]
external setUpdateInterval: int => unit = "setUpdateInterval";
