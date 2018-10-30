type eventSubscription;

[@bs.send] external remove: (eventSubscription, unit) => unit = "remove";

[@bs.module "expo"] [@bs.scope "Notifications"]
external addListener:
  (
    {
      .
      "origin": string,
      "data": Js.t({..}),
      "remote": bool,
    } =>
    unit
  ) =>
  eventSubscription =
  "addListener";

[@bs.module "expo"] [@bs.scope "Notifications"]
external getExpoPushTokenAsync: unit => Js.Promise.t(string) =
  "getExpoPushTokenAsync";

[@bs.module "expo"] [@bs.scope "Notifications"]
external presentLocalNotificationAsync: Js.t({..}) => Js.Promise.t(string) =
  "presentLocalNotificationAsync";

[@bs.module "expo"] [@bs.scope "Notifications"]
external scheduleLocalNotificationAsync:
  (Js.t({..}), Js.t({..})) => Js.Promise.t(string) =
  "scheduleLocalNotificationAsync";

[@bs.module "expo"] [@bs.scope "Notifications"]
external dismissNotificationAsync: string => Js.Promise.t(unit) =
  "dismissNotificationAsync";

[@bs.module "expo"] [@bs.scope "Notifications"]
external dismissAllNotificationsAsync: unit => Js.Promise.t(unit) =
  "dismissAllNotificationsAsync";

[@bs.module "expo"] [@bs.scope "Notifications"]
external cancelScheduledNotificationAsync: string => Js.Promise.t(unit) =
  "cancelScheduledNotificationAsync";

[@bs.module "expo"] [@bs.scope "Notifications"]
external cancelAllScheduledNotificationsAsync: unit => Js.Promise.t(unit) =
  "cancelAllScheduledNotificationsAsync";

[@bs.module "expo"] [@bs.scope "Notifications"]
external getBadgeNumberAsync: unit => Js.Promise.t(int) =
  "getBadgeNumberAsync";

[@bs.module "expo"] [@bs.scope "Notifications"]
external setBadgeNumberAsync: int => Js.Promise.t(unit) =
  "setBadgeNumberAsync";

[@bs.module "expo"] [@bs.scope "Notifications"]
external getDevicePushTokenAsync:
  {. "gcmSenderId": string} =>
  Js.Promise.t({
    .
    "type": string,
    "data": string,
  }) =
  "getDevicePushTokenAsync";