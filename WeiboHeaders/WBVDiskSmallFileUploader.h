/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBPartUploader.h"

@interface WBVDiskSmallFileUploader : WBPartUploader
{
}

- (void)handleError;
- (void)upload;
- (void)doUpload;
- (BOOL)doRetryUpload:(id)arg1;
- (void)merge;
- (BOOL)uploadPartFile:(unsigned int)arg1 fromOffset:(unsigned long long)arg2;
- (void)uploadInit;

@end

