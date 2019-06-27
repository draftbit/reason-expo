[@bs.module "expo-brightness"]
external setBrightness: float => unit = "setBrightness";

[@bs.module "expo-brightness"]
external getBrightnessAsync: unit => Js.Promise.t(float) =
  "getBrightnessAsync";

[@bs.module "expo-brightness"]
external setSystemBrightnessAsync: float => unit = "setSystemBrightnessAsync";

[@bs.module "expo-brightness"]
external getSystemBrightnessAsync: unit => Js.Promise.t(float) =
  "getSystemBrightnessAsync";