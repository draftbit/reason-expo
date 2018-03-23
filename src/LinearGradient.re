[@bs.module "expo"] external js : ReasonReact.reactClass = "LinearGradient";

let make =
    (
      ~colors: array(string),
      ~start=?,
      ~end_=?,
      ~locations=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=
      Js.Undefined.(
        {
          "colors": colors,
          "locations": fromOption(locations),
          "start": fromOption(start),
          "end": fromOption(end_),
          "style": fromOption(style),
        }
      ),
    children,
  );