/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewCell.h"

@class WBBadgeView;

@interface AccountListCell : WBTableViewCell
{
    WBBadgeView *badgeView;
}

@property(readonly, nonatomic) WBBadgeView *badgeView; // @synthesize badgeView;
- (void)dealloc;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateCellContent:(id)arg1 row:(int)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

