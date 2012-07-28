/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WBNetworkClient;

@interface WBPushNotificationManager : NSObject
{
    WBNetworkClient *client;
}

+ (id)sharedManager;
- (void)handlePush:(id)arg1;
- (void)handlePush:(id)arg1 isAppActive:(BOOL)arg2;
- (void)handlePushAction:(id)arg1 isAppActive:(BOOL)arg2;
- (void)checkPushStateWithCompletionHandler:(id)arg1;
- (BOOL)isPushRegisteredForCurrentUser;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appStateDidChangeToState:(id)arg1;
- (void)appAccountDidSwitch;
- (void)appAccountWillSwitchTo:(id)arg1 completionHandler:(id)arg2;
- (void)appAccountDidLogout;
- (void)appAccountWillLogout:(id)arg1;
- (void)appDidStart;
- (void)handlePushAPIResult:(id)arg1;
- (void)performAppStartProcessInSeconds:(double)arg1;
- (void)waitingForLoginProcess;
- (void)registerPushWithCompletionHandler:(id)arg1;
- (void)switchPushToUser:(id)arg1 completionHandler:(id)arg2;
- (void)bindingPushWithCompletionHandler:(id)arg1;
- (void)unBindingPushWithCompletionHandler:(id)arg1;
- (void)switchPushFromUser:(id)arg1 toUser:(id)arg2 completionHandler:(id)arg3;
- (void)saveServerSettings:(id)arg1 forAccount:(id)arg2;
- (id)appLoggedInUserID;
- (BOOL)isAppLoggedIn;
- (void)markPushRegistrationAsNotFinished;
- (void)markPushRegistrationAsFinished;
- (BOOL)isPushRegistrationNotFinished;
- (void)setGDID:(id)arg1;
- (id)getGDID;
- (void)saveSettingsForAccount:(id)arg1 completionHandler:(id)arg2;
- (void)saveSettingsForAccount:(id)arg1;
- (void)loadSettingsForAccount:(id)arg1;
- (void)setPushTypeForCurrentUser:(unsigned int)arg1;
- (unsigned int)getPushTypeForCurrentUser;
- (void)dealloc;
- (void)initClient;
- (id)init;
- (void)setSettings:(id)arg1;
- (id)getSettings;

@end

