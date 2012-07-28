/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBModelObject.h"

@class NSString, UIImage;

@interface WBEmoticon : WBModelObject
{
    NSString *simplifiedChineseName;
    NSString *traditionalChineseName;
    NSString *englishName;
    NSString *filename;
    NSString *gifFilename;
    UIImage *emoticonImage;
}

+ (void)changeLocalLangaugeTo:(int)arg1;
@property(retain, nonatomic) NSString *gifFilename; // @synthesize gifFilename;
@property(retain, nonatomic) NSString *filename; // @synthesize filename;
@property(retain, nonatomic) NSString *englishName; // @synthesize englishName;
@property(retain, nonatomic) NSString *traditionalChineseName; // @synthesize traditionalChineseName;
@property(retain, nonatomic) NSString *simplifiedChineseName; // @synthesize simplifiedChineseName;
- (void)dealloc;
- (id)languageKeys;
- (id)description;
@property(readonly, nonatomic) UIImage *emoticonImage; // @synthesize emoticonImage;
@property(readonly, nonatomic) NSString *localizedDisplayName;
- (BOOL)updateWithJSONDictionary:(id)arg1;

@end

