module Orientation = {
  type t = string;

  [@bs.module "expo-print"] [@bs.scope "Orientation"]
  external portrait: t = "portrait";

  [@bs.module "expo-print"] [@bs.scope "Orientation"]
  external landscape: t = "landscape";
};

[@bs.deriving abstract]
type printAsyncOptions = {
  uri: string,
  html: string,
  width: float,
  height: float,
  printerUrl: string,
  orientation: Orientation.t,
};

[@bs.module "expo-print"]
external printAsync: printAsyncOptions => Js.Promise.t(unit) = "printAsync";

[@bs.deriving abstract]
type printToFileAsyncOptions = {
  html: string,
  width: float,
  height: float,
  base64: bool,
};

[@bs.deriving abstract]
type printToFileAsyncResult = {
  uri: string,
  numberOfPages: int,
  [@bs.optional]
  base64: string,
};

[@bs.module "expo-print"]
external printToFileAsync:
  printToFileAsyncOptions => Js.Promise.t(printToFileAsyncResult) =
  "printToFileAsync";

[@bs.deriving abstract]
type selectPrinterAsyncResult = {
  name: string,
  url: string,
};

[@bs.module "expo-print"]
external selectPrinterAsync: unit => Js.Promise.t(unit) =
  "selectPrinterAsync";