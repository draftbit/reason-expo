module NativeAdsManager = {
  class type _adsManager =
    [@bs]
    {
      pub disableAutoRefresh: unit => unit;
      pub setMediaCachePolicy: string => unit;
      pub setMediaCachePolicy: string => unit;
    };

  type t = Js.t(_adsManager);

  [@bs.new] [@bs.module "expo-ads-facebook"]
  external make: (string, int) => t = "NativeAdsManager";
};

module InterstitialAdManager = {
  [@bs.module "expo-ads-facebook"] [@bs.scope "InterstitialAdManager"]
  external showAd: string => Js.Promise.t(unit) = "showAd";
};

module AdSettings = {
  [@bs.module "expo-ads-facebook"] [@bs.scope "AdSettings"]
  external currentDeviceHash: string = "currentDeviceHash";

  [@bs.module "expo-ads-facebook"] [@bs.scope "AdSettings"]
  external addTestDevice: string => unit = "addTestDevice";

  [@bs.module "expo-ads-facebook"] [@bs.scope "AdSettings"]
  external clearTestDevices: unit => unit = "clearTestDevices";

  [@bs.module "expo-ads-facebook"] [@bs.scope "AdSettings"]
  external setLogLevel: string => unit = "setLogLevel";

  [@bs.module "expo-ads-facebook"] [@bs.scope "AdSettings"]
  external setIsChildDirected: bool => unit = "setIsChildDirected";

  [@bs.module "expo-ads-facebook"] [@bs.scope "AdSettings"]
  external setMediationService: string => unit = "setMediationService";

  [@bs.module "expo-ads-facebook"] [@bs.scope "AdSettings"]
  external setUrlPrefix: string => unit = "setUrlPrefix";
};

[@bs.module "expo-ads-facebook"]
external withNativeAd: React.element => React.element = "withNativeAd";

module AdMediaView = {
  [@bs.module "expo-ads-facebook"] [@react.component]
  external make: (~children: React.element=?, ~key: string=?) => React.element =
    "AdMediaView";
};

module AdIconView = {
  [@bs.module "expo-ads-facebook"] [@react.component]
  external make: (~children: React.element=?, ~key: string=?) => React.element =
    "AdIconView";
};

module AdTriggerView = {
  [@bs.module "expo-ads-facebook"] [@react.component]
  external make:
    (
      ~renderInteractiveComponent: 'a => React.element=?,
      ~onPress: unit => unit=?,
      ~children: React.element=?,
      ~key: string=?
    ) =>
    React.element =
    "AdTriggerView";
};

module BannerAd = {
  [@bs.module "expo-ads-facebook"] [@react.component]
  external make:
    (
      ~placementId: string,
      ~type_: string,
      ~onPress: unit => unit=?,
      ~onError: Js.Exn.t => unit=?,
      ~style: ReactNative.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "BannerAd";
};
