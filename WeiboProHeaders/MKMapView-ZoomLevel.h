/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MKMapView.h"

@interface MKMapView (ZoomLevel)
- (int)zoomLevel;
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 zoomLevel:(unsigned int)arg2 animated:(BOOL)arg3;
- (CDStruct_2c43369c)coordinateSpanWithMapView:(id)arg1 centerCoordinate:(CDStruct_2c43369c)arg2 andZoomLevel:(unsigned int)arg3;
- (double)pixelSpaceYToLatitude:(double)arg1;
- (double)pixelSpaceXToLongitude:(double)arg1;
- (double)latitudeToPixelSpaceY:(double)arg1;
- (double)longitudeToPixelSpaceX:(double)arg1;
@end

