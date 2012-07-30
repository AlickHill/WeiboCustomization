/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MGTwitterEngine_WeiboV4, NSMutableArray;

@interface PmSender : NSObject
{
    MGTwitterEngine_WeiboV4 *_engine;
    NSMutableArray *tasksArray;
    BOOL isBusy;
    id delegate;
}

@property(nonatomic) NSMutableArray *tasksArray; // @synthesize tasksArray;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)sendPmReceived:(id)arg1 forRequest:(id)arg2;
- (void)sendPM:(id)arg1;
- (void)processTask;
- (void)requestDidFailedSelector:(id)arg1;
- (void)requestDidFinishedSelector:(id)arg1;
- (BOOL)doForwardUpload:(id)arg1;
- (BOOL)doRetryUpload:(id)arg1;
- (id)oauthRequestWithURLString:(id)arg1;
- (void)cancelTaskDelegate;
- (id)init;

@end

