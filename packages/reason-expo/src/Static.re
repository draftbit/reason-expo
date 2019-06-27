[@bs.module "expo"]
external registerRootComponent: ReasonReact.reactClass => unit = "";

[@bs.deriving abstract]
type takeSnapshotAsyncOptions = {
  format: string,
  quality: float,
  result: string,
  height: int,
  width: int,
};

[@bs.module "expo"]
external takeSnapshotAsync:
  (ReasonReact.reactRef, takeSnapshotAsyncOptions) => unit =
  "";