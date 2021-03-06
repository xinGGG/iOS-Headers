/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDStroke.h>

@class TSDStrokePattern, TSUColor;

// Not exported
@interface TSDMutableStroke : TSDStroke
{
}

+ (id)emptyStroke;
+ (id)stroke;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) double actualWidth; // @dynamic actualWidth;
@property(nonatomic) int cap; // @dynamic cap;
@property(retain, nonatomic) TSUColor *color; // @dynamic color;
@property(nonatomic) int join; // @dynamic join;
@property(nonatomic) double miterLimit; // @dynamic miterLimit;
@property(retain, nonatomic) TSDStrokePattern *pattern; // @dynamic pattern;
@property(nonatomic) double width; // @dynamic width;

@end

