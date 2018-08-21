open BsReactNative;

Accelerometer_Test.testModule();

type action =
  | SwitchModule
  | FontsLoaded;

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self => <View> <Text> (ReasonReact.string("Hi")) </Text> </View>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));