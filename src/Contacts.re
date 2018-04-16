type contactsParams = {
  .
  "fields": array(string),
  "pageSize": int,
  "pageOffset": int,
};

type contactsPaginationResult = {
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
  "hasNextPage": bool,
  "hasPreviousPage": bool,
  "total": int,
};

[@bs.module "expo"] [@bs.scope "Contacts"]
external getContactsAsync :
  contactsParams => Js.Promise.t(contactsPaginationResult) =
  "getContactsAsync";

type contacts_by_id_param = {
  .
  "id": string,
  "fields": array(string),
};

[@bs.module "expo"] [@bs.scope "Contacts"]
external getContactByIdAsync :
  contacts_by_id_param => Js.Promise.t(contactsPaginationResult) =
  "getContactByIdAsync";