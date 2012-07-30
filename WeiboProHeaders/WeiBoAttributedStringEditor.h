/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableAttributedString, UIColor, UIFont;

@interface WeiBoAttributedStringEditor : NSObject
{
    NSMutableAttributedString *weiBoString;
    UIColor *defaultColor;
    UIColor *highLightedColor;
    UIFont *defaultFont;
    NSMutableArray *highLightInfoArray;
    NSMutableArray *faceTextInfoArray;
}

@property(nonatomic) UIColor *defaultColor; // @synthesize defaultColor;
@property(nonatomic) NSMutableAttributedString *weiBoString; // @synthesize weiBoString;
- (void)dealloc;
- (int)getWeiboAttributedStringHeightWithWidthValue:(int)arg1;
- (int)getWeiboAttributedStringWidth;
- (void)setFontColorWithDictionary:(id)arg1;
- (id)getAllHighLightTextInfoArray;
- (id)getAllFaceTextInfoArray;
- (id)createWeiBoAttribuedStringWithString:(id)arg1;
- (id)initWithString:(id)arg1 fontSize:(float)arg2;
- (id)init;
- (void)editWeiboAttributedString;
- (void)resetWeiboAttributedStringColor;
- (void)setWeiBoFaceTextWithArray:(id)arg1;
- (void)setWeiBoTextWithArray:(id)arg1 textType:(int)arg2 textFont:(id)arg3;
- (void)replaceFaceAttributedStringInRange:(struct _NSRange)arg1;

@end

