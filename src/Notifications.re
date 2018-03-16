[@bs.module "expo"] [@bs.scope "Notification"] [@bs.val]
external getExpoPushTokenAsync : unit => Js.Promise.t(string) = "";

let getExpoPushToken = () =>
  getExpoPushTokenAsync() |> Helpers.promise_to_result;
