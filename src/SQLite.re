module Database = {
  module Transaction = {
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
    [@bs.deriving abstract]
    type t;
    [@bs.send]
    external executeSql :
      (
        t,
        string,
        array([@bs.unwrap] [ | `Str(string) | `Float(float)]),
        resultSet('row) => unit,
        (t, 'errorType) => unit
      ) =>
      Js.Promise.t(unit) =
      "executeSql";
  };
  [@bs.deriving abstract]
  type t;
  [@bs.send]
  external transaction :
    (t, Transaction.t => unit, string => unit, unit => unit) =>
    Js.Promise.t(unit) =
    "transaction";
};

[@bs.module "expo"] [@bs.scope "SQLite"]
external openDatabase : string => Database.t = "openDatabase";