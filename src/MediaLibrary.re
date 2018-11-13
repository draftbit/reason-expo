module MediaType = {
  type t;

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "MediaType")]
  external photo: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "MediaType")]
  external video: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "MediaType")]
  external audio: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "MediaType")]
  external unknown: t = "";
};

module SortBy = {
  type t;

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "SortBy")]
  external default: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "SortBy")]
  external id: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "SortBy")]
  external creationTime: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "SortBy")]
  external modificationTime: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "SortBy")]
  external mediaType: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "SortBy")]
  external width: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "SortBy")]
  external height: t = "";

  [@bs.module "expo"] [@bs.scope ("MediaLibrary", "SortBy")]
  external duration: t = "";
};

[@bs.deriving abstract]
type asset('exif) = {
  id: string,
  filename: string,
  uri: string,
  mediaType: MediaType.t,
  width: float,
  height: float,
  creationTime: float,
  modificationTime: float,
  duration: float,
  mediaSubtypes: array(string),
  albumId: string,
  localUri: string,
  location:
    Js.Nullable.t({
      .
      latitude: float,
      longitude: float,
    }),
  exif: 'exif,
  orientation: float,
  isFavorite: bool,
};

[@bs.deriving abstract]
type album = {
  id: string,
  title: string,
  assetCount: int,
  [@bs.as "type"]
  type_: string,
  startTime: float,
  endTime: float,
  approximateLocation:
    Js.Nullable.t({
      .
      latitude: float,
      longitude: float,
    }),
  locationNames: array(string),
};

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external createAssetAsync: string => Js.Promise.t(asset('exif)) = "";

module AlbumOption = {
  type t = [ | `ID(string) | `Album(album)];

  type rawSourceJS;
  external rawSourceJS: 'a => rawSourceJS = "%identity";

  let encodeSource = (src: t) =>
    switch (src) {
    | `ID(id) => rawSourceJS(id)
    | `Album(album) => rawSourceJS(album)
    };
};

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external _getAssetsAsync:
  {
    .
    "first": int,
    "after": string,
    "album": AlbumOption.rawSourceJS,
    "sortBy": array(SortBy.t),
    "mediaType": array(MediaType.t),
  } =>
  Js.Promise.t({
    .
    assets: array(asset('exif)),
    endCursor: string,
    hasNextPage: bool,
    totalCount: int,
  }) =
  "getAssetsAsync";

let getAssetsAsync = (~first, ~after, ~album, ~sortBy, ~mediaType) =>
  _getAssetsAsync({
    "first": first,
    "after": after,
    "album": AlbumOption.encodeSource(album),
    "sortBy": sortBy,
    "mediaType": mediaType,
  });

module AssetOption = {
  type t = [ | `ID(string) | `Asset(asset({.}))];

  type rawSourceJS;
  external rawSourceJS: 'a => rawSourceJS = "%identity";

  let encodeSource = (src: t) =>
    switch (src) {
    | `ID(id) => rawSourceJS(id)
    | `Asset(asset) => rawSourceJS(asset)
    };
};

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external _getAssetInfoAsync:
  AssetOption.rawSourceJS => Js.Promise.t(asset('exif)) =
  "getAssetInfoAsync";

let getAssetInfoAsync = asset =>
  _getAssetInfoAsync(AssetOption.encodeSource(asset));

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external _deleteAssetsAsync:
  array(AssetOption.rawSourceJS) => Js.Promise.t(bool) =
  "deleteAssetsAsync";

let deleteAssetsAsync = assets =>
  _deleteAssetsAsync(Array.map(a => AssetOption.encodeSource(a), assets));

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external getAlbumsAsync: unit => Js.Promise.t(array(album)) = "";

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external getAlbumAsync: string => Js.Promise.t(Js.Nullable.t(album)) = "";

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external _createAlbumAsync:
  (string, AlbumOption.rawSourceJS, bool) => Js.Promise.t(album) =
  "createAlbumAsync";

let createAlbumAsync = (albumName, asset, copyAsset) =>
  _createAlbumAsync(albumName, AlbumOption.encodeSource(asset), copyAsset);

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external _deleteAlbumsAsync:
  (array(AlbumOption.rawSourceJS), bool) => Js.Promise.t(bool) =
  "deleteAlbumsAsync";

let deleteAlbumsAsync = (albums, deleteAssets) =>
  _deleteAlbumsAsync(
    Array.map(a => AlbumOption.encodeSource(a), albums),
    deleteAssets,
  );

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external _addAssetsToAlbumAsync:
  (array(asset('exif)), array(AlbumOption.rawSourceJS), bool) =>
  Js.Promise.t(bool) =
  "addAssetsToAlbumAsync";

let addAssetsToAlbumAsync = (assets, albums, deleteAssets) =>
  _addAssetsToAlbumAsync(
    assets,
    Array.map(a => AlbumOption.encodeSource(a), albums),
    deleteAssets,
  );

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external _removeAssetsFromAlbumAsync:
  (array(asset('exif)), array(AlbumOption.rawSourceJS)) =>
  Js.Promise.t(bool) =
  "removeAssetsFromAlbumAsync";

let removeAssetsFromAlbumAsync = (assets, albums) =>
  _removeAssetsFromAlbumAsync(
    assets,
    Array.map(a => AlbumOption.encodeSource(a), albums),
  );

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external getMomentsAsync: unit => Js.Promise.t(array(album)) = "";

class type eventSubscription =
  [@bs]
  {
    pub remove: unit => unit;
  };

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external addListener:
  ((array(asset('a)), array(asset('a))) => unit) => eventSubscription =
  "";

[@bs.module "expo"] [@bs.scope "MediaLibrary"]
external removeAllListeners: unit => unit = "";