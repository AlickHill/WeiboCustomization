/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WBTaskQueueStorager-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface WBTaskQueueMemeoryStorager : NSObject <WBTaskQueueStorager>
{
    NSMutableArray *_tasksArr;
    NSMutableDictionary *_tasksDict;
}

- (id)getTasks:(unsigned int)arg1;
- (id)getPendingTask:(unsigned int)arg1;
- (id)getTaskById:(unsigned long long)arg1;
- (id)updateTaskFromState:(int)arg1 toState:(int)arg2;
- (BOOL)updateTask:(id)arg1 toState:(int)arg2;
- (BOOL)saveTask:(id)arg1;
- (BOOL)removeTask:(id)arg1;
- (BOOL)pauseTask:(id)arg1;
- (BOOL)addTask:(id)arg1;
- (BOOL)reload;
- (void)dealloc;
- (id)init;

@end

