[@bs.deriving abstract]
type speakOptions('errorObj) = {
  language: string,
  pitch: float,
  rate: float,
  onStart: unit => unit,
  onDone: unit => unit,
  onStopped: unit => unit,
  onError: 'errorObj => unit,
};

[@bs.module "expo"] [@bs.scope "Speech"]
external speak: (string, speakOptions('a)) => unit = "speak";

[@bs.module "expo"] [@bs.scope "Speech"] external stop: unit => unit = "stop";

[@bs.module "expo"] [@bs.scope "Speech"]
external pause: unit => unit = "pause";

[@bs.module "expo"] [@bs.scope "Speech"]
external resume: unit => unit = "resume";

[@bs.module "expo"] [@bs.scope "Speech"]
external isSpeakingAsync: unit => Js.Promise.t(bool) = "isSpeakingAsync";