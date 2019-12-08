// [@bs.deriving abstract]
type logInConfig = {
  // [@bs.optional]
  iosClientId: option(string),
  // [@bs.optional]
  androidClientId: option(string),
  // [@bs.optional]
  iosStandaloneAppClientId: option(string),
  // [@bs.optional]
  androidStandaloneAppClientId: option(string),
  // [@bs.optional]
  scopes: option(array(string)),
  // [@bs.optional]
  redirectUrl: option(string),
  // [@bs.optional]
  mutable accessToken: option(string),
};

type logInResult = {
  [@bs.as "type"]
  _type: string,
  accessToken: string,
  idToken: string,
  refreshToken: string,
  user: googleUser,
}
and googleUser = {
  id: string,
  name: string,
  givenName: string,
  familyName: string,
  photoUrl: string,
  email: string,
};
// type logInResult = {
//   .
//   "_type": string,
//   "accessToken": string,
//   "idToken": string,
//   "refreshToken": string,
//   "user": googleUser,
// }
// and googleUser = {
//   .
//   "id": string,
//   "name": string,
//   "givenName": string,
//   "familyName": string,
//   "photoUrl": string,
//   "email": string,
// };

[@bs.module "expo-google-app-auth"]
external logInAsync: logInConfig => Js.Promise.t(logInResult) = "logInAsync";

[@bs.module "expo-google-app-auth"]
external logOutAsync: logInConfig => Js.Promise.t('a) = "logOutAsync";