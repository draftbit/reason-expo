[@bs.deriving abstract]
type updateCheckResult('manifestType) = {
  isAvailable: bool,
  manifest: 'manifestType,
};

[@bs.deriving abstract]
type updateFetchResult('manifestType) = {
  isNew: bool,
  manifest: 'manifestType,
};

[@bs.deriving abstract]
type event('manifestType) = {
  [@bs.as "type"]
  _type: string,
  manifest: 'manifestType,
  [@bs.optional]
  message: string,
};

[@bs.deriving abstract]
type eventSubscription;

[@bs.send] external remove : (eventSubscription, unit) => unit = "remove";

[@bs.module "expo"] [@bs.scope "Updates"]
external reload : unit => unit = "reload";

[@bs.module "expo"] [@bs.scope "Updates"]
external reloadFromCache : unit => unit = "reloadFromCache";

[@bs.module "expo"] [@bs.scope "Updates"]
external checkForUpdateAsync :
  unit => Js.Promise.t(updateCheckResult('manifestType)) =
  "checkForUpdateAsync";

[@bs.module "expo"] [@bs.scope "Updates"]
external fetchUpdateAsync :
  (event('manifestType) => unit) =>
  Js.Promise.t(updateFetchResult('manifestType)) =
  "fetchUpdateAsync";

[@bs.module "expo"] [@bs.scope "Updates"]
external addListener : (event('manifestType) => unit) => eventSubscription =
  "addListener";