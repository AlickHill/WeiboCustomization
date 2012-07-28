/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "SubTabDelegate-Protocol.h"

@class MGTwitterEngine, NSMutableArray, NSString, UIViewController, WBPRLMTableViewWrapper;

@interface UserTopicListViewController : WBTableViewController <SubTabDelegate, PRLMTableViewWrapperDelegate>
{
    MGTwitterEngine *_twitter;
    NSString *userID;
    int _pagenum;
    NSMutableArray *_messages;
    BOOL _loading;
    NSString *_errorDesc;
    UIViewController *parentVC;
    id <UserTopicListViewControllerDelegate> delegate;
    WBPRLMTableViewWrapper *prlmWrapper;
}

@property(nonatomic) id <UserTopicListViewControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIViewController *parentVC; // @synthesize parentVC;
- (void)dealloc;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)statusesReceived:(id)arg1 forRequest:(id)arg2 dataFromLocal:(BOOL)arg3;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)noMessages;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (id)noMessagesString;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithUserID:(id)arg1;
- (void)onBringToFront;
- (void)forceReloadData;

@end
