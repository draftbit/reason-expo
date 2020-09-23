type speakOptions('errorObj);
[@bs.obj]
external speakOptions:
  (
    ~language: string,
    ~pitch: float,
    ~rate: float,
    ~onStart: unit => unit,
    ~onDone: unit => unit,
    ~onStopped: unit => unit,
    ~onError: 'errorObj => unit
  ) =>
  speakOptions('errorObj);

[@bs.module "expo-speech"]
external speak: (string, speakOptions('errorObj)) => unit = "speak";

[@bs.module "expo-speech"] external stop: unit => unit = "stop";

[@bs.module "expo-speech"] external pause: unit => unit = "pause";

[@bs.module "expo-speech"] external resume: unit => unit = "resume";

[@bs.module "expo-speech"]
external isSpeakingAsync: unit => Js.Promise.t(bool) = "isSpeakingAsync";
