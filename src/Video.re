[@bs.module "expo"] external js : ReasonReact.reactClass = "Video";

[@bs.module "expo"] [@bs.scope "Video"]
external resize_mode_stretch : ReasonReact.reactClass = "RESIZE_MODE_STRETCH";

[@bs.module "expo"] [@bs.scope "Video"]
external resize_mode_contain : ReasonReact.reactClass = "RESIZE_MODE_CONTAIN";

[@bs.module "expo"] [@bs.scope "Video"]
external resize_mode_cover : ReasonReact.reactClass = "RESIZE_MODE_COVER";

type resizeMode =
  | COVER
  | CONTAIN
  | STRETCH;

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

let make =
    (
      ~source: 'sourceType, /* Escape to allow for Dict, Packager.required, and Asset source type */
      ~posterSource: 'posterSourceType=?, /* Escape to allow for Dict and Packager.required posterSource type */
      ~rate: option(string)=?,
      ~isMuted: bool=false,
      ~useNativeControls: bool=false,
      ~resizeMode: resizeMode=COVER,
      ~isLooping: bool=false,
      ~shouldPlay: bool=false,
      ~onPlaybackStatusUpdate: playbackStatus => unit=_ps => (),
      ~onReadyForDisplay: onReadyForDisplayParam => unit=_p => (),
      ~onFullscreenUpdate: onFullscreenUpdateParam => unit=_p => (),
      ~style: BsReactNative.Style.t=BsReactNative.Style.style([]),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props={
      "source": source,
      "posterSource": Js.Nullable.fromOption(posterSource),
      "rate": Js.Nullable.fromOption(rate),
      "isMuted": isMuted,
      "useNativeControls": useNativeControls,
      "onPlaybackStatusUpdate": onPlaybackStatusUpdate,
      "onReadyForDisplay": onReadyForDisplay,
      "onFullscreenUpdate": onFullscreenUpdate,
      "resizeMode":
        switch (resizeMode) {
        | COVER => resize_mode_cover
        | CONTAIN => resize_mode_contain
        | STRETCH => resize_mode_stretch
        },
      "isLooping": isLooping,
      "shouldPlay": shouldPlay,
      "style": style,
    },
    children,
  );