/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIButton;

@interface WBMessagesToolbarView : UIView
{
    UIButton *voiceButton;
    UIButton *textButton;
    UIButton *emoticonButton;
    UIButton *keyboardButton;
    UIButton *cameraButton;
    UIButton *photoLibraryButton;
    UIButton *locationButton;
}

@property(readonly, nonatomic) UIButton *locationButton; // @synthesize locationButton;
@property(readonly, nonatomic) UIButton *photoLibraryButton; // @synthesize photoLibraryButton;
@property(readonly, nonatomic) UIButton *cameraButton; // @synthesize cameraButton;
@property(readonly, nonatomic) UIButton *keyboardButton; // @synthesize keyboardButton;
@property(readonly, nonatomic) UIButton *emoticonButton; // @synthesize emoticonButton;
@property(readonly, nonatomic) UIButton *textButton; // @synthesize textButton;
@property(readonly, nonatomic) UIButton *voiceButton; // @synthesize voiceButton;
- (void)dealloc;
- (void)showKeyboardButton;
- (void)showEmoticonButton;
- (void)showTextButton;
- (void)showVoiceButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

