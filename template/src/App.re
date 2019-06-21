open ReactNative;

let styles =
  Style.(
    StyleSheet.create({
      "root":
        viewStyle(~flex=1., ~justifyContent=`center, ~alignItems=`center, ()),
      "text": textStyle(~color="white", ()),
      "gradient": viewStyle(~padding=12.->dp, ~borderRadius=12., ()),
    })
  );

[@react.component]
let make = () =>
  <View style=styles##root>
    <Text style=styles##text>
      {ReasonReact.string("To get started, edit App.re")}
    </Text>
  </View>;