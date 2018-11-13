let createContextAsync: unit => Js.Promise.t('a);
let destroyContextAsync: 'a => Js.Promise.t(bool);

let takeSnapshotAsync:
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
  });

let make:
  (~onContextCreate: 'a => unit=?, ~msaaSamples: float=?, 'b) =>
  ReasonReact.component(
    ReasonReact.stateless,
    ReasonReact.noRetainedProps,
    ReasonReact.actionless,
  );