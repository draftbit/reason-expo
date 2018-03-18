[@bs.module "expo"] [@bs.scope "Brightness"]
external getBrightnessAsync : unit => Js.Promise.t(float) =
  "getBrightnessAsync";

[@bs.module "expo"] [@bs.scope "Brightness"]
external getSystemBrightnessAsync : unit => Js.Promise.t(float) =
  "getSystemBrightnessAsync";

[@bs.module "expo"] [@bs.scope "Brightness"]
external setBrightnessAsync : float => Js.Promise.t(unit) =
  "setBrightnessAsync";

[@bs.module "expo"] [@bs.scope "Brightness"]
external setSystemBrightnessAsync : float => Js.Promise.t(unit) =
  "setSystemBrightnessAsync";