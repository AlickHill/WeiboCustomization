/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "TimeLineTab-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MGTwitterEngine_WeiboV4, NSMutableArray, NSString, NSTimer, NewHomelineViewController, TableRefreshHeaderView, UIActivityIndicatorView, UITableView, UITableViewCell;

@interface PicStatusesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, TimeLineTab, UIScrollViewDelegate>
{
    UITableView *mainTableView;
    MGTwitterEngine_WeiboV4 *_engine;
    NSMutableArray *_items;
    NSMutableArray *ipad_Exist_Array;
    UIActivityIndicatorView *moreActivity;
    unsigned char orientionChanged;
    unsigned char verifiedStatus;
    unsigned char loadingData;
    unsigned char loadOlder;
    unsigned char selectStatus;
    TableRefreshHeaderView *refreshHeaderView;
    NewHomelineViewController *myDetailView;
    NSString *selectedImage;
    UITableViewCell *selectedCell;
    BOOL noOlderWeibo;
    BOOL isShowImage;
    int cellCount;
    BOOL isEndOfList;
    int loadingTime;
    NSTimer *loadTimer;
}

@property(retain, nonatomic) NSString *selectedImage; // @synthesize selectedImage;
@property(nonatomic) BOOL isShowImage; // @synthesize isShowImage;
@property(nonatomic) unsigned char selectStatus; // @synthesize selectStatus;
@property(nonatomic) NewHomelineViewController *myDetailView; // @synthesize myDetailView;
@property(retain, nonatomic) TableRefreshHeaderView *refreshHeaderView; // @synthesize refreshHeaderView;
@property(nonatomic) UITableView *mainTableView; // @synthesize mainTableView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textButtonTouched:(id)arg1;
- (void)imageButtonTouched:(id)arg1;
- (void)skinChanged:(id)arg1;
- (void)weiboDeleteDidFinished:(id)arg1;
- (void)changeSelectCellBackColor:(int)arg1 cellDic:(id)arg2 isButton:(BOOL)arg3;
- (void)changeSelectImageViewBackColor:(id)arg1 selectedStatus:(BOOL)arg2;
- (void)onWeiboRTTouched:(id)arg1;
- (void)onWeiboMapTouched:(id)arg1;
- (void)onUserPhotoTouched:(id)arg1;
- (void)onWeiboThumbTouched:(id)arg1;
- (void)finishLoadingNewData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showLoadingHeader;
- (void)createHeaderView;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)rtCommentNumbersReceived:(id)arg1 forRequest:(id)arg2;
- (void)statusesReceived:(id)arg1 forRequest:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)onRotated;
- (void)onLogout;
- (void)onBringToFront;
- (void)refreshCommentNumber;
- (void)refresh;
- (void)updateRtCommentNumberOfWeibos:(id)arg1;
- (void)loadNewWeibo;
- (void)loadMoreWeibo;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)loadTimeOut;
- (void)releaseTimer;
- (void)viewDidLoad;

@end

