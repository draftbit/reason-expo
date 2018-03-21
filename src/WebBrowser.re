[@bs.module "expo"] [@bs.scope "WebBrowser"]
external openBrowserAsync : string => Js.Promise.t({. "type": string}) =
  "openBrowserAsync";

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external _openAuthSessionAsync : string => Js.Promise.t({. "type": string}) =
  "openAuthSessionAsync";

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external _openAuthSessionAsyncWithRedirectUrl :
  (string, string) => Js.Promise.t({. "type": string}) =
  "openAuthSessionAsync";

let openAuthSessionAsync = (~url: string, ~redirectUrl: option(string)=?, ()) =>
  switch (redirectUrl) {
  | Some(s) => _openAuthSessionAsyncWithRedirectUrl(url, s)
  | None => _openAuthSessionAsync(url)
  };

[@bs.module "expo"] [@bs.scope "WebBrowser"]
external dismissBrowser : unit => Js.Promise.t({. "type": string}) =
  "dismissBrowser";