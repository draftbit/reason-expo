[@bs.deriving abstract]
type logInAsyncOptions = {
  behavior: string,
  scopes: array(string),
  androidClientId: string,
  iosClientId: string,
  androidStandaloneAppClientId: string,
  iosStandaloneAppClientId: string,
  webClientId: string,
};

type profileInformation('profileInformationType) = 'profileInformationType;

[@bs.deriving abstract]
type logInAsyncResult('logInAsyncResultType) = 'logInAsyncResultType;

[@bs.module "expo-google-app-auth"]
external logInAsync:
  logInAsyncOptions => Js.Promise.t(logInAsyncResult('logInAsyncResultType)) =
  "";