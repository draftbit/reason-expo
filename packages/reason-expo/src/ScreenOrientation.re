module Orientation = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "Orientation")]
  external unknown: t = "UNKNOWN";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "Orientation")]
  external portrait: t = "PORTRAIT";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "Orientation")]
  external portraitUp: t = "PORTRAIT_UP";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "Orientation")]
  external portraitDown: t = "PORTRAIT_DOWN";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "Orientation")]
  external landscape: t = "LANDSCAPE";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "Orientation")]
  external landscapeLeft: t = "LANDSCAPE_LEFT";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "Orientation")]
  external landscapeRight: t = "LANDSCAPE_RIGHT";
};

module OrientationLock = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external default: t = "DEFAULT";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external all: t = "ALL";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external portrait: t = "PORTRAIT";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external portraitUp: t = "PORTRAIT_UP";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external portraitDown: t = "PORTRAIT_DOWN";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external landscape: t = "LANDSCAPE";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external landscapeLeft: t = "LANDSCAPE_LEFT";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external landscapeRight: t = "LANDSCAPE_RIGHT";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external other: t = "OTHER";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "OrientationLock")]
  external unknown: t = "UNKNOWN";
};

module SizeClassIOS = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "SizeClassIOS")]
  external regular: t = "REGULAR";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "SizeClassIOS")]
  external compact: t = "COMPACT";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "SizeClassIOS")]
  external unknown: t = "UNKNOWN";
};

module WebOrientationLock = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "WebOrientationLock")]
  external portraitPrimary: t = "PORTRAIT_PRIMARY";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "WebOrientationLock")]
  external portraitSecondary: t = "PORTRAIT_SECONDARY";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "WebOrientationLock")]
  external portrait: t = "PORTRAIT";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "WebOrientationLock")]
  external landscapePrimary: t = "LANDSCAPE_PRIMARY";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "WebOrientationLock")]
  external landscapeSecondary: t = "LANDSCAPE_SECONDARY";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "WebOrientationLock")]
  external landscape: t = "LANDSCAPE";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "WebOrientationLock")]
  external any: t = "ANY";

  [@bs.module "expo"] [@bs.scope ("ScreenOrientation", "WebOrientationLock")]
  external unknown: t = "UNKNOWN";
};

type platformOrientationInfo = {
  screenOrientationConstantAndroid: int,
  screenOrientationArrayIOS: array(Orientation.t),
  screenOrientationLockWebOrientation: WebOrientationLock.t,
};

type orientationInfo = {
  orientation: Orientation.t,
  verticalSizeClass: SizeClassIOS.t,
  horizontalSizeClass: SizeClassIOS.t,
};

type orientationChangeEvent = {
  orientationLock: OrientationLock.t,
  orientationInfo,
};

module Subscription = {

  type t;

  [@bs.send] external remove: (t, unit) => unit = "remove";
};

type orientationChangeListener = orientationChangeEvent => unit;

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external allowAsync: OrientationLock.t => Js.Promise.t(unit) = "allowAsync";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external lockAsync: OrientationLock.t => Js.Promise.t(unit) = "lockAsync";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external lockPlatformAsync: platformOrientationInfo => Js.Promise.t(unit) =
  "lockPlatformAsync";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external unlockAsync: unit => Js.Promise.t(unit) = "unlockAsync";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external getOrientationLockAsync: unit => Js.Promise.t(OrientationLock.t) =
  "getOrientationLockAsync";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external getPlatformOrientationLockAsync:
  unit => Js.Promise.t(platformOrientationInfo) =
  "getPlatformOrientationLockAsync";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external supportsOrientationLockAsync: OrientationLock.t => Js.Promise.t(bool) =
  "supportsOrientationLockAsync";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external addOrientationChangeListener:
  orientationChangeListener => Subscription.t =
  "addOrientationChangeListener";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external removeOrientationChangeListeners: unit => unit = "removeOrientationChangeListeners";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external removeOrientationChangeListener: Subscription.t => unit = "removeOrientationChangeListener";