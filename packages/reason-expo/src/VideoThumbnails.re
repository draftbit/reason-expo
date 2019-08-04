[@bs.deriving abstract]
type getThumbnailAsyncOptions('headers) = {
  compress: float,
  time: int,
  headers: 'headers,
};

[@bs.deriving abstract]
type getThumbnailAsyncResult = {
  uri: string,
  height: float,
  width: float,
};

[@bs.module "expo-video-thumbnails"]
external getThumbnailAsync:
  (string, getThumbnailAsyncOptions('headers)) =>
  Js.Promise.t(getThumbnailAsyncResult) =
  "";