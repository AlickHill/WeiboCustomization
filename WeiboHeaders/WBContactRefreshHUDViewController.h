/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

@class UIActivityIndicatorView, UILabel, WBLabel;

@interface WBContactRefreshHUDViewController : WBViewController
{
    unsigned int numberOfLines;
    WBLabel *tipLabel;
    UIActivityIndicatorView *activityIndicatorView;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel;
@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines;
- (void)reloadUIElements;
- (void)appLanguageDidChangeNotification:(id)arg1;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

