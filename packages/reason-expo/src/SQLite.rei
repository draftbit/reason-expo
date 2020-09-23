module Transaction: {
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

  let executeSql:
    (
      t,
      string,
      arguments,
      (t, resultSet('row)) => unit,
      (t, 'errorType) => unit
    ) =>
    Js.Promise.t(unit);
};

module Database: {
  type t;

  let transaction:
    (t, Transaction.t => unit, string => unit, unit => unit) =>
    Js.Promise.t(unit);
};

let openDatabase: string => Database.t;
