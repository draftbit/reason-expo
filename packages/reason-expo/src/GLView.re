[@bs.module "expo-gl"] [@bs.scope "GLView"]
external createContextAsync: unit => Js.Promise.t('a) = "createContextAsync";

[@bs.module "expo-gl"] [@bs.scope "GLView"]
external destroyContextAsync: 'a => Js.Promise.t(bool) =
  "destroyContextAsync";
type takeSnapshotAsyncProps('a) = {
  framebuffer: 'a,
  rect,
  flip: bool,
  format: string,
  compress: float,
}
and rect = {
  x: float,
  y: float,
  height: float,
  width: float,
};
type takeSnapshotAsyncResult = {
  uri: string,
  localUri: string,
  width: float,
  height: float,
};
[@bs.module "expo-gl"] [@bs.scope "GLView"]
external takeSnapshotAsync:
  takeSnapshotAsyncProps('a) => Js.Promise.t(takeSnapshotAsyncResult) =
  "takeSnapshotAsync";

[@bs.module "expo-gl"] [@react.component]
external make:
  (
    ~onContextCreate: 'a => unit=?,
    ~msaaSamples: float=?,
    ~children: React.element=?
  ) =>
  React.element =
  "GLView";