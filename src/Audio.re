[@bs.module "expo"] [@bs.scope "Audio"]
external setIsEnabledAsync: bool => Js.Promise.t(unit) = "";

module InterruptionMode = {
  module IOS = {
    type t;

    [@bs.module "expo"] [@bs.scope "Audio"]
    external mixWithOthers: t = "INTERRUPTION_MODE_IOS_MIX_WITH_OTHERS";

    [@bs.module "expo"] [@bs.scope "Audio"]
    external doNotMix: t = "INTERRUPTION_MODE_IOS_DO_NOT_MIX";

    [@bs.module "expo"] [@bs.scope "Audio"]
    external duckOthers: t = "INTERRUPTION_MODE_IOS_DUCK_OTHERS";
  };

  module Android = {
    type t;

    [@bs.module "expo"] [@bs.scope "Audio"]
    external doNotMix: t = "INTERRUPTION_MODE_ANDROID_DO_NOT_MIX";

    [@bs.module "expo"] [@bs.scope "Audio"]
    external duckOthers: t = "INTERRUPTION_MODE_ANDROID_DUCK_OTHERS";
  };
};

[@bs.deriving abstract]
type audioMode = {
  playsInSilentModeIOS: bool,
  allowsRecordingIOS: bool,
  interruptionModeIOS: InterruptionMode.IOS.t,
  shouldDuckAndroid: bool,
  interruptionModeAndroid: InterruptionMode.Android.t,
  playThroughEarpieceAndroid: bool,
};

[@bs.module "expo"] [@bs.scope "Audio"]
external setAudioModeAsync: audioMode => Js.Promise.t(unit) = "";