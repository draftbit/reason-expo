[@bs.module "expo"] [@bs.scope "Amplitude"] [@bs.val]
external initialize : string => unit = "initialize";

[@bs.module "expo"] [@bs.scope "Amplitude"] [@bs.val]
external setUserId : string => unit = "setUserId";

[@bs.module "expo"] [@bs.scope "Amplitude"] [@bs.val]
external setUserProperties : Js.t({..}) => unit = "setUserProperties";

[@bs.module "expo"] [@bs.scope "Amplitude"] [@bs.val]
external clearUserProperties : unit => unit = "clearUserProperties";

[@bs.module "expo"] [@bs.scope "Amplitude"] [@bs.val]
external logEvent : string => unit = "logEvent";

[@bs.module "expo"] [@bs.scope "Amplitude"] [@bs.val]
external logEventWithProperties : (string, Js.t({..})) => unit =
  "logEventWithProperties";

[@bs.module "expo"] [@bs.scope "Amplitude"] [@bs.val]
external setGroup : (string, array(string)) => unit = "setGroup";