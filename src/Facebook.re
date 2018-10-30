[@bs.deriving abstract]
type result = {
  [@bs.as "type"]
  _type: string,
  [@bs.optional]
  token: string,
  [@bs.optional]
  expires: string,
};

[@bs.deriving abstract]
type options = {
  permissions: array(string),
  behavior: string,
};

[@bs.module "expo"] [@bs.scope "Facebook"]
external logInWithReadPermissionsAsync:
  (string, options) => Js.Promise.t(result) =
  "logInWithReadPermissionsAsync";