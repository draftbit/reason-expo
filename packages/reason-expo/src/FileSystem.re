[@bs.module "expo-file-system"]
external documentDirectory: string = "documentDirectory";

[@bs.module "expo-file-system"]
external cacheDirectory: string = "cacheDirectory";

module EncodingTypes = {
  type t = string;

  [@bs.module "expo-file-system"] [@bs.scope "EncodingTypes"]
  external utf8: t = "UTF8";

  [@bs.module "expo-file-system"] [@bs.scope "EncodingTypes"]
  external base64: t = "Base64";
};

[@bs.deriving abstract]
type fileInfo = {
  exists: bool,
  [@bs.optional]
  isDirectory: bool,
  [@bs.optional]
  modificationTime: int,
  [@bs.optional]
  size: int,
  [@bs.optional]
  uri: string,
  [@bs.optional]
  md5: string,
};

[@bs.deriving abstract]
type getInfoAsyncOptions = {
  [@bs.optional]
  md5: bool,
  [@bs.optional]
  size: bool,
};

[@bs.module "expo-file-system"]
external getInfoAsync: (string, getInfoAsyncOptions) => Js.Promise.t(fileInfo) =
  "getInfoAsync";

[@bs.deriving abstract]
type readAsStringAsyncOptions = {
  encoding: EncodingTypes.t,
  length: int,
  position: int,
};

[@bs.module "expo-file-system"]
external readAsStringAsync:
  (string, readAsStringAsyncOptions) => Js.Promise.t(string) =
  "readAsStringAsync";

[@bs.deriving abstract]
type writeAsStringAsyncOptions = {encoding: EncodingTypes.t};

[@bs.module "expo-file-system"]
external writeAsStringAsync: (string, string) => Js.Promise.t(unit) =
  "writeAsStringAsync";

[@bs.deriving abstract]
type deleteAsyncOptions = {
  [@bs.optional]
  idempotent: bool,
};

[@bs.module "expo-file-system"]
external deleteAsync: (string, deleteAsyncOptions) => Js.Promise.t(unit) =
  "deleteAsync";

[@bs.deriving abstract]
type moveAsyncOptions = {
  from: string,
  [@bs.as "to"]
  to_: string,
};

[@bs.module "expo-file-system"]
external moveAsync: (string, moveAsyncOptions) => Js.Promise.t(unit) =
  "moveAsync";

[@bs.deriving abstract]
type copyAsyncOptions = {
  from: string,
  [@bs.as "to"]
  to_: string,
};

[@bs.module "expo-file-system"]
external copyAsync: (string, copyAsyncOptions) => Js.Promise.t(unit) =
  "copyAsync";

[@bs.deriving abstract]
type makeDirectoryAsyncOptions = {intermediates: bool};

[@bs.module "expo-file-system"]
external makeDirectoryAsync:
  (string, makeDirectoryAsyncOptions) => Js.Promise.t(unit) =
  "makeDirectoryAsync";

[@bs.module "expo-file-system"]
external readDirectoryAsync: string => Js.Promise.t(array(string)) =
  "readDirectoryAsync";

[@bs.deriving abstract]
type downloadAsyncOptions = {md5: bool};

[@bs.deriving abstract]
type downloadAsyncResult('headersType) = {
  uri: string,
  status: int,
  headers: 'headersType,
  md5: string,
};

[@bs.module "expo-file-system"]
external downloadAsync:
  (string, string, downloadAsyncOptions) =>
  Js.Promise.t(downloadAsyncResult('headersType)) =
  "downloadAsync";

module DownloadResumable = {
  type t = {.};

  [@bs.deriving abstract]
  type downloadAsyncResult('headersType) = {
    uri: string,
    status: int,
    headers: 'headersType,
    [@bs.optional]
    md5: string,
  };

  [@bs.send]
  external downloadAsync:
    (t, unit) => Js.Promise.t(downloadAsyncResult('headersType)) =
    "downloadAsync";

  [@bs.deriving abstract]
  type pauseAsyncResult = {
    uri: string,
    fileUri: string,
    options: {. md5: bool},
    resumeData: string,
  };

  [@bs.send]
  external pauseAsync: (t, unit) => Js.Promise.t(pauseAsyncResult) =
    "pauseAsync";

  [@bs.deriving abstract]
  type resumeAsyncResult('headersType) = {
    uri: string,
    status: int,
    headers: 'headersType,
    [@bs.optional]
    md5: string,
  };

  [@bs.send]
  external resumeAsync:
    (t, unit) => Js.Promise.t(resumeAsyncResult('headersType)) =
    "resumeAsync";

  [@bs.deriving abstract]
  type savableResult = {
    uri: string,
    fileUri: string,
    options: {. md5: bool},
    resumeData: string,
  };

  [@bs.send]
  external savable: (t, unit) => Js.Promise.t(savableResult) = "savable";
};

[@bs.deriving abstract]
type createDownloadResumableOptions('headersType) = {
  md5: bool,
  headers: 'headersType,
};

[@bs.deriving abstract]
type createDownloadResumableCallbackParam = {
  totalBytesWritten: int,
  totalBytesExpectedToWrite: int,
};

[@bs.deriving abstract]
type createDownloadResumableResult('headersType) = {
  uri: string,
  status: int,
  headers: 'headersType,
  md5: string,
};

[@bs.module "expo-file-system"]
external createDownloadResumable:
  (
    string,
    string,
    createDownloadResumableOptions('headersType),
    createDownloadResumableCallbackParam => unit,
    string
  ) =>
  DownloadResumable.t =
  "createDownloadResumable";