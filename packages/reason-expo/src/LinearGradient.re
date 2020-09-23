[@bs.module "expo-linear-gradient"] [@react.component]
external make:
  (
    ~colors: array(string)=?,
    ~style: ReactNative.Style.t=?,
    ~start: array(float)=?,
    ~_end: array(float)=?,
    ~locations: array(float)=?,
    ~children: React.element=?
  ) =>
  React.element =
  "LinearGradient";
