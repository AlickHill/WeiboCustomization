/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface TopicButtonView : UIView
{
    UIImageView *backImageView;
    UILabel *topicTextLabel;
    UIButton *topicButton;
    int tagNum;
    int topic_id;
    int leftWidth;
    id <TopicButtonDelegate> delegate;
    int labelLeftWidth;
}

@property(nonatomic) id <TopicButtonDelegate> delegate; // @synthesize delegate;
@property(nonatomic) int labelLeftWidth; // @synthesize labelLeftWidth;
@property(nonatomic) int tagNum; // @synthesize tagNum;
@property(nonatomic) int topic_id; // @synthesize topic_id;
@property(retain, nonatomic) UILabel *topicTextLabel; // @synthesize topicTextLabel;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView;
- (void)dealloc;
- (void)topicButtonTouchedOn;
- (void)setTopicNameTextSize:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

