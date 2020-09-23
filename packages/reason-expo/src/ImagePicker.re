module MediaType = {
  type t;

  [@bs.module "expo-image-picker"] [@bs.scope "MediaTypeOptions"]
  external images: t = "Images";
  [@bs.module "expo-image-picker"] [@bs.scope "MediaTypeOptions"]
  external videos: t = "Videos";
  [@bs.module "expo-image-picker"] [@bs.scope "MediaTypeOptions"]
  external all: t = "all";
};

type launchImageLibraryAsyncOptions;
[@bs.obj]
external launchImageLibraryAsyncOptions:
  (
    ~mediaTypes: MediaType.t,
    ~allowsEditing: bool,
    ~aspect: array(int),
    ~quality: float,
    ~base64: bool,
    ~exif: bool
  ) =>
  launchImageLibraryAsyncOptions;

type launchImageLibraryAsyncResult = {
  cancelled: bool,
  uri: option(string),
  width: option(float),
  height: option(float),
  [@bs.as "type"]
  _type: option(string),
  duration: option(float),
  base64: option(string),
  exif: option(string),
};

[@bs.module "expo-image-picker"]
external launchImageLibraryAsync:
  launchImageLibraryAsyncOptions =>
  Js.Promise.t(launchImageLibraryAsyncResult) =
  "launchImageLibraryAsync";

type launchCameraAsyncOptions;
[@bs.obj]
external launchCameraAsyncOptions:
  (
    ~allowsEditing: bool,
    ~aspect: array(int),
    ~quality: float,
    ~base64: bool,
    ~exif: bool
  ) =>
  launchCameraAsyncOptions;

type launchCameraAsyncResult = {
  cancelled: bool,
  uri: option(string),
  width: option(float),
  height: option(float),
  duration: option(float),
  base64: option(string),
  exif: option(string),
};

[@bs.module "expo-image-picker"]
external launchCameraAsync:
  launchCameraAsyncOptions => Js.Promise.t(launchCameraAsyncResult) =
  "launchCameraAsync";
