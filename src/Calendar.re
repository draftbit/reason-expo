module AttendeeStatus = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external accepted: t = "ACCEPTED";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external declined: t = "DECLINED";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external tentative: t = "TENTATIVE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external delegated: t = "DELEGATED";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external completed: t = "COMPLETED";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external inProcess: t = "IN_PROCESS";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external unknown: t = "UNKNOWN";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external pending: t = "PENDING";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external invited: t = "INVITED";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeStatus")]
  external none: t = "NONE";
};

module EventStatus = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "EventStatus")]
  external none: t = "NONE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "EventStatus")]
  external confirmed: t = "CONFIRMED";

  [@bs.module "expo"] [@bs.scope ("Calendar", "EventStatus")]
  external tentative: t = "TENTATIVE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "EventStatus")]
  external canceled: t = "CANCELED";
};

module Frequency = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "Frequency")]
  external daily: t = "DAILY";

  [@bs.module "expo"] [@bs.scope ("Calendar", "Frequency")]
  external weekly: t = "WEEKLY";

  [@bs.module "expo"] [@bs.scope ("Calendar", "Frequency")]
  external monthly: t = "MONTHLY";

  [@bs.module "expo"] [@bs.scope ("Calendar", "Frequency")]
  external yearly: t = "YEARLY";
};

module EventAccessLevel = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "EventAccessLevel")]
  external confidential: t = "CONFIDENTIAL";

  [@bs.module "expo"] [@bs.scope ("Calendar", "EventAccessLevel")]
  external priv: t = "PRIVATE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "EventAccessLevel")]
  external public: t = "PUBLIC";

  [@bs.module "expo"] [@bs.scope ("Calendar", "EventAccessLevel")]
  external default: t = "DEFAULT";
};

module CalendarAccessLevel = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "CalendarAccessLevel")]
  external contributor: t = "CONTRIBUTOR";

  [@bs.module "expo"] [@bs.scope ("Calendar", "CalendarAccessLevel")]
  external editor: t = "EDITOR";

  [@bs.module "expo"] [@bs.scope ("Calendar", "CalendarAccessLevel")]
  external freebusy: t = "FREEBUSY";

  [@bs.module "expo"] [@bs.scope ("Calendar", "CalendarAccessLevel")]
  external override: t = "OVERRIDE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "CalendarAccessLevel")]
  external owner: t = "OWNER";

  [@bs.module "expo"] [@bs.scope ("Calendar", "CalendarAccessLevel")]
  external read: t = "READ";

  [@bs.module "expo"] [@bs.scope ("Calendar", "CalendarAccessLevel")]
  external respond: t = "RESPOND";

  [@bs.module "expo"] [@bs.scope ("Calendar", "CalendarAccessLevel")]
  external root: t = "ROOT";

  [@bs.module "expo"] [@bs.scope ("Calendar", "CalendarAccessLevel")]
  external none: t = "NONE";
};

module AttendeeType = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeType")]
  external unknown: t = "UNKNOWN";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeType")]
  external person: t = "PERSON";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeType")]
  external room: t = "ROOM";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeType")]
  external group: t = "GROUP";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeType")]
  external resource: t = "RESOURCE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeType")]
  external optional: t = "OPTIONAL";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeType")]
  external required: t = "REQUIRED";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeType")]
  external none: t = "NONE";
};

module AttendeeRole = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeRole")]
  external unknown: t = "UNKNOWN";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeRole")]
  external required: t = "REQUIRED";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeRole")]
  external optional: t = "OPTIONAL";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeRole")]
  external nonParticipant: t = "NON_PARTICIPANT";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeRole")]
  external attendee: t = "ATTENDEE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeRole")]
  external organizer: t = "ORGANIZER";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeRole")]
  external performer: t = "PERFORMER";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeRole")]
  external speaker: t = "SPEAKER";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AttendeeRole")]
  external none: t = "none";
};

module Availability = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "Availability")]
  external busy: t = "BUSY";

  [@bs.module "expo"] [@bs.scope ("Calendar", "Availability")]
  external free: t = "FREE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "Availability")]
  external tentative: t = "TENTATIVE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "Availability")]
  external unavailable: t = "UNAVAILABLE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "Availability")]
  external notSupported: t = "NOT_SUPPORTED";
};

module AlarmMethod = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "AlarmMethod")]
  external alarm: t = "ALARM";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AlarmMethod")]
  external alert: t = "ALERT";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AlarmMethod")]
  external email: t = "EMAIL";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AlarmMethod")]
  external sms: t = "SMS";

  [@bs.module "expo"] [@bs.scope ("Calendar", "AlarmMethod")]
  external default: t = "default";
};

module EntityType = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "EntityTypes")]
  external event: t = "EVENT";

  [@bs.module "expo"] [@bs.scope ("Calendar", "EntityTypes")]
  external reminder: t = "REMINDER";
};

module SourceType = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("Calendar", "SourceType")]
  external local: t = "LOCAL";

  [@bs.module "expo"] [@bs.scope ("Calendar", "SourceType")]
  external exchange: t = "EXCHANGE";

  [@bs.module "expo"] [@bs.scope ("Calendar", "SourceType")]
  external caldav: t = "CALDAV";

  [@bs.module "expo"] [@bs.scope ("Calendar", "SourceType")]
  external mobileme: t = "MOBILEME";

  [@bs.module "expo"] [@bs.scope ("Calendar", "SourceType")]
  external subscribed: t = "SUBSCRIBED";

  [@bs.module "expo"] [@bs.scope ("Calendar", "SourceType")]
  external birthdays: t = "BIRTHDAYS";
};

[@bs.deriving abstract]
type alarm = {
  absoluteDate: Js.Date.t,
  relativeOffset: int,
  method: AlarmMethod.t,
};

[@bs.deriving abstract]
type recurrenceRule = {
  frequency: Frequency.t,
  interval: int,
  endDate: Js.Date.t,
  occurrence: int,
};

[@bs.deriving abstract]
type attendee = {
  id: string,
  email: string,
  name: string,
  role: AttendeeRole.t,
  status: AttendeeStatus.t,
  [@bs.as "type"]
  _type: string,
  url: string,
  isCurrentUser: bool,
};

[@bs.deriving abstract]
type source = {
  id: string,
  name: string,
  [@bs.as "type"]
  _type: SourceType.t,
  isLocalAccount: bool,
};

[@bs.deriving abstract]
type calendar = {
  id: string,
  title: string,
  entityType: EntityType.t,
  source,
  color: string,
  allowsModifications: bool,
  [@bs.as "type"]
  _type: string,
  isPrimary: bool,
  name: string,
  ownerAccount: string,
  timeZone: string,
  allowedAvailabilities: array(Availability.t),
  allowedReminders: array(AlarmMethod.t),
  allowedAttendeeTypes: array(AttendeeType.t),
  isVisible: bool,
  isSynced: bool,
  accessLevel: CalendarAccessLevel.t,
};

[@bs.deriving abstract]
type event = {
  id: string,
  calendarId: string,
  title: string,
  startDate: Js.Date.t,
  endDate: Js.Date.t,
  allDay: bool,
  location: string,
  notes: string,
  alarms: array(alarm),
  recurrenceRule,
  availability: Availability.t,
  timeZone: string,
  endTimeZone: string,
  url: string,
  creationDate: string,
  ladtModifiedDate: string,
  originalStartDate: string,
  isDetached: bool,
  status: EventStatus.t,
  organizer: attendee,
  organizerEmail: string,
  accessLevel: EventAccessLevel.t,
  guestsCanModify: bool,
  guestsCanInviteOthers: bool,
  guestsCanSeeGuests: bool,
  originalId: string,
  instanceId: string,
};

[@bs.deriving abstract]
type reminder = {
  id: string,
  calendarId: string,
  title: string,
  startDate: Js.Date.t,
  dueDate: Js.Date.t,
  completed: bool,
  completionDate: Js.Date.t,
  location: string,
  notes: string,
  alarms: array(alarm),
  recurrenceRule,
  timeZone: string,
  url: string,
  creationDate: string,
  lastModifiedDate: string,
};

[@bs.module "expo"] [@bs.scope "Calendar"]
external getCalendarsAsync: EntityType.t => Js.Promise.t(array(calendar)) =
  "";

[@bs.deriving abstract]
type createCalendarAsyncDetails = {
  title: string,
  color: string,
  entityType: EntityType.t,
  sourceId: string,
  source: {
    .
    isLocalAccount: bool,
    name: string,
    _type: string,
  },
  name: string,
  ownerAccount: string,
  [@bs.optional]
  timeZone: string,
  [@bs.optional]
  allowedAvailabilities: array(Availability.t),
  [@bs.optional]
  allowedReminders: array(AlarmMethod.t),
  [@bs.optional]
  allowedAttendeeTypes: array(AttendeeType.t),
  [@bs.optional]
  isVisible: bool,
  [@bs.optional]
  isSynced: bool,
  [@bs.optional]
  accessLevel: string,
};

[@bs.module "expo"] [@bs.scope "Calendar"]
external createCalendarAsync:
  createCalendarAsyncDetails => Js.Promise.t(string) =
  "";

[@bs.deriving abstract]
type updateCalendarAsyncDetails = {
  title: Js.Nullable.t(string),
  color: Js.Nullable.t(string),
  name: Js.Nullable.t(string),
  isVisible: Js.Nullable.t(bool),
  isSynced: Js.Nullable.t(bool),
};

[@bs.module "expo"] [@bs.scope "Calendar"]
external updateCalendarAsync:
  (string, updateCalendarAsyncDetails) => Js.Promise.t(unit) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external getEventsAsync:
  (array(string), Js.Date.t, Js.Date.t) => Js.Promise.t(array(event)) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external getEventAsync:
  (string, {. instanceStartDate: Js.Date.t}) => Js.Promise.t(event) =
  "";

[@bs.deriving abstract]
type createEventAsyncDetails = {
  title: string,
  startDate: Js.Date.t,
  endDate: Js.Date.t,
  allDay: bool,
  location: string,
  notes: string,
  alarms: array(alarm),
  recurrenceRule,
  availability: Availability.t,
  timeZone: string,
  endTimeZone: string,
  url: string,
  organizerEmail: string,
  accessLevel: string,
  guestsCanModify: bool,
  guestsCanInviteOthers: bool,
  guestsCanSeeGuests: bool,
};

[@bs.module "expo"] [@bs.scope "Calendar"]
external createEventAsync:
  (string, createEventAsyncDetails) => Js.Promise.t(string) =
  "";

[@bs.deriving abstract]
type updateEventAsyncDetails = {
  title: string,
  startDate: Js.Date.t,
  endDate: Js.Date.t,
  allDay: bool,
  location: string,
  notes: string,
  alarms: array(alarm),
  recurrenceRule,
  availability: Availability.t,
  timeZone: string,
  endTimeZone: string,
  url: string,
  organizerEmail: string,
  accessLevel: string,
  guestsCanModify: bool,
  guestsCanInviteOthers: bool,
  guestsCanSeeGuests: bool,
};

[@bs.module "expo"] [@bs.scope "Calendar"]
external updateEventAsync:
  (
    string,
    updateEventAsyncDetails,
    {
      .
      instanceStartDate: Js.Date.t,
      futureEvents: bool,
    }
  ) =>
  Js.Promise.t(unit) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external deleteEventAsync:
  (
    string,
    {
      .
      instanceStartDate: Js.Date.t,
      futureEvents: bool,
    }
  ) =>
  Js.Promise.t(unit) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external getAttendeesForEventAsync:
  (string, {. instanceStartDate: Js.Date.t}) =>
  Js.Promise.t(array(attendee)) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external createAttendeeAsync:
  (
    string,
    {
      .
      id: string,
      email: string,
      name: string,
      role: AttendeeRole.t,
      status: AttendeeStatus.t,
      _type: string,
    }
  ) =>
  Js.Promise.t(string) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external updateAttendeeAsync:
  (
    string,
    {
      .
      id: string,
      email: string,
      name: string,
      role: AttendeeRole.t,
      status: AttendeeStatus.t,
      _type: string,
    }
  ) =>
  Js.Promise.t(unit) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external deleteAttendeeAsync: string => Js.Promise.t(unit) = "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external getRemindersAsync:
  (array(string), string, Js.Date.t, Js.Date.t) =>
  Js.Promise.t(array(reminder)) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external getReminderAsync: string => Js.Promise.t(reminder) = "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external createReminderAsync:
  (
    string,
    {
      .
      title: string,
      startDate: Js.Date.t,
      dueDate: Js.Date.t,
      completed: bool,
      completionDate: Js.Date.t,
      location: string,
      notes: string,
      alarms: array(alarm),
      recurrenceRule: recurrenceRule,
      timeZone: string,
      url: string,
    }
  ) =>
  Js.Promise.t(string) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external updateReminderAsync:
  (
    string,
    {
      .
      title: string,
      startDate: Js.Date.t,
      dueDate: Js.Date.t,
      completed: bool,
      completionDate: Js.Date.t,
      location: string,
      notes: string,
      alarms: array(alarm),
      recurrenceRule: recurrenceRule,
      timeZone: string,
      url: string,
    }
  ) =>
  Js.Promise.t(string) =
  "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external deleteReminderAsync: string => Js.Promise.t(unit) = "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external getSourcesAsync: unit => Js.Promise.t(array(source)) = "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external getSourceAsync: string => Js.Promise.t(source) = "";

[@bs.module "expo"] [@bs.scope "Calendar"]
external openEventInCalendar: string => unit = "";