[@bs.deriving abstract]
type updateCheckResult = {
  isAvailable: bool,
  manifest: Js.Json.t,
};

[@bs.deriving abstract]
type updateFetchResult = {
  isNew: bool,
  manifest: Js.Json.t,
};

[@bs.deriving abstract]
type event = {
  .
  "_type": string,
  "message": string,
  "manifest": Js.Json.t,
};

[@bs.deriving abstract]
type eventSubscription = {. "remove": unit => unit};

[@bs.module "expo"] [@bs.scope "Updates"]
external reload : unit => unit = "reload";

[@bs.module "expo"] [@bs.scope "Updates"]
external reloadFromCache : unit => unit = "reloadFromCache";

[@bs.module "expo"] [@bs.scope "Updates"]
external checkForUpdateAsync : unit => Js.Promise.t(updateCheckResult) =
  "checkForUpdateAsync";

[@bs.module "expo"] [@bs.scope "Updates"]
external fetchUpdateAsync :
  (. (event => unit)) => Js.Promise.t(updateFetchResult) =
  "fetchUpdateAsync";

[@bs.module "expo"] [@bs.scope "Updates"]
external addListener : (. (event => unit)) => eventSubscription =
  "addListener";