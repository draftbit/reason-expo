type t = {
  .
  "name": string,
  "_type": string,
  "hash": string,
  "uri": string,
  "localUri": string,
  "width": int,
  "height": int,
  [@bs.meth] "downloadAsync": unit => Js.Promise.t(unit),
};

[@bs.module "expo"] [@bs.scope "Asset"]
external loadAsync : 'a => Js.Promise.t(unit) = "loadAsync";

[@bs.module "expo"] [@bs.scope "Asset"]
external fromModule : BsReactNative.Packager.required => t = "fromModule";