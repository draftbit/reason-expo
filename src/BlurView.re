[@bs.module "expo"] external js: ReasonReact.reactClass = "BlurView";

type tint =
  | Light
  | Default
  | Dark;

[@bs.deriving abstract]
type props = {
  tint: string,
  intensity: int,
  style: BsReactNative.Style.t,
};

let make =
    (
      ~tint: tint=Default,
      ~intensity=50,
      ~style=BsReactNative.Style.style([]),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=
      props(
        ~tint=
          switch (tint) {
          | Default => "default"
          | Light => "light"
          | Dark => "dark"
          },
        ~intensity,
        ~style,
      ),
    children,
  );