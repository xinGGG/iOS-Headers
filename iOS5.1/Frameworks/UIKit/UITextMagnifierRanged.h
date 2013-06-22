/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UITextMagnifier-Protocol.h"

@class UIResponder<UITextInput>, UITextMagnifierTimeWeightedPoint;

@interface UITextMagnifierRanged : UIView <UITextMagnifier>
{
    UIResponder<UITextInput> *_text;
    UIView *_target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _animationPoint;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    int _autoscrollDirections;
    float _touchOffsetFromMagnificationPoint;
    float _magnifierOffsetFromTouch;
}

+ (id)sharedRangedMagnifier;
@property(nonatomic) struct CGPoint animationPoint; // @synthesize animationPoint=_animationPoint;
@property(retain, nonatomic) UIView *target; // @synthesize target=_target;
@property(retain, nonatomic) UIResponder<UITextInput> *text; // @synthesize text=_text;
- (struct CGPoint)snappedPoint:(struct CGPoint)arg1;
- (void)stopMagnifying:(BOOL)arg1;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(BOOL)arg5;
- (void)windowWillRotate:(id)arg1;
- (void)detectLostTouches:(id)arg1;
- (void)updateFrame;
- (float)offsetFromMagnificationPoint;
- (void)remove;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomDownAnimation;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimation;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg1;
- (void)autoscrollWillNotStart;
- (void)setAutoscrollDirections:(int)arg1;
- (void)animateToMagnifierRenderer;
- (void)setToMagnifierRenderer;
- (void)animateToAutoscrollRenderer;
- (void)postAutoscrollPoint:(struct CGPoint)arg1;
- (int)horizontalMovement;
@property(readonly, nonatomic) BOOL terminalPointPlacedCarefully;
- (BOOL)wasPlacedCarefullyAtTime:(double)arg1;
- (int)horizontalMovementAtTime:(double)arg1;
@property(readonly, nonatomic) struct CGPoint terminalPoint;
@property(nonatomic) struct CGPoint magnificationPoint;
- (void)dealloc;
- (id)initWithDefaultFrame;

@end
