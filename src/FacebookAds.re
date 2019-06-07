module NativeAdsManager = {
  class type _adsManager =
    [@bs]
    {
      pub disableAutoRefresh: unit => unit;
      pub setMediaCachePolicy: string => unit;
      pub setMediaCachePolicy: string => unit;
    };

  type t = Js.t(_adsManager);

  [@bs.new] [@bs.module "expo"] [@bs.scope "FacebookAds"]
  external make: (string, int) => t = "NativeAdsManager";
};

module InterstitialAdManager = {
  [@bs.module "expo"] [@bs.scope ("FacebookAds", "InterstitialAdManager")]
  external showAd: string => Js.Promise.t(unit) = "";
};

module AdSettings = {
  [@bs.module "expo"] [@bs.scope ("FacebookAds", "AdSettings")]
  external currentDeviceHash: string = "";

  [@bs.module "expo"] [@bs.scope ("FacebookAds", "AdSettings")]
  external addTestDevice: string => unit = "";

  [@bs.module "expo"] [@bs.scope ("FacebookAds", "AdSettings")]
  external clearTestDevices: unit => unit = "";

  [@bs.module "expo"] [@bs.scope ("FacebookAds", "AdSettings")]
  external setLogLevel: string => unit = "";

  [@bs.module "expo"] [@bs.scope ("FacebookAds", "AdSettings")]
  external setIsChildDirected: bool => unit = "";

  [@bs.module "expo"] [@bs.scope ("FacebookAds", "AdSettings")]
  external setMediationService: string => unit = "";

  [@bs.module "expo"] [@bs.scope ("FacebookAds", "AdSettings")]
  external setUrlPrefix: string => unit = "";
};

[@bs.module "expo"] [@bs.scope "FacebookAds"]
external withNativeAd: ReasonReact.reactClass => ReasonReact.reactClass = "";

module AdMediaView = {
  [@bs.module "expo"] [@bs.scope "FacebookAds"]
  external js: ReasonReact.reactClass = "AdMediaView";

  let make = children =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=Js.Obj.empty(),
      children,
    );
};

module AdIconView = {
  [@bs.module "expo"] [@bs.scope "FacebookAds"]
  external js: ReasonReact.reactClass = "AdIconView";

  let make = children =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=Js.Obj.empty(),
      children,
    );
};

module AdTriggerView = {
  [@bs.module "expo"] [@bs.scope "FacebookAds"]
  external js: ReasonReact.reactClass = "AdTriggerView";

  let make =
      (
        ~renderInteractiveComponent: option('a => ReasonReact.reactElement)=?,
        ~onPress: unit => unit=() => (),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "renderInteractiveComponent":
          Js.Undefined.fromOption(renderInteractiveComponent),
        "onPress": onPress,
      },
      children,
    );
};

module BannerAd = {
  [@bs.module "expo"] [@bs.scope "FacebookAds"]
  external js: ReasonReact.reactClass = "BannerAd";

  let make =
      (
        ~placementId: string,
        ~type_: string,
        ~onPress: unit => unit=() => (),
        ~onError: Js.Exn.t => unit=_ => (),
        ~style=ReactNative.Style.style(),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "placementId": placementId,
        "type": type_,
        "onPress": onPress,
        "onError": onError,
        "style": style,
      },
      children,
    );
};