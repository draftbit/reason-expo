module AuthenticationType = {
  type t = int;

  [@bs.module "expo-local-authentication"] [@bs.scope "AuthenticationType"]
  external fingerprint: t = "FINGERPRINT";

  [@bs.module "expo-local-authentication"] [@bs.scope "AuthenticationType"]
  external facialRecognition: t = "FACIAL_RECOGNITION";
};

[@bs.module "expo-local-authentication"]
external hasHardwareAsync: unit => Js.Promise.t(bool) = "hasHardwareAsync";

[@bs.module "expo-local-authentication"]
external supportedAuthenticationTypesAsync:
  unit => Js.Promise.t(array(AuthenticationType.t)) =
  "supportedAuthenticationTypesAsync";

[@bs.module "expo-local-authentication"]
external isEnrolledAsync: unit => Js.Promise.t(bool) = "isEnrolledAsync";

type authenticateAsyncResult = {
  success: bool,
  error: option(string),
};

type authenticateAsyncOptions = {
  promptMessage: option(string),
  fallbackLabel: option(string),
};

[@bs.module "expo-local-authentication"]
external authenticateAsync:
  authenticateAsyncOptions => Js.Promise.t(authenticateAsyncResult) =
  "authenticateAsync";

[@bs.module "expo-local-authentication"]
external cancelAuthenticate: unit => unit = "cancelAuthenticate";