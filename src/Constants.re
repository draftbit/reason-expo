[@bs.module "expo"] [@bs.scope "Constants"]
external appOwnership : string = "appOwnership";

[@bs.module "expo"] [@bs.scope "Constants"]
external expoVersion : string = "expoVersion";

[@bs.module "expo"] [@bs.scope "Constants"]
external deviceId : string = "deviceId";

[@bs.module "expo"] [@bs.scope "Constants"]
external deviceName : string = "deviceName";

[@bs.module "expo"] [@bs.scope "Constants"]
external deviceYearClass : int = "deviceYearClass";

[@bs.module "expo"] [@bs.scope "Constants"]
external getWebViewUserAgentAsync : unit => Js.Promise.t(string) =
  "getWebViewUserAgentAsync";

[@bs.module "expo"] [@bs.scope "Constants"]
external isDevice : Js.boolean = "isDevice";

[@bs.module "expo"] [@bs.scope "Constants"]
external platform : {
  .
  "ios": {
    .
    buildNumber: int,
    platform: string,
    model: string,
    userInterfaceIdiom: string,
    systemVersion: float,
  },
  "android": {. versionCode: int},
} =
  "platform";

[@bs.module "expo"] [@bs.scope "Constants"]
external sessionId : string = "sessionId";

[@bs.module "expo"] [@bs.scope "Constants"]
external statusBarHeight : int = "statusBarHeight";

[@bs.module "expo"] [@bs.scope "Constants"]
external systemFonts : array(string) = "systemFonts";

[@bs.module "expo"] [@bs.scope "Constants"]
external manifest : Js.t({..}) = "manifest";

[@bs.module "expo"] [@bs.scope "Constants"]
external linkingUri : string = "linkingUri";