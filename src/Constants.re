[@bs.module "expo"] [@bs.scope "Constants"]
external appOwnership : string = "appOwnership";

[@bs.module "expo"] [@bs.scope "Constants"]
external expoVersion : string = "expoVersion";

[@bs.module "expo"] [@bs.scope "Constants"]
external installationId : string = "installationId";

[@bs.module "expo"] [@bs.scope "Constants"]
external deviceId : string = "deviceId";

[@bs.module "expo"] [@bs.scope "Constants"]
external linkingUrl : string = "linkingUrl";

[@bs.module "expo"] [@bs.scope "Constants"]
external deviceName : string = "deviceName";

[@bs.module "expo"] [@bs.scope "Constants"]
external deviceYearClass : int = "deviceYearClass";

[@bs.module "expo"] [@bs.scope "Constants"]
external getWebViewUserAgentAsync : unit => Js.Promise.t(string) =
  "getWebViewUserAgentAsync";

[@bs.module "expo"] [@bs.scope "Constants"]
external isDevice : bool = "isDevice";

[@bs.deriving abstract]
type platformAndroid = {versionCode: int};

[@bs.deriving abstract]
type platformIOS = {
  buildNumber: string,
  platform: string,
  model: string,
  userInterfaceIdiom: string,
  systemVersion: string,
};

[@bs.deriving abstract]
type platform = {
  ios: platformIOS,
  android: platformAndroid,
};

[@bs.module "expo"] [@bs.scope "Constants"]
external platform : platform = "platform";

[@bs.module "expo"] [@bs.scope "Constants"]
external sessionId : string = "sessionId";

[@bs.module "expo"] [@bs.scope "Constants"]
external statusBarHeight : int = "statusBarHeight";

[@bs.module "expo"] [@bs.scope "Constants"]
external systemFonts : array(string) = "systemFonts";

[@bs.module "expo"] [@bs.scope "Constants"]
external manifest : Js.t({..}) = "manifest";