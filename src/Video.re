[@bs.module "expo"] external js : ReasonReact.reactClass = "Video";

[@bs.module "expo"] [@bs.scope "Video"]
external resize_mode_stretch : ReasonReact.reactClass = "RESIZE_MODE_STRETCH";

[@bs.module "expo"] [@bs.scope "Video"]
external resize_mode_contain : ReasonReact.reactClass = "RESIZE_MODE_CONTAIN";

[@bs.module "expo"] [@bs.scope "Video"]
external resize_mode_cover : ReasonReact.reactClass = "RESIZE_MODE_COVER";

type resizeMode =
  | COVER
  | CONTAIN
  | STRETCH;

let make =
    (
      ~source: string,
      ~posterSource: option(string)=?,
      ~rate: option(string)=?,
      ~isMuted: option(bool)=?,
      ~resizeMode: resizeMode,
      ~isLooping: option(bool)=?,
      ~shouldPlay: option(bool)=?,
      ~style: BsReactNative.Style.t=BsReactNative.Style.style([]),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props={
      "source": source,
      "posterSource": Js.Nullable.fromOption(posterSource),
      "rate": Js.Nullable.fromOption(rate),
      "isMuted": Js.Nullable.fromOption(isMuted),
      "resizeMode":
        switch (resizeMode) {
        | COVER => resize_mode_cover
        | CONTAIN => resize_mode_contain
        | STRETCH => resize_mode_stretch
        },
      "isLooping": Js.Nullable.fromOption(isLooping),
      "shouldPlay": Js.Nullable.fromOption(shouldPlay),
      "style": style,
    },
    children,
  );