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
    t;

  external fromRequired: ReactNative.Packager.required => t = "%identity";
  external fromAsset: Asset.t => t = "%identity";
};

module PosterSource = {
  type t;

  [@bs.obj] external make: (~uri: string, unit) => t;

  external fromRequired: ReactNative.Packager.required => t = "%identity";
};

type playbackStatus = {
  isLoaded: bool,
  error: option(string),
  uri: option(string),
  progressUpdateIntervalMillis: option(int),
  durationMillis: option(int),
  positionMillis: option(int),
  playableDurationMillis: option(int),
  shouldPlay: option(bool),
  isPlaying: option(bool),
  isBuffering: option(bool),
  rate: option(float),
  shouldCorrectPitch: option(bool),
  volume: option(float),
  isMuted: option(bool),
  isLooping: option(bool),
  didJustFinish: option(bool),
};

type naturalSize = {
  width: float,
  height: float,
  orientation: string,
};

type onReadyForDisplayParam = {
  naturalSize,
  status: playbackStatus,
};

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
    ~resizeMode: [ | `stretch | `contain | `cover]=?,
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
