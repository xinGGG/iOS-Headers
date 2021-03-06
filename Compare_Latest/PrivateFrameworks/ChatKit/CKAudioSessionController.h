//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CKAudioSessionController : NSObject
{
    BOOL _active;
    BOOL _shouldUseSpeaker;
    BOOL _dirty;
}

+ (id)queue;
+ (id)shareInstance;
@property(getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property BOOL shouldUseSpeaker; // @synthesize shouldUseSpeaker=_shouldUseSpeaker;
@property(getter=isActive) BOOL active; // @synthesize active=_active;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (void)audioSessionMediaServicesWereLost:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)configureAudioSession:(BOOL)arg1;
- (void)setActive:(BOOL)arg1 shouldUseSpeaker:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deactivate;
- (void)activateUsingSpeaker:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

@end

