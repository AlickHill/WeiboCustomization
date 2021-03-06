/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, MGTwitterEngine, MGTwitterEngine_WeiboV4, NSMutableArray, NSMutableData, NSString, NSURLConnection, NewHomelineViewController, UIButton, UIImageView, UILabel, UIView;

@interface AVAudioPlayerVC : UIViewController <AVAudioPlayerDelegate>
{
    AVAudioPlayer *mPlayer;
    UIImageView *percentImageView;
    UIImageView *playImageView;
    UIImageView *nextMusicImageView;
    UIImageView *introduceImageView;
    UIButton *playButton;
    UIButton *nextMusicButton;
    UILabel *titleLabel;
    UIView *backView;
    float averageValue;
    float peakValue;
    BOOL nowMusic;
    BOOL isUpdateTime;
    BOOL showStatus;
    MGTwitterEngine *_engine;
    MGTwitterEngine_WeiboV4 *_engineWeiboV4;
    NewHomelineViewController *myDetailView;
    NSMutableData *receiveData;
    NSString *musicUrl;
    NSMutableArray *musicArray;
    NSMutableArray *convertedArray;
    int bufferLenth;
    int musicNO;
    int imageWidth;
    NSURLConnection *musicConnection;
    NSString *currentUrl;
    NSString *musicName;
    BOOL playEnd;
}

@property(nonatomic) NSMutableArray *musicArray; // @synthesize musicArray;
@property(nonatomic) NewHomelineViewController *myDetailView; // @synthesize myDetailView;
@property(nonatomic) BOOL showStatus; // @synthesize showStatus;
@property(nonatomic) UIView *backView; // @synthesize backView;
@property(retain, nonatomic) AVAudioPlayer *mPlayer; // @synthesize mPlayer;
- (void)dealloc;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned int)arg2;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)batchInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)jsonDictionaryReceived:(id)arg1 forRequest:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)openUrlView;
- (void)playerPlayPauseControl;
- (void)playeButtonAction;
- (void)showMusicPlayer;
- (void)pausePlayMusic;
- (void)playBeforeMusic;
- (void)playAfterMusic;
- (void)changeMusicNO:(BOOL)arg1;
- (void)musicDownload:(id)arg1;
- (void)beginPlayMusic;
- (void)musicPlayerPlay;
- (void)updatePencent;
- (void)playMusicUrl:(id)arg1;
- (void)getmusicUrl:(id)arg1;
- (void)createMusicPlayer;
- (void)firstOpenMusic;
- (void)playTimesRequest;
- (void)showIntroduceImageViewAnimation;
- (void)hideIntroduceImageViewAnimation;
- (void)audioPlayerRightSwipeGesture;
- (void)viewDidLoad;

@end

