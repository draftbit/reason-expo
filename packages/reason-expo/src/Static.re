[@bs.module "expo"]
external registerRootComponent: ('a => React.element) => unit = "";

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
  (React.Ref.t(React.element), takeSnapshotAsyncOptions) => unit =
  "";