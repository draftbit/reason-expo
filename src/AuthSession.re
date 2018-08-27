[@bs.deriving abstract]
type options = {
  authUrl: string,
  [@bs.optional]
  returnUrl: string,
};

[@bs.deriving abstract]
type result('paramType, 'eventType) = {
  [@bs.as "type"]
  _type: string,
  [@bs.optional]
  params: 'paramType,
  [@bs.optional]
  event: 'eventType,
  [@bs.optional]
  errorCode: string,
};

[@bs.module "expo"] [@bs.scope "AuthSession"]
external startAsync : options => Js.Promise.t(result('paramType, 'eventType)) =
  "startAsync";

[@bs.module "expo"] [@bs.scope "AuthSession"]
external dismiss : unit => unit = "dismiss";

[@bs.module "expo"] [@bs.scope "AuthSession"]
external getRedirectUrl : unit => string = "getRedirectUrl";
/*
 Usage:

 [@bs.deriving abstract]
 type paramsType = {token: string};

 [@bs.deriving abstract]
 type eventType = {code: string};

 let x: Js.Promise.t(result(paramsType, eventType)) = startAsync(options(~authUrl="", ()));
 */