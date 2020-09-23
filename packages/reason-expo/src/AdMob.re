module AdMobBanner = {
  [@bs.module "expo-ads-admob"] [@react.component]
  external make:
    (
      ~bannerSize: [
                     | `banner
                     | `largeBanner
                     | `mediumRectangle
                     | `fullBanner
                     | `leaderboard
                     | `smartBannerPortrait
                     | `smartBannerLandscape
                   ]
                     =?,
      ~onAdViewDidReceiveAd: unit => unit=?,
      ~onDidFailToReceiveAdWithError: string => unit=?,
      ~onAdViewWillPresentScreen: unit => unit=?,
      ~onAdViewWillDismissScreen: unit => unit=?,
      ~onAdViewDidDismissScreen: unit => unit=?,
      ~onAdViewWillLeaveApplication: unit => unit=?,
      ~children: React.element=?
    ) =>
    React.element =
    "AdMobBanner";
};

module AdMobInterstitial = {
  [@bs.module "expo-ads-admob"] [@bs.scope "AdMobInterstitial"]
  external setAdUnitID: string => unit = "setAdUnitID";
  [@bs.module "expo-ads-admob"] [@bs.scope "AdMobInterstitial"]
  external setTestDeviceID: string => unit = "setTestDeviceID";
  [@bs.module "expo-ads-admob"] [@bs.scope "AdMobInterstitial"]
  external requestAdAsync: unit => Js.Promise.t(unit) = "requestAdAsync";
  [@bs.module "expo-ads-admob"] [@bs.scope "AdMobInterstitial"]
  external showAdAsync: unit => Js.Promise.t(unit) = "showAdAsync";
  [@bs.module "expo-ads-admob"] [@bs.scope "AdMobInterstitial"]
  external getIsReadyAsync: unit => Js.Promise.t(bool) = "getIsReadyAsync";
};

module AdMobRewarded = {
  [@bs.module "expo-ads-admob"] [@bs.scope "AdMobRewarded"]
  external setAdUnitID: string => unit = "setAdUnitID";
  [@bs.module "expo-ads-admob"] [@bs.scope "AdMobRewarded"]
  external setTestDeviceID: string => unit = "setTestDeviceID";
  [@bs.module "expo-ads-admob"] [@bs.scope "AdMobRewarded"]
  external requestAdAsync: unit => Js.Promise.t(unit) = "requestAdAsync";
  [@bs.module "expo-ads-admob"] [@bs.scope "AdMobRewarded"]
  external showAdAsync: unit => Js.Promise.t(unit) = "showAdAsync";
};
