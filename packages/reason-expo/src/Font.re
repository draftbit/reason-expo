[@bs.module "expo-font"]
external _loadDict:
  Js.Dict.t(ReactNative.Packager.required) => Js.Promise.t(unit) =
  "loadAsync";

let loadAsync = fonts =>
  List.map(
    ((name, font: ReactNative.Packager.required)) => (name, font),
    fonts,
  )
  |> Js.Dict.fromList
  |> _loadDict;
