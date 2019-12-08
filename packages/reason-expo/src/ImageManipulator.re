type action = {
  resize:option(resize),
  rotate: option(float),
  flip:option(flip),
  crop,
} and resize = {
    width: float,
    height: float,
  } and flip ={

    vertical: bool,
    horizontal: bool,
  }and crop = {
    originX: float,
    originY: float,
    width: float,
    height: float,
  };

type saveOptions = {
  compress: float,
  format: string,
  base64: bool,
};

type manipulateResult = {
  uri: string,
  width: float,
  height: float,
  base64: option(string),
};

[@bs.module "expo-image-manipulator"]
external manipulate: (string, array(action), saveOptions) => manipulateResult =
  "manipulate";