/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSNumber, NSString, SUScriptABRecord;

@interface SUScriptAddressBook : SUScriptObject
{
    BOOL _databaseAccess;
    void *_observedAddressBook;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (void *)threadAddressBook;
+ (id)newScriptValueForNativeValue:(void *)arg1 propertyType:(unsigned int)arg2;
+ (id)newScriptRecordsForNativeRecords:(struct __CFArray *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) int sourceTypeMobileMe;
@property(readonly) int sourceTypeLocal;
@property(readonly) int sourceTypeLDAP;
@property(readonly) int sourceTypeExchangeGAL;
@property(readonly) int sourceTypeExchange;
@property(readonly) int sourceTypeCardDAVSearch;
@property(readonly) int sourceTypeCardDAV;
@property(readonly) int sortOrderByLastName;
@property(readonly) int sortOrderByFirstName;
@property(readonly) int searchScopeRemote;
@property(readonly) int searchScopeRecent;
@property(readonly) int searchScopeLocal;
@property(readonly) int recordTypeSource;
@property(readonly) int recordTypePerson;
@property(readonly) int recordTypeGroup;
@property(readonly) int propertyURL;
@property(readonly) unsigned int propertyTypeString;
@property(readonly) unsigned int propertyTypeReal;
@property(readonly) unsigned int propertyTypeMultiString;
@property(readonly) unsigned int propertyTypeMultiReal;
@property(readonly) unsigned int propertyTypeMultiInteger;
@property(readonly) unsigned int propertyTypeMultiDictionary;
@property(readonly) unsigned int propertyTypeMultiDateTime;
@property(readonly) unsigned int propertyTypeInvalid;
@property(readonly) unsigned int propertyTypeInteger;
@property(readonly) unsigned int propertyTypeDictionary;
@property(readonly) unsigned int propertyTypeDateTime;
@property(readonly) int propertySuffix;
@property(readonly) int propertySourceType;
@property(readonly) int propertySourceName;
@property(readonly) int propertyRelatedNames;
@property(readonly) int propertyPrefix;
@property(readonly) int propertyPhoneNumber;
@property(readonly) int propertyOrganization;
@property(readonly) int propertyNickname;
@property(readonly) int propertyMiddleName;
@property(readonly) int propertyLastName;
@property(readonly) int propertyJobTitle;
@property(readonly) int propertyKind;
@property(readonly) int propertyInstantMessage;
@property(readonly) int propertyGroupName;
@property(readonly) int propertyFirstName;
@property(readonly) int propertyEmail;
@property(readonly) int propertyDepartment;
@property(readonly) int propertyBirthday;
@property(readonly) int propertyAddress;
@property(readonly) NSString *labelWork;
@property(readonly) NSString *labelSpouse;
@property(readonly) NSString *labelSister;
@property(readonly) NSString *labelPartner;
@property(readonly) NSString *labelOther;
@property(readonly) NSString *labelPhoneWorkFAX;
@property(readonly) NSString *labelPhonePager;
@property(readonly) NSString *labelPhoneMobile;
@property(readonly) NSString *labelPhoneMain;
@property(readonly) NSString *labelPhoneIPhone;
@property(readonly) NSString *labelPhoneHomeFAX;
@property(readonly) NSString *labelParent;
@property(readonly) NSString *labelMother;
@property(readonly) NSString *labelManager;
@property(readonly) NSString *labelHomePage;
@property(readonly) NSString *labelHome;
@property(readonly) NSString *labelFriend;
@property(readonly) NSString *labelFather;
@property(readonly) NSString *labelChild;
@property(readonly) NSString *labelBrother;
@property(readonly) NSString *labelAssistant;
@property(readonly) NSString *kindPerson;
@property(readonly) NSString *kindOrganization;
@property(readonly) NSString *instantMessageServiceYahoo;
@property(readonly) NSString *instantMessageServiceMSN;
@property(readonly) NSString *instantMessageServiceJabber;
@property(readonly) NSString *instantMessageServiceICQ;
@property(readonly) NSString *instantMessageServiceAIM;
@property(readonly) NSString *instantMessageKeyUsername;
@property(readonly) NSString *instantMessageKeyService;
@property(readonly) int imageFormatThumbnail;
@property(readonly) int imageFormatOriginal;
@property(readonly) NSString *addressKeyZipCode;
@property(readonly) NSString *addressKeyStreet;
@property(readonly) NSString *addressKeyState;
@property(readonly) NSString *addressKeyCountryCode;
@property(readonly) NSString *addressKeyCountry;
@property(readonly) NSString *addressKeyCity;
@property(readonly) NSArray *sources;
@property(readonly) NSArray *people;
@property(readonly) NSNumber *numberOfPeopleInAddressBook;
@property(readonly) NSNumber *numberOfGroupsInAddressBook;
@property(readonly) NSArray *groups;
@property(readonly) SUScriptABRecord *defaultSource;
@property(readonly) int defaultSortOrder;
- (id)_className;
- (id)sourceWithRecordID:(id)arg1;
- (id)searchResultsViewControllerWithOptions:(id)arg1;
- (id)personWithRecordID:(id)arg1;
- (id)peopleWithName:(id)arg1;
- (id)peopleInSource:(id)arg1 withSortOrder:(id)arg2;
- (id)peoplePickerWithOptions:(id)arg1;
- (id)localizedLabelForLabel:(id)arg1;
- (id)groupWithRecordID:(id)arg1;
- (id)groupsInSource:(id)arg1;
- (void)dealloc;
- (id)initWithDatabaseAccess:(BOOL)arg1;
- (id)init;

@end

