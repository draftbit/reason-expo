open ReactNative;

[@react.component]
let make = () => {
  <View
    style=Style.(
      style([flex(1.), justifyContent(Center), alignItems(Center)])
    )>
    <ReasonExpo.LinearGradient
      colors=[|"#DD4B39", "#C62C19"|]
      style=Style.(style([padding(Pt(12.)), borderRadius(12.)]))>
      <Text style=Style.(style([color(String("white"))]))>
        {React.string("To get started, edit App.re")}
      </Text>
    </ReasonExpo.LinearGradient>
  </View>;
};