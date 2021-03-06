//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPReportingTrackMetadata.h>

@class NSDictionary;

@interface MPReportingRadioTrackMetadata : MPReportingTrackMetadata
{
    NSDictionary *_trackInfo;
    int _trackType;
    long long _storeID;
}

@property(nonatomic) int trackType; // @synthesize trackType=_trackType;
@property(copy, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) long long storeID; // @synthesize storeID=_storeID;
- (void).cxx_destruct;
- (id)initWithRadioTrack:(id)arg1;

@end

