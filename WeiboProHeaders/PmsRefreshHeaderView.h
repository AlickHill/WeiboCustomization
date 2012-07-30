/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CALayer, NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface PmsRefreshHeaderView : UIView
{
    UILabel *lastUpdatedLabel;
    UILabel *statusLabel;
    CALayer *arrowImage;
    UIActivityIndicatorView *activityView;
    BOOL isFlipped;
    int update_times[3];
    NSString *homeLastUpdate;
    NSString *atLastUpdate;
    NSString *myCommentLastUpdate;
    NSString *myPmsLastUpdate;
    NSString *favLastUpdate;
    int update_ViewNumber;
    UIImageView *backImage;
    UIImageView *backImageView;
}

@property(nonatomic) UILabel *statusLabel; // @synthesize statusLabel;
@property(nonatomic) UILabel *lastUpdatedLabel; // @synthesize lastUpdatedLabel;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView;
@property(nonatomic) CALayer *arrowImage; // @synthesize arrowImage;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView;
@property(retain, nonatomic) UIImageView *backImage; // @synthesize backImage;
@property int update_ViewNumber; // @synthesize update_ViewNumber;
@property BOOL isFlipped; // @synthesize isFlipped;
- (void)dealloc;
- (void)toggleActivityView:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (void)showUpdateTimeOfIndex:(int)arg1;
- (void)setCurrentDateOfIndex:(int)arg1;
- (void)setLastDate;
- (void)setCurrentDate;
- (void)saveUpdateTime;
- (void)flipImageAnimated:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)turnRotationArrowImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

