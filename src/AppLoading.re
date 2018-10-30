[@bs.module "expo"] external js: ReasonReact.reactClass = "AppLoading";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  startAsync: unit => Js.Promise.t(unit),
  [@bs.optional]
  onError: string => unit,
  [@bs.optional]
  onFinish: unit => unit,
  [@bs.optional]
  autoHideSplash: bool,
};

let make =
    (
      ~startAsync=() => Js.Promise.resolve(),
      ~onError=_error => (),
      ~onFinish=() => (),
      ~autoHideSplash=true,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=props(~startAsync, ~onError, ~onFinish, ~autoHideSplash, ()),
    children,
  );