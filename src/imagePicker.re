type media_t = [ | `All | `Videos | `Images];

type image_t = {
  .
  "uri": string,
  "width": int,
  "height": int
};

type image_library_opts = {
  .
  "allowsEditing": Js.undefined(Js.boolean),
  "aspect": Js.undefined((int, int)),
  "quality": Js.undefined(int),
  "mediaTypes": Js.undefined(media_t)
};

type camera_opts = {
  .
  "allowsEditing": Js.undefined(Js.boolean),
  "aspect": Js.undefined((int, int)),
  "quality": Js.undefined(int)
};
/* type image_result = { */
/*   . */
/*     "" */
/* } */
/* [@bs.module "expo"] [@bs.scope "ImagePicker"] [@bs.val] */
/* external launchCameraAsync : */
/*   camera_opts => Js.Promise.t() = */
/*   ""; */
/* [@bs.module "expo"] [@bs.scope "ImagePicker"] [@bs.val] */
/* external login : google_login_t => Js.Promise.t(contacts_pagination_result) = */
/*   "logInAsync"; */
