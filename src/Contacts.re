module Fields = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external id: t = "ID";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external name: t = "Name";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external firstName: t = "FirstName";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external middleName: t = "MiddleName";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external lastName: t = "LastName";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external namePrefix: t = "NamePrefix";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external nameSuffix: t = "NameSuffix";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external phoneticFirstName: t = "PhoneticFirstName";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external phoneticMiddleName: t = "PhoneticMiddleName";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external phoneticLastName: t = "PhoneticLastName";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external birthday: t = "Birthday";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external emails: t = "Emails";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external phoneNumbers: t = "PhoneNumbers";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external addresses: t = "Addresses";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external instantMessageAddresses: t = "InstantMessageAddresses";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external urlAddresses: t = "UrlAddresses";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external company: t = "Company";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external jobTitle: t = "JobTitle";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external department: t = "Department";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external imageAvailable: t = "ImageAvailable";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external image: t = "Image";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external note: t = "Note";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external dates: t = "Dates";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external relationships: t = "Relationships";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external nickname: t = "Nickname";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external rawImage: t = "RawImage";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external maidenName: t = "MaidenName";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external contactType: t = "ContactType";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external socialProfiles: t = "SocialProfiles";

  [@bs.module "expo"] [@bs.scope ("Contacts", "Fields")]
  external nonGregorianBirthday: t = "NonGregorianBirthday";

  [@deprecated "Use `Fields.image`"]
  [@bs.module "expo"]
  [@bs.scope ("Contacts", "Fields")]
  external thumbnail: t = "Thumbnail";

  [@deprecated "Use `Fields.maidenName`"]
  [@bs.module "expo"]
  [@bs.scope ("Contacts", "Fields")]
  external previousLastName: t = "PreviousLastName";
};

module FormTypes = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Contacts", "FormTypes")]
  external new_: t = "New";

  [@bs.module "expo"] [@bs.scope ("Contacts", "FormTypes")]
  external unknown: t = "Unknown";

  [@bs.module "expo"] [@bs.scope ("Contacts", "FormTypes")]
  external default: t = "Default";
};

module ContactType = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Contacts", "ContactTypes")]
  external person: t = "Person";

  [@bs.module "expo"] [@bs.scope ("Contacts", "ContactTypes")]
  external company: t = "Company";
};

module SortTypes = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Contacts", "SortTypes")]
  external firstName: t = "FirstName";

  [@bs.module "expo"] [@bs.scope ("Contacts", "SortTypes")]
  external lastName: t = "LastName";

  [@bs.module "expo"] [@bs.scope ("Contacts", "SortTypes")]
  external userDefault: t = "UserDefault";
};

module ContainerTypes = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Contacts", "ContainerTypes")]
  external local: t = "Local";

  [@bs.module "expo"] [@bs.scope ("Contacts", "ContainerTypes")]
  external exchange: t = "Exchange";

  [@bs.module "expo"] [@bs.scope ("Contacts", "ContainerTypes")]
  external cardDAV: t = "CardDAV";

  [@bs.module "expo"] [@bs.scope ("Contacts", "ContainerTypes")]
  external unassigned: t = "Unassigned";
};

module CalendarFormats = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Contacts", "CalendarFormats")]
  external gregorian: t = "Gregorian";

  [@bs.module "expo"] [@bs.scope ("Contacts", "CalendarFormats")]
  external chinese: t = "Chinese";

  [@bs.module "expo"] [@bs.scope ("Contacts", "CalendarFormats")]
  external hebrew: t = "Hebrew";

  [@bs.module "expo"] [@bs.scope ("Contacts", "CalendarFormats")]
  external islamic: t = "Islamic";
};

[@bs.deriving abstract]
type contact = {id: string};

[@bs.deriving abstract]
type group = {id: string};

[@bs.deriving abstract]
type container = {id: string};

[@bs.deriving abstract]
type date = {id: string};

[@bs.deriving abstract]
type relationship = {id: string};

[@bs.deriving abstract]
type email = {id: string};

[@bs.deriving abstract]
type phoneNumber = {id: string};

[@bs.deriving abstract]
type address = {id: string};

[@bs.deriving abstract]
type socialProfile = {id: string};

[@bs.deriving abstract]
type instantMessageAddress = {id: string};

[@bs.deriving abstract]
type urlAddress = {id: string};

[@bs.deriving abstract]
type image = {
  uri: string,
  width: int,
  height: int,
  base64: string,
};

[@bs.deriving abstract]
type formOptions = {message: string};

[@bs.deriving abstract]
type contactQuery = {id: string};

[@bs.deriving abstract]
type groupQuery = {groupId: string};

[@bs.deriving abstract]
type containerQuery = {groupId: string};

[@bs.deriving abstract]
type contactResponse = {data: array(contact)};