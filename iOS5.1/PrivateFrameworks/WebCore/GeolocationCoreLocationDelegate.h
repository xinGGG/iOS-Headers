/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager;

@interface GeolocationCoreLocationDelegate : NSObject <CLLocationManagerDelegate>
{
    double m_accuracy;
    struct GeolocationManager *m_callback;
    CLLocationManager *m_locationManager;
    BOOL m_locationDenied;
}

- (void)createLocationManager;
- (id)initWithCallback:(struct GeolocationManager *)arg1;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)sendLocation:(id)arg1;
- (void)sendError:(id)arg1 withString:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
@property(nonatomic) BOOL wantsHighAccuracy;

@end

