/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSDictionary, UIImageView;

@interface WeiboDistanceInfoForCellView : UIView
{
    NSDictionary *weiboItem;
    NSDictionary *comNumDictionary;
    NSDictionary *remarkDictionary;
    UIImageView *avaterBg;
    int statusesFeature;
    BOOL remarkStatus;
}

+ (void)clearCurrentCell;
+ (void)clearSelectString;
+ (void)setId_String:(id)arg1 isButton:(BOOL)arg2;
@property(nonatomic) int statusesFeature; // @synthesize statusesFeature;
@property(retain, nonatomic) UIImageView *avaterBg; // @synthesize avaterBg;
@property(retain, nonatomic) NSDictionary *remarkDictionary; // @synthesize remarkDictionary;
@property(retain, nonatomic) NSDictionary *comNumDictionary; // @synthesize comNumDictionary;
@property(retain, nonatomic) NSDictionary *weiboItem; // @synthesize weiboItem;
- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

