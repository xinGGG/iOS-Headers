/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIKeyboardCornerView, UIPeripheralHostLayer;

@interface UIPeripheralHostView : UIView
{
    int _explicitLayoutCount;
    UIKeyboardCornerView *_cornerViewLeft;
    UIKeyboardCornerView *_cornerViewRight;
}

+ (Class)layerClass;
@property(readonly, nonatomic) UIKeyboardCornerView *cornerViewRight; // @synthesize cornerViewRight=_cornerViewRight;
@property(readonly, nonatomic) UIKeyboardCornerView *cornerViewLeft; // @synthesize cornerViewLeft=_cornerViewLeft;
- (void)removeFromSuperview;
- (int)_clipCornersOfView:(id)arg1;
- (void)resizeForKeyplaneSize:(struct CGSize)arg1;
- (BOOL)_shouldUseKeyWindowStack;
@property(readonly, nonatomic) UIPeripheralHostLayer *layer;
- (void)layoutSubviews;
- (void)endExplicitLayout;
- (void)beginExplicitLayout;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
