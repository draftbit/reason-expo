type updateCheckResult('manifestType) = {
  isAvailable: bool,
  manifest: 'manifestType,
};

type updateFetchResult('manifestType) = {
  isNew: bool,
  manifest: 'manifestType,
};

type event('manifestType) = {
  [@bs.as "type"]
  _type: string,
  manifest: 'manifestType,
  message: option(string),
};

type eventSubscription = {remove: unit => unit};

[@bs.module "expo"] [@bs.scope "Updates"]
external reload: unit => unit = "reload";

[@bs.module "expo"] [@bs.scope "Updates"]
external reloadFromCache: unit => unit = "reloadFromCache";

[@bs.module "expo"] [@bs.scope "Updates"]
external checkForUpdateAsync:
  unit => Js.Promise.t(updateCheckResult('manifestType)) =
  "checkForUpdateAsync";

[@bs.module "expo"] [@bs.scope "Updates"]
external fetchUpdateAsync:
  (event('manifestType) => unit) =>
  Js.Promise.t(updateFetchResult('manifestType)) =
  "fetchUpdateAsync";

[@bs.module "expo"] [@bs.scope "Updates"]
external addListener: (event('manifestType) => unit) => eventSubscription =
  "addListener";
