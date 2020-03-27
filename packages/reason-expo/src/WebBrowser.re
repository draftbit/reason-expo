type openBrowserAsyncResult = {
  [@bs.as "type"]
  _type: string,
};

type openBrowserAsyncOptions = {
  toolbarColor: option(string),
  collapseToolbar: option(bool),
  controlsColor: option(string),
  showTitle: option(bool),
  package: option(string),
};

[@bs.module "expo-web-browser"]
external openBrowserAsync: string => Js.Promise.t(openBrowserAsyncResult) =
  "openBrowserAsync";

type openAuthSessionAsyncResult = {
  [@bs.as "type"]
  _type: string,
};

[@bs.module "expo-web-browser"]
external _openAuthSessionAsync:
  (string, string) => Js.Promise.t(openAuthSessionAsyncResult) =
  "openAuthSessionAsync";

let openAuthSessionAsync = (~url, ~redirectUrl=Constants.linkingUrl, ()) =>
  _openAuthSessionAsync(url, redirectUrl);

[@bs.deriving abstract]
type warmUpAsyncResult = {package: string};

[@bs.module "expo-web-browser"]
external warmUpAsync: string => Js.Promise.t(warmUpAsyncResult) =
  "warmUpAsync";

type mayInitWithUrlAsyncResult = {package: string};

[@bs.module "expo-web-browser"]
external mayInitWithUrlAsync:
  (string, string) => Js.Promise.t(mayInitWithUrlAsyncResult) =
  "mayInitWithUrlAsync";

type coolDownAsyncResult = {package: string};

[@bs.module "expo-web-browser"]
external coolDownAsync: string => Js.Promise.t(coolDownAsyncResult) =
  "coolDownAsync";

type dismissBrowserResult = {
  [@bs.as "type"]
  _type: string,
};

[@bs.module "expo-web-browser"]
external dismissBrowser: unit => Js.Promise.t(dismissBrowserResult) =
  "dismissBrowser";

type getCustomTabsSupportingBrowsersResult = {
  browserPackages: array(string),
  defaultBrowserPackage: option(string),
  servicePackages: array(string),
  preferredBrowserPackage: option(string),
};

[@bs.module "expo-web-browser"]
external getCustomTabsSupportingBrowsers:
  unit => Js.Promise.t(getCustomTabsSupportingBrowsersResult) =
  "getCustomTabsSupportingBrowsers";