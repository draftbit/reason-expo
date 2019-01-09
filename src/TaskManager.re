[@bs.module "expo"] [@bs.scope "TaskManager"]
external defineTask: (string, 'a => unit) => unit = "";

[@bs.module "expo"] [@bs.scope "TaskManager"]
external isTaskRegisteredAsync: string => Js.Promise.t(bool) = "";

[@bs.module "expo"] [@bs.scope "TaskManager"]
external getTaskOptionsAsync: string => Js.Promise.t('a) = "";

[@bs.module "expo"] [@bs.scope "TaskManager"]
external getTasgetRegisteredTasksAsync:
  unit =>
  Js.Promise.t(
    array({
      .
      taskName: string,
      taskType: string,
      options: 'a,
    }),
  ) =
  "";

[@bs.module "expo"] [@bs.scope "TaskManager"]
external unregisterTaskAsync: string => Js.Promise.t(unit) = "";

[@bs.module "expo"] [@bs.scope "TaskManager"]
external unregisterAllTasksAsync: unit => Js.Promise.t(unit) = "";