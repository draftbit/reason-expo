type logInConfig;
[@bs.obj]
external logInConfig:
  (
    ~iosClientId: string=?,
    ~androidClientId: string=?,
    ~iosStandaloneAppClientId: string=?,
    ~androidStandaloneAppClientId: string=?,
    ~clientId: string=?,
    ~language: string=?,
    ~loginHint: string=?,
    ~scopes: array(string)=?,
    ~redirectUrl: string=?
  ) =>
  logInConfig;

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

[@bs.module "expo-google-app-auth"]
external logInAsync: logInConfig => Js.Promise.t(logInResult) = "logInAsync";

[@bs.module "expo-google-app-auth"]
external logOutAsync: logInConfig => Js.Promise.t(unit) = "logOutAsync";
