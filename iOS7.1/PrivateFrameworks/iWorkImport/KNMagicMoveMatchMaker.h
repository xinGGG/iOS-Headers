//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface KNMagicMoveMatchMaker : NSObject
{
}

+ (id)layerAndContentsArrayByUpdatingMorphMatches:(id)arg1 withCurrentTime:(double)arg2 animationStartTime:(double)arg3 animationDuration:(double)arg4 morphFrameDuration:(double)arg5 animatedSlideView:(id)arg6 playbackSession:(id)arg7 generateSingleTextures:(BOOL)arg8;
+ (id)magicMoveMatchesFromAnimatedSlideView:(id)arg1 outMorphMatches:(id)arg2 textDeliveryType:(int)arg3;
+ (id)p_animationMatchesFromMatch:(id)arg1 outMorphMatches:(id)arg2 animatedSlideView:(id)arg3 outgoingCanvas:(id)arg4 incomingCanvas:(id)arg5 ignoreBuildVisibility:(BOOL)arg6;
+ (id)magicMoveMatchesWithOutgoingInfos:(id)arg1 incomingInfos:(id)arg2 outgoingCanvas:(id)arg3 incomingCanvas:(id)arg4 textDeliveryType:(int)arg5 outgoingAnimatedSlideModel:(id)arg6 incomingAnimatedSlideModel:(id)arg7 ignoreBuildVisibility:(BOOL)arg8;
+ (id)p_magicMoveMatchesUsingAttributesForClass:(Class)arg1 outgoingObjects:(id)arg2 incomingObjects:(id)arg3 textureContext:(id)arg4 outgoingAnimatedSlideModel:(id)arg5 ignoreBuildVisibility:(BOOL)arg6;
+ (id)p_matchObjectWithRep:(id)arg1 model:(id)arg2 ignoreBuildVisibility:(BOOL)arg3;
+ (BOOL)isDrawableIgnored:(id)arg1;
+ (void)setDrawable:(id)arg1 isIgnored:(BOOL)arg2;
+ (int)magicMoveMorphTexturesPerSecond;

@end

