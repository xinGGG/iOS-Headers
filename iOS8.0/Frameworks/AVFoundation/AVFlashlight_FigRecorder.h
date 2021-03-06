//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFlashlightInternal_FigRecorder;

@interface AVFlashlight_FigRecorder : NSObject
{
    AVFlashlightInternal_FigRecorder *_internal;
}

+ (BOOL)hasFlashlight;
+ (void)initialize;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
@property(readonly, nonatomic) float flashlightLevel;
- (BOOL)setFlashlightLevel:(float)arg1 withError:(id *)arg2;
- (void)turnPowerOff;
- (BOOL)turnPowerOnWithError:(id *)arg1;
@property(readonly, nonatomic, getter=isOverheated) BOOL overheated;
@property(readonly, nonatomic, getter=isAvailable) BOOL available;
- (void)_refreshIsAvailable;
- (void)dealloc;
- (id)init;
- (void)teardownFigRecorder;
- (BOOL)ensureFigRecorderWithError:(id *)arg1;
- (BOOL)bringupFigRecorderWithError:(id *)arg1;
- (BOOL)isKindOfClass:(Class)arg1;

@end

