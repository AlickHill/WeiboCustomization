/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MGTwitterEngine, NSMutableDictionary;

@interface WBBusinessEngine : NSObject
{
    MGTwitterEngine *twitterEngine;
    NSMutableDictionary *requestsUserInfoDict;
}

- (void)statusesReceived:(id)arg1 forRequest:(id)arg2 dataFromLocal:(BOOL)arg3;
- (void)basicInfoReceived:(id)arg1 forRequest:(id)arg2 responseType:(int)arg3;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)action:(int)arg1 didReceiveData:(id)arg2 userInfo:(id)arg3;
- (void)action:(int)arg1 didReceiveBasicInfo:(id)arg2 userInfo:(id)arg3;
- (void)action:(int)arg1 didFailWithError:(id)arg2 userInfo:(id)arg3;
- (void)sentRequest:(id)arg1 forAction:(int)arg2;
- (void)dealloc;
- (id)init;
- (void)reset;

@end
