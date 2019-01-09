module Status = {
  type t = int;

  [@bs.module "expo"] [@bs.scope ("BackgroundFetch", "Status")]
  external restricted: t = "Restricted";

  [@bs.module "expo"] [@bs.scope ("BackgroundFetch", "Status")]
  external denied: t = "Denied";

  [@bs.module "expo"] [@bs.scope ("BackgroundFetch", "Status")]
  external available: t = "Available";
};

module Result = {
  type t = int;

  [@bs.module "expo"] [@bs.scope ("BackgroundFetch", "Result")]
  external noData: t = "NoData";

  [@bs.module "expo"] [@bs.scope ("BackgroundFetch", "Result")]
  external newData: t = "NewData";

  [@bs.module "expo"] [@bs.scope ("BackgroundFetch", "Result")]
  external failed: t = "Failed";
};

[@bs.module "expo"] [@bs.scope "BackgroundFetch"]
external getStatusAsync: unit => Js.Promise.t(Status.t) = "";

[@bs.module "expo"] [@bs.scope "BackgroundFetch"]
external registerTaskAsync: string => Js.Promise.t(unit) = "";

[@bs.module "expo"] [@bs.scope "BackgroundFetch"]
external unregisterTaskAsync: string => Js.Promise.t(unit) = "";

[@bs.module "expo"] [@bs.scope "BackgroundFetch"]
external setMinimumIntervalAsync: float => Js.Promise.t(unit) = "";