[@bs.module "expo-task-manager"]
external defineTask: (string, 'a => unit) => unit = "";

[@bs.module "expo-task-manager"]
external isTaskRegisteredAsync: string => Js.Promise.t(bool) = "";

[@bs.module "expo-task-manager"]
external getTaskOptionsAsync: string => Js.Promise.t('a) = "";

[@bs.module "expo-task-manager"]
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

[@bs.module "expo-task-manager"]
external unregisterTaskAsync: string => Js.Promise.t(unit) = "";

[@bs.module "expo-task-manager"]
external unregisterAllTasksAsync: unit => Js.Promise.t(unit) = "";