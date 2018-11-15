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

module Swipeable = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "Swipeable";

  let make =
      (
        ~friction: option(float)=?,
        ~leftThreshold: option(float)=?,
        ~rightThreshold: option(float)=?,
        ~overshootLeft: option(bool)=?,
        ~onSwipeableLeftOpen: unit => unit=() => (),
        ~onSwipeableRightOpen: unit => unit=() => (),
        ~onSwipeableClose: unit => unit=() => (),
        ~onSwipeableLeftWillOpen: unit => unit=() => (),
        ~onSwipeableRightWillOpen: unit => unit=() => (),
        ~onSwipeableWillOpen: unit => unit=() => (),
        ~onSwipeableWillClose: unit => unit=() => (),
        ~renderLeftActions:
           (BsReactNative.Animated.Value.t, BsReactNative.Animated.Value.t) =>
           ReasonReact.reactElement=(_, _) => ReasonReact.null,
        ~renderRightActions:
           (BsReactNative.Animated.Value.t, BsReactNative.Animated.Value.t) =>
           ReasonReact.reactElement=(_, _) => ReasonReact.null,
        ~style=BsReactNative.Style.style([]),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "friction": Js.Undefined.fromOption(friction),
        "leftThreshold": Js.Undefined.fromOption(leftThreshold),
        "rightThreshold": Js.Undefined.fromOption(rightThreshold),
        "overshootLeft": Js.Undefined.fromOption(overshootLeft),
        "onSwipeableLeftOpen": onSwipeableLeftOpen,
        "onSwipeableRightOpen": onSwipeableRightOpen,
        "onSwipeableClose": onSwipeableClose,
        "onSwipeableLeftWillOpen": onSwipeableLeftWillOpen,
        "onSwipeableRightWillOpen": onSwipeableRightWillOpen,
        "onSwipeableWillOpen": onSwipeableWillOpen,
        "onSwipeableWillClose": onSwipeableWillClose,
        "renderLeftActions": renderLeftActions,
        "renderRightActions": renderRightActions,
        "style": style,
      },
      children,
    );
};