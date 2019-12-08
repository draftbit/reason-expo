[@bs.module "expo-sensors"] [@bs.scope "Pedometer"]
external isAvailableAsync: unit => Js.Promise.t(bool) = "isAvailableAsync";

[@bs.module "expo-sensors"] [@bs.scope "Pedometer"]
external getStepCountAsync:
  (Js.Date.t, Js.Date.t) => Js.Promise.t({. steps: int}) =
  "getStepCountAsync";

class type eventSubscription =
  [@bs]
  {
    pub remove: unit => unit;
  };
type steps = {steps: int};
[@bs.module "expo-sensors"] [@bs.scope "Pedometer"]
external watchStepCount: (steps => unit) => eventSubscription = "watchStepCount";