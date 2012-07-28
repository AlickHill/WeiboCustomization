/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "WBUserTableViewCellDelegate-Protocol.h"

@class NSArray, UIViewController, WBContactEngine, WBFindFriendsEngine, WBPRLMTableViewWrapper;

@interface WBFindFriendsGuessViewController : WBTableViewController <PRLMTableViewWrapperDelegate, WBUserTableViewCellDelegate>
{
    UIViewController *rootViewController;
    WBPRLMTableViewWrapper *tableViewWrapper;
    WBFindFriendsEngine *findFriendsEngine;
    WBContactEngine *contactEngine;
    NSArray *users;
    BOOL needsReloadData;
}

@property(retain, nonatomic) NSArray *users; // @synthesize users;
- (void)handleContactsDidChangeNotification:(id)arg1;
- (void)relationshipButton:(id)arg1 didPressInCell:(id)arg2;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)clearRootViewController;
- (id)initWithRootViewController:(id)arg1;

@end
