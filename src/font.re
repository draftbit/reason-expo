[@bs.module "expo"] [@bs.scope "Font"] [@bs.val]
external _load : (string, Js.Nullable.t(string)) => Js.Promise.t(unit) =
  "loadAsync";

let load = (name, path) => {
  Js.log("[Deprecated] Please use loadAll instead");
  _load(name, path)
};

type fontModule;

[@bs.val]
external require : (string) => fontModule = "";

[@bs.module "expo"] [@bs.scope "Font"] [@bs.val]
external loadDict : (Js.Dict.t(fontModule)) => Js.Promise.t(unit) =
  "loadAsync";

let loadAll = (fonts) =>
  List.map(((name,path)) => (name, require(path)), fonts)
  |> Js.Dict.fromList
  |> loadDict
;
