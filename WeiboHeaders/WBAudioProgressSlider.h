/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UISlider.h"

@class UIImage;

@interface WBAudioProgressSlider : UISlider
{
    int style;
    UIImage *backgroundImage;
}

@property(nonatomic) int style; // @synthesize style;
- (float)thumbImageWidth;
- (void)setBackgroundImage:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

