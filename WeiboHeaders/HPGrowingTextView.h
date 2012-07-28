/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UITextViewDelegate-Protocol.h"

@class HPTextViewInternal, NSObject<HPGrowingTextViewDelegate>, NSString, UIColor, UIFont, UITextView;

@interface HPGrowingTextView : UIView <UITextViewDelegate>
{
    HPTextViewInternal *internalTextView;
    int minHeight;
    int maxHeight;
    int maxNumberOfLines;
    int minNumberOfLines;
    BOOL animateHeightChange;
    NSObject<HPGrowingTextViewDelegate> *delegate;
    NSString *text;
    UIFont *font;
    UIColor *textColor;
    int textAlignment;
    struct _NSRange selectedRange;
    BOOL editable;
    unsigned int dataDetectorTypes;
    int returnKeyType;
    struct UIEdgeInsets contentInset;
    struct _NSRange lastSelectedRange;
}

@property(nonatomic) struct _NSRange lastSelectedRange; // @synthesize lastSelectedRange;
@property BOOL animateHeightChange; // @synthesize animateHeightChange;
@property NSObject<HPGrowingTextViewDelegate> *delegate; // @synthesize delegate;
@property(retain) UITextView *internalTextView; // @synthesize internalTextView;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (BOOL)hasText;
@property(nonatomic) unsigned int dataDetectorTypes; // @synthesize dataDetectorTypes;
@property(nonatomic) int returnKeyType; // @synthesize returnKeyType;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange;
@property(nonatomic) int textAlignment; // @synthesize textAlignment;
@property(nonatomic) UIColor *textColor; // @synthesize textColor;
@property(nonatomic) UIFont *font; // @synthesize font;
@property(nonatomic) NSString *text;
- (void)dealloc;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)growDidStop;
- (void)resizeTextView:(int)arg1;
- (void)textViewDidChange:(id)arg1;
@property(readonly, nonatomic) int numberOfLines;
@property int minNumberOfLines;
@property int maxNumberOfLines;
@property struct UIEdgeInsets contentInset;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)commonInitialiser;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
