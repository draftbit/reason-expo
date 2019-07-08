[@bs.module "expo-blur"] [@react.component]
external make:
  (
    ~tint: [@bs.string] [ | `default | `light | `dark]=?,
    ~intensity: float=?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "BlurView";