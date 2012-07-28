/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBContactEngineDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, WBContact, WBContactEngine, WBTableView;

@interface WBContactMessageSearchViewController : WBViewController <UITableViewDelegate, UITableViewDataSource, WBContactEngineDelegate, UIActionSheetDelegate>
{
    WBTableView *searchResultTableView;
    UIActivityIndicatorView *indicator;
    WBContactEngine *contactEngine;
    NSString *keyword;
    NSMutableArray *searchedContacts;
    BOOL hasMoreContacts;
    BOOL isLoading;
    BOOL isForward;
    WBContact *forwardToContact;
    id <WBContactMessageSearchViewControllerDelegate> delegate;
}

@property(nonatomic) id <WBContactMessageSearchViewControllerDelegate> delegate; // @synthesize delegate;
@property BOOL isForward; // @synthesize isForward;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)contactEngine:(id)arg1 didFailToSearchFollowersByKeyword:(id)arg2 error:(id)arg3;
- (void)contactEngine:(id)arg1 didFinishSearchOfFollowers:(id)arg2 keyword:(id)arg3 hasMore:(BOOL)arg4;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didFinishLoading;
- (void)startLoading;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithKeyword:(id)arg1;

@end
