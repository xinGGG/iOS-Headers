//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCWaveformGeneratorSegmentOutputObserver.h"

@class RCMutableWaveform, RCWaveform, RCWaveformGenerator;

@interface RCWaveformAccumulator : NSObject <RCWaveformGeneratorSegmentOutputObserver>
{
    RCMutableWaveform *_waveform;
    BOOL _finishedSuccessfully;
    RCWaveformGenerator *_generator;
}

@property(readonly, nonatomic) BOOL finishedSuccessfully; // @synthesize finishedSuccessfully=_finishedSuccessfully;
@property(readonly, nonatomic) RCWaveform *waveform; // @synthesize waveform=_waveform;
@property(retain, nonatomic) RCWaveformGenerator *generator; // @synthesize generator=_generator;
- (void).cxx_destruct;
- (void)waitForGeneratorCompletion;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (id)initWithWaveformGenerator:(id)arg1;

@end
