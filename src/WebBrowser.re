[@bs.deriving abstract]
type result = {
  [@bs.as "type"]
  _type: string,
};

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external openBrowserAsync: string => Js.Promise.t(result) =
  "openBrowserAsync";

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external _openAuthSessionAsync: (string, string) => Js.Promise.t(result) =
  "openAuthSessionAsync";

let openAuthSessionAsync = (~url, ~redirectUrl=Constants.linkingUrl, ()) =>
  _openAuthSessionAsync(url, redirectUrl);

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external dismissBrowser: unit => Js.Promise.t(result) = "dismissBrowser";