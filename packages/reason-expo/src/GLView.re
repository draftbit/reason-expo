[@bs.module "expo"] [@bs.scope "GLView"]
external createContextAsync: unit => Js.Promise.t('a) = "";

[@bs.module "expo"] [@bs.scope "GLView"]
external destroyContextAsync: 'a => Js.Promise.t(bool) = "";

[@bs.module "expo"] [@bs.scope "GLView"]
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

[@bs.module "expo"] external _view: ReasonReact.reactClass = "GLView";

let make =
    (~onContextCreate: 'a => unit=_ => (), ~msaaSamples: float=4.0, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=_view,
    ~props={"onContextCreate": onContextCreate, "msaaSamples": msaaSamples},
    children,
  );