[@bs.deriving abstract]
type logInConfig = {
  [@bs.optional]
  iosClientId: string,
  [@bs.optional]
  androidClientId: string,
  [@bs.optional]
  iosStandaloneAppClientId: string,
  [@bs.optional]
  androidStandaloneAppClientId: string,
  [@bs.optional]
  scopes: array(string),
  [@bs.optional]
  redirectUrl: string,
  [@bs.optional]
  mutable accessToken: string,
};

type logInResult = {
  .
  "_type": string,
  "accessToken": string,
  "idToken": string,
  "refreshToken": string,
  "user": googleUser,
}
and googleUser = {
  .
  "id": string,
  "name": string,
  "givenName": string,
  "familyName": string,
  "photoUrl": string,
  "email": string,
};

[@bs.module "expo-google-app-auth"]
external logInAsync: logInConfig => Js.Promise.t(logInResult) = "";

[@bs.module "expo-google-app-auth"]
external logOutAsync: logInConfig => Js.Promise.t('a) = "";