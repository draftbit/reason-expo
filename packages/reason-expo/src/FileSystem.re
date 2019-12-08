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


type fileInfo = {
  exists: bool,
  isDirectory: option(bool),
  modificationTime: option(int),
  size: option(int),
  uri: option(string),
  md5: option(string),
};


type getInfoAsyncOptions = {
  md5: option(bool),
  size: option(bool),
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


type writeAsStringAsyncOptions = {encoding: EncodingTypes.t};

[@bs.module "expo-file-system"]
external writeAsStringAsync: (string, string) => Js.Promise.t(unit) =
  "writeAsStringAsync";


type deleteAsyncOptions = {

  idempotent: option(bool),
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

  type downloadAsyncResult('headersType) = {
    uri: string,
    status: int,
    headers: 'headersType,
    md5: option(string),
  };

  [@bs.send]
  external downloadAsync:
    (t, unit) => Js.Promise.t(downloadAsyncResult('headersType)) =
    "downloadAsync";

  type pauseAsyncResult = {
    uri: string,
    fileUri: string,
    options: {. md5: bool},
    resumeData: string,
  };

  [@bs.send]
  external pauseAsync: (t, unit) => Js.Promise.t(pauseAsyncResult) =
    "pauseAsync";

  type resumeAsyncResult('headersType) = {
    uri: string,
    status: int,
    headers: 'headersType,
    md5: option(string),
  };

  [@bs.send]
  external resumeAsync:
    (t, unit) => Js.Promise.t(resumeAsyncResult('headersType)) =
    "resumeAsync";

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