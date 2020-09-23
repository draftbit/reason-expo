type getThumbnailAsyncOptions('headers);
[@bs.obj]
external getThumbnailAsyncOptions:
  (~compress: float, ~time: int, ~headers: 'headers) =>
  getThumbnailAsyncOptions('headers);

type getThumbnailAsyncResult = {
  uri: string,
  height: float,
  width: float,
};

[@bs.module "expo-video-thumbnails"]
external getThumbnailAsync:
  (string, getThumbnailAsyncOptions('headers)) =>
  Js.Promise.t(getThumbnailAsyncResult) =
  "getThumbnailAsync";
