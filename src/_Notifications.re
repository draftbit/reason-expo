[@bs.module "expo"] [@bs.scope "Notification"]
external getExpoPushTokenAsync : unit => Js.Promise.t(string) =
  "getExpoPushTokenAsync";