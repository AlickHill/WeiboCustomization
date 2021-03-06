/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MGTwitterEngineDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CellButton, MGTwitterEngine_WeiboV4, NSDictionary, NSMutableDictionary, NSString, UIActionSheet, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIPopoverController, UITextField, UITextView, UIView, UserFollowerViewController, UserFriendsViewController, UserFullInfoViewController, UserStatusesViewController;

@interface UserInfoViewController : UIViewController <UIActionSheetDelegate, UIPopoverControllerDelegate, UITextFieldDelegate, MGTwitterEngineDelegate>
{
    NSMutableDictionary *userInfoDic;
    MGTwitterEngine_WeiboV4 *_engine;
    BOOL showStatus;
    BOOL friendShowStatus;
    BOOL backStatus;
    BOOL pmStatus;
    BOOL followStatus;
    BOOL getRemark;
    BOOL userImageShow;
    BOOL isRemark;
    BOOL myFollowerStatus;
    BOOL blocksStatus;
    BOOL groupStatus;
    BOOL colseGroupStatus;
    BOOL isBlocked;
    UIImageView *m_userImage;
    UIImageView *verifiedImage;
    UIImageView *rightBackImage;
    UIImageView *moveInfo_bg;
    UIImageView *buttonBackImageView;
    UIImageView *msgButtonImage;
    UIImageView *rmdButtonImage;
    UIImageView *atButtonImage;
    UIImageView *groupButtonImage;
    UIImageView *statuseImageView;
    UIImageView *friendImageView;
    UIImageView *followerImageView;
    UIImageView *profileImageView;
    UIImageView *topBarImageView;
    UIButton *atButton;
    UIButton *backBtn;
    UIButton *messageButton;
    UIButton *recommendButton;
    UIButton *userUrlButton;
    UIButton *remarkButton;
    UIButton *groupButton;
    UIButton *closeBtn;
    UITextView *m_userDescription;
    UILabel *m_userName;
    UILabel *m_userLocation;
    UILabel *m_userUrl;
    UILabel *userNameHeader;
    UILabel *groupLabel;
    UILabel *m_remarkName;
    UILabel *friends_Count;
    UILabel *followers_Count;
    UILabel *statuses_Count;
    UILabel *backLabel;
    UILabel *msgLabel;
    UILabel *rmdLabel;
    UILabel *atLabel;
    UIView *hideButtonView;
    UILabel *closeLabel;
    UITextField *remarkTextField;
    UIPopoverController *userPopover;
    UIPopoverController *remarkPopover;
    UIPopoverController *userGroupPopover;
    UIView *tableViewContainer;
    UserFriendsViewController *m_friendInfoViewController;
    UserStatusesViewController *m_userStatusesViewController;
    UserFollowerViewController *m_followerInfoViewController;
    UserFullInfoViewController *m_userFullViewController;
    CellButton *friendButton;
    UIImageView *buttomMaskImgView;
    UIImageView *followedImageView;
    UIImageView *topMaskImgView;
    NSString *nowRemarkName;
    NSString *vipInfoString;
    NSString *userRequestString;
    NSString *cancelFollowRequestString;
    NSString *addBlockRequestString;
    NSString *destroyBlockReuestString;
    NSString *followRequestString;
    NSString *getRemarkString;
    UIViewController *remarkViewController;
    UIActivityIndicatorView *loadVipActivity;
    UIActivityIndicatorView *followedActivity;
    UILabel *profileLabel;
    UILabel *statuseLabel;
    UILabel *friendLabel;
    UILabel *followerLabel;
    int groupNum;
    int selectedNum;
    BOOL follow_eachOther;
    NSString *sendRemarkName;
    BOOL fromSetting;
    UIActionSheet *moreactionSheet;
    NSString *userName;
    NSString *userId;
}

@property(nonatomic) BOOL fromSetting; // @synthesize fromSetting;
@property(nonatomic) BOOL isBlocked; // @synthesize isBlocked;
@property(retain, nonatomic) NSDictionary *userInfoDic; // @synthesize userInfoDic;
@property(nonatomic) BOOL backStatus; // @synthesize backStatus;
@property(nonatomic) BOOL showStatus; // @synthesize showStatus;
@property(retain, nonatomic) NSString *vipInfoString; // @synthesize vipInfoString;
@property(retain, nonatomic) NSString *userId; // @synthesize userId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void)recommendUserToFriend:(id)arg1;
- (void)PmsUserButtonTouchedOn;
- (void)atUserButtonTouchedOn;
- (void)friendUserButtonTouchedUp:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)profileButtonTouchedOn;
- (void)statuseButtonTouchedOn;
- (void)followersButtonTouchedOn;
- (void)friendButtonTouchedOn;
- (void)turnOffAllShowStatus;
- (void)turnOffAllScrollsToTop;
- (void)moreButtonTouchedOn;
- (void)userUrlButtonTouchedOn;
- (void)openRemarkView:(id)arg1;
- (void)showUserImage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)hideAllTableView;
- (void)hideUserInfoTableViewContainer;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)userInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)weiboUserInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)basicInfoReceived:(id)arg1 forRequest:(id)arg2 responseType:(int)arg3;
- (void)miscInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)updateRemarkReceived:(id)arg1 forRequest:(id)arg2;
- (void)remarkNameReceived:(id)arg1 forRequest:(id)arg2;
- (void)friendShipReceived:(id)arg1 forRequest:(id)arg2;
- (void)blocksExistsReceived:(id)arg1 forRequest:(id)arg2;
- (void)privacyInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)sendRemarkName:(id)arg1;
- (void)getRemarkName;
- (void)checkIsFriend;
- (void)getUserVipInfo:(id)arg1;
- (void)getUserInfo;
- (void)languageChanged:(id)arg1;
- (void)skinChanged:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)UserGroupSettingSucceed;
- (void)showBlockActionSheet:(int)arg1;
- (void)showUserGroupInfoView:(id)arg1;
- (void)showRequestMessageViewWithString:(id)arg1 withImageName:(id)arg2;
- (void)upDateUserInfo;
- (void)addUserInfoTableViewContainer;
- (void)settingPmsDisable;
- (void)settingPmsEnabled;
- (void)settingGroupDisable;
- (void)setttingGroupEnabled;
- (void)addUserInfoView;
- (void)rotateViewController:(int)arg1;
- (void)handleSwipeFrom:(id)arg1;
- (void)viewDidLoad;

@end

