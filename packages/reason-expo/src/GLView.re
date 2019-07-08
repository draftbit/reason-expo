[@bs.module "expo-gl"] [@bs.scope "GLView"]
external createContextAsync: unit => Js.Promise.t('a) = "";

[@bs.module "expo-gl"] [@bs.scope "GLView"]
external destroyContextAsync: 'a => Js.Promise.t(bool) = "";

[@bs.module "expo-gl"] [@bs.scope "GLView"]
external takeSnapshotAsync:
  (
    'a,
    {
      .
      framebuffer: 'a,
      rect: {
        .
        x: float,
        y: float,
        height: float,
        width: float,
      },
      flip: bool,
      format: string,
      compress: float,
    }
  ) =>
  Js.Promise.t({
    .
    uri: string,
    localUri: string,
    width: float,
    height: float,
  }) =
  "";

[@bs.module "expo-gl"] [@react.component]
external make:
  (
    ~onContextCreate: 'a => unit=?,
    ~msaaSamples: float=?,
    ~children: React.element=?
  ) =>
  React.element =
  "GLView";