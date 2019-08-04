[@bs.module "expo-sensors"] [@bs.scope "Pedometer"]
external isAvailableAsync: unit => Js.Promise.t(bool) = "";

[@bs.module "expo-sensors"] [@bs.scope "Pedometer"]
external getStepCountAsync:
  (Js.Date.t, Js.Date.t) => Js.Promise.t({. steps: int}) =
  "";

class type eventSubscription =
  [@bs]
  {
    pub remove: unit => unit;
  };

[@bs.module "expo-sensors"] [@bs.scope "Pedometer"]
external watchStepCount: ({. steps: int} => unit) => eventSubscription = "";