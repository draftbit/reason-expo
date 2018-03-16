type o;

type transaction_success = [@bs.this] ((o, string) => unit);

type transaction = {
  .
  [@bs.meth]
  "executeSql": (string, Js.Array.t(string), transaction_success) => unit
};

/* type transaction_sig = () */
type t = {. [@bs.meth] "transaction": unit => unit};

[@bs.module "expo"] [@bs.scope "SQLite"] [@bs.val]
external openDatabase : string => t = "";
