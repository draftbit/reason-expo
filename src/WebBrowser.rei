[@bs.deriving abstract]
type result = {
  [@bs.as "type"]
  _type: string,
};

let openBrowserAsync: string => Js.Promise.t(result);

let openAuthSessionAsync:
  (~url: string, ~redirectUrl: string=?, unit) => Js.Promise.t(result);

let dismissBrowser: unit => Js.Promise.t(result);