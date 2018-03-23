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
      "startAsync": Js.Undefined.fromOption(startAsync),
      "onError": Js.Undefined.fromOption(onError),
      "onFinish": Js.Undefined.fromOption(onFinish),
    },
    children,
  );