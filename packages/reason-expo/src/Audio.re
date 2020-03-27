[@bs.module "expo-av"] [@bs.scope "Audio"]
external setIsEnabledAsync: bool => Js.Promise.t(unit) = "setIsEnabledAsync";

module InterruptionMode = {
  module IOS = {
    type t;

    [@bs.module "expo-av"] [@bs.scope "Audio"]
    external mixWithOthers: t = "INTERRUPTION_MODE_IOS_MIX_WITH_OTHERS";

    [@bs.module "expo-av"] [@bs.scope "Audio"]
    external doNotMix: t = "INTERRUPTION_MODE_IOS_DO_NOT_MIX";

    [@bs.module "expo-av"] [@bs.scope "Audio"]
    external duckOthers: t = "INTERRUPTION_MODE_IOS_DUCK_OTHERS";
  };

  module Android = {
    type t;

    [@bs.module "expo-av"] [@bs.scope "Audio"]
    external doNotMix: t = "INTERRUPTION_MODE_ANDROID_DO_NOT_MIX";

    [@bs.module "expo-av"] [@bs.scope "Audio"]
    external duckOthers: t = "INTERRUPTION_MODE_ANDROID_DUCK_OTHERS";
  };
};

type audioMode = {
  playsInSilentModeIOS: bool,
  allowsRecordingIOS: bool,
  interruptionModeIOS: InterruptionMode.IOS.t,
  shouldDuckAndroid: bool,
  interruptionModeAndroid: InterruptionMode.Android.t,
  playThroughEarpieceAndroid: bool,
};

[@bs.module "expo-av"] [@bs.scope "Audio"]
external setAudioModeAsync: audioMode => Js.Promise.t(unit) = "setAudioModeAsync";

module Source = {
  type t = [
    | `URI(string)
    | `Required(ReactNative.Packager.required)
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

module Sound = {
  class type _sound =
    [@bs]
    {
      pub unloadAsync: unit => Js.Promise.t(unit);
      pub getStatusAsync: unit => Js.Promise.t('a);
      pub setOnPlaybackStatusUpdate: ('a => unit) => unit;
      pub setStatusAsync: 'a => Js.Promise.t(unit);
      pub playAsync: unit => Js.Promise.t(unit);
      pub replayAsync: unit => Js.Promise.t(unit);
      pub pauseAsync: unit => Js.Promise.t(unit);
      pub stopAsync: unit => Js.Promise.t(unit);
      pub setPositionAsync: int => Js.Promise.t(unit);
      pub setRateAsync: (float, bool) => Js.Promise.t(unit);
      pub setVolumeAsync: float => Js.Promise.t(unit);
      pub setIsMutedAsync: bool => Js.Promise.t(unit);
      pub setIsLoopingAsync: bool => Js.Promise.t(unit);
      pub setProgressUpdateIntervalAsync: int => Js.Promise.t(unit);
    };

  type t = Js.t(_sound);

  [@bs.new] [@bs.module "expo-av"] [@bs.scope "Audio"]
  external make: unit => t = "Sound";

  [@bs.module "expo-av"] [@bs.scope ("Audio", "Sound")]
  external _createAsync:
    (Source.rawSourceJS, 'a, 'a => unit, bool) => Js.Promise.t(t) =
    "createAsync";

  let createAsync =
      (source, initialStatus, onPlaybackStatusUpdate, downloadFirst) =>
    _createAsync(
      Source.encodeSource(source),
      initialStatus,
      onPlaybackStatusUpdate,
      downloadFirst,
    );
};

module Recording = {
  type status = {
    canRecord: bool,
    isDoneRecording: bool,
    durationMillis: int,
  };

  class type _recording =
    [@bs]
    {
      pub getStatusAsync: unit => Js.Promise.t(status);
      pub setOnRecordingStatusUpdate: (status => unit) => unit;
      pub setProgressUpdateInterval: int => unit;
      pub prepareToRecordAsync: Js.t('a) => Js.Promise.t(unit);
      pub isPreparedToRecord: unit => bool;
      pub startAsync: unit => Js.Promise.t(status);
      pub pauseAsync: unit => Js.Promise.t(status);
      pub stopAndUnloadAsync: unit => Js.Promise.t(status);
      pub getURI: unit => Js.Nullable.t(string);
      pub createNewLoadedSound:
        ('a, 'a => unit) =>
        Js.Promise.t({
          .
          sound: Sound.t,
          status: 'a,
        });
    };

  type t = Js.t(_recording);

  [@bs.new] [@bs.module "expo-av"] [@bs.scope "Audio"]
  external make: unit => t = "Recording";
};