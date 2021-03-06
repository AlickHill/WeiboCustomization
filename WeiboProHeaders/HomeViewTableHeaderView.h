/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CALayer, UIActivityIndicatorView, UILabel;

@interface HomeViewTableHeaderView : UIView
{
    UILabel *lastUpdatedLabel;
    UILabel *statusLabel;
    CALayer *arrowImage;
    UIActivityIndicatorView *activityView;
    BOOL isFlipped;
    int update_times[3];
    double lastUpdateHome;
}

@property BOOL isFlipped; // @synthesize isFlipped;
- (void)dealloc;
- (void)toggleActivityView:(BOOL)arg1;
- (void)updateLanguage;
- (void)setStatus:(int)arg1;
- (void)showUpdateTimeOfIndex:(int)arg1;
- (void)setCurrentDateOfIndex:(int)arg1;
- (void)setCurrentDate;
- (void)flipImageAnimated:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

