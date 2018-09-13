[@bs.module "expo"] [@bs.scope "LocalAuthentication"]
external hasHardwareAsync : unit => Js.Promise.t(bool) = "hasHardwareAsync";

[@bs.module "expo"] [@bs.scope "LocalAuthentication"]
external isEnrolledAsync : unit => Js.Promise.t(bool) = "isEnrolledAsync";

[@bs.deriving abstract]
type authenticateAsyncResult = {
  success: bool,
  [@bs.optional]
  error: string,
};

[@bs.module "expo"] [@bs.scope "LocalAuthentication"]
external authenticateAsync : string => Js.Promise.t(authenticateAsyncResult) =
  "authenticateAsync";

[@bs.module "expo"] [@bs.scope "LocalAuthentication"]
external cancelAuthenticate : unit => unit = "cancelAuthenticate";