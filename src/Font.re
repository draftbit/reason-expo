open BsReactNative;

[@bs.module "expo"] [@bs.scope "Font"] [@bs.val]
external loadDict : Js.Dict.t(Packager.required) => Js.Promise.t(unit) =
  "loadAsync";

let loadAll = fonts =>
  List.map(((name, font: Packager.required)) => (name, font), fonts)
  |> Js.Dict.fromList
  |> loadDict;