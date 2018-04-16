[@bs.module "expo"] [@bs.scope "FileSystem"]
external documentDirectory : string = "documentDirectory";

[@bs.module "expo"] [@bs.scope "FileSystem"]
external cacheDirectory : string = "cacheDirectory";

type fileInfo = {
  .
  "exists": bool,
  "uri": Js.Undefined.t(string),
  "size": Js.Undefined.t(int),
  "modificationTime": Js.Undefined.t(int),
  "md5": Js.Undefined.t(string),
  "isDirectory": Js.Undefined.t(bool),
};

type options = {
  .
  "md5": Js.Undefined.t(bool),
  "size": Js.Undefined.t(bool),
};

[@bs.module "expo"] [@bs.scope "FileSystem"]
external getInfoAsync : (string, options) => Js.Promise.t(fileInfo) =
  "getInfoAsync";