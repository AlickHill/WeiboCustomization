/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SFHFKeychainUtils : NSObject
{
}

+ (BOOL)deleteItemForKey:(id)arg1 andUserID:(id)arg2 error:(id *)arg3;
+ (BOOL)storeForKey:(id)arg1 andValue:(id)arg2 forUserID:(id)arg3 updateExisting:(BOOL)arg4 error:(id *)arg5;
+ (id)getValueForKey:(id)arg1 andUserID:(id)arg2 error:(id *)arg3;

@end

