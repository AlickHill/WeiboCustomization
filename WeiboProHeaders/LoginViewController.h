/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "UserMailInfoViewDelegate-Protocol.h"

@class HotListViewController, HotViewController, InfluenceListViewController, MGTwitterEngine_WeiboV4, NSMutableArray, PublicTimelineViewController, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITextField, UIView, UserMailInfoView;

@interface LoginViewController : UIViewController <UITextFieldDelegate, UserMailInfoViewDelegate>
{
    UITextField *txtUsername;
    UITextField *txtPassword;
    UILabel *loginUsername;
    UILabel *loginLabel;
    UILabel *registerLabel;
    UILabel *cancelLabel;
    UILabel *titleLabel;
    int orientation;
    struct CGRect logoRectPortrait;
    struct CGRect logoRectLandscape;
    UIImageView *_imgvBackground;
    UIImageView *backImageView;
    UIImageView *backGroundImageView;
    UIImageView *login_logo;
    UIView *loginAreaView;
    UIView *loginAreaView2;
    UIView *loadingView;
    MGTwitterEngine_WeiboV4 *_engine;
    struct CGRect loginRectlandscape;
    NSMutableArray *hotButtonArray;
    BOOL isShowingGuangchang;
    BOOL wallPaperChange;
    HotViewController *mHotViewController;
    PublicTimelineViewController *mPublicTimelineViewController;
    HotListViewController *mHotListViewController;
    InfluenceListViewController *mInfluenceListViewController;
    UIButton *btnRegister;
    UIButton *btnLogin;
    UIButton *btnCancel;
    UIImageView *_imgvLoginBg;
    UIImageView *_imageLoginLabelBg1;
    UIImageView *_imageLoginLabelBg2;
    UIActivityIndicatorView *loadActivity;
    UIButton *currentBtn;
    UserMailInfoView *mailInfoView;
    NSMutableArray *allMailInfoArray;
}

@property(retain, nonatomic) UILabel *loginUsername; // @synthesize loginUsername;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView;
@property(retain, nonatomic) UIView *loginAreaView; // @synthesize loginAreaView;
@property(retain, nonatomic) UITextField *txtPassword; // @synthesize txtPassword;
@property(retain, nonatomic) UITextField *txtUsername; // @synthesize txtUsername;
- (void)regDone;
- (void)shakeEnd;
- (void)showLoginPanel;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)userInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)onButCancelTouched:(id)arg1;
- (void)onButLoginTouched:(id)arg1;
- (void)onButLoginTouchedOutSide:(id)arg1;
- (void)onButLoginTouchedDown:(id)arg1;
- (void)registerButtonTouched;
- (void)keyboardWillHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)selectedMailInfo:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)initGuangChangVCs;
- (void)viewDidLoad;
- (void)changeToPortraitBackground;
- (void)changeToLandscapeBackground;
- (void)animationStoped;
- (void)showGuangchangAnimation;
- (void)openHotView:(id)arg1;
- (void)changeButtonImage:(id)arg1;
- (void)backButtonImage;
- (void)setSelectButtonImage:(id)arg1;
- (void)changeHotButtonFrame;
- (void)createHotViewButton;
- (void)initBackground;
- (void)initLoginAreaView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

