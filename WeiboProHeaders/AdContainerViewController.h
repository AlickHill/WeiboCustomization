/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "AdManagerDelegate-Protocol.h"

@class AdView, UIImageView, UIView;

@interface AdContainerViewController : UIViewController <AdManagerDelegate>
{
    UIView *_presentView;
    UIImageView *_backImageView;
    id <AdContainerDelegate> _delegate;
    AdView *_lastView;
    AdView *_nextView;
}

@property(nonatomic) id <AdContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)skinChanged;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)closeAdsContainer;
- (void)presentAdView:(id)arg1;
- (id)cubicAnimationTopToCenterwithDelegate:(id)arg1 withDuration:(double)arg2 radius:(float)arg3;
- (id)cubicAnimationCenterToBottomwithDelegate:(id)arg1 withDuration:(double)arg2 radius:(float)arg3;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

