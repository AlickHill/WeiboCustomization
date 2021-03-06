/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class UIButton, UIScrollView;

@interface IntroduceViewController : WBViewController <UIScrollViewDelegate>
{
    unsigned int currentPage;
    UIScrollView *scrollView;
    id <StartWeiboDelegate> delegate;
    UIButton *shareButton;
    BOOL shareButtonChecked;
    UIButton *startButton;
    UIButton *leftButton;
    UIButton *rightButton;
}

@property(nonatomic) id <StartWeiboDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidScroll:(id)arg1;
- (void)rightButtonPressed:(id)arg1;
- (void)leftButtonPressed:(id)arg1;
- (void)changePageTo:(unsigned int)arg1;
- (void)updateUI;
- (void)backToHome;
- (void)checkboxButtonPressed:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;

@end

