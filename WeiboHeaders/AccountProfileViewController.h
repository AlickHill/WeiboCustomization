/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MGTwitterEngine, NSString, UIActionSheet, UIButton, UITextField;

@interface AccountProfileViewController : WBTableViewController <UITextFieldDelegate, UIActionSheetDelegate>
{
    UITextField *txtUsername;
    MGTwitterEngine *_twitter;
    UIActionSheet *progressSheet;
    NSString *strUserName;
    NSString *strPassWord;
    NSString *strGsid;
    NSString *strUid;
    BOOL isSuccess;
    BOOL isFemale;
    UIButton *btnMale;
    UIButton *btnFemale;
}

@property(retain, nonatomic) NSString *strGsid; // @synthesize strGsid;
@property(retain, nonatomic) NSString *strPassWord; // @synthesize strPassWord;
@property(retain, nonatomic) NSString *strUserName; // @synthesize strUserName;
@property(retain, nonatomic) NSString *strUid; // @synthesize strUid;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onCancelClick:(id)arg1;
- (void)closeAfterHaveResult;
- (void)basicInfoReceived:(id)arg1 forRequest:(id)arg2 responseType:(int)arg3;
- (void)onSignUpClick:(id)arg1;
- (void)btnFemaleSetGender:(id)arg1;
- (void)btnMaleSetGender:(id)arg1;
- (void)viewDidLoad;

@end

