/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class WBBadgeView, WBTabBarItem;

@interface WBTabBarButton : UIButton
{
    WBTabBarItem *item;
    BOOL showsTitle;
    float imageHeight;
    float titleHeight;
    struct CGPoint titleOffset;
    WBBadgeView *badgeView;
}

@property(readonly, nonatomic) WBBadgeView *badgeView; // @synthesize badgeView;
@property(nonatomic) struct CGPoint titleOffset; // @synthesize titleOffset;
@property(nonatomic) float titleHeight; // @synthesize titleHeight;
@property(nonatomic) float imageHeight; // @synthesize imageHeight;
@property(nonatomic) BOOL showsTitle; // @synthesize showsTitle;
@property(readonly, nonatomic) WBTabBarItem *item; // @synthesize item;
- (void)dealloc;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithItem:(id)arg1;

@end
