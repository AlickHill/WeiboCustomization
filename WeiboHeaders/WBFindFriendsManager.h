/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface WBFindFriendsManager : NSObject
{
    unsigned int lastSelectedTabIndex;
    BOOL uploadedAddressBook;
    NSArray *addressBookContacts;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSArray *addressBookContacts; // @synthesize addressBookContacts;
- (void)applicationDidReceiveMemoryWarningNotification:(id)arg1;
- (id)contactInfosInAddressBook;
- (id)addressBookContactMatchingPhone:(id)arg1;
- (id)vcardFromAddressBook;
@property(nonatomic) BOOL addressBookDisabled;
@property(nonatomic) BOOL uploadedAddressBook; // @synthesize uploadedAddressBook;
@property(nonatomic) unsigned int lastSelectedTabIndex; // @synthesize lastSelectedTabIndex;
- (void)dealloc;
- (id)init;

@end

