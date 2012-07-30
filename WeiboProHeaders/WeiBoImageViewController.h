/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class PicStatusesViewController, UIButton, UIImageView, UIScrollView, UIView, WeiBoImageScrollView;

@interface WeiBoImageViewController : UIViewController <UIScrollViewDelegate>
{
    WeiBoImageScrollView *imageScrollView;
    UIImageView *backImageView;
    UIView *backView;
    PicStatusesViewController *mPicStatusesViewController;
    UIScrollView *allImageScrollView;
    UIImageView *closeImageView;
    UIButton *closeButton;
}

@property(nonatomic) PicStatusesViewController *mPicStatusesViewController; // @synthesize mPicStatusesViewController;
@property(nonatomic) WeiBoImageScrollView *imageScrollView; // @synthesize imageScrollView;
@property(nonatomic) UIImageView *backImageView; // @synthesize backImageView;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)imageBackViewChangeAlpha;
- (void)closeAllImageView;
- (void)viewDidLoad;

@end

