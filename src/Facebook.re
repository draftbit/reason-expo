type login_result = {
  .
  "type": string,
  "token": Js.Undefined.t(string),
  "expires": Js.Undefined.t(string),
};

type permission_params = {
  .
  "permissions": array(string),
  "behavior": string,
};

[@bs.module "expo"] [@bs.scope "Facebook"]
external logInWithReadPermissions :
  (string, permission_params) => Js.Promise.t(login_result) =
  "logInWithReadPermissionsAsync";