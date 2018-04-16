[@bs.module "expo"] [@bs.scope "Fingerprint"]
external hasHardwareAsync : unit => Js.Promise.t(bool) = "hasHardwareAsync";

[@bs.module "expo"] [@bs.scope "Fingerprint"]
external isEnrolledAsync : unit => Js.Promise.t(bool) = "isEnrolledAsync";

[@bs.module "expo"] [@bs.scope "Fingerprint"]
external authenticateAsync :
  Js.nullable(string) =>
  {
    .
    success: bool,
    error: Js.nullable(string),
  } =
  "authenticateAsync";

[@bs.module "expo"] [@bs.scope "Fingerprint"]
external cancelAuthenticate : unit => unit = "cancelAuthenticate";