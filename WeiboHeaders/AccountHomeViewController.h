/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

#import "AppMuLanguageViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WeiboDropBoxViewDelegate-Protocol.h"

@class MGTwitterEngine, NSMutableArray, NSString, UIActivityIndicatorView, UITextField, UIView, WeiboDropBoxView;

@interface AccountHomeViewController : WBViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, WeiboDropBoxViewDelegate, AppMuLanguageViewControllerDelegate>
{
    UITextField *txtUsername;
    UITextField *txtUserPass;
    MGTwitterEngine *_twitter;
    NSString *strlogin;
    UIActivityIndicatorView *_indicator;
    UIView *view_load;
    BOOL isCanRegirest;
    WeiboDropBoxView *dropView;
    NSMutableArray *arrData;
    BOOL isSSOLoggingIn;
    BOOL isSSODirectLogin;
}

+ (void)showModal:(id)arg1;
+ (void)showModal:(id)arg1 animated:(BOOL)arg2;
+ (void)showModeless:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL isSSODirectLogin; // @synthesize isSSODirectLogin;
@property(nonatomic) BOOL isSSOLoggingIn; // @synthesize isSSOLoggingIn;
@property(nonatomic) BOOL isCanRegirest; // @synthesize isCanRegirest;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)loginReceived:(id)arg1 forRequest:(id)arg2;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)onSignUpClick:(id)arg1;
- (void)RegisterSuccessed:(id)arg1;
- (void)reSetMuLanguage;
- (void)onSignLanClick:(id)arg1;
- (void)onSignGetBackClick:(id)arg1;
- (void)onSignInClick:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)setLoadView;
- (void)cancelAction:(id)arg1;
- (void)RegisterSuccessAfter:(id)arg1;
- (void)animateDismiss;
- (void)dismiss;
- (void)dropViewSeleted:(id)arg1;
- (void)updateDropData:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)viewDidLoad;

@end

