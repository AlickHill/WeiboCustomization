/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIWindow.h"

@interface WBAppWindow : UIWindow
{
    id <WBTouchEventTracker> _touchEventTracker;
    BOOL _shouldTrackTouchEvent;
}

@property(nonatomic) id <WBTouchEventTracker> touchEventTracker; // @synthesize touchEventTracker=_touchEventTracker;
- (void)trackingTouchEvent:(BOOL)arg1;
- (void)sendEvent:(id)arg1;

@end

