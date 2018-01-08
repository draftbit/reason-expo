/* And some things missing */
type t('env) = {
  .
  "appOwnership": string,
  "deviceId": string,
  "deviceName": string,
  "deviceYearClass": int,
  "expoRuntimeVersion": string,
  "expoVersion": string,
  [@bs.meth] "getWebViewUserAgentAsync": unit => Js.Promise.t(string),
  "isDevice": Js.boolean,
  "linkingUri": string,
  "linkingUrl": string,
  "manifest": {
    .
    "bundleUrl": string,
    "debuggerHost": string,
    "description": string,
    "developer": {
      .
      "projectRoot": string,
      "tool": string
    },
    "env": Js.t({..} as 'env),
    "icon": string,
    "iconUrl": string,
    "id": string,
    "isVerified": Js.boolean,
    "logUrl": string
  }
};

[@bs.val] [@bs.module "expo"] external constants : t('env) = "Constants";
