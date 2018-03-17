[@bs.module "expo"] [@bs.scope "Fingerprint"] [@bs.val]
external hasHardwareAsync : unit => Js.Promise.t(Js.boolean) =
  "hasHardwareAsync";

[@bs.module "expo"] [@bs.scope "Fingerprint"] [@bs.val]
external isEnrolledAsync : unit => Js.Promise.t(Js.boolean) =
  "isEnrolledAsync";

[@bs.module "expo"] [@bs.scope "Fingerprint"] [@bs.val]
external authenticateAsync :
  Js.nullable(string) =>
  {
    .
    success: Js.boolean,
    error: Js.nullable(string),
  } =
  "authenticateAsync";

[@bs.module "expo"] [@bs.scope "Fingerprint"] [@bs.val]
external cancelAuthenticate : unit => unit = "cancelAuthenticate";