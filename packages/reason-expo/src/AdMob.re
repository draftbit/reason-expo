type bannerSize =
  | Banner
  | LargeBanner
  | MediumRectangle
  | FullBanner
  | Leaderboard
  | SmartBannerPortrait
  | SmartBannerLandscape;

module AdMobBanner = {
  type props = {

    bannerSize: option(string),

    onAdViewDidReceiveAd: option(unit => unit),

    onDidFailToReceiveAdWithError: option(string => unit),

    onAdViewWillPresentScreen: option(unit => unit),

    onAdViewWillDismissScreen: option(unit => unit),

    onAdViewDidDismissScreen: option(unit => unit),

    onAdViewWillLeaveApplication: option(unit => unit),

    children: option(React.element),
  };

  let props =
      (
        ~bannerSize=Banner,
        ~onAdViewDidReceiveAd=() => (),
        ~onDidFailToReceiveAdWithError=_e => (),
        ~onAdViewWillPresentScreen=() => (),
        ~onAdViewWillDismissScreen=() => (),
        ~onAdViewDidDismissScreen=() => (),
        ~onAdViewWillLeaveApplication=() => (),
        ~children,
      ) => {
    bannerSize:
      switch (bannerSize) {
      | Banner => Some("banner")
      | LargeBanner => Some("largeBanner")
      | MediumRectangle => Some("mediumRectangle")
      | FullBanner => Some("fullBanner")
      | Leaderboard => Some("leaderboard")
      | SmartBannerPortrait => Some("smartBannerPortrait")
      | SmartBannerLandscape => Some("smartBannerLandscape")
      },
    onAdViewDidReceiveAd: Some(onAdViewDidReceiveAd),
    onDidFailToReceiveAdWithError: Some(onDidFailToReceiveAdWithError),
    onAdViewWillPresentScreen: Some(onAdViewWillPresentScreen),
    onAdViewWillDismissScreen: Some(onAdViewWillDismissScreen),
    onAdViewDidDismissScreen: Some(onAdViewDidDismissScreen),
    onAdViewWillLeaveApplication: Some(onAdViewWillLeaveApplication),
    children: Some(children),
  };

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