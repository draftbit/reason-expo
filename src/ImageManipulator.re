[@bs.deriving abstract]
type action = {
  [@bs.optional]
  resize: {
    .
    width: float,
    height: float,
  },
  [@bs.optional]
  rotate: float,
  [@bs.optional]
  flip: {
    .
    vertical: bool,
    horizontal: bool,
  },
  [@bs.optional]
  crop: {
    .
    originX: float,
    originY: float,
    width: float,
    height: float,
  },
};

[@bs.deriving abstract]
type saveOptions = {
  compress: float,
  format: string,
  base64: bool,
};

[@bs.deriving abstract]
type manipulateResult = {
  uri: string,
  width: float,
  height: float,
  [@bs.optional]
  base64: string,
};

[@bs.module "expo"] [@bs.scope "ImageManipulator"]
external manipulate : (string, array(action), saveOptions) => manipulateResult =
  "manipulate";