[@bs.module "expo"]
external app_loading : ReasonReact.reactClass = "AppLoading";

let make =
    (
      ~startAsync: unit => Js.Promise.t(unit),
      ~onError: unit => unit,
      ~onFinish: unit => unit
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=app_loading,
    ~props={"startAsync": startAsync, "onError": onError, "onFinish": onFinish}
  );
