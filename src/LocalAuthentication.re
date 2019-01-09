module AuthenticationType = {
  type t = int;

  [@bs.module "expo"]
  [@bs.scope ("LocalAuthentication", "AuthenticationType")]
  external fingerprint: t = "FINGERPRINT";

  [@bs.module "expo"]
  [@bs.scope ("LocalAuthentication", "AuthenticationType")]
  external facialRecognition: t = "FACIAL_RECOGNITION";
};

[@bs.module "expo"] [@bs.scope "LocalAuthentication"]
external hasHardwareAsync: unit => Js.Promise.t(bool) = "hasHardwareAsync";

[@bs.module "expo"] [@bs.scope "LocalAuthentication"]
external supportedAuthenticationTypesAsync:
  unit => Js.Promise.t(array(AuthenticationType.t)) =
  "supportedAuthenticationTypesAsync";

[@bs.module "expo"] [@bs.scope "LocalAuthentication"]
external isEnrolledAsync: unit => Js.Promise.t(bool) = "isEnrolledAsync";

[@bs.deriving abstract]
type authenticateAsyncResult = {
  success: bool,
  [@bs.optional]
  error: string,
};

[@bs.module "expo"] [@bs.scope "LocalAuthentication"]
external authenticateAsync: string => Js.Promise.t(authenticateAsyncResult) =
  "authenticateAsync";

[@bs.module "expo"] [@bs.scope "LocalAuthentication"]
external cancelAuthenticate: unit => unit = "cancelAuthenticate";