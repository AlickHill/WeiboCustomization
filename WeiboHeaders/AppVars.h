/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class HomeViewController, MGTwitterEngine, NSDictionary, NSMutableArray;

@interface AppVars : NSObject
{
    int amountNewFans;
    int amountNewComment;
    int amountNewPm;
    int amountNewAtme;
    int amountNewFollow;
    int amountNewGroup;
    int amountNewAtCmt;
    int amountNewNotice;
    HomeViewController *homeViewController;
    BOOL isChangedBlack;
    BOOL isRelationChanged;
    BOOL isReload;
    NSDictionary *dicLanguage;
    NSMutableArray *arrUnread;
    int arrUnreadSel;
    MGTwitterEngine *_twitter;
}

+ (id)standardVars;
@property(nonatomic) int amountNewNotice; // @synthesize amountNewNotice;
@property(nonatomic) int amountNewAtCmt; // @synthesize amountNewAtCmt;
@property(nonatomic) int arrUnreadSel; // @synthesize arrUnreadSel;
@property(retain, nonatomic) NSMutableArray *arrUnread; // @synthesize arrUnread;
@property(retain, nonatomic) NSDictionary *dicLanguage; // @synthesize dicLanguage;
@property(nonatomic) BOOL isReload; // @synthesize isReload;
@property(nonatomic) BOOL isRelationChanged; // @synthesize isRelationChanged;
@property(nonatomic) BOOL isChangedBlack; // @synthesize isChangedBlack;
@property(retain, nonatomic) HomeViewController *homeViewController; // @synthesize homeViewController;
@property(nonatomic) int amountNewGroup; // @synthesize amountNewGroup;
@property(nonatomic) int amountNewFollow; // @synthesize amountNewFollow;
@property(nonatomic) int amountNewAtme; // @synthesize amountNewAtme;
@property(nonatomic) int amountNewPm; // @synthesize amountNewPm;
@property(nonatomic) int amountNewComment; // @synthesize amountNewComment;
@property(nonatomic) int amountNewFans; // @synthesize amountNewFans;
- (void)dealloc;
- (void)resetUnreadArr;
- (void)getUnreadNow;
- (void)getUnreadArr;
- (void)getArrUnread;
- (id)init;

@end

