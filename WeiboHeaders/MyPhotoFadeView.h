/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "ImageDownoaderDelegate-Protocol.h"
#import "ImageLoaderDelegate-Protocol.h"

@class NSMutableData, NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView;

@interface MyPhotoFadeView : UIView <ImageLoaderDelegate, ImageDownoaderDelegate>
{
    id <MyPhotoFadeViewDelegate> delegate;
    UIImage *_image;
    NSMutableData *receivedData;
    NSString *imgUrl;
    UIImageView *imgViewMain;
    UIImageView *imgViewBorder;
    UIButton *viewOriginalImageButton;
    UIActivityIndicatorView *_indicator;
    id <TwitterConnectionProtocol> connectionDelegate;
}

@property(retain, nonatomic) id <TwitterConnectionProtocol> connectionDelegate; // @synthesize connectionDelegate;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl;
@property(nonatomic) id <MyPhotoFadeViewDelegate> delegate; // @synthesize delegate;
- (void)onImageLoadComplete;
- (void)startDownloadImage:(id)arg1;
- (void)removeImageView;
- (void)animateBorderEnd;
- (void)startAnimateBorder;
- (void)receivedImage:(id)arg1 sender:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithUrl:(id)arg1;
- (void)viewOriginalImageButtonPressed:(id)arg1;
- (void)initControls;

@end

