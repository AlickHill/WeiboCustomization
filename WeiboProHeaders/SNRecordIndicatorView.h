/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSTimer;

@interface SNRecordIndicatorView : UIView
{
    NSTimer *timer;
    int second;
    id delegate;
}

@property(nonatomic) id delegate; // @synthesize delegate;
- (void)dealloc;
- (void)releaseTimer;
- (void)tick:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

