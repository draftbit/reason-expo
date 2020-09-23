type options;
external options: (~_type: string, ~copyToCacheDirectory: bool) => options;

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
