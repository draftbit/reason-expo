[@bs.module "expo"] [@bs.scope "Font"] [@bs.val]
external load : (string, Js.Nullable.t(string)) => Js.Promise.t(unit) =
  "loadAsync";
