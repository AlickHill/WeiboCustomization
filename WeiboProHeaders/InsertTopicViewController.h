/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MGTwitterEngine_WeiboV4, NSMutableArray, UISearchBar, UISearchDisplayController, UITableView;

@interface InsertTopicViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, UIActionSheetDelegate>
{
    UITableView *table;
    NSMutableArray *friends;
    UISearchBar *searchbar;
    UISearchDisplayController *searchDisplayController;
    BOOL isSearch;
    BOOL isFromTransmit;
    BOOL isBecomeFirst;
    BOOL isCache;
    NSMutableArray *allTopicAry;
    NSMutableArray *historyTopicAry;
    id <InsertTopicDelegate> delegate;
    NSMutableArray *filterdFriends;
    MGTwitterEngine_WeiboV4 *_engine;
    BOOL loadingData;
    BOOL loadOlder;
    int pageNum;
    BOOL noOlderWeibo;
    BOOL isSearching;
}

@property(retain, nonatomic) NSMutableArray *filterdFriends; // @synthesize filterdFriends;
@property(nonatomic) id <InsertTopicDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSMutableArray *allTopicAry; // @synthesize allTopicAry;
@property(nonatomic) BOOL isBecomeFirst; // @synthesize isBecomeFirst;
@property(nonatomic) BOOL isFromTransmit; // @synthesize isFromTransmit;
@property(nonatomic) BOOL isSearch; // @synthesize isSearch;
@property(retain, nonatomic) UITableView *table; // @synthesize table;
@property(retain, nonatomic) UISearchBar *searchbar; // @synthesize searchbar;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)hotWordsReceived:(id)arg1;
- (void)userTrendsReceived:(id)arg1 forRequest:(id)arg2;
- (void)configCell:(id)arg1 forIndexPath:(id)arg2;
- (id)tableViewCellWithReuseIdentifier:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)returnView;
- (void)viewDidLoad;
- (id)init;

@end
