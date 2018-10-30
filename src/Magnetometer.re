[@bs.deriving abstract]
type eventSubscription;

[@bs.send] external remove: (eventSubscription, unit) => unit = "remove";

[@bs.deriving abstract]
type location = {
  x: int,
  y: int,
  z: int,
};

[@bs.module "expo"] [@bs.scope "Magnetometer"]
external addListener: (location => unit) => eventSubscription = "addListener";

[@bs.module "expo"] [@bs.scope "Magnetometer"]
external removeAllListeners: unit => unit = "removeAllListeners";

[@bs.module "expo"] [@bs.scope "Magnetometer"]
external setUpdateInterval: int => unit = "setUpdateInterval";