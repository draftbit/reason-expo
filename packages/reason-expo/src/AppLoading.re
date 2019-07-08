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
  [@bs.optional]
  children: React.element,
};

let makeProps =
    (
      ~startAsync=() => Js.Promise.resolve(),
      ~onError=_error => (),
      ~onFinish=() => (),
      ~autoHideSplash=true,
      ~children,
    ) =>
  props(~startAsync, ~onError, ~onFinish, ~autoHideSplash, ~children);

[@bs.module "expo"] [@react.component]
external make: props => React.element = "AppLoading";