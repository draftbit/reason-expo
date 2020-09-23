[@bs.module "expo-file-system"]
external documentDirectory: string = "documentDirectory";

[@bs.module "expo-file-system"]
external cacheDirectory: string = "cacheDirectory";

module EncodingTypes = {
  type t;

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

type getInfoAsyncOptions;
[@bs.obj]
external getInfoAsyncOptions:
  (~md5: bool=?, ~size: bool=?) => getInfoAsyncOptions;

[@bs.module "expo-file-system"]
external getInfoAsync: (string, getInfoAsyncOptions) => Js.Promise.t(fileInfo) =
  "getInfoAsync";

type readAsStringAsyncOptions;
[@bs.obj]
external readAsStringAsyncOptions:
  (~encoding: EncodingTypes.t, ~length: int, ~position: int) =>
  readAsStringAsyncOptions;

[@bs.module "expo-file-system"]
external readAsStringAsync:
  (string, readAsStringAsyncOptions) => Js.Promise.t(string) =
  "readAsStringAsync";

type writeAsStringAsyncOptions;
[@bs.obj]
external writeAsStringAsyncOptions:
  (~encoding: EncodingTypes.t) => writeAsStringAsyncOptions;

[@bs.module "expo-file-system"]
external writeAsStringAsync: (string, string) => Js.Promise.t(unit) =
  "writeAsStringAsync";

type deleteAsyncOptions;
[@bs.obj]
external deleteAsyncOptions: (~idempotent: bool) => deleteAsyncOptions;

[@bs.module "expo-file-system"]
external deleteAsync: (string, deleteAsyncOptions) => Js.Promise.t(unit) =
  "deleteAsync";

type moveAsyncOptions;
[@bs.obj]
external moveAsyncOptions: (~from: string, ~_to: string) => moveAsyncOptions;

[@bs.module "expo-file-system"]
external moveAsync: (string, moveAsyncOptions) => Js.Promise.t(unit) =
  "moveAsync";

type copyAsyncOptions;
[@bs.obj]
external copyAsyncOptions: (~from: string, ~_to: string) => copyAsyncOptions;

[@bs.module "expo-file-system"]
external copyAsync: (string, copyAsyncOptions) => Js.Promise.t(unit) =
  "copyAsync";

type makeDirectoryAsyncOptions;
[@bs.obj]
external makeDirectoryAsyncOptions:
  (~intermediates: bool) => makeDirectoryAsyncOptions;

[@bs.module "expo-file-system"]
external makeDirectoryAsync:
  (string, makeDirectoryAsyncOptions) => Js.Promise.t(unit) =
  "makeDirectoryAsync";

[@bs.module "expo-file-system"]
external readDirectoryAsync: string => Js.Promise.t(array(string)) =
  "readDirectoryAsync";

type downloadAsyncOptions;
[@bs.obj] external downloadAsyncOptions: (~md5: bool) => downloadAsyncOptions;

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
  type t;

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

  type options = {md5: bool};

  type pauseAsyncResult = {
    uri: string,
    fileUri: string,
    options,
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
    options,
    resumeData: string,
  };

  [@bs.send]
  external savable: (t, unit) => Js.Promise.t(savableResult) = "savable";
};

type createDownloadResumableOptions('headersType);
[@bs.obj]
external createDownloadResumableOptions:
  (~md5: bool, ~headers: 'headersType) =>
  createDownloadResumableOptions('headersType);

type createDownloadResumableCallbackParam = {
  totalBytesWritten: int,
  totalBytesExpectedToWrite: int,
};

type createDownloadResumableResult('headersType) = {
  uri: string,
  status: int,
  headers: 'headersType,
  md5: string,
};

[@bs.module "expo-file-system"]
external createDownloadResumable:
  (
    ~uri: string,
    ~fileUri: string,
    ~options: createDownloadResumableOptions('headersType),
    ~callback: createDownloadResumableCallbackParam => unit,
    ~data: string
  ) =>
  DownloadResumable.t =
  "createDownloadResumable";
