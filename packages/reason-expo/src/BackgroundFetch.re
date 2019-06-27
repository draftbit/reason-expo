module Status = {
  type t = int;

  [@bs.module "expo-background-fetch"] [@bs.scope "Status"]
  external restricted: t = "Restricted";

  [@bs.module "expo-background-fetch"] [@bs.scope "Status"]
  external denied: t = "Denied";

  [@bs.module "expo-background-fetch"] [@bs.scope "Status"]
  external available: t = "Available";
};

module Result = {
  type t = int;

  [@bs.module "expo-background-fetch"] [@bs.scope "Result"]
  external noData: t = "NoData";

  [@bs.module "expo-background-fetch"] [@bs.scope "Result"]
  external newData: t = "NewData";

  [@bs.module "expo-background-fetch"] [@bs.scope "Result"]
  external failed: t = "Failed";
};

[@bs.module "expo-background-fetch"]
external getStatusAsync: unit => Js.Promise.t(Status.t) = "";

[@bs.module "expo-background-fetch"]
external registerTaskAsync: string => Js.Promise.t(unit) = "";

[@bs.module "expo-background-fetch"]
external unregisterTaskAsync: string => Js.Promise.t(unit) = "";

[@bs.module "expo-background-fetch"]
external setMinimumIntervalAsync: float => Js.Promise.t(unit) = "";