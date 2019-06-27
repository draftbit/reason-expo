[@bs.module "expo-constants"] external appOwnership: string = "appOwnership";

[@bs.module "expo-constants"] external expoVersion: string = "expoVersion";

[@bs.module "expo-constants"]
external installationId: string = "installationId";

[@bs.module "expo-constants"] external deviceId: string = "deviceId";

[@bs.module "expo-constants"] external linkingUrl: string = "linkingUrl";

[@bs.module "expo-constants"] external deviceName: string = "deviceName";

[@bs.module "expo-constants"]
external deviceYearClass: int = "deviceYearClass";

[@bs.module "expo-constants"]
external getWebViewUserAgentAsync: unit => Js.Promise.t(string) =
  "getWebViewUserAgentAsync";

[@bs.module "expo-constants"] external isDevice: bool = "isDevice";

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

[@bs.module "expo-constants"] external platform: platform = "platform";

[@bs.module "expo-constants"] external sessionId: string = "sessionId";

[@bs.module "expo-constants"]
external statusBarHeight: int = "statusBarHeight";

[@bs.module "expo-constants"]
external systemFonts: array(string) = "systemFonts";

[@bs.module "expo-constants"] external manifest: Js.t({..}) = "manifest";