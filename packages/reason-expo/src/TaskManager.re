[@bs.module "expo-task-manager"]
external defineTask: (string, 'a => unit) => unit = "defineTask";

[@bs.module "expo-task-manager"]
external isTaskRegisteredAsync: string => Js.Promise.t(bool) =
  "isTaskRegisteredAsync";

[@bs.module "expo-task-manager"]
external getTaskOptionsAsync: string => Js.Promise.t('a) =
  "getTaskOptionsAsync";

type getRegisteredTasksAsyncResponse('a) = {
  taskName: string,
  taskType: string,
  options: 'a,
};

[@bs.module "expo-task-manager"]
external getRegisteredTasksAsync:
  unit => Js.Promise.t(array(getRegisteredTasksAsyncResponse('a))) =
  "getRegisteredTasksAsync";

[@bs.module "expo-task-manager"]
external unregisterTaskAsync: string => Js.Promise.t(unit) =
  "unregisterTaskAsync";

[@bs.module "expo-task-manager"]
external unregisterAllTasksAsync: unit => Js.Promise.t(unit) =
  "unregisterAllTasksAsync";
