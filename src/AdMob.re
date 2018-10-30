type bannerSize =
  | Banner
  | LargeBanner
  | MediumRectangle
  | FullBanner
  | Leaderboard
  | SmartBannerPortrait
  | SmartBannerLandscape;

module AdMobBanner = {
  [@bs.module "expo"] external js: ReasonReact.reactClass = "AdMobBanner";

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
  };

  let make =
      (
        ~bannerSize=Banner,
        ~onAdViewDidReceiveAd=() => (),
        ~onDidFailToReceiveAdWithError=_e => (),
        ~onAdViewWillPresentScreen=() => (),
        ~onAdViewWillDismissScreen=() => (),
        ~onAdViewDidDismissScreen=() => (),
        ~onAdViewWillLeaveApplication=() => (),
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=
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
          (),
        ),
      children,
    );
};

module AdMobInterstitial = {
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external setAdUnitID: string => unit = "setAdUnitID";
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external setTestDeviceID: string => unit = "setTestDeviceID";
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external requestAdAsync: unit => Js.Promise.t(unit) = "requestAdAsync";
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external showAdAsync: unit => Js.Promise.t(unit) = "showAdAsync";
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external getIsReadyAsync: unit => Js.Promise.t(bool) = "getIsReadyAsync";
};

module AdMobRewarded = {
  [@bs.module "expo"] [@bs.scope "AdMobRewarded"]
  external setAdUnitID: string => unit = "setAdUnitID";
  [@bs.module "expo"] [@bs.scope "AdMobRewarded"]
  external setTestDeviceID: string => unit = "setTestDeviceID";
  [@bs.module "expo"] [@bs.scope "AdMobRewarded"]
  external requestAdAsync: unit => Js.Promise.t(unit) = "requestAdAsync";
  [@bs.module "expo"] [@bs.scope "AdMobRewarded"]
  external showAdAsync: unit => Js.Promise.t(unit) = "showAdAsync";
};