//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEODaemon;

@interface GEOServer : NSObject
{
    GEODaemon *_daemon;
}

+ (Class)peerClass;
+ (id)identifier;
@property(nonatomic) GEODaemon *daemon; // @synthesize daemon=_daemon;
- (id)description;
- (void)daemonWillTerminateWithReason:(int)arg1;
- (void)peerDidDisconnect:(id)arg1;
- (void)peerDidConnect:(id)arg1;
- (void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;
- (BOOL)canHandleIncomingMessage:(id)arg1;

@end

