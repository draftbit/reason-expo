[@bs.deriving abstract]
type t = {
  name: string,
  [@bs.as "type"]
  _type: string,
  hash: string,
  uri: string,
  localUri: string,
  width: float,
  height: float,
};

[@bs.send]
external downloadAsync: (t, unit) => Js.Promise.t(unit) = "downloadAsync";

[@bs.module "expo"] [@bs.scope "Asset"]
external loadAsync:
  array(ReactNative.Packager.required) => Js.Promise.t(unit) =
  "loadAsync";

[@bs.module "expo"] [@bs.scope "Asset"]
external fromModule: ReactNative.Packager.required => t = "fromModule";