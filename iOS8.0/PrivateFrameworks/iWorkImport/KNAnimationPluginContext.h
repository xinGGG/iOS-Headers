//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KNAnimationPluginContext.h"

@class KNAnimatedBuild, NSArray, NSDictionary, NSString, TSDGLState, TSDRep;

__attribute__((visibility("hidden")))
@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>
{
    BOOL _isMotionBlurred;
    BOOL _isPreview;
    BOOL _isWarmingUp;
    KNAnimatedBuild *_animatedBuild;
    NSArray *_magicMoveMatches;
    NSArray *_textures;
    NSDictionary *_transitionAttributes;
    unsigned int _direction;
    TSDGLState *_GLState;
    TSDRep *_rep;
    int _rendererType;
    double _percent;
    double _duration;
    struct CGRect _boundingRectOnCanvas;
    struct CGRect _boundingRect;
}

@property(nonatomic) int rendererType; // @synthesize rendererType=_rendererType;
@property(nonatomic) TSDRep *rep; // @synthesize rep=_rep;
@property(nonatomic) BOOL isWarmingUp; // @synthesize isWarmingUp=_isWarmingUp;
@property(retain, nonatomic) TSDGLState *GLState; // @synthesize GLState=_GLState;
@property(nonatomic) BOOL isPreview; // @synthesize isPreview=_isPreview;
@property(nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) struct CGRect boundingRectOnCanvas; // @synthesize boundingRectOnCanvas=_boundingRectOnCanvas;
@property(nonatomic) BOOL isMotionBlurred; // @synthesize isMotionBlurred=_isMotionBlurred;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int direction; // @synthesize direction=_direction;
@property(nonatomic) NSDictionary *transitionAttributes; // @synthesize transitionAttributes=_transitionAttributes;
@property(retain, nonatomic) NSArray *textures; // @synthesize textures=_textures;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) NSArray *magicMoveMatches; // @synthesize magicMoveMatches=_magicMoveMatches;
@property(nonatomic) KNAnimatedBuild *animatedBuild; // @synthesize animatedBuild=_animatedBuild;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isFrameRenderer;
@property(readonly, nonatomic) BOOL isMagicMove;
@property(readonly, nonatomic) BOOL isTransition;
@property(readonly, nonatomic) BOOL isBuild;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
