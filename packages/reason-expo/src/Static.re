[@bs.module "expo"]
external registerRootComponent: ('a => React.element) => unit =
  "registerRootComponent";

type takeSnapshotAsyncOptions;
[@bs.obj]
external takeSnapshotAsyncOptions:
  (
    ~format: string,
    ~quality: float,
    ~result: string,
    ~height: int,
    ~width: int
  ) =>
  takeSnapshotAsyncOptions;

[@bs.module "expo"]
external takeSnapshotAsync:
  (React.ref(React.element), takeSnapshotAsyncOptions) => unit =
  "takeSnapshotAsync";
