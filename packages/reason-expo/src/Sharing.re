[@bs.deriving abstract]
type shareAsyncOptions = {
  mimeType: string,
  dialogTitle: string,
  [@bs.as "UTI"]
  uti: string,
};

[@bs.module "expo"] [@bs.scope "Sharing"]
external shareAsync: (string, shareAsyncOptions) => Js.Promise.t(unit) = "";