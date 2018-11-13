module BaseButton = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "BaseButton";

  let make =
      (
        ~onActiveStateChange: bool => unit=_ => (),
        ~onPress: unit => unit=() => (),
        ~style=BsReactNative.Style.style([]),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "onActiveStateChange": onActiveStateChange,
        "onPress": onPress,
        "style": style,
      },
      children,
    );
};

module BorderlessButton = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "BorderlessButton";

  let make =
      (
        ~onActiveStateChange: bool => unit=_ => (),
        ~onPress: unit => unit=() => (),
        ~borderless: bool=true,
        ~activeOpacity: option(float)=?,
        ~style=BsReactNative.Style.style([]),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "onActiveStateChange": onActiveStateChange,
        "onPress": onPress,
        "borderless": borderless,
        "activeOpacity": Js.Nullable.fromOption(activeOpacity),
        "style": style,
      },
      children,
    );
};

module RectButton = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "RectButton";

  let make =
      (
        ~onActiveStateChange: bool => unit=_ => (),
        ~onPress: unit => unit=() => (),
        ~underlayColor: option(string)=?,
        ~activeOpacity: option(float)=?,
        ~style=BsReactNative.Style.style([]),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "onActiveStateChange": onActiveStateChange,
        "onPress": onPress,
        "underlayColor": Js.Nullable.fromOption(underlayColor),
        "activeOpacity": Js.Nullable.fromOption(activeOpacity),
        "style": style,
      },
      children,
    );
};