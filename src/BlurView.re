[@bs.module "expo"] external js : ReasonReact.reactClass = "BlurView";

type tint =
  | Light
  | Default
  | Dark;

let make = (~tint: tint=Default, ~intensity: int, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props={
      "tint":
        switch (tint) {
        | Default => "default"
        | Light => "light"
        | Dark => "dark"
        },
      "intensity": intensity,
      "style": Js.Undefined.fromOption(style),
    },
    children,
  );