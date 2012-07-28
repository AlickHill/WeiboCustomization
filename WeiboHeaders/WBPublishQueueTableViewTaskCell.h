/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewCell.h"

#import "WBTaskDelegate-Protocol.h"

@class UIImageView, UILabel, WBTask;

@interface WBPublishQueueTableViewTaskCell : WBTableViewCell <WBTaskDelegate>
{
    WBTask *_task;
    UIImageView *_statusImage;
    UILabel *_nickLabel;
    UILabel *_timeLabel;
    UILabel *_typeLabel;
    UILabel *_contentLabel;
    UIImageView *_contentFileTypeImage;
    UILabel *_progressLabel;
}

+ (float)rowHeightOfDataObject:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) WBTask *task; // @synthesize task=_task;
- (void)taskProgressDidChange:(id)arg1;
- (void)taskStateDidChange:(id)arg1;
- (void)refresh;
- (void)refreshStatus;
- (void)refreshProgress;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
