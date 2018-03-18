type contacts_params = {
  .
  "fields": array(string),
  "pageSize": int,
  "pageOffset": int,
};

type contacts_pagination_result = {
  .
  "data": {
    .
    "id": string,
    "name": string,
    "firstName": string,
    "middleName": string,
    "lastName": string,
    "nickname": string,
    "jobTitle": string,
    "company": string,
    "department": string,
    "imageAvailable": string,
    "previousLastName": Js.Undefined.t(string),
  },
  "hasNextPage": Js.boolean,
  "hasPreviousPage": Js.boolean,
  "total": int,
};

[@bs.module "expo"] [@bs.scope "Contacts"] [@bs.val]
external getContactsAsync :
  contacts_params => Js.Promise.t(contacts_pagination_result) =
  "getContactsAsync";

type contacts_by_id_param = {
  .
  "id": string,
  "fields": array(string),
};

[@bs.module "expo"] [@bs.scope "Contacts"] [@bs.val]
external getContactByIdAsync :
  contacts_by_id_param => Js.Promise.t(contacts_pagination_result) =
  "getContactByIdAsync";