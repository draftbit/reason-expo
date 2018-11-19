[@bs.module "expo"] external js: ReasonReact.reactClass = "Video";

[@bs.module "expo"] [@bs.scope "Video"]
external resize_mode_stretch: ReasonReact.reactClass = "RESIZE_MODE_STRETCH";

[@bs.module "expo"] [@bs.scope "Video"]
external resize_mode_contain: ReasonReact.reactClass = "RESIZE_MODE_CONTAIN";

[@bs.module "expo"] [@bs.scope "Video"]
external resize_mode_cover: ReasonReact.reactClass = "RESIZE_MODE_COVER";

type resizeMode =
  | COVER
  | CONTAIN
  | STRETCH;

module Source = {
  type t = [
    | `URI(string)
    | `Required(BsReactNative.Packager.required)
    | `Asset(Asset.t)
    | `NullSource
  ];

  type rawSourceJS;
  external rawSourceJS: 'a => rawSourceJS = "%identity";

  let encodeSource = (src: t) =>
    switch (src) {
    | `URI(uri) => rawSourceJS({"uri": uri})
    | `Required(package) => rawSourceJS(package)
    | `Asset(asset) => rawSourceJS(asset)
    | `NullSource => rawSourceJS(Js.null)
    };
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

let make =
    (
      ~source=`NullSource,
      ~posterSource=`NullSource,
      ~rate: option(float)=?,
      ~isMuted=false,
      ~useNativeControls=false,
      ~resizeMode=COVER,
      ~isLooping=false,
      ~shouldPlay=false,
      ~volume=1.0,
      ~onPlaybackStatusUpdate: playbackStatus => unit=_ => (),
      ~onReadyForDisplay: onReadyForDisplayParam => unit=_ => (),
      ~onFullscreenUpdate: onFullscreenUpdateParam => unit=_ => (),
      ~style=BsReactNative.Style.style([]),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props={
      "source": Source.encodeSource(source),
      "posterSource": Source.encodeSource(posterSource),
      "rate": Js.Nullable.fromOption(rate),
      "isMuted": isMuted,
      "useNativeControls": useNativeControls,
      "onPlaybackStatusUpdate": onPlaybackStatusUpdate,
      "volume": volume,
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
