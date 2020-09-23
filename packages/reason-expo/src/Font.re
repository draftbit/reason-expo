[@bs.module "expo-font"]
external _loadDict:
  Js.Dict.t(ReactNative.Packager.required) => Js.Promise.t(unit) =
  "loadAsync";

let loadAsync = fonts => fonts->Js.Dict.fromArray->_loadDict;
