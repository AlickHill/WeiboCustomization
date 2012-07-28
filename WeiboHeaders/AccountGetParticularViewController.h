/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class MGTwitterEngine, UILabel, UIScrollView, UITextField;

@interface AccountGetParticularViewController : WBViewController <UITextFieldDelegate>
{
    UITextField *txtUsername;
    UILabel *lblSecret;
    UIScrollView *imgScrollView;
    int startStyle;
    MGTwitterEngine *_twitterCap;
}

@property(nonatomic) int startStyle; // @synthesize startStyle;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)onSignInClick:(id)arg1;
- (id)keyForSecret:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)statusesReceived:(id)arg1 forRequest:(id)arg2 dataFromLocal:(BOOL)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)viewSetForNumber;
- (void)btnUrlTouchDown:(id)arg1;
- (void)viewDidLoad;

@end

