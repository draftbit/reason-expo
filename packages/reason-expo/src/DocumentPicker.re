[@bs.deriving abstract]
type options = {
  [@bs.as "type"]
  _type: string,
  copyToCacheDirectory: bool,
};

[@bs.deriving abstract]
type result = {
  [@bs.as "type"]
  _type: string,
  [@bs.optional]
  uri: string,
  [@bs.optional]
  name: string,
  [@bs.optional]
  size: int,
};

[@bs.module "expo-document-picker"]
external getDocumentAsync: options => Js.Promise.t(result) =
  "getDocumentAsync";