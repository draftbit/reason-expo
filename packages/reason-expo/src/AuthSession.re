type options;
[@bs.obj]
external options: (~authUrl: string, ~returnUrl: string=?) => options;

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
