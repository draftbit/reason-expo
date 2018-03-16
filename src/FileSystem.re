[@bs.val] [@bs.module "expo"] [@bs.scope "FileSystem"]
external documentDirectory : string = "";

[@bs.val] [@bs.module "expo"] [@bs.scope "FileSystem"]
external cacheDirectory : string = "";

type fileInfo = {
  .
  "exists": Js.boolean,
  "uri": Js.Undefined.t(string),
  "size": Js.Undefined.t(int),
  "modificationTime": Js.Undefined.t(int),
  "md5": Js.Undefined.t(string),
  "isDirectory": Js.Undefined.t(Js.boolean)
};

type opt = {. "md5": Js.Undefined.t(Js.boolean)};

[@bs.val] [@bs.module "expo"] [@bs.scope "FileSystem"]
external getInfoImpl : (string, opt) => Js.Promise.t(fileInfo) =
  "getInfoAsync";

let getInfo = (~opt: opt=Obj.magic(Js.Dict.empty()), fileUri) =>
  getInfoImpl(fileUri, opt);
