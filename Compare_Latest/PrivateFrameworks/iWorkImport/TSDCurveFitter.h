/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSDCurveFitter : NSObject
{
    double mErrorDistance;
    long long mErrorIterations;
}

+ (id)curveFitter;
@property(nonatomic) long long errorIterations; // @synthesize errorIterations=mErrorIterations;
@property(nonatomic) double errorDistance; // @synthesize errorDistance=mErrorDistance;
- (void)fitCurveToPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2 bezierCallback:(void *)arg3 context:(void *)arg4;
- (void)fitCurveToPoints:(id)arg1 bezierCallback:(void *)arg2 context:(void *)arg3;
- (id)bezierPathFittingPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;
- (id)bezierPathFittingPoints:(id)arg1;
- (id)init;

@end
