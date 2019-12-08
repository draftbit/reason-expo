module MediaTypeOptions = {
  [@bs.module "expo-image-picker"] [@bs.scope "MediaTypeOptions"]
  external images: string = "Images";
  [@bs.module "expo-image-picker"] [@bs.scope "MediaTypeOptions"]
  external videos: string = "Videos";
  [@bs.module "expo-image-picker"] [@bs.scope "MediaTypeOptions"]
  external all: string = "all";
};

type launchImageLibraryAsyncOptions = {
  mediaTypes: string,
  allowsEditing: bool,
  aspect: array(int),
  quality: float,
  base64: bool,
  exif: bool,
};

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
  launchImageLibraryAsyncOptions => launchImageLibraryAsyncResult =
  "launchImageLibraryAsync";

type launchCameraAsyncOptions = {
  allowsEditing: bool,
  aspect: array(int),
  quality: float,
  base64: bool,
  exif: bool,
};

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
external launchCameraAsync: launchCameraAsyncOptions => launchCameraAsyncResult =
  "launchCameraAsync";