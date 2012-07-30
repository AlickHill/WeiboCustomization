/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MGTwitterEngine, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIBarButtonItem, UIPickerView, UISwitch, UITableView, UIToolbar;

@interface PushSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIPickerViewDataSource, UIAlertViewDelegate>
{
    MGTwitterEngine *_engine;
    NSArray *m_titleArray;
    NSArray *settingArray;
    NSArray *pushSetArray;
    NSArray *messageSetArray;
    NSArray *timeSetArray;
    NSMutableArray *startArray;
    NSMutableArray *endArray;
    NSString *_startTime;
    NSString *_endTime;
    UITableView *pushTableView;
    UIPickerView *m_picker;
    UIToolbar *toolBar;
    UISwitch *pushSwitch;
    UISwitch *commentSwitch;
    UISwitch *atSwitch;
    UISwitch *pmsSwitch;
    UISwitch *followerSwitch;
    BOOL pushStatus;
    BOOL commentStatus;
    BOOL atStatus;
    BOOL pmsStatus;
    BOOL followerStatus;
    NSMutableDictionary *userInfo;
    NSMutableDictionary *nowUserInfo;
    UIBarButtonItem *backBtn;
}

@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo;
- (void)dealloc;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)pushInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)pushSettingSucceed:(BOOL)arg1;
- (void)allPushSetChangeSave;
- (void)messageSetChange:(id)arg1;
- (void)pushSettingChange:(id)arg1;
- (void)setTimeNotice;
- (void)installNotice;
- (void)savePushSetting;
- (void)changeNotice;
- (void)onBackTouched;
- (int)getSwitchNum;
- (void)refresh;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)refreshSkin;
- (void)viewDidLoad;

@end

