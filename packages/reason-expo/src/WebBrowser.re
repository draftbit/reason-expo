[@bs.deriving abstract]
type openBrowserAsyncResult = {
  [@bs.as "type"]
  _type: string,
};

[@bs.deriving abstract]
type openBrowserAsyncOptions = {
  [@bs.optional]
  toolbarColor: string,
  [@bs.optional]
  collapseToolbar: bool,
  [@bs.optional]
  controlsColor: string,
  [@bs.optional]
  showTitle: bool,
  [@bs.optional]
  package: string,
};

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external openBrowserAsync: string => Js.Promise.t(openBrowserAsyncResult) =
  "openBrowserAsync";

[@bs.deriving abstract]
type openAuthSessionAsyncResult = {
  [@bs.as "type"]
  _type: string,
};

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external _openAuthSessionAsync:
  (string, string) => Js.Promise.t(openAuthSessionAsyncResult) =
  "openAuthSessionAsync";

let openAuthSessionAsync = (~url, ~redirectUrl=Constants.linkingUrl, ()) =>
  _openAuthSessionAsync(url, redirectUrl);

[@bs.deriving abstract]
type warmUpAsyncResult = {package: string};

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external warmUpAsync: string => Js.Promise.t(warmUpAsyncResult) =
  "warmUpAsync";

[@bs.deriving abstract]
type mayInitWithUrlAsyncResult = {package: string};

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external mayInitWithUrlAsync:
  (string, string) => Js.Promise.t(mayInitWithUrlAsyncResult) =
  "mayInitWithUrlAsync";

[@bs.deriving abstract]
type coolDownAsyncResult = {package: string};

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external coolDownAsync: string => Js.Promise.t(coolDownAsyncResult) =
  "coolDownAsync";

[@bs.deriving abstract]
type dismissBrowserResult = {
  [@bs.as "type"]
  _type: string,
};

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external dismissBrowser: unit => Js.Promise.t(dismissBrowserResult) =
  "dismissBrowser";

[@bs.deriving abstract]
type getCustomTabsSupportingBrowsersResult = {
  browserPackages: array(string),
  [@bs.optional]
  defaultBrowserPackage: string,
  servicePackages: array(string),
  [@bs.optional]
  preferredBrowserPackage: string,
};

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external getCustomTabsSupportingBrowsers:
  unit => Js.Promise.t(getCustomTabsSupportingBrowsersResult) =
  "getCustomTabsSupportingBrowsers";