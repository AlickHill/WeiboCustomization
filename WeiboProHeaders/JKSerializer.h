/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface JKSerializer : NSObject
{
    struct JKEncodeState *encodeState;
}

+ (id)serializeObject:(id)arg1 options:(unsigned int)arg2 encodeOption:(unsigned int)arg3 block:(id)arg4 delegate:(void)arg5 selector:(id)arg6 error:(SEL)arg7;
- (void)dealloc;
- (void)releaseState;
- (id)serializeObject:(id)arg1 options:(unsigned int)arg2 encodeOption:(unsigned int)arg3 block:(id)arg4 delegate:(void)arg5 selector:(id)arg6 error:(SEL)arg7;

@end

