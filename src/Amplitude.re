[@bs.module "expo"] [@bs.scope "Amplitude"]
external initialize : string => unit = "initialize";

[@bs.module "expo"] [@bs.scope "Amplitude"]
external setUserId : string => unit = "setUserId";

[@bs.module "expo"] [@bs.scope "Amplitude"]
external setUserProperties : Js.t({..}) => unit = "setUserProperties";

[@bs.module "expo"] [@bs.scope "Amplitude"]
external clearUserProperties : unit => unit = "clearUserProperties";

[@bs.module "expo"] [@bs.scope "Amplitude"]
external logEvent : string => unit = "logEvent";

[@bs.module "expo"] [@bs.scope "Amplitude"]
external logEventWithProperties : (string, Js.t({..})) => unit =
  "logEventWithProperties";

[@bs.module "expo"] [@bs.scope "Amplitude"]
external setGroup : (string, array(string)) => unit = "setGroup";