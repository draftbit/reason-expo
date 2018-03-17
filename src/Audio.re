[@bs.module "expo"] [@bs.scope "Audio"] [@bs.val]
external interruptionModeIOSMixWithOthers : int =
  "INTERRUPTION_MODE_IOS_MIX_WITH_OTHERS";

[@bs.module "expo"] [@bs.scope "Audio"] [@bs.val]
external interruptionModeIOSDoNotMix : int =
  "INTERRUPTION_MODE_IOS_DO_NOT_MIX";

[@bs.module "expo"] [@bs.scope "Audio"] [@bs.val]
external interruptionModeIOSDuckOthers : int =
  "INTERRUPTION_MODE_IOS_DUCK_OTHERS";

[@bs.module "expo"] [@bs.scope "Audio"] [@bs.val]
external interruptionModeAndroidDoNotMix : int =
  "INTERRUPTION_MODE_ANDROID_DO_NOT_MIX";

[@bs.module "expo"] [@bs.scope "Audio"] [@bs.val]
external interruptionModeAndroidDuckOthers : int =
  "INTERRUPTION_MODE_ANDROID_DUCK_OTHERS";

[@bs.module "expo"] [@bs.scope "Audio"] [@bs.val]
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

[@bs.module "expo"] [@bs.scope "Audio"] [@bs.val]
external setAudioModeAsync : Js.boolean => Js.Promise.t(unit) =
  "setAudioModeAsync";
/*
 type sound = {
   .
   [@bs.meth] "playAsync": unit => Js.Promise.t(unit),
   /* [@bs.meth] "loadAsync":  => Js.Promise.t(unit) */
 };

 [@bs.module "expo"] [@bs.scope "Audio"] [@bs.new]
 external createSound : unit => sound = "Sound"; */