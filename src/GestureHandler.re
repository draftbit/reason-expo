module BaseButton = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "BaseButton";

  let make =
      (
        ~onActiveStateChange: bool => unit=_ => (),
        ~onPress: unit => unit=() => (),
        ~style=ReactNative.Style.style(),
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
        ~style=ReactNative.Style.style(),
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
        ~style=ReactNative.Style.style(),
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
           (ReactNative.Animated.Value.t, ReactNative.Animated.Value.t) =>
           ReasonReact.reactElement=(_, _) => ReasonReact.null,
        ~renderRightActions:
           (ReactNative.Animated.Value.t, ReactNative.Animated.Value.t) =>
           ReasonReact.reactElement=(_, _) => ReasonReact.null,
        ~style=ReactNative.Style.style(),
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

module DrawerLayout = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "DrawerLayout";

  let make =
      (
        ~drawerType: string="front",
        ~edgeWidth: option(float)=?,
        ~hideStatusBar: option(bool)=?,
        ~statusBarAnimation: string="slide",
        ~overlayColor: string="black",
        ~renderNavigationView:
           ReactNative.Animated.Value.t => ReasonReact.reactElement=_ =>
                                                                    ReasonReact.null,
        ~style=ReactNative.Style.style(),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "drawerType": drawerType,
        "edgeWidth": Js.Undefined.fromOption(edgeWidth),
        "hideStatusBar": Js.Undefined.fromOption(hideStatusBar),
        "statusBarAnimation": statusBarAnimation,
        "overlayColor": overlayColor,
        "renderNavigationView": renderNavigationView,
        "style": style,
      },
      children,
    );
};

module PanGestureHandler = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "PanGestureHandler";

  let make =
      (
        ~enabled: bool=true,
        ~shouldCancelWhenOutside: bool=true,
        ~simultaneousHandlers: option(array(ReasonReact.reactRef))=?,
        ~waitFor: option(array(ReasonReact.reactRef))=?,
        ~hitSlop:
           option({
             .
             left: float,
             right: float,
             top: float,
             bottom: float,
             width: float,
             height: float,
           })=?,
        ~onGestureEvent: 'a => unit=_ => (),
        ~onHandlerStateChange: 'a => unit=_ => (),
        ~minDist: option(float)=?,
        ~minPointers: option(int)=?,
        ~maxPointers: option(int)=?,
        ~activeOffsetX: option((float, float))=?,
        ~activeOffsetY: option((float, float))=?,
        ~failOffsetY: option((float, float))=?,
        ~failOffsetX: option((float, float))=?,
        ~style=ReactNative.Style.style(),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "enabled": enabled,
        "shouldCancelWhenOutside": shouldCancelWhenOutside,
        "simultaneousHandlers": Js.Undefined.fromOption(simultaneousHandlers),
        "waitFor": Js.Undefined.fromOption(waitFor),
        "hitSlop": Js.Undefined.fromOption(hitSlop),
        "onGestureEvent": onGestureEvent,
        "onHandlerStateChange": onHandlerStateChange,
        "minDist": Js.Undefined.fromOption(minDist),
        "minPointers": Js.Undefined.fromOption(minPointers),
        "maxPointers": Js.Undefined.fromOption(maxPointers),
        "activeOffsetX": Js.Undefined.fromOption(activeOffsetX),
        "activeOffsetY": Js.Undefined.fromOption(activeOffsetY),
        "failOffsetY": Js.Undefined.fromOption(failOffsetY),
        "failOffsetX": Js.Undefined.fromOption(failOffsetX),
        "style": style,
      },
      children,
    );
};

module TapGestureHandler = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "TapGestureHandler";

  let make =
      (
        ~enabled: bool=true,
        ~shouldCancelWhenOutside: bool=true,
        ~simultaneousHandlers: option(array(ReasonReact.reactRef))=?,
        ~waitFor: option(array(ReasonReact.reactRef))=?,
        ~hitSlop:
           option({
             .
             left: float,
             right: float,
             top: float,
             bottom: float,
             width: float,
             height: float,
           })=?,
        ~onGestureEvent: 'a => unit=_ => (),
        ~onHandlerStateChange: 'a => unit=_ => (),
        ~minPointers: option(int)=?,
        ~maxDurationMs: option(float)=?,
        ~maxDelayMs: option(float)=?,
        ~numberOfTaps: option(int)=?,
        ~maxDeltaX: option(float)=?,
        ~maxDeltaY: option(float)=?,
        ~maxDist: option(float)=?,
        ~style=ReactNative.Style.style(),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "enabled": enabled,
        "shouldCancelWhenOutside": shouldCancelWhenOutside,
        "simultaneousHandlers": Js.Undefined.fromOption(simultaneousHandlers),
        "waitFor": Js.Undefined.fromOption(waitFor),
        "hitSlop": Js.Undefined.fromOption(hitSlop),
        "onGestureEvent": onGestureEvent,
        "onHandlerStateChange": onHandlerStateChange,
        "minPointers": Js.Undefined.fromOption(minPointers),
        "maxDurationMs": Js.Undefined.fromOption(maxDurationMs),
        "maxDelayMs": Js.Undefined.fromOption(maxDelayMs),
        "numberOfTaps": Js.Undefined.fromOption(numberOfTaps),
        "maxDeltaX": Js.Undefined.fromOption(maxDeltaX),
        "maxDeltaY": Js.Undefined.fromOption(maxDeltaY),
        "maxDist": Js.Undefined.fromOption(maxDist),
        "style": style,
      },
      children,
    );
};

module LongPressGestureHandler = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "LongPressGestureHandler";

  let make =
      (
        ~enabled: bool=true,
        ~shouldCancelWhenOutside: bool=true,
        ~simultaneousHandlers: option(array(ReasonReact.reactRef))=?,
        ~waitFor: option(array(ReasonReact.reactRef))=?,
        ~hitSlop:
           option({
             .
             left: float,
             right: float,
             top: float,
             bottom: float,
             width: float,
             height: float,
           })=?,
        ~onGestureEvent: 'a => unit=_ => (),
        ~onHandlerStateChange: 'a => unit=_ => (),
        ~minDurationMs: option(float)=?,
        ~maxDist: option(float)=?,
        ~style=ReactNative.Style.style(),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "enabled": enabled,
        "shouldCancelWhenOutside": shouldCancelWhenOutside,
        "simultaneousHandlers": Js.Undefined.fromOption(simultaneousHandlers),
        "waitFor": Js.Undefined.fromOption(waitFor),
        "hitSlop": Js.Undefined.fromOption(hitSlop),
        "onGestureEvent": onGestureEvent,
        "onHandlerStateChange": onHandlerStateChange,
        "minDurationMs": minDurationMs,
        "maxDist": maxDist,
        "style": style,
      },
      children,
    );
};

module RotationGestureHandler = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "RotationGestureHandler";

  let make =
      (
        ~enabled: bool=true,
        ~shouldCancelWhenOutside: bool=true,
        ~simultaneousHandlers: option(array(ReasonReact.reactRef))=?,
        ~waitFor: option(array(ReasonReact.reactRef))=?,
        ~hitSlop:
           option({
             .
             left: float,
             right: float,
             top: float,
             bottom: float,
             width: float,
             height: float,
           })=?,
        ~onGestureEvent: 'a => unit=_ => (),
        ~onHandlerStateChange: 'a => unit=_ => (),
        ~style=ReactNative.Style.style(),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "enabled": enabled,
        "shouldCancelWhenOutside": shouldCancelWhenOutside,
        "simultaneousHandlers": Js.Undefined.fromOption(simultaneousHandlers),
        "waitFor": Js.Undefined.fromOption(waitFor),
        "hitSlop": Js.Undefined.fromOption(hitSlop),
        "onGestureEvent": onGestureEvent,
        "onHandlerStateChange": onHandlerStateChange,
        "style": style,
      },
      children,
    );
};

module Directions = {
  type t;
  [@bs.module "expo"] [@bs.scope ("GestureHandler", "Directions")]
  external left: t = "LEFT";
  [@bs.module "expo"] [@bs.scope ("GestureHandler", "Directions")]
  external right: t = "RIGHT";
  [@bs.module "expo"] [@bs.scope ("GestureHandler", "Directions")]
  external down: t = "DOWN";
  [@bs.module "expo"] [@bs.scope ("GestureHandler", "Directions")]
  external up: t = "UP";
};

module FlingGestureHandler = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "FlingGestureHandler";

  let make =
      (
        ~enabled: bool=true,
        ~shouldCancelWhenOutside: bool=true,
        ~simultaneousHandlers: option(array(ReasonReact.reactRef))=?,
        ~waitFor: option(array(ReasonReact.reactRef))=?,
        ~hitSlop:
           option({
             .
             left: float,
             right: float,
             top: float,
             bottom: float,
             width: float,
             height: float,
           })=?,
        ~onGestureEvent: 'a => unit=_ => (),
        ~onHandlerStateChange: 'a => unit=_ => (),
        ~direction: option(Directions.t)=?,
        ~numberOfPointers: option(int)=?,
        ~style=ReactNative.Style.style(),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "enabled": enabled,
        "shouldCancelWhenOutside": shouldCancelWhenOutside,
        "simultaneousHandlers": Js.Undefined.fromOption(simultaneousHandlers),
        "waitFor": Js.Undefined.fromOption(waitFor),
        "hitSlop": Js.Undefined.fromOption(hitSlop),
        "onGestureEvent": onGestureEvent,
        "onHandlerStateChange": onHandlerStateChange,
        "direction": Js.Undefined.fromOption(direction),
        "numberOfPointers": Js.Undefined.fromOption(numberOfPointers),
        "style": style,
      },
      children,
    );
};

module PinchGestureHandler = {
  [@bs.module "expo"] [@bs.scope "GestureHandler"]
  external js: ReasonReact.reactClass = "PinchGestureHandler";

  let make =
      (
        ~enabled: bool=true,
        ~shouldCancelWhenOutside: bool=true,
        ~simultaneousHandlers: option(array(ReasonReact.reactRef))=?,
        ~waitFor: option(array(ReasonReact.reactRef))=?,
        ~hitSlop:
           option({
             .
             left: float,
             right: float,
             top: float,
             bottom: float,
             width: float,
             height: float,
           })=?,
        ~onGestureEvent: 'a => unit=_ => (),
        ~onHandlerStateChange: 'a => unit=_ => (),
        ~style=ReactNative.Style.style(),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "enabled": enabled,
        "shouldCancelWhenOutside": shouldCancelWhenOutside,
        "simultaneousHandlers": Js.Undefined.fromOption(simultaneousHandlers),
        "waitFor": Js.Undefined.fromOption(waitFor),
        "hitSlop": Js.Undefined.fromOption(hitSlop),
        "onGestureEvent": onGestureEvent,
        "onHandlerStateChange": onHandlerStateChange,
        "style": style,
      },
      children,
    );
};