module Provider = {
  [@bs.module "@expo/react-native-action-sheet"] [@react.component]
  external make: (~children: React.element) => React.element =
    "ActionSheetProvider";
};

type actionSheetOptions = {
  title: option(string),
  message: option(string),
  options: array(string),
  destructiveButtonIndex: int,
  cancelButtonIndex: option(int),
};

type handleAction = int => unit;

type useActionSheet = {
  showActionSheetWithOptions: (actionSheetOptions, handleAction) => unit,
};

[@bs.module "@expo/react-native-action-sheet"]
external useActionSheet: unit => useActionSheet = "useActionSheet";

let useActionSheetRe = () => {
  let {showActionSheetWithOptions} = useActionSheet();

  let showActionSheetWithOptionsRe =
      (
        ~title: option(string)=?,
        ~message: option(string)=?,
        ~onSelect: handleAction,
        ~options: array(string),
        ~destructiveButtonIndex: int,
        ~cancelButtonIndex: option(int)=?,
        (),
      ) => {
    showActionSheetWithOptions(
      {title, message, options, destructiveButtonIndex, cancelButtonIndex},
      onSelect,
    );
  };

  showActionSheetWithOptionsRe;
};
