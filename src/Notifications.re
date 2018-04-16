type eventSubscription = {. [@bs.meth] remove: unit => unit};

[@bs.module "expo"] [@bs.scope "Notification"]
external addListener :
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

[@bs.module "expo"] [@bs.scope "Notification"]
external getExpoPushTokenAsync : unit => Js.Promise.t(string) =
  "getExpoPushTokenAsync";

[@bs.module "expo"] [@bs.scope "Notification"]
external presentLocalNotificationAsync : Js.t({..}) => Js.Promise.t(string) =
  "presentLocalNotificationAsync";

[@bs.module "expo"] [@bs.scope "Notification"]
external scheduleLocalNotificationAsync :
  (Js.t({..}), Js.t({..})) => Js.Promise.t(string) =
  "scheduleLocalNotificationAsync";

[@bs.module "expo"] [@bs.scope "Notification"]
external dismissNotificationAsync : string => Js.Promise.t(unit) =
  "dismissNotificationAsync";

[@bs.module "expo"] [@bs.scope "Notification"]
external dismissAllNotificationsAsync : unit => Js.Promise.t(unit) =
  "dismissAllNotificationsAsync";

[@bs.module "expo"] [@bs.scope "Notification"]
external cancelScheduledNotificationAsync : string => Js.Promise.t(unit) =
  "cancelScheduledNotificationAsync";

[@bs.module "expo"] [@bs.scope "Notification"]
external cancelAllScheduledNotificationsAsync : unit => Js.Promise.t(unit) =
  "cancelAllScheduledNotificationsAsync";

[@bs.module "expo"] [@bs.scope "Notification"]
external getBadgeNumberAsync : unit => Js.Promise.t(int) =
  "getBadgeNumberAsync";

[@bs.module "expo"] [@bs.scope "Notification"]
external setBadgeNumberAsync : int => Js.Promise.t(unit) =
  "setBadgeNumberAsync";

[@bs.module "expo"] [@bs.scope "Notification"]
external getDevicePushTokenAsync :
  {. "gcmSenderId": string} =>
  Js.Promise.t(
    {
      .
      "type": string,
      "data": string,
    },
  ) =
  "getDevicePushTokenAsync";