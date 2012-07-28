/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface WBMessageGroup : NSObject
{
    double _oldestMessageTime;
    double _latestMessageTime;
    NSMutableArray *_messages;
}

+ (BOOL)appendLatestMessage:(id)arg1 toGroups:(id)arg2;
+ (BOOL)deleteMessagesAfterTime:(double)arg1 fromGroups:(id)arg2;
+ (BOOL)deleteMessagesBeforeTime:(double)arg1 fromGroups:(id)arg2;
+ (BOOL)deleteMessage:(id)arg1 fromGroups:(id)arg2;
+ (id)mergeGroupsA:(id)arg1 withOtherGroupsB:(id)arg2;
+ (id)groupsWithOrderedMessages:(id)arg1;
@property(readonly, nonatomic) double latestMessageTime; // @synthesize latestMessageTime=_latestMessageTime;
@property(readonly, nonatomic) double oldestMessageTime; // @synthesize oldestMessageTime=_oldestMessageTime;
- (BOOL)deleteMessage:(id)arg1;
- (BOOL)insertMessage:(id)arg1;
- (void)forceInsertLatestMessage:(id)arg1;
- (void)forceSetLatestTime:(double)arg1;
- (void)forceSetOldestTime:(double)arg1;
- (void)setOldestAndLatestTime;
- (id)_messages;
- (id)messages;
- (double)groupTime;
- (void)dealloc;
- (id)initWithGroupedMessages:(id)arg1;
- (id)init;

@end

