module MediaType = {
  type t;

  [@bs.module "expo-media-library"] [@bs.scope "MediaType"]
  external photo: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "MediaType"]
  external video: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "MediaType"]
  external audio: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "MediaType"]
  external unknown: t = "";
};

module SortBy = {
  type t;

  [@bs.module "expo-media-library"] [@bs.scope "SortBy"]
  external default: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "SortBy"] external id: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "SortBy"]
  external creationTime: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "SortBy"]
  external modificationTime: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "SortBy"]
  external mediaType: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "SortBy"]
  external width: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "SortBy"]
  external height: t = "";

  [@bs.module "expo-media-library"] [@bs.scope "SortBy"]
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

[@bs.module "expo-media-library"]
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

[@bs.module "expo-media-library"]
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

[@bs.module "expo-media-library"]
external _getAssetInfoAsync:
  AssetOption.rawSourceJS => Js.Promise.t(asset('exif)) =
  "getAssetInfoAsync";

let getAssetInfoAsync = asset =>
  _getAssetInfoAsync(AssetOption.encodeSource(asset));

[@bs.module "expo-media-library"]
external _deleteAssetsAsync:
  array(AssetOption.rawSourceJS) => Js.Promise.t(bool) =
  "deleteAssetsAsync";

let deleteAssetsAsync = assets =>
  _deleteAssetsAsync(Array.map(a => AssetOption.encodeSource(a), assets));

[@bs.module "expo-media-library"]
external getAlbumsAsync: unit => Js.Promise.t(array(album)) = "";

[@bs.module "expo-media-library"]
external getAlbumAsync: string => Js.Promise.t(Js.Nullable.t(album)) = "";

[@bs.module "expo-media-library"]
external _createAlbumAsync:
  (string, AlbumOption.rawSourceJS, bool) => Js.Promise.t(album) =
  "createAlbumAsync";

let createAlbumAsync = (albumName, asset, copyAsset) =>
  _createAlbumAsync(albumName, AlbumOption.encodeSource(asset), copyAsset);

[@bs.module "expo-media-library"]
external _deleteAlbumsAsync:
  (array(AlbumOption.rawSourceJS), bool) => Js.Promise.t(bool) =
  "deleteAlbumsAsync";

let deleteAlbumsAsync = (albums, deleteAssets) =>
  _deleteAlbumsAsync(
    Array.map(a => AlbumOption.encodeSource(a), albums),
    deleteAssets,
  );

[@bs.module "expo-media-library"]
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

[@bs.module "expo-media-library"]
external _removeAssetsFromAlbumAsync:
  (array(asset('exif)), array(AlbumOption.rawSourceJS)) =>
  Js.Promise.t(bool) =
  "removeAssetsFromAlbumAsync";

let removeAssetsFromAlbumAsync = (assets, albums) =>
  _removeAssetsFromAlbumAsync(
    assets,
    Array.map(a => AlbumOption.encodeSource(a), albums),
  );

[@bs.module "expo-media-library"]
external getMomentsAsync: unit => Js.Promise.t(array(album)) = "";

class type eventSubscription =
  [@bs]
  {
    pub remove: unit => unit;
  };

[@bs.module "expo-media-library"]
external addListener:
  ((array(asset('a)), array(asset('a))) => unit) => eventSubscription =
  "";

[@bs.module "expo-media-library"]
external removeAllListeners: unit => unit = "";