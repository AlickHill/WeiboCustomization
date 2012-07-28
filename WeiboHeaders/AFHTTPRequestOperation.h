/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AFURLConnectionOperation.h"

@class NSError, NSHTTPURLResponse, NSString, NSURLRequest;

@interface AFHTTPRequestOperation : AFURLConnectionOperation
{
    NSError *_HTTPError;
    NSString *_responseFilePath;
    struct dispatch_queue_s *_successCallbackQueue;
    struct dispatch_queue_s *_failureCallbackQueue;
    long long _totalContentLength;
    long long _offsetContentLength;
}

+ (BOOL)canProcessRequest:(id)arg1;
+ (void)addAcceptableContentTypes:(id)arg1;
+ (id)acceptableContentTypes;
+ (void)addAcceptableStatusCodes:(id)arg1;
+ (id)acceptableStatusCodes;
@property long long offsetContentLength; // @synthesize offsetContentLength=_offsetContentLength;
@property long long totalContentLength; // @synthesize totalContentLength=_totalContentLength;
@property(nonatomic) struct dispatch_queue_s *failureCallbackQueue; // @synthesize failureCallbackQueue=_failureCallbackQueue;
@property(nonatomic) struct dispatch_queue_s *successCallbackQueue; // @synthesize successCallbackQueue=_successCallbackQueue;
@property(copy, nonatomic) NSString *responseFilePath; // @synthesize responseFilePath=_responseFilePath;
@property(retain, nonatomic) NSError *HTTPError; // @synthesize HTTPError=_HTTPError;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setCompletionBlockWithSuccess:(id)arg1 failure:(void)arg2;
@property(readonly) BOOL hasAcceptableContentType;
@property(readonly) BOOL hasAcceptableStatusCode;
- (void)pause;
- (id)error;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSURLRequest *request; // @dynamic request;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @dynamic response;

@end

