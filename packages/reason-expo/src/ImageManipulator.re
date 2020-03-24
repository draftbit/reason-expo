type width = float;
type height = float;
type crop = {
  originX: float,
  originY: float,
  width,
  height,
};
type action = {
  resize: option(resize),
  rotate: option(float),
  flip: option(flip),
  crop,
}
and resize = {
  width,
  height,
}
and flip = {
  vertical: bool,
  horizontal: bool,
};

type saveOptions = {
  compress: float,
  format: string,
  base64: bool,
};

type manipulateResult = {
  uri: string,
  width,
  height,
  base64: option(string),
};

[@bs.module "expo-image-manipulator"]
external manipulate: (string, array(action), saveOptions) => manipulateResult =
  "manipulate";