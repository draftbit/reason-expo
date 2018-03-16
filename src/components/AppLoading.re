[@bs.module "expo"]
external app_loading : ReasonReact.reactClass = "AppLoading";

let make =
    (
      ~startAsync: option(unit => Js.Promise.t('a))=?,
      ~onError: option('a => unit)=?,
      ~onFinish: option(unit => unit)=?,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=app_loading,
    ~props={
      "startAsync": Js.Nullable.fromOption(startAsync),
      "onError": Js.Nullable.fromOption(onError),
      "onFinish": Js.Nullable.fromOption(onFinish),
    },
  );