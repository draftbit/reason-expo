/*
 Usage:

 let db = openDatabase("test");

 Database.transaction(
   db,
   t =>
     Transaction.(
       executeSql(
         t,
         "SELECT something FROM that_table",
         [`String("A string argument"), `Float(3.)],
         (_transaction, rs: resultSet({..})) => Js.log(rs),
         (_transaction, error) => Js.log(error),
       )
     )
     |> ignore,
   (_) => (),
   () => (),
 ); */

module Transaction = {
  type t;

  [@bs.deriving abstract]
  type resultSetRows('row) = {
    length: string,
    item: int => 'row,
    _array: array('row),
  };

  [@bs.deriving abstract]
  type resultSet('row) = {
    insertId: int,
    rowsAffected: int,
    rows: resultSetRows('row),
  };

  type arguments = list([ | `String(string) | `Float(float)]);

  type rawArguments;
  external rawArguments: 'a => rawArguments = "%identity";

  let _encodeArguments = (args: arguments) =>
    Array.map(
      a =>
        switch (a) {
        | `String(s) => rawArguments(s)
        | `Float(f) => rawArguments(f)
        },
      Array.of_list(args),
    );

  [@bs.send]
  external _executeSql:
    (
      t,
      string,
      array(rawArguments),
      (t, resultSet('row)) => unit,
      (t, 'errorType) => unit
    ) =>
    Js.Promise.t(unit) =
    "executeSql";

  let executeSql = (transaction, sqlStatement, arguments, success, error) =>
    _executeSql(
      transaction,
      sqlStatement,
      _encodeArguments(arguments),
      success,
      error,
    );
};

module Database = {
  type t;

  [@bs.send]
  external transaction:
    (t, Transaction.t => unit, string => unit, unit => unit) =>
    Js.Promise.t(unit) =
    "transaction";
};

[@bs.module "expo-sqlite"] [@bs.scope "SQLite"]
external openDatabase: string => Database.t = "openDatabase";