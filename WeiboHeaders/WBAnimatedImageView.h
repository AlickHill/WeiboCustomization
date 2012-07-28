/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class NSArray;

@interface WBAnimatedImageView : UIImageView
{
    NSArray *keyTimes;
    BOOL animating;
}

@property(retain, nonatomic) NSArray *keyTimes; // @synthesize keyTimes;
- (BOOL)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

