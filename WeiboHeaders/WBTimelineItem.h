/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBModelObject.h"

#import "WBDatabaseModel-Protocol.h"

@class NSDate, NSString, WBUser;

@interface WBTimelineItem : WBModelObject <WBDatabaseModel>
{
    NSString *itemID;
    NSString *v4ItemID;
    NSDate *date;
    WBUser *user;
    BOOL sentByMe;
    NSString *text;
    WBTimelineItem *quotedItem;
    BOOL isNew;
}

@property(nonatomic) BOOL isNew; // @synthesize isNew;
@property(retain, nonatomic) WBTimelineItem *quotedItem; // @synthesize quotedItem;
@property(nonatomic) BOOL sentByMe; // @synthesize sentByMe;
@property(retain, nonatomic) WBUser *user; // @synthesize user;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(retain, nonatomic) NSString *v4ItemID; // @synthesize v4ItemID;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID;
- (BOOL)isEqual:(id)arg1;
- (BOOL)deletable;
- (id)typeName;
- (void)dealloc;

@end
