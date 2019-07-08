type bannerSize =
  | Banner
  | LargeBanner
  | MediumRectangle
  | FullBanner
  | Leaderboard
  | SmartBannerPortrait
  | SmartBannerLandscape;

module AdMobBanner = {
  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    bannerSize: string,
    [@bs.optional]
    onAdViewDidReceiveAd: unit => unit,
    [@bs.optional]
    onDidFailToReceiveAdWithError: string => unit,
    [@bs.optional]
    onAdViewWillPresentScreen: unit => unit,
    [@bs.optional]
    onAdViewWillDismissScreen: unit => unit,
    [@bs.optional]
    onAdViewDidDismissScreen: unit => unit,
    [@bs.optional]
    onAdViewWillLeaveApplication: unit => unit,
    [@bs.optional]
    children: React.element,
  };

  let makeProps =
      (
        ~bannerSize=Banner,
        ~onAdViewDidReceiveAd=() => (),
        ~onDidFailToReceiveAdWithError=_e => (),
        ~onAdViewWillPresentScreen=() => (),
        ~onAdViewWillDismissScreen=() => (),
        ~onAdViewDidDismissScreen=() => (),
        ~onAdViewWillLeaveApplication=() => (),
        ~children,
      ) =>
    props(
      ~bannerSize=
        switch (bannerSize) {
        | Banner => "banner"
        | LargeBanner => "largeBanner"
        | MediumRectangle => "mediumRectangle"
        | FullBanner => "fullBanner"
        | Leaderboard => "leaderboard"
        | SmartBannerPortrait => "smartBannerPortrait"
        | SmartBannerLandscape => "smartBannerLandscape"
        },
      ~onAdViewDidReceiveAd,
      ~onDidFailToReceiveAdWithError,
      ~onAdViewWillPresentScreen,
      ~onAdViewWillDismissScreen,
      ~onAdViewDidDismissScreen,
      ~onAdViewWillLeaveApplication,
      ~children,
    );

  [@bs.module "expo-ads-admob"] [@react.component]
  external make: props => React.element = "AdMobBanner";
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