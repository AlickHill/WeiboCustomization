/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewCell.h"

#import "WBSkinning-Protocol.h"

@class NSDictionary, WBContentImageView;

@interface WBInterestsTableViewCell : WBTableViewCell <WBSkinning>
{
    NSDictionary *interestsItem;
    WBContentImageView *interestsImageView;
}

@property(readonly, nonatomic) WBContentImageView *interestsImageView; // @synthesize interestsImageView;
@property(retain, nonatomic) NSDictionary *interestsItem; // @synthesize interestsItem;
- (void)layoutSubviews;
- (void)reloadUIElements;
- (void)initInterestsImageView;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

