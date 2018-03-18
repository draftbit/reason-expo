type event_subscription = {. [@bs.meth] "remove": unit => unit};

type location = {
  .
  x: int,
  y: int,
  z: int,
};

[@bs.module "expo"] [@bs.scope "Accelerometer"]
external addListener : (location => unit) => event_subscription =
  "addListener";

[@bs.module "expo"] [@bs.scope "Accelerometer"]
external removeAllListeners : unit => unit = "removeAllListeners";

[@bs.module "expo"] [@bs.scope "Accelerometer"]
external setUpdateInterval : int => unit = "setUpdateInterval";