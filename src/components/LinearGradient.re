[@bs.module "expo"] external js : ReasonReact.reactClass = "LinearGradient";

let make =
    (
      ~colors: array(string),
      ~start: option(array(float))=?,
      ~end_: option(array(float))=?,
      ~locations: option(array(float))=?,
      ~style: option(BsReactNative.Style.t),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props={
      "colors": colors,
      "locations": Js.Nullable.fromOption(locations),
      "start": Js.Nullable.fromOption(start),
      "end": Js.Nullable.fromOption(end_),
      "style": Js.Nullable.fromOption(style),
    },
    children,
  );