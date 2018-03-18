[@bs.module "expo"] [@bs.scope "Audio"]
external interruptionModeIOSMixWithOthers : int =
  "INTERRUPTION_MODE_IOS_MIX_WITH_OTHERS";

[@bs.module "expo"] [@bs.scope "Audio"]
external interruptionModeIOSDoNotMix : int =
  "INTERRUPTION_MODE_IOS_DO_NOT_MIX";

[@bs.module "expo"] [@bs.scope "Audio"]
external interruptionModeIOSDuckOthers : int =
  "INTERRUPTION_MODE_IOS_DUCK_OTHERS";

[@bs.module "expo"] [@bs.scope "Audio"]
external interruptionModeAndroidDoNotMix : int =
  "INTERRUPTION_MODE_ANDROID_DO_NOT_MIX";

[@bs.module "expo"] [@bs.scope "Audio"]
external interruptionModeAndroidDuckOthers : int =
  "INTERRUPTION_MODE_ANDROID_DUCK_OTHERS";

[@bs.module "expo"] [@bs.scope "Audio"]
external setIsEnabledAsync : Js.boolean => Js.Promise.t(unit) =
  "setIsEnabledAsync";

type audioMode = {
  .
  playsInSilentModeIOS: Js.boolean,
  allowsRecordingIOS: Js.boolean,
  interruptionModeIOS: int,
  shouldDuckAndroid: Js.boolean,
  interruptionModeAndroid: int,
};

[@bs.module "expo"] [@bs.scope "Audio"]
external setAudioModeAsync : Js.boolean => Js.Promise.t(unit) =
  "setAudioModeAsync";