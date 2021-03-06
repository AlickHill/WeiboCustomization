/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FMDatabase, NSArray;

@interface WBContactManager : NSObject
{
    BOOL needsReloadCachedGroups;
    NSArray *cachedGroups;
    FMDatabase *database;
}

+ (id)lastVisitedGroup;
+ (void)recordVisitedGroup:(id)arg1;
+ (id)sharedManager;
- (void)setGroupListHidden:(BOOL)arg1;
- (BOOL)isGroupListHidden;
- (void)setContactsSynchronized;
- (BOOL)isContactsSynchronized;
- (void)appLanguageDidChange:(id)arg1;
- (void)accountSignedOut:(id)arg1;
- (void)accountSignedIn:(id)arg1;
- (id)init;
- (void)prepareForCurrentUser;
- (void)clearCurrentUser;
- (BOOL)saveGroups:(id)arg1 contacts:(id)arg2 recents:(id)arg3 inDatabase:(id)arg4 error:(id *)arg5;
- (void)savePhoneInfoOfContacts:(id)arg1;
- (void)deletePhoneInfos;
- (id)contactByUserID:(id)arg1;
- (BOOL)isContact:(id)arg1 inGroup:(id)arg2;
- (id)recentContactsWithType:(unsigned int)arg1 maxCount:(unsigned int)arg2 error:(id *)arg3;
- (id)contactsInGroup:(id)arg1 query:(id)arg2 error:(id *)arg3;
- (id)contactsInGroup:(id)arg1 error:(id *)arg2;
- (int)contactCountInGroup:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (int)contactCountInGroup:(id)arg1 error:(id *)arg2;
- (id)indexedContactsArrayWithSortedContacts:(id)arg1;
- (BOOL)replaceContactGroupsWithContact:(id)arg1 groups:(id)arg2;
- (BOOL)removeContact:(id)arg1;
- (BOOL)saveContact:(id)arg1 lastUsedDate:(id)arg2 lastUsedType:(unsigned int)arg3 error:(id *)arg4;
- (void)saveContact:(id)arg1 error:(id *)arg2;
- (BOOL)saveOrDeleteContact:(id)arg1 lastUsedDate:(id)arg2 lastUsedType:(unsigned int)arg3 error:(id)arg4;
- (BOOL)saveOrDeleteContact:(id)arg1 error:(id)arg2;
- (BOOL)saveContacts:(id)arg1 inGroup:(id)arg2 error:(id *)arg3;
- (BOOL)groupExistsWithGroupID:(id)arg1;
- (BOOL)removeGroup:(id)arg1;
- (BOOL)replaceGroupsWithGroups:(id)arg1 error:(id *)arg2;
- (id)editableCachedGroups;
- (id)cachedGroups;
- (id)retrieveCustomGroups;
- (void)setNeedsReloadCachedGroups;

@end

