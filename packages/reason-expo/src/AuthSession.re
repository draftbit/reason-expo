/*
  Usage:

  [@bs.deriving abstract]
  type paramsType = {token: string};

  [@bs.deriving abstract]
  type eventType = {code: string};

 let x: Js.Promise.t(result(paramsType, eventType)) = startAsync(options(~authUrl="", ()));

  */
/*
 New Usage:

 type paramsType = {token: string};

 type eventType = {code: string};

let x: Js.Promise.t(result(paramsType, eventType)) =
  startAsync({authUrl: "", returnUrl: None});
 */

type options = {
  authUrl: string,
  returnUrl: option(string),
};

type result('paramType, 'eventType) = {
  [@bs.as "type"]
  _type: string,
  params: option('paramType),
  event: option('eventType),
  errorCode: option(string),
};

[@bs.module "expo"] [@bs.scope "AuthSession"]
external startAsync: options => Js.Promise.t(result('paramType, 'eventType)) =
  "startAsync";

[@bs.module "expo"] [@bs.scope "AuthSession"]
external dismiss: unit => unit = "dismiss";

[@bs.module "expo"] [@bs.scope "AuthSession"]
external getRedirectUrl: unit => string = "getRedirectUrl";