/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView, UILabel;

@interface BadgeView : UIView
{
    UIImageView *badgeImageView;
    UILabel *badgeText;
    int badgeCount;
}

@property(nonatomic) int badgeCount; // @synthesize badgeCount;
- (void)dealloc;
- (void)skinChanged:(id)arg1;
- (id)init;

@end

