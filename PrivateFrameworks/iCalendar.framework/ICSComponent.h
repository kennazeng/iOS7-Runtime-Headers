/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDuration, ICSTrigger, NSURL, ICSUserAddress, NSMutableArray, ICSStructuredLocation, NSString, ICSDate, NSMutableDictionary, NSArray;

@interface ICSComponent : NSObject <ICSWriting> {
    NSMutableDictionary *_properties;
    NSMutableArray *_components;
}

@property(retain) NSArray * attach;
@property(retain) NSArray * attendee;
@property int classification;
@property(retain) ICSDate * created;
@property(retain) NSString * description;
@property(retain) ICSDate * dtstamp;
@property(retain) ICSDate * dtstart;
@property(readonly) BOOL isAllDay;
@property(retain) ICSDate * dtend;
@property(retain) ICSDuration * duration;
@property(retain) NSArray * exdate;
@property(retain) NSArray * exrule;
@property(retain) ICSDate * last_modified;
@property(retain) NSString * location;
@property(retain) ICSUserAddress * organizer;
@property(retain) NSArray * rdate;
@property(retain) ICSDate * recurrence_id;
@property(retain) NSArray * rrule;
@property unsigned int sequence;
@property int status;
@property(retain) NSString * summary;
@property(retain) ICSTrigger * trigger;
@property(retain) NSString * uid;
@property(retain) NSURL * url;
@property unsigned int priority;
@property int x_calendarserver_access;
@property(retain) NSString * x_apple_dropbox;
@property(retain) NSString * x_apple_ews_changekey;
@property(retain) NSString * x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation;
@property(retain) NSString * x_apple_ews_permission;
@property BOOL x_apple_ignore_on_restore;
@property(retain) NSString * x_apple_etag;
@property(retain) NSString * x_apple_scheduletag;
@property(retain) NSString * x_apple_serverFilename;
@property(retain) ICSStructuredLocation * x_apple_structured_location;
@property(retain) NSArray * conferences;
@property(retain) NSArray * components;

+ (id)inheritanceKeywords;
+ (id)makeUID;
+ (int)statusFromString:(id)arg1;
+ (id)stringFromStatus:(int)arg1;
+ (id)name;

- (void)fixExceptionDates;
- (void)fixExceptionRules;
- (void)fixRecurrenceDates;
- (void)fixRecurrenceRules;
- (void)fixAttachments;
- (void)fixAttendees;
- (void)fixAlarms;
- (void)fixComponent;
- (void)fixPropertiesInheritance:(id)arg1;
- (void)setForcedAllDay:(BOOL)arg1;
- (id)x_apple_travel_start;
- (void)setX_apple_travel_start:(id)arg1;
- (void)setX_apple_travel_duration:(id)arg1;
- (id)x_apple_travel_duration;
- (id)conferences;
- (void)setConferences:(id)arg1;
- (id)x_apple_serverFilename;
- (void)setX_apple_serverFilename:(id)arg1;
- (id)x_apple_scheduletag;
- (void)setX_apple_scheduletag:(id)arg1;
- (id)x_apple_etag;
- (void)setX_apple_etag:(id)arg1;
- (id)x_apple_structured_location;
- (BOOL)x_apple_ignore_on_restore;
- (void)setX_apple_ignore_on_restore:(BOOL)arg1;
- (void)setX_apple_ews_needsserverconfirmation:(BOOL)arg1;
- (BOOL)x_apple_ews_needsserverconfirmation;
- (void)setX_apple_ews_permission:(id)arg1;
- (id)x_apple_ews_permission;
- (void)setX_apple_ews_itemid:(id)arg1;
- (id)x_apple_ews_itemid;
- (void)setX_apple_ews_changekey:(id)arg1;
- (id)x_apple_ews_changekey;
- (void)setX_apple_dropbox:(id)arg1;
- (id)x_apple_dropbox;
- (void)setX_calendarserver_access:(int)arg1;
- (int)x_calendarserver_access;
- (id)rrule;
- (void)setRrule:(id)arg1;
- (id)recurrence_id;
- (id)rdate;
- (void)setRdate:(id)arg1;
- (id)organizer;
- (id)last_modified;
- (id)exrule;
- (void)setExrule:(id)arg1;
- (id)exdate;
- (void)setExdate:(id)arg1;
- (id)dtend;
- (void)setDtstart:(id)arg1;
- (id)dtstamp;
- (id)created;
- (id)attendee;
- (id)allProperties;
- (id)dtstart;
- (BOOL)forcedAllDay;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (void)setPropertyValue:(id)arg1 type:(int)arg2 forName:(id)arg3;
- (void)setPropertyValue:(id)arg1 forName:(id)arg2;
- (void)removeComponent:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (id)propertiesForName:(id)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)ICSStringWithOptions:(unsigned int)arg1;
- (BOOL)isAllDay;
- (void)ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (BOOL)ignorePropertyWithName:(id)arg1;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)removePropertiesForName:(id)arg1;
- (void)setProperties:(id)arg1 forName:(id)arg2;
- (BOOL)validate:(id*)arg1;
- (void)setX_apple_structured_location:(id)arg1;
- (void)setSequence:(unsigned int)arg1;
- (void)setCreated:(id)arg1;
- (void)setLast_modified:(id)arg1;
- (void)setDtstamp:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setClassification:(int)arg1;
- (int)classification;
- (void)setAttach:(id)arg1;
- (void)setRecurrence_id:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setDtend:(id)arg1;
- (void)setAttendee:(id)arg1;
- (unsigned int)sequence;
- (void)setUid:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)trigger;
- (id)location;
- (void)setSummary:(id)arg1;
- (id)summary;
- (id)attach;
- (void)setDuration:(id)arg1;
- (int)status;
- (void)setLocation:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)init;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (id)uid;
- (void)setUrl:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (unsigned int)priority;
- (id)duration;
- (id)url;
- (id)properties;
- (id)components;

@end
