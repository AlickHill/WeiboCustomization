/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IPProcessor.h"

@interface IPFeatherEdgeFilter : IPProcessor
{
    int edgeRadius;
    int selectedRegionType;
    struct CGPoint center;
    int radius;
    struct CGRect rectangle;
}

@property(nonatomic) int edgeRadius; // @synthesize edgeRadius;
- (void)processImage:(id)arg1;
- (BOOL)shouldProcess;
- (void)setSelectedRectangle:(struct CGRect)arg1;
- (void)setSelectedCircleCenter:(struct CGPoint)arg1 radius:(int)arg2;
- (id)initWithImages:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

