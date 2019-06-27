[@bs.module "expo"] [@bs.scope "Linking"]
external makeUrl: (string, 'a) => string = "";

[@bs.module "expo"] [@bs.scope "Linking"]
external parse:
  string =>
  {
    .
    "path": string,
    "queryParams": 'a,
  } =
  "";

[@bs.module "expo"] [@bs.scope "Linking"]
external parseInitialURLAsync:
  unit =>
  Js.Promise.t({
    .
    "path": string,
    "queryParams": 'a,
  }) =
  "";