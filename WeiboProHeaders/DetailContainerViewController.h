/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UISplitViewControllerDelegate-Protocol.h"

@class AtTimelineViewController, BadgeView, FavTimelineViewController, HomeTimelineViewController, MyCommentsViewController, MyPmsViewController, NSString, UIActivityIndicatorView, UIBarButtonItem, UILabel, UIPopoverController, UIToolbar;

@interface DetailContainerViewController : UIViewController <UISplitViewControllerDelegate>
{
    HomeTimelineViewController *homeTimelineVC;
    AtTimelineViewController *atTimelineVC;
    FavTimelineViewController *favTimelineVC;
    MyCommentsViewController *myCommentsVC;
    MyPmsViewController *myPmsVC;
    id detailItem;
    id <TimeLineTab> currentTab;
    UIToolbar *toolbar;
    UIPopoverController *popoverController;
    UIActivityIndicatorView *refreshActivity;
    UIActivityIndicatorView *loadActivity;
    UIBarButtonItem *barItemRefresh;
    UIBarButtonItem *barItemSpace1;
    BOOL refreshStatus;
    BOOL orientationStatus;
    UILabel *loadLabel;
    UILabel *favLabel;
    UILabel *titleLabel;
    UIBarButtonItem *barItemSpace;
    UIBarButtonItem *barItemLoad;
    NSString *titleString;
    BadgeView *badgeView;
}

@property(nonatomic) BOOL refreshStatus; // @synthesize refreshStatus;
@property(retain, nonatomic) id <TimeLineTab> currentTab; // @synthesize currentTab;
@property(retain, nonatomic) MyPmsViewController *myPmsVC; // @synthesize myPmsVC;
@property(retain, nonatomic) MyCommentsViewController *myCommentsVC; // @synthesize myCommentsVC;
@property(retain, nonatomic) FavTimelineViewController *favTimelineVC; // @synthesize favTimelineVC;
@property(retain, nonatomic) AtTimelineViewController *atTimelineVC; // @synthesize atTimelineVC;
@property(retain, nonatomic) HomeTimelineViewController *homeTimelineVC; // @synthesize homeTimelineVC;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar;
@property(retain, nonatomic) id detailItem; // @synthesize detailItem;
- (void)accountChanged:(id)arg1;
- (void)onLogOut;
- (void)onBarItemNewWeiboClick:(id)arg1;
- (void)onBarItemRefreshClick:(id)arg1;
- (void)configureView;
- (void)turnOffAllScrollsToTop;
- (void)splitViewController:(id)arg1 willShowViewController:(id)arg2 invalidatingBarButtonItem:(id)arg3;
- (void)splitViewController:(id)arg1 willHideViewController:(id)arg2 withBarButtonItem:(id)arg3 forPopoverController:(id)arg4;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reportFileAndTextCacheFileClear;
- (void)favLabelHidden;
- (void)favLabelAppear:(id)arg1;
- (void)viewDidLoad;
- (void)hiddenRefreshLabel;
- (id)initColorBarItemWithAction:(SEL)arg1 title:(id)arg2 image:(id)arg3 highLightImage:(id)arg4;
- (void)replaceToolBar:(id)arg1;
- (void)changeBadge:(int)arg1;
- (void)changeToolBar;
- (void)initBg;
- (void)initToolbar;

@end

