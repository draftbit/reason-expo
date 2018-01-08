[@bs.module "expo"] [@bs.scope "Brightness"]
external getBrightness : unit => Js.Promise.t(float) = "getBrightnessAsync";

[@bs.module "expo"] [@bs.scope "Brightness"]
external setBrightness : float => Js.Promise.t(unit) = "setBrightnessAsync";
