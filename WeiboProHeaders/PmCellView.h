/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CellButton, NSArray, NSDictionary, UIImageView, UIProgressView;

@interface PmCellView : UIView
{
    NSDictionary *weiboPmItem;
    BOOL showTime;
    UIProgressView *progressBar;
    UIImageView *stateImageView;
    UIImageView *playImageView;
    CellButton *touchButton;
    NSArray *playImageArray;
}

@property(nonatomic) CellButton *touchButton; // @synthesize touchButton;
@property(nonatomic) UIImageView *playImageView; // @synthesize playImageView;
@property(nonatomic) UIImageView *stateImageView; // @synthesize stateImageView;
@property(nonatomic) UIProgressView *progressBar; // @synthesize progressBar;
@property(nonatomic) BOOL showTime; // @synthesize showTime;
@property(retain, nonatomic) NSDictionary *weiboPmItem; // @synthesize weiboPmItem;
- (void)dealloc;
- (void)audioPlayerDidStop:(id)arg1;
- (void)audioPlayerBeginPlay:(id)arg1;
- (id)getAudioPlayFilePath:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

