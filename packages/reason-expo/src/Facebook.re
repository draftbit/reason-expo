type result = {
  [@bs.as "type"]
  _type: string,
  token: option(string),
  expires: option(string),
};

type options;
[@bs.obj]
external options: (~permissions: array(string), ~behavior: string) => options;

[@bs.module "expo-facebook"]
external logInWithReadPermissionsAsync:
  (string, options) => Js.Promise.t(result) =
  "logInWithReadPermissionsAsync";
