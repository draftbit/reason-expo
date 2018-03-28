type options = {
  .
  authUrl: string,
  returnUrl: string,
};

[@bs.module "expo"] [@bs.scope "AuthSession"]
external startAsync :
  options =>
  Js.Promise.t(
    {
      .
      "_type": string,
      "params": Js.nullable(Js.t({..})),
      "event": Js.nullable(Js.t({..})),
      "errorCode": Js.nullable(string),
    },
  ) =
  "startAsync";

[@bs.module "expo"] [@bs.scope "AuthSession"]
external dismiss : unit => unit = "dismiss";

[@bs.module "expo"] [@bs.scope "AuthSession"]
external getRedirectUrl : unit => string = "getRedirectUrl";