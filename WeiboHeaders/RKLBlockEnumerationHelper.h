/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface RKLBlockEnumerationHelper : NSObject
{
    struct {
        struct __CFString *regexString;
        unsigned int regexHash;
        unsigned int options;
        struct uregex *icu_regex;
        int captureCount;
        struct __CFString *setToString;
        unsigned int setToHash;
        int setToLength;
        unsigned int setToIsImmutable:1;
        unsigned int setToNeedsConversion:1;
        unsigned short *setToUniChar;
        struct _NSRange setToRange;
        struct _NSRange lastFindRange;
        struct _NSRange lastMatchRange;
        struct *buffer;
    } cachedRegex;
    struct {
        struct __CFString *string;
        unsigned int hash;
        int length;
        unsigned short *uniChar;
    } buffer;
    void *scratchBuffer[5];
    unsigned int needToFreeBufferUniChar:1;
}

- (void)dealloc;
- (id)initWithRegex:(id)arg1 options:(unsigned int)arg2 string:(id)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;

@end

