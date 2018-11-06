[@bs.module "expo"] [@bs.scope "Localization"] external locale: string = "";

[@bs.module "expo"] [@bs.scope "Localization"]
external locales: array(string) = "";

[@bs.module "expo"] [@bs.scope "Localization"]
external country: Js.Nullable.t(string) = "";

[@bs.module "expo"] [@bs.scope "Localization"]
external isoCurrencyCodes: Js.Nullable.t(array(string)) = "";

[@bs.module "expo"] [@bs.scope "Localization"] external timezone: string = "";

[@bs.module "expo"] [@bs.scope "Localization"] external isRTL: bool = "";

type localization = {
  locale: string,
  locales: array(string),
  timezone: string,
  isoCurrencyCodes: Js.Nullable.t(array(string)),
  country: Js.Nullable.t(string),
  isRTL: bool,
};

[@bs.module "expo"] [@bs.scope "Localization"]
external getLocalizationAsync: unit => Js.Promise.t(localization) = "";