/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ASIFormDataRequest.h"

@class NSNumber, NSString;

@interface ASIOAuthRequest : ASIFormDataRequest
{
    BOOL _xAuth;
    NSString *_xAuthUsername;
    NSString *_xAuthPassword;
    NSString *_xAuthSource;
    NSString *_xAuthMode;
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_tokenKey;
    NSString *_tokenSecret;
    NSString *_returnedTokenKey;
    NSString *_returnedTokenSecret;
    NSNumber *_returnedUserID;
    BOOL _shouldNotBuildOAuthHeaders;
}

@property(nonatomic) BOOL shouldNotBuildOAuthHeaders; // @synthesize shouldNotBuildOAuthHeaders=_shouldNotBuildOAuthHeaders;
@property(readonly, nonatomic) NSNumber *returnedUserID; // @synthesize returnedUserID=_returnedUserID;
@property(readonly, nonatomic) NSString *returnedTokenSecret; // @synthesize returnedTokenSecret=_returnedTokenSecret;
@property(readonly, nonatomic) NSString *returnedTokenKey; // @synthesize returnedTokenKey=_returnedTokenKey;
@property(retain, nonatomic) NSString *tokenSecret; // @synthesize tokenSecret=_tokenSecret;
@property(retain, nonatomic) NSString *tokenKey; // @synthesize tokenKey=_tokenKey;
@property(retain, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(retain, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(retain, nonatomic) NSString *xAuthMode; // @synthesize xAuthMode=_xAuthMode;
@property(retain, nonatomic) NSString *xAuthSource; // @synthesize xAuthSource=_xAuthSource;
@property(retain, nonatomic) NSString *xAuthPassword; // @synthesize xAuthPassword=_xAuthPassword;
@property(retain, nonatomic) NSString *xAuthUsername; // @synthesize xAuthUsername=_xAuthUsername;
@property(nonatomic, getter=isXAuth) BOOL xAuth; // @synthesize xAuth=_xAuth;
- (void)dealloc;
- (void)parseReturnedToken;
- (void)buildAuthorizationHeader;
- (void)buildPostBody;
- (id)initWithURL:(id)arg1;

@end

