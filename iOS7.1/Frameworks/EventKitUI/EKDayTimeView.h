//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EKCurrentTimeMarkerViewUpdating.h"

@class EKCurrentTimeMarkerView, UIColor;

@interface EKDayTimeView : UIView <EKCurrentTimeMarkerViewUpdating>
{
    UIView *_topContentView;
    UIView *_bottomContentView;
    unsigned int _leftBorder:1;
    unsigned int _rightBorder:1;
    BOOL _useLightText;
    double _highlightedHour;
    int _orientation;
    float _hourSize;
    float _designatorSize;
    EKCurrentTimeMarkerView *_timeMarker;
    UIView *_timeMarkerExtension;
    float _timeWidth;
    BOOL _showsTimeMarker;
    BOOL _showsTimeMarkerExtension;
    BOOL _usesLightText;
    UIColor *_timeColor;
    float _hoursToPad;
    float _hourHeight;
    id <EKDayTimeViewDelegate> _delegate;
    struct _NSRange _hoursToRender;
}

+ (float)defaultHeightForOrientation:(int)arg1;
+ (float)designatorSizeForOrientation:(int)arg1;
+ (float)hourSizeForOrientation:(int)arg1;
+ (float)hourHeightForOrientation:(int)arg1;
+ (float)timeWidthForOrientation:(int)arg1;
+ (float)timeVerticalInsetForOrientation:(int)arg1;
+ (float)timeInsetForOrientation:(int)arg1;
+ (void)setVerticalPadding:(float)arg1;
+ (float)verticalPadding;
+ (float)_hourWidthForOrientation:(int)arg1;
+ (void)_calculateWidthForOrientation:(int)arg1;
+ (void)_invalidateWidth;
@property(nonatomic) __weak id <EKDayTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) float hourHeight; // @synthesize hourHeight=_hourHeight;
@property(nonatomic) struct _NSRange hoursToRender; // @synthesize hoursToRender=_hoursToRender;
@property(nonatomic) float hoursToPad; // @synthesize hoursToPad=_hoursToPad;
@property(nonatomic) BOOL usesLightText; // @synthesize usesLightText=_usesLightText;
@property(nonatomic) BOOL showsTimeMarkerExtension; // @synthesize showsTimeMarkerExtension=_showsTimeMarkerExtension;
@property(nonatomic) BOOL showsTimeMarker; // @synthesize showsTimeMarker=_showsTimeMarker;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (float)_positionOfSecond:(int)arg1;
- (void)layoutSubviews;
- (void)updateMarkerPosition;
- (void)drawRect:(struct CGRect)arg1 forContentView:(id)arg2 withHourRange:(struct _NSRange)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setOrientation:(int)arg1;
@property(readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker;
@property(retain, nonatomic) UIColor *timeColor; // @synthesize timeColor=_timeColor;
@property(nonatomic) double highlightedHour;
@property(nonatomic) BOOL showsRightBorder;
@property(nonatomic) BOOL showsLeftBorder;
- (void)setOpaque:(BOOL)arg1;
- (float)_timeWidth;
- (void)_invalidateTimeWidth;
- (float)topPadding;
- (void)_localeChanged;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) float defaultHeight;

@end
