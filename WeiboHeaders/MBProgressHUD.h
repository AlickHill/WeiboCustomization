/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSDate, NSString, NSTimer, UIFont, UILabel;

@interface MBProgressHUD : UIView
{
    int mode;
    int animationType;
    SEL methodForExecution;
    id targetForExecution;
    id objectForExecution;
    BOOL useAnimation;
    float yOffset;
    float xOffset;
    float width;
    float height;
    BOOL taskInProgress;
    float graceTime;
    float minShowTime;
    NSTimer *graceTimer;
    NSTimer *minShowTimer;
    NSDate *showStarted;
    UIView *indicator;
    UILabel *label;
    UILabel *detailsLabel;
    float progress;
    id <MBProgressHUDDelegate> delegate;
    NSString *labelText;
    NSString *detailsLabelText;
    float opacity;
    UIFont *labelFont;
    UIFont *detailsLabelFont;
    BOOL isFinished;
    BOOL removeFromSuperViewOnHide;
    UIView *customView;
    struct CGAffineTransform rotationTransform;
}

+ (BOOL)hideHUDForView:(id)arg1 animated:(BOOL)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(BOOL)arg2;
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property(retain) UIView *customView; // @synthesize customView;
@property BOOL removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property BOOL taskInProgress; // @synthesize taskInProgress;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
@property float minShowTime; // @synthesize minShowTime;
@property float graceTime; // @synthesize graceTime;
@property float yOffset; // @synthesize yOffset;
@property float xOffset; // @synthesize xOffset;
@property float height; // @synthesize height;
@property float width; // @synthesize width;
@property(retain) UIView *indicator; // @synthesize indicator;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property float opacity; // @synthesize opacity;
@property id <MBProgressHUDDelegate> delegate; // @synthesize delegate;
@property int animationType; // @synthesize animationType;
- (void)setTransformForCurrentOrientation:(BOOL)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)fillRoundedRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)hideUsingAnimation:(BOOL)arg1;
- (void)showUsingAnimation:(BOOL)arg1;
- (void)cleanUp;
- (void)done;
- (void)animationFinished:(id)arg1 finished:(BOOL)arg2 context:(void *)arg3;
- (void)launchExecution;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(BOOL)arg4;
- (void)handleMinShowTimer:(id)arg1;
- (void)handleGraceTimer:(id)arg1;
- (void)hide:(BOOL)arg1;
- (void)show:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)updateIndicators;
- (void)updateProgress;
- (void)updateDetailsLabelText:(id)arg1;
- (void)updateLabelText:(id)arg1;
@property float progress;
@property(copy) NSString *detailsLabelText;
@property(copy) NSString *labelText;
@property int mode;

@end

