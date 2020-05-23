[@bs.module "expo"]
external registerRootComponent: ('a => React.element) => unit =
  "registerRootComponent";

type takeSnapshotAsyncOptions = {
  format: string,
  quality: float,
  result: string,
  height: int,
  width: int,
};

[@bs.module "expo"]
external takeSnapshotAsync:
  (React.ref(React.element), takeSnapshotAsyncOptions) => unit =
  "takeSnapshotAsync";
