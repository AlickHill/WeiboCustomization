/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class NSString, UIImageView;

@interface WBContactAddressBookGroupButton : UIButton
{
    UIImageView *badgeIndicatorImageView;
    NSString *buttonTitle;
}

@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle;
- (void)dealloc;
- (void)layoutSubviews;
- (void)showDownArrow;
- (void)showUpArrow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

