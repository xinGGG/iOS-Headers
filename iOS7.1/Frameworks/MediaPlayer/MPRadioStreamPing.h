//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface MPRadioStreamPing : NSObject
{
    int _type;
    NSData *_value;
    double _timestamp;
}

@property(readonly, nonatomic) NSData *value; // @synthesize value=_value;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithType:(int)arg1 value:(id)arg2 timestamp:(double)arg3;

@end

