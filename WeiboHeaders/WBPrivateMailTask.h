/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBAPITaskBase.h"

@class NSDictionary, NSString;

@interface WBPrivateMailTask : WBAPITaskBase
{
    NSString *_touid;
    NSString *_pmid;
    NSString *_dummyPmId;
    NSDictionary *_pmResult;
}

+ (unsigned int)taskType;
@property(retain, nonatomic) NSDictionary *pmResult; // @synthesize pmResult=_pmResult;
@property(retain, nonatomic) NSString *dummyPmId; // @synthesize dummyPmId=_dummyPmId;
@property(retain, nonatomic) NSString *pmid; // @synthesize pmid=_pmid;
@property(retain, nonatomic) NSString *touid; // @synthesize touid=_touid;
- (void)loadFromRS:(id)arg1;
- (BOOL)updateDB:(id)arg1;
- (BOOL)insertIntoDB:(id)arg1;
- (id)toBeSentFid;
- (void)dealloc;
- (id)init;

@end

