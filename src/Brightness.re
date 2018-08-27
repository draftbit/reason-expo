[@bs.module "expo"] [@bs.scope "Brightness"]
external setBrightness : float => unit = "setBrightness";

[@bs.module "expo"] [@bs.scope "Brightness"]
external getBrightnessAsync : unit => Js.Promise.t(float) =
  "getBrightnessAsync";

[@bs.module "expo"] [@bs.scope "Brightness"]
external setSystemBrightnessAsync : float => unit = "setSystemBrightnessAsync";

[@bs.module "expo"] [@bs.scope "Brightness"]
external getSystemBrightnessAsync : unit => Js.Promise.t(float) =
  "getSystemBrightnessAsync";