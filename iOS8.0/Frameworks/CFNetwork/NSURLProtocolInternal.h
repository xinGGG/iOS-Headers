//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCachedURLResponse, NSLock, NSURLRequest;

__attribute__((visibility("hidden")))
@interface NSURLProtocolInternal : NSObject
{
    id <NSURLProtocolClient> client;
    NSURLRequest *request;
    NSCachedURLResponse *cachedResponse;
    NSLock *mutex;
}

- (void)dealloc;
- (id)init;

@end

