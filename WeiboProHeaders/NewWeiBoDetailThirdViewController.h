/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "UserFinderPMDelegate-Protocol.h"

@class CellButton, ImageLoader, MGTwitterEngine_WeiboV4, MPMoviePlayerController, NSDictionary, NSMutableArray, NSString, ReportWeiboViewController, UIActionSheet, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UINavigationController, UIPopoverController, UIScrollView, UITableView, UITableViewCell, UIView, UIWebView, WeiboDetailCommentsViewController, WeiboDetailForwardsViewController;

@interface NewWeiBoDetailThirdViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIWebViewDelegate, UIGestureRecognizerDelegate, UIPopoverControllerDelegate, UIActionSheetDelegate, MFMailComposeViewControllerDelegate, UserFinderPMDelegate>
{
    UITableView *mainTableView;
    int sec1Num;
    int sec2Num;
    int sec3Num;
    NSDictionary *weiboInfo;
    MGTwitterEngine_WeiboV4 *_engine_weibo;
    NSMutableArray *_items;
    unsigned char orientionChanged;
    unsigned char verifiedStatus;
    unsigned char loadOlder;
    unsigned char favStatus;
    unsigned char loadingData;
    UIActivityIndicatorView *moreActivity;
    UIActivityIndicatorView *m_loadingActivity;
    UIActivityIndicatorView *refreshActivity;
    UIActivityIndicatorView *forwardRefreshActivity;
    int m_commentPage;
    unsigned long long commentID;
    ImageLoader *cellImageLoader;
    UIWebView *webView;
    NSString *imgThumb;
    int weiboDetailHeight;
    int weiboMediaHeight;
    UIImageView *rightBackImage;
    UIButton *backBtn;
    UIButton *backToTopBtn;
    UIButton *closeBtn;
    _Bool backHidden;
    int touchY;
    int touchEndY;
    BOOL touchMove;
    NSMutableArray *favArray;
    NSMutableArray *reportArray;
    UILabel *commentNoLabel;
    UILabel *forwardNoLabel;
    _Bool isFavorite;
    _Bool favoriteStatus;
    _Bool isReported;
    UIImageView *favImgView;
    UIImageView *reportImgView;
    UIImageView *moreImgView;
    UIImageView *commentImgView;
    UIImageView *forwardImgView;
    UIImageView *highLightImgView;
    NSString *commentRequest;
    UIImageView *headerImageView;
    UIView *headerView;
    UIImageView *buttomMaskImgView;
    UIImageView *topMaskImgView;
    UIViewController *superViewController;
    UILabel *commentNumLb;
    UILabel *commentHeader;
    UILabel *forwardNumLb;
    UILabel *forwardHeader;
    UIButton *commentFreshBtn;
    UIButton *forwardFreshBtn;
    NSMutableArray *mutableUrlArray;
    BOOL noOlderWeibo;
    NSDictionary *deleteComment;
    UIActivityIndicatorView *loadingActivity;
    UILabel *loadingLabel;
    UILabel *closeLabel;
    UILabel *backLabel;
    UILabel *titleLb;
    int selectedCommentCell;
    BOOL getMid;
    NSString *mid;
    UIActionSheet *urlactionSheet;
    UIActionSheet *moreactionSheet;
    UIActionSheet *copyactionSheet;
    BOOL isPaste;
    WeiboDetailCommentsViewController *mWeiboDetailCommentsViewController;
    WeiboDetailForwardsViewController *mWeiboDetailForwardsViewController;
    ReportWeiboViewController *reportContentViewController;
    UINavigationController *reportNavigationController;
    int commentsListHeight;
    int switchNum;
    UIButton *forwardSwitchBtn;
    UIButton *commentSwitchBtn;
    NSMutableArray *mediaInfoArray;
    NSMutableArray *mUrlArray;
    MPMoviePlayerController *mediaPlayer;
    UITableViewCell *mediaCell;
    UIView *weiboContentView;
    NSString *batchInfoRequestId;
    BOOL webLoaded;
    BOOL mediaLoaded;
    int mediaHeight;
    CellButton *playMusicBtn;
    UILabel *mediaTitle;
    UILabel *username;
    UIScrollView *scrollView;
    UIScrollView *musicscrollView;
    UIButton *playBtn;
    UIImageView *previewImage;
    UIImageView *leftBorder;
    UIImageView *rightBorder;
    UIImageView *tabImage;
    UIActivityIndicatorView *mUIActivityIndicatorView;
    UIPopoverController *reportWeiboPopover;
    BOOL videoLoaded;
    UIImageView *forwardBtnImage;
    UIImageView *commentBtnImage;
    UILabel *commentLabel;
    UILabel *favLabel;
    UILabel *forwardLabel;
    UILabel *moreLabel;
    NSString *deleteRequest;
    BOOL isReport;
    BOOL isPM;
    UIPopoverController *userListPopoverController;
}

@property(nonatomic) MPMoviePlayerController *mediaPlayer; // @synthesize mediaPlayer;
@property(nonatomic) _Bool favoriteStatus; // @synthesize favoriteStatus;
@property(nonatomic) UIViewController *superViewController; // @synthesize superViewController;
@property(nonatomic) _Bool backHidden; // @synthesize backHidden;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn;
@property(nonatomic) unsigned long long commentID; // @synthesize commentID;
@property(retain, nonatomic) NSDictionary *weiboInfo; // @synthesize weiboInfo;
- (void)pmSendFailed:(id)arg1 withError:(id)arg2;
- (void)pmSendSuccessed:(id)arg1 forRequest:(id)arg2;
- (void)onUsersPM:(id)arg1;
- (void)openSendPmsUsersList;
- (void)pausePlayer;
- (void)playTouched:(id)arg1;
- (void)movieNowLoadedCallback:(id)arg1;
- (void)movieNowPlayingCallback:(id)arg1;
- (void)movieFinishedCallback:(id)arg1;
- (void)switchToForwards:(id)arg1;
- (void)switchToComments:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)playMusicBtnTouched:(id)arg1;
- (void)onHeaderBarTouched:(id)arg1;
- (void)copyTouched;
- (void)emailTouched;
- (void)deleteTouched;
- (void)moreTouched:(id)arg1;
- (void)reportTouched;
- (void)favTouched;
- (void)forwardTouched;
- (void)commentTouched;
- (void)videoTouched:(id)arg1;
- (void)handleSwipeFrom:(id)arg1;
- (void)urlClicked:(id)arg1;
- (void)backToTopBtnClicked:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)resizeTableView;
- (void)refreshHeight;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)jsonDictionaryReceived:(id)arg1 forRequest:(id)arg2;
- (void)rtReportReceived:(id)arg1 forRequest:(id)arg2;
- (void)rtCommentNumbersReceived:(id)arg1 forRequest:(id)arg2;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)midReceived:(id)arg1 forRequest:(id)arg2;
- (void)statusesReceived:(id)arg1 forRequest:(id)arg2;
- (void)receivedRtNum:(int)arg1 commentNum:(int)arg2;
- (void)batchInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)tableviewCellWithReuseIdentifier:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)skinChanged:(id)arg1;
- (void)languageChanged:(id)arg1;
- (void)checkReportState;
- (void)checkFavState;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)rotateViewController:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dismissReportPopover;
- (void)CommentAndForwardListRefresh;
- (void)refresh;
- (void)loadMoreWeibo;
- (id)makeImgDivHtmlForEmail:(id)arg1;
- (id)makeHtmlForEmail;
- (id)makeImgDivHtml:(id)arg1;
- (void)initWebView;
- (void)loadMediaInfo;
- (void)refreshSkin;
- (void)viewDidLoad;

@end

