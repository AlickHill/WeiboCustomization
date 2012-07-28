/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WBTableViewCellContext-Protocol.h"

@class NSString, UIColor, WBTimelineItem;

@interface WBTimelineTableViewCellDrawingContext : NSObject <WBTableViewCellContext>
{
    unsigned int contextVersion;
    unsigned int userSettingsVersion;
    WBTimelineItem *timelineItem;
    float rowHeight;
    float contentWidth;
    float contentHeight;
    float quotedContentHeight;
    struct CGSize displayNameSize;
    struct CGSize itemTitleSize;
    struct CGSize itemTextSize;
    struct CGSize quotedItemTextSize;
    struct CGSize sourceSize;
    struct CGRect rectOfPhotoImage;
    UIColor *imageMaskColor;
    NSString *displayName;
    NSString *briefItemText;
    NSString *briefQuotedItemText;
    NSString *itemStateInfoText;
    struct CGSize itemStateInfoSize;
    NSString *quotedItemStateInfoText;
    struct CGSize quotedItemStateInfoSize;
    float firstLineTextLeftInset;
    float firstLineTextRightInset;
}

@property(nonatomic) float firstLineTextRightInset; // @synthesize firstLineTextRightInset;
@property(nonatomic) float firstLineTextLeftInset; // @synthesize firstLineTextLeftInset;
@property(nonatomic) struct CGSize quotedItemStateInfoSize; // @synthesize quotedItemStateInfoSize;
@property(retain, nonatomic) NSString *quotedItemStateInfoText; // @synthesize quotedItemStateInfoText;
@property(nonatomic) struct CGSize itemStateInfoSize; // @synthesize itemStateInfoSize;
@property(retain, nonatomic) NSString *itemStateInfoText; // @synthesize itemStateInfoText;
@property(readonly, nonatomic) NSString *briefQuotedItemText; // @synthesize briefQuotedItemText;
@property(readonly, nonatomic) NSString *briefItemText; // @synthesize briefItemText;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName;
@property(retain, nonatomic) UIColor *imageMaskColor; // @synthesize imageMaskColor;
@property(nonatomic) struct CGRect rectOfPhotoImage; // @synthesize rectOfPhotoImage;
@property(nonatomic) struct CGSize sourceSize; // @synthesize sourceSize;
@property(nonatomic) struct CGSize quotedItemTextSize; // @synthesize quotedItemTextSize;
@property(nonatomic) struct CGSize itemTextSize; // @synthesize itemTextSize;
@property(nonatomic) struct CGSize itemTitleSize; // @synthesize itemTitleSize;
@property(nonatomic) struct CGSize displayNameSize; // @synthesize displayNameSize;
@property(nonatomic) float quotedContentHeight; // @synthesize quotedContentHeight;
@property(nonatomic) float contentHeight; // @synthesize contentHeight;
@property(readonly, nonatomic) float contentWidth; // @synthesize contentWidth;
@property(nonatomic) float rowHeight; // @synthesize rowHeight;
@property(readonly, nonatomic) WBTimelineItem *timelineItem; // @synthesize timelineItem;
- (unsigned int)getContextVersion;
- (void)setContextVersion:(unsigned int)arg1;
- (id)availableThumbnailImageURL;
- (id)availableMiddleImageURL;
- (id)itemTitle;
- (BOOL)hasLocation;
- (BOOL)showsSource;
- (BOOL)quotedItemHasPhoto;
- (BOOL)itemHasPhoto;
- (BOOL)showsAvatarAtRight;
- (BOOL)isValid;
- (void)resetWithContentWidth:(float)arg1;
- (void)resetTimelineItem:(id)arg1;
- (void)generateBriefQuotedItemText;
- (void)generateBriefItemText;
- (id)flagImageUrl;
- (void)dealloc;
- (id)initWithTimelineItem:(id)arg1;

@end

