/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class MGTwitterEngine_WeiboV4, NSMutableDictionary, UIImageView, UIPopoverController, UITextField, UITextView;

@interface UserInfoEditViewController : UIViewController <UIPopoverControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate>
{
    UIImageView *avaterImageView;
    NSMutableDictionary *userDict;
    UIPopoverController *popoverController;
    _Bool imageFlag;
    _Bool closeStatus;
    UITextField *userNameTextField;
    UITextView *userDescription;
    MGTwitterEngine_WeiboV4 *_engine;
    int index;
    BOOL isNextTouched;
}

@property(nonatomic) _Bool closeStatus; // @synthesize closeStatus;
@property(nonatomic) int index; // @synthesize index;
@property(nonatomic) NSMutableDictionary *userDict; // @synthesize userDict;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)userInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)onNextTouched;
- (void)selectImage;
- (void)userDescriptionExit;
- (void)userNameTextFieldExit;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)onSaveTouched;
- (void)onCancelTouched;
- (void)viewDidLoad;

@end

