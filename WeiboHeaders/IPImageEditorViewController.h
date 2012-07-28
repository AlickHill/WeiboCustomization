/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "IPEffectChooserScrollViewDelegate-Protocol.h"

@class IPEffectChooserScrollView, IPImageEditorToolbar, IPPromptView, NSMutableArray, NSString, UIButton, UIImage, UIImageView;

@interface IPImageEditorViewController : UIViewController <IPEffectChooserScrollViewDelegate>
{
    UIImage *inputImage;
    UIImage *outputImage;
    UIImageView *imageView;
    IPImageEditorToolbar *toolbar;
    IPEffectChooserScrollView *chooserView;
    IPPromptView *promptView;
    NSString *promptText;
    UIButton *deleteButton;
    id <IPImageEditorViewControllerDelegate> delegate;
    int currentEffectIndex;
    NSMutableArray *effectNames;
    NSMutableArray *effectDisplayNames;
    BOOL processing;
    BOOL chooserAnimating;
    BOOL chooserHidden;
    BOOL isReEditing;
}

@property(retain, nonatomic) NSMutableArray *effectDisplayNames; // @synthesize effectDisplayNames;
@property(retain, nonatomic) NSMutableArray *effectNames; // @synthesize effectNames;
@property(nonatomic) int currentEffectIndex; // @synthesize currentEffectIndex;
@property(retain, nonatomic) NSString *promptText; // @synthesize promptText;
@property(nonatomic) id <IPImageEditorViewControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIImage *outputImage; // @synthesize outputImage;
@property(retain, nonatomic) UIImage *inputImage; // @synthesize inputImage;
- (void)applyProcessor;
- (void)startProcessing;
- (void)effectChooserScrollViewDidChooseMore:(id)arg1;
- (void)effectChooserScrollView:(id)arg1 didChooseEffectAtIndex:(int)arg2;
- (void)didShowAnimationStop;
- (void)didHideAnimationStop;
- (void)buttonDeleteAction;
- (void)toolbarButtonItemDoneAction;
- (void)toolbarButtonItemCancelAction;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)deleteCacheImages;
- (id)cacheImageWithEffectName:(id)arg1;
- (void)saveCacheImage:(id)arg1 withEffectName:(id)arg2;
- (BOOL)cacheImageExists:(id)arg1;
- (id)cacheImageNameWithEffectName:(id)arg1;
- (id)cacheImagePath;
- (void)setPreviewImage:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithProcessedImage:(id)arg1 originalImage:(id)arg2 effectName:(id)arg3;
- (id)initWithImage:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

