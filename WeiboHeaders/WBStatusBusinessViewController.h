/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, WBPlaceholderTableView, WBStatus, WBStatusBusinessEngine;

@interface WBStatusBusinessViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    WBStatus *status;
    NSMutableArray *list;
    BOOL hasMore;
    BOOL hasReloaded;
    WBStatusBusinessEngine *businessEngine;
    UIActivityIndicatorView *indicator;
    UIActivityIndicatorView *loadMoreIndicator;
    NSString *noDataPrompt;
    NSString *errorPrompt;
    WBPlaceholderTableView *rootTableView;
    struct CGPoint rootTableViewContentOffset;
    UIViewController *rootViewController;
    id <WBStatusBusinessViewControllerDelegate> delegate;
}

@property(nonatomic) id <WBStatusBusinessViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) UIViewController *rootViewController; // @synthesize rootViewController;
@property(nonatomic) struct CGPoint rootTableViewContentOffset; // @synthesize rootTableViewContentOffset;
@property(nonatomic) WBPlaceholderTableView *rootTableView; // @synthesize rootTableView;
@property(readonly, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator;
@property(readonly, nonatomic) BOOL hasReloaded; // @synthesize hasReloaded;
@property(retain, nonatomic) WBStatus *status; // @synthesize status;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableViewHasData;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)hideAdInMessageContentViewController;
- (void)showAdInMessageContentViewController;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)forceReloadData;
- (BOOL)hasNoData;
- (void)triggerLoadMore;
- (void)finishLoadingData;
- (void)loadMoreData;
- (void)reloadData;
- (int)numberOfNonePlaceholderRows;
- (int)numberOfDataRows;
- (float)heightForRowAtIndexPath:(id)arg1;
- (void)initStatusBusinessEngine;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

