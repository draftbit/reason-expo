type crop = {
  originX: float,
  originY: float,
  width: float,
  height: float,
};

type flip = {
  vertical: bool,
  horizontal: bool,
};

type resize = {
  width: float,
  height: float,
};

type action;
[@bs.obj]
external action:
  (~resize: resize=?, ~rotate: float=?, ~flip: flip=?, ~crop: crop=?) => action;

type saveOptions;
[@bs.obj]
external saveOptions:
  (~compress: float, ~format: string, ~base64: bool) => saveOptions;

type manipulateResult = {
  uri: string,
  width: float,
  height: float,
  base64: option(string),
};

[@bs.module "expo-image-manipulator"]
external manipulate: (string, array(action), saveOptions) => manipulateResult =
  "manipulate";
