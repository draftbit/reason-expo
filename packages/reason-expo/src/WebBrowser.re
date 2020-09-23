type openBrowserAsyncResult = {
  [@bs.as "type"]
  _type: string,
};

type openBrowserAsyncOptions;
[@bs.obj]
external openBrowserAsyncOptions:
  (
    ~controlsColor: string=?,
    ~dismissButtonStyle: [ | `close | `cancel]=?,
    ~enableBarCollapsing: bool=?,
    ~enableDefaultShare: bool=?,
    ~package: string=?,
    ~readerMode: bool=?,
    ~showInRecents: bool=?,
    ~showTitle: bool=?,
    ~toolbarColor: string=?
  ) =>
  openBrowserAsyncOptions;

[@bs.module "expo-web-browser"]
external openBrowserAsync:
  (~url: string, ~options: openBrowserAsyncOptions=?, unit) =>
  Js.Promise.t(openBrowserAsyncResult) =
  "openBrowserAsync";

type openAuthSessionAsyncResult = {
  [@bs.as "type"]
  _type: string,
};

[@bs.module "expo-web-browser"]
external openAuthSessionAsync:
  (~url: string, ~redirectUrl: string) =>
  Js.Promise.t(openAuthSessionAsyncResult) =
  "openAuthSessionAsync";

[@bs.deriving abstract]
type warmUpAsyncResult = {package: string};

[@bs.module "expo-web-browser"]
external warmUpAsync: string => Js.Promise.t(warmUpAsyncResult) =
  "warmUpAsync";

[@bs.deriving abstract]
type mayInitWithUrlAsyncResult = {package: string};

[@bs.module "expo-web-browser"]
external mayInitWithUrlAsync:
  (string, string) => Js.Promise.t(mayInitWithUrlAsyncResult) =
  "mayInitWithUrlAsync";

[@bs.deriving abstract]
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
