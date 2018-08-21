open ReasonExpo;

[@bs.val] external setTimeout : (unit => unit, int) => float = "setTimeout";

let log = m => Js.log3("Accelerometer:", m, "\n");

let testModule = () => {
  log("calling setUpdateInterval(500)");
  Accelerometer.setUpdateInterval(500);
  log("adding an event listener");
  let eSub =
    Accelerometer.(
      addListener(l => {
        Js.log("eSub");
        Js.log2("x", xGet(l));
        Js.log2("y", yGet(l));
        Js.log2("z", zGet(l));
      })
    );
  setTimeout(
    () => {
      log("removing event subscription");
      Accelerometer.remove(eSub, ());
    },
    1000,
  )
  |> ignore;
  log("calling setUpdateInterval(250)");
  Accelerometer.setUpdateInterval(250);
  log("adding another event listener");
  let _ =
    Accelerometer.(
      addListener(l => {
        Js.log("eSub2");
        Js.log2("x", xGet(l));
        Js.log2("y", yGet(l));
        Js.log2("z", zGet(l));
      })
    );
  setTimeout(
    () => {
      log("removing all event subscriptions");
      Accelerometer.removeAllListeners();
    },
    1000,
  );
};