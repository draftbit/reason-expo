
type options = {
  [@bs.as "type"]
  _type: string,
  copyToCacheDirectory: bool,
};

type result = {
  [@bs.as "type"]
  _type: string,
  uri: option(string),
  name: option(string),
  size: option(int),
};

[@bs.module "expo-document-picker"]
external getDocumentAsync: options => Js.Promise.t(result) =
  "getDocumentAsync";