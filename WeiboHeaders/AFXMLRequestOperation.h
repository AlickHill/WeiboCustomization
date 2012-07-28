/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AFHTTPRequestOperation.h"

@class NSError, NSXMLParser;

@interface AFXMLRequestOperation : AFHTTPRequestOperation
{
    NSXMLParser *_responseXMLParser;
    NSError *_XMLError;
}

+ (BOOL)canProcessRequest:(id)arg1;
+ (id)acceptableContentTypes;
+ (id)XMLParserRequestOperationWithRequest:(id)arg1 success:(id)arg2 failure:(void)arg3;
@property(retain, nonatomic) NSError *XMLError; // @synthesize XMLError=_XMLError;
@property(retain, nonatomic) NSXMLParser *responseXMLParser; // @synthesize responseXMLParser=_responseXMLParser;
- (void)setCompletionBlockWithSuccess:(id)arg1 failure:(void)arg2;
- (void)cancel;
- (id)error;
- (void)dealloc;

@end
