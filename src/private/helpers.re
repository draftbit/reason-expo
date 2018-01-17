let promise_to_result = (~errorMessage=?, f) =>
  Js.Promise.(
    Js.Result.(
      f
      |> then_(good => Ok(good) |> resolve)
      |> catch(bad =>
           (
             switch errorMessage {
             | Some(s) => Error(s)
             | None =>
               Error(
                 switch (Js.Json.stringifyAny(bad)) {
                 | Some(s) => Error(s)
                 | None => Error("Unknown Issue")
                 }
               )
             }
           )
           |> resolve
         )
    )
  );

let errorToString = (~errorMessage="Promise rejected", error) =>
  switch (Js.Json.stringifyAny(error)) {
  | Some(s) => Printf.sprintf("Reason:%s: Dump:%s", errorMessage, s)
  | None =>
    Printf.sprintf(
      "%s (Could not stringify promise rejection object)",
      errorMessage
    )
  };

exception MissingFieldShouldExist(string, string);
