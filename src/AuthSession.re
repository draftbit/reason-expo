/* Later do not expose this in rei */
type start_async_param = {
  .
  "authUri": string,
  "returnUrl": Js.Undefined.t(string)
};

/* This needs some more refinement */
type start_async_return = Js.Promise.t({. "type": string});

[@bs.module "expo"] [@bs.scope "AuthSession"] [@bs.val]
external startAsync : start_async_param => start_async_return = "";
