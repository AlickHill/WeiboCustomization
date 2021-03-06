/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

#import "WBTabBarOverlayDelegate-Protocol.h"

@class NSArray, UIViewController, WBFindFriendsAddressBookViewController, WBFindFriendsGuessViewController, WBFindFriendsShakeViewController, WBLBSNearbyPeopleViewController, WBTabBarOverlay;

@interface WBFindFriendsViewController : WBViewController <WBTabBarOverlayDelegate>
{
    WBTabBarOverlay *tabBarOverlay;
    WBFindFriendsShakeViewController *shakeViewController;
    WBFindFriendsAddressBookViewController *addressBookViewController;
    WBLBSNearbyPeopleViewController *nearbyPeopleViewController;
    WBFindFriendsGuessViewController *guessViewController;
    int currentSelectedIndex;
    UIViewController *currentViewController;
    NSArray *subControllers;
}

@property(nonatomic) int currentSelectedIndex; // @synthesize currentSelectedIndex;
- (void)tabBarOverlay:(id)arg1 didSelectTabAtIndex:(unsigned int)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

