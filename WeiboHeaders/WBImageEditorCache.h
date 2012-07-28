/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKImageMetadata, NSString, UIImage;

@interface WBImageEditorCache : NSObject
{
    UIImage *originalImage;
    UIImage *processedImage;
    CKImageMetadata *metadata;
    NSString *effectName;
}

@property(retain, nonatomic) NSString *effectName; // @synthesize effectName;
@property(retain, nonatomic) CKImageMetadata *metadata; // @synthesize metadata;
@property(retain, nonatomic) UIImage *processedImage; // @synthesize processedImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage;
- (void)releaseAllCaches;
- (void)dealloc;

@end

