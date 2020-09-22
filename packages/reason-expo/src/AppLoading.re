[@bs.module "expo"] [@react.component]
external make:
  (
    ~startAsync: unit => Js.Promise.t(unit)=?,
    ~onError: string => unit=?,
    ~onFinish: unit => unit=?,
    ~autoHideSplash: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "AppLoading";
