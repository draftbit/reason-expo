[@bs.module "expo"] [@bs.scope "Font"]
external _loadDict:
  Js.Dict.t(BsReactNative.Packager.required) => Js.Promise.t(unit) =
  "loadAsync";

let loadAsync = fonts =>
  List.map(
    ((name, font: BsReactNative.Packager.required)) => (name, font),
    fonts,
  )
  |> Js.Dict.fromList
  |> _loadDict;