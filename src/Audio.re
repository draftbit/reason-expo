[@bs.module "expo"] [@bs.scope "Audio"] [@bs.val]
external setIsEnabled : Js.boolean => Js.Promise.t(unit) = "setIsEnabledAsync";

type sound = {
  .
  [@bs.meth] "playAsync": unit => Js.Promise.t(unit)
  /* [@bs.meth] "loadAsync":  => Js.Promise.t(unit) */
};

[@bs.module "expo"] [@bs.scope "Audio"] [@bs.new]
external createSound : unit => sound = "Sound";
