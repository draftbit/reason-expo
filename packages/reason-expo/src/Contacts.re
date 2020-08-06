module Fields = {
  type t = string;

  [@bs.module "expo-contacts"] [@bs.scope "Fields"] external id: t = "ID";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"] external name: t = "Name";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external firstName: t = "FirstName";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external middleName: t = "MiddleName";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external lastName: t = "LastName";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external namePrefix: t = "NamePrefix";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external nameSuffix: t = "NameSuffix";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external phoneticFirstName: t = "PhoneticFirstName";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external phoneticMiddleName: t = "PhoneticMiddleName";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external phoneticLastName: t = "PhoneticLastName";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external birthday: t = "Birthday";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external emails: t = "Emails";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external phoneNumbers: t = "PhoneNumbers";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external addresses: t = "Addresses";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external instantMessageAddresses: t = "InstantMessageAddresses";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external urlAddresses: t = "UrlAddresses";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external company: t = "Company";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external jobTitle: t = "JobTitle";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external department: t = "Department";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external imageAvailable: t = "ImageAvailable";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external image: t = "Image";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"] external note: t = "Note";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external dates: t = "Dates";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external relationships: t = "Relationships";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external nickname: t = "Nickname";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external rawImage: t = "RawImage";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external maidenName: t = "MaidenName";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external contactType: t = "ContactType";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external socialProfiles: t = "SocialProfiles";

  [@bs.module "expo-contacts"] [@bs.scope "Fields"]
  external nonGregorianBirthday: t = "NonGregorianBirthday";

  [@deprecated "Use `Fields.image` instead."]
  [@bs.module "expo-contacts"]
  [@bs.scope "Fields"]
  external thumbnail: t = "Thumbnail";

  [@deprecated "Use `Fields.maidenName` instead."]
  [@bs.module "expo-contacts"]
  [@bs.scope "Fields"]
  external previousLastName: t = "PreviousLastName";
};

module FormTypes = {
  type t = string;

  [@bs.module "expo-contacts"] [@bs.scope "FormTypes"]
  external new_: t = "New";

  [@bs.module "expo-contacts"] [@bs.scope "FormTypes"]
  external unknown: t = "Unknown";

  [@bs.module "expo-contacts"] [@bs.scope "FormTypes"]
  external default: t = "Default";
};

module ContactTypes = {
  type t = string;

  [@bs.module "expo-contacts"] [@bs.scope "ContactTypes"]
  external person: t = "Person";

  [@bs.module "expo-contacts"] [@bs.scope "ContactTypes"]
  external company: t = "Company";
};

module SortTypes = {
  type t = string;

  [@bs.module "expo-contacts"] [@bs.scope "SortTypes"]
  external firstName: t = "FirstName";

  [@bs.module "expo-contacts"] [@bs.scope "SortTypes"]
  external lastName: t = "LastName";

  [@bs.module "expo-contacts"] [@bs.scope "SortTypes"]
  external userDefault: t = "UserDefault";
};

module ContainerTypes = {
  type t = string;

  [@bs.module "expo-contacts"] [@bs.scope "ContainerTypes"]
  external local: t = "Local";

  [@bs.module "expo-contacts"] [@bs.scope "ContainerTypes"]
  external exchange: t = "Exchange";

  [@bs.module "expo-contacts"] [@bs.scope "ContainerTypes"]
  external cardDAV: t = "CardDAV";

  [@bs.module "expo-contacts"] [@bs.scope "ContainerTypes"]
  external unassigned: t = "Unassigned";
};

module CalendarFormats = {
  type t = string;

  [@bs.module "expo-contacts"] [@bs.scope "CalendarFormats"]
  external gregorian: t = "Gregorian";

  [@bs.module "expo-contacts"] [@bs.scope "CalendarFormats"]
  external chinese: t = "Chinese";

  [@bs.module "expo-contacts"] [@bs.scope "CalendarFormats"]
  external hebrew: t = "Hebrew";

  [@bs.module "expo-contacts"] [@bs.scope "CalendarFormats"]
  external islamic: t = "Islamic";
};

// [@bs.deriving abstract]
type image = {
  uri: string,
  width: int,
  height: int,
  base64: string,
};

// [@bs.deriving abstract]
type date = {
  day: int,
  month: int,
  year: int,
  format: CalendarFormats.t,
  id: string,
  label: string,
};

// [@bs.deriving abstract]
type relationship = {
  name: string,
  id: string,
  label: string,
};

// [@bs.deriving abstract]
type email = {
  email: string,
  isPrimary: bool,
  id: string,
  label: string,
};

// [@bs.deriving abstract]
type phoneNumber = {
  number: string,
  isPrimary: bool,
  digits: string,
  countryCode: string,
  id: string,
  label: string,
};

// [@bs.deriving abstract]
type address = {
  street: string,
  city: string,
  country: string,
  region: string,
  neneighborhood: string,
  postalCode: string,
  poBox: string,
  isoCountryCode: string,
  id: string,
  label: string,
};

// [@bs.deriving abstract]
type group = {
  id: string,
  name: string,
};

// [@bs.deriving abstract]
type container = {
  id: string,
  name: string,
};

// [@bs.deriving abstract]
type socialProfile = {
  service: string,
  username: string,
  localizedProfile: string,
  url: string,
  userId: string,
  id: string,
  label: string,
};

// [@bs.deriving abstract]
type instantMessageAddress = {
  service: string,
  username: string,
  localizedService: string,
  id: string,
  label: string,
};

// [@bs.deriving abstract]
type urlAddress = {
  url: string,
  id: string,
  label: string,
};

// [@bs.deriving abstract]
type formOptions = {
  displayedPropertyKeys: array(Fields.t),
  message: string,
  alternateName: string,
  cancelButtonTitle: string,
  groupId: string,
  allowsEditing: bool,
  allowsActions: bool,
  shouldShowLinkedContacts: bool,
  isNew: bool,
  preventAnimation: bool,
};

// [@bs.deriving abstract]
type contactQuery = {
  fields: array(Fields.t),
  pageSize: int,
  pageOffset: int,
  id: string,
  sort: SortTypes.t,
  name: string,
  groupId: string,
  containerId: string,
  rawContacts: bool,
};

// [@bs.deriving abstract]
type groupQuery = {
  groupName: string,
  groupId: string,
  containerId: string,
};

// [@bs.deriving abstract]
type containerQuery = {
  contactId: string,
  groupId: string,
  containerId: string,
};

// [@bs.deriving abstract]
type contact = {
  id: string,
  name: string,
  firstName: string,
  middleName: string,
  lastName: string,
  maidenName: string,
  namePrefix: string,
  nameSuffix: string,
  nickname: string,
  phoneticFirstName: string,
  phoneticMiddleName: string,
  phoneticLastName: string,
  company: string,
  jobTitle: string,
  department: string,
  note: string,
  imageAvailable: bool,
  image,
  rawImage: image,
  contactType: ContactTypes.t,
  birthday: date,
  dates: array(date),
  relationships: array(relationship),
  emails: array(email),
  phoneNumbers: array(phoneNumber),
  addresses: array(address),
  instantMessageAddresses: array(instantMessageAddress),
  urlAddresses: array(urlAddress),
  nonGregorianBirthday: date,
  socialProfiles: array(socialProfile),
};

// [@bs.deriving abstract]
type contactResponse = {
  data: array(contact),
  hasNextPage: bool,
  hasPreviousPage: bool,
};

[@bs.module "expo-contacts"]
external getContactsAsync: contactQuery => Js.Promise.t(contactResponse) =
  "getContactsAsync";

[@bs.module "expo-contacts"]
external getContactByIdAsync:
  (string, array(Fields.t)) => Js.Promise.t(contact) =
  "getContactByIdAsync";

[@bs.module "expo-contacts"]
external addContactAsync: (contact, string) => Js.Promise.t(string) =
  "getContactByIdAsync";

[@bs.module "expo-contacts"]
external updateContactAsync: contact => Js.Promise.t(string) =
  "updateContactAsync";

[@bs.module "expo-contacts"]
external removeContactAsync: string => Js.Promise.t(unit) =
  "removeContactAsync";

[@bs.module "expo-contacts"]
external writeContactToFileAsync: contactQuery => Js.Promise.t(string) =
  "writeContactToFileAsync";

[@bs.module "expo-contacts"]
external presentFormAsync:
  (string, contact, formOptions) => Js.Promise.t(unit) =
  "presentFormAsync";

[@bs.module "expo-contacts"]
external addExistingGroupToContainerAsync:
  (string, string) => Js.Promise.t(unit) =
  "addExistingGroupToContainerAsync";

[@bs.module "expo-contacts"]
external createGroupAsync:
  (string, Js.Nullable.t(string)) => Js.Promise.t(string) =
  "createGroupAsync";

[@bs.module "expo-contacts"]
external updateGroupNameAsync: (string, string) => Js.Promise.t(unit) =
  "updateGroupNameAsync";

[@bs.module "expo-contacts"]
external removeGroupAsync: string => Js.Promise.t(unit) = "removeGroupAsync";

[@bs.module "expo-contacts"]
external addExistingContactToGroupAsync:
  (string, string) => Js.Promise.t(unit) =
  "addExistingContactToGroupAsync";

[@bs.module "expo-contacts"]
external removeContactFromGroupAsync: (string, string) => Js.Promise.t(unit) =
  "removeContactFromGroupAsync";

[@bs.module "expo-contacts"]
external getGroupsAsync: groupQuery => Js.Promise.t(array(group)) =
  "getGroupsAsync";

[@bs.module "expo-contacts"]
external getDefaultContainerIdAsync: unit => Js.Promise.t(string) =
  "getDefaultContainerIdAsync";

[@bs.module "expo-contacts"]
external getContainersAsync: containerQuery => Js.Promise.t(array(container)) =
  "getContainersAsync";