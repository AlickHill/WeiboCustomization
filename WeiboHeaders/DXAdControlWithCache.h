/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DXAdAbstractControlWithCache.h"

@class DXAdRefreshCache, NSTimer, SinaAdDB;

@interface DXAdControlWithCache : DXAdAbstractControlWithCache
{
    DXAdRefreshCache *adRefresh;
    SinaAdDB *mAdDB;
    BOOL isFirstRequest;
    BOOL isFirstTimeReportToServer;
    BOOL lastVisibleAd;
    BOOL isClosedAd;
    BOOL isRefreshing;
    NSTimer *failRefreshTimer;
}

@property(retain) NSTimer *failRefreshTimer; // @synthesize failRefreshTimer;
@property BOOL isClosedAd; // @synthesize isClosedAd;
@property BOOL lastVisibleAd; // @synthesize lastVisibleAd;
@property BOOL isFirstTimeReportToServer; // @synthesize isFirstTimeReportToServer;
@property BOOL isFirstRequest; // @synthesize isFirstRequest;
@property SinaAdDB *mAdDB; // @synthesize mAdDB;
@property(retain) DXAdRefreshCache *adRefresh; // @synthesize adRefresh;
- (void)resetAdTempVisible:(id)arg1;
- (void)notify;
- (void)wait;
- (void)refreshAd;
- (void)closeAdRefresh;
- (void)clickCloseButton;
- (void)switchAd;
- (void)onReceiveAd;
- (void)refreshAdCacheByFailReceiveOnMain;
- (void)onDismissScreen;
- (void)onFailedToReceiveAd:(id)arg1;
- (void)refreshAdCacheOnMain;
- (void)refreshAdCache;
- (void)saveDB:(id)arg1 add:(id)arg2;
- (void)threadReportToServer;
- (void)reportToServerOnMain;
- (void)reportToServer;
- (void)setAdtempInvisible:(id)arg1 isVisiable:(int)arg2;
- (void)changeAdTempVisiable:(id)arg1 isVisible:(int)arg2;
- (void)recordTimeoutAd;
- (void)recordCloseAd;
- (void)recordClickAd;
- (void)clearCache;
- (void)closeByOperate;
- (void)closeAd;
- (void)clickAd;
- (void)recordPV;
- (id)buildAdUriForGETModel:(id)arg1 selectAd:(id)arg2;
- (id)buildPostParms:(id)arg1;
- (void)close;
- (void)adControlSetRunning;
- (void)dealloc;
- (id)initWithCustom:(id)arg1 adRequest:(id)arg2 adSize:(id)arg3 posId:(id)arg4 refreshCacheInterval:(int)arg5;
- (id)initWithCustom:(id)arg1 adSize:(id)arg2 posId:(id)arg3 refreshCacheInterval:(int)arg4;

@end

