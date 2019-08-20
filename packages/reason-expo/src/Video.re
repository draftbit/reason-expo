module Source = {
  type t;

  [@bs.obj]
  external make:
    (
      ~uri: string,
      ~headers: Js.t('a)=?,
      ~overrideFileExtensionAndroid: string=?,
      unit
    ) =>
    t =
    "";

  external fromRequired: ReactNative.Packager.required => t = "%identity";
  external fromAsset: Asset.t => t = "%identity";
};

module PosterSource = {
  type t;

  [@bs.obj] external make: (~uri: string, unit) => t = "";

  external fromRequired: ReactNative.Packager.required => t = "%identity";
};

[@bs.deriving abstract]
type playbackStatus = {
  isLoaded: bool,
  [@bs.optional]
  error: string,
  [@bs.optional]
  uri: string,
  [@bs.optional]
  progressUpdateIntervalMillis: int,
  [@bs.optional]
  durationMillis: int,
  [@bs.optional]
  positionMillis: int,
  [@bs.optional]
  playableDurationMillis: int,
  [@bs.optional]
  shouldPlay: bool,
  [@bs.optional]
  isPlaying: bool,
  [@bs.optional]
  isBuffering: bool,
  [@bs.optional]
  rate: float,
  [@bs.optional]
  shouldCorrectPitch: bool,
  [@bs.optional]
  volume: float,
  [@bs.optional]
  isMuted: bool,
  [@bs.optional]
  isLooping: bool,
  [@bs.optional]
  didJustFinish: bool,
};

[@bs.deriving abstract]
type onReadyForDisplayParam = {
  naturalSize: {
    .
    "width": float,
    "height": float,
    "orientation": string,
  },
  status: playbackStatus,
};

[@bs.deriving abstract]
type onFullscreenUpdateParam = {
  fullscreenUpdate: int,
  status: playbackStatus,
};

/**
 * Usage
 * <Expo.Video
 *   style=videoStyle
 *   source=Expo.Video.Source.make(~uri=item##hosted_video_url, ())
 *   posterSource=Expo.Video.PosterSource.fromRequired(Packager.required("./some/thing.jpg"))
 *   resizeMode=`cover
 *   shouldPlay=true
 * />
 */
[@react.component] [@bs.module "expo-av"]
external make:
  (
    ~source: Source.t=?,
    ~posterSource: PosterSource.t=?,
    ~rate: float=?,
    ~isMuted: bool=?,
    ~useNativeControls: bool=?,
    ~usePoster: bool=?,
    ~resizeMode: [@bs.string] [ | `stretch | `contain | `cover]=?,
    ~isLooping: bool=?,
    ~shouldPlay: bool=?,
    ~volume: float=?,
    ~onPlaybackStatusUpdate: playbackStatus => unit=?,
    ~onReadyForDisplay: onReadyForDisplayParam => unit=?,
    ~onFullscreenUpdate: onFullscreenUpdateParam => unit=?,
    ~onLoadStart: unit => unit=?,
    ~onLoad: playbackStatus => unit=?,
    ~onError: string => unit=?,
    ~style: ReactNative.Style.t=?
  ) =>
  React.element =
  "Video";
