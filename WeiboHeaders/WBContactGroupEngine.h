/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MGTwitterEngine, NSMutableDictionary;

@interface WBContactGroupEngine : NSObject
{
    id <WBContactGroupEngineDelegate> delegate;
    MGTwitterEngine *twitterEngine;
    NSMutableDictionary *requestsUserInfoDict;
}

@property(nonatomic) id <WBContactGroupEngineDelegate> delegate; // @synthesize delegate;
- (void)statusesReceived:(id)arg1 forRequest:(id)arg2 dataFromLocal:(BOOL)arg3;
- (void)basicInfoReceived:(id)arg1 forRequest:(id)arg2 responseType:(int)arg3;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)processServerResponseForContactGroupsEditWithContact:(id)arg1 groups:(id)arg2;
- (void)editContactGroupsForContact:(id)arg1 groups:(id)arg2;
- (void)processDownloadedContactGroups:(id)arg1 userInfo:(id)arg2;
- (void)downloadGroupsForContact:(id)arg1;
- (void)processServerEditedGroups:(id)arg1 userInfo:(id)arg2;
- (void)editGroupsWithCurrentGroups:(id)arg1 editedGroups:(id)arg2;
- (void)processServerCreateGroupWithGroupName:(id)arg1 responseGroups:(id)arg2;
- (void)createGroupWithGroupName:(id)arg1;
- (void)processRefreshedGroups:(id)arg1;
- (void)refreshGroups;
- (void)dealloc;
- (id)init;

@end
