open BsReactNative;

/* let () = BsExpo.Constants.constants##manifest |> Js.log |> ignore; */
/* BsExpo.Constants.constants##getWebViewUserAgentAsync() */
/* |> Js.Promise.then_(agent => { */
/*      Js.log(agent); */
/*      Js.Promise.resolve(); */
/*    }) */
/* |> ignore; */
/* [@bs.module "expo"] external constants : t = "Constants"; */
/* Js.log(constants##manifest); */
/* Js.log(constants##manifest); */
/* Js.log(BsExpo.Constants.constants); */
/* Js.log([%raw "require('expo').Constants"]); */
/* Js.log("Hello"); */
/* let () = { */
/*   let g = BsExpo.Audio.createSound(); */
/*   (); */
/* }; */
/* let () = ignore(BsExpo.Brightness.setBrightness(0.01)); */
/* let () = */
/*   ignore( */
/*     BsExpo.Permissions.get(BsExpo.Permissions.Camera) */
/*     |> Js.Promise.then_(result => Js.log(result) |> Js.Promise.resolve) */
/*   ); */
Js.log("Hello");

/* let () = { */
/*   let g = BsExpo.Audio.createSound(); */
/*   g##playAsync() |> ignore; */
/* }; */
BsExpo.FileSystem.cacheDirectory |> Js.log;

Js.Promise.(
  BsExpo.FileSystem.getInfoAsync(
    BsExpo.FileSystem.cacheDirectory,
    {"md5": Js.undefined, "size": Js.undefined},
  )
  |> then_(fileInfo => Js.log(fileInfo) |> resolve)
);

/* BsExpo.FileSystem.getInfo(BsExpo.FileSystem.documentDirectory) */
/* |> Js.Promise.then_(result => Js.log(result) |> Js.Promise.resolve); */
/* |> Js.Promise.then_(() => Js.Promise.resolve()) */
/* , 500) */
let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <View
      style=Style.(
              style([flex(1.), justifyContent(Center), alignItems(Center)])
            )>
      <Text value="Reason is awesome!" />
    </View>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));