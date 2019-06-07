[@bs.module "expo"] external js: ReasonReact.reactClass = "LinearGradient";

[@bs.deriving abstract]
type props = {
  colors: array(string),
  start: array(float),
  [@bs.as "end"]
  end_: array(float),
  locations: array(float),
  style: ReactNative.Style.t,
};

let make =
    (
      ~colors,
      ~start=[|0.0, 0.0|],
      ~end_=[|1.0, 1.0|],
      ~locations=[|0.0, 1.0|],
      ~style=ReactNative.Style.style(),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=props(~colors, ~start, ~end_, ~locations, ~style),
    children,
  );