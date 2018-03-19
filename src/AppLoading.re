[@bs.module "expo"] external js : ReasonReact.reactClass = "AppLoading";

let make =
    (
      ~startAsync: option(unit => Js.Promise.t('a))=?,
      ~onError: option('a => unit)=?,
      ~onFinish: option(unit => unit)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props={
      "startAsync": Js.Nullable.fromOption(startAsync),
      "onError": Js.Nullable.fromOption(onError),
      "onFinish": Js.Nullable.fromOption(onFinish),
    },
    children,
  );