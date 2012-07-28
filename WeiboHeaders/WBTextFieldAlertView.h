/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBAlertView.h"

#import "UITextFieldDelegate-Protocol.h"

@class UIActivityIndicatorView, UILabel, UITextField;

@interface WBTextFieldAlertView : WBAlertView <UITextFieldDelegate>
{
    UILabel *titleLabel;
    UITextField *textField;
    UILabel *promptLabel;
    UIActivityIndicatorView *indicatorView;
    id <WBTextFieldAlertViewDelegate> actionDelegate;
}

@property(nonatomic) id <WBTextFieldAlertViewDelegate> actionDelegate; // @synthesize actionDelegate;
- (void)dealloc;
- (void)dismiss;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)showError:(id)arg1;
- (void)showInfo:(id)arg1;
- (id)inputedText;
- (void)setTextFieldPlaceHolder:(id)arg1;
- (void)show;
- (id)initWithTitle:(id)arg1 placeholder:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (void)initButtons;

@end

