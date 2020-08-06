[@bs.module "expo"] [@bs.scope "Linking"]
external makeUrl: (string, 'a) => string = "makeUrl";

type pathObject('a) = {
  path: string,
  queryParams: 'a,
};

[@bs.module "expo"] [@bs.scope "Linking"]
external parse: string => pathObject('a) = "parse";

[@bs.module "expo"] [@bs.scope "Linking"]
external parseInitialURLAsync: unit => Js.Promise.t(pathObject('a)) =
  "parseInitialURLAsync";