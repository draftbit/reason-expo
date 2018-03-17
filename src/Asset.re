type asset = {
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

[@bs.module "expo"] [@bs.scope "Asset"] [@bs.val]
external loadAsync : 'a => Js.Promise.t(unit) = "loadAsync";

[@bs.module "expo"] [@bs.scope "Asset"] [@bs.val]
external fromModule : BsReactNative.Packager.required => asset = "fromModule";