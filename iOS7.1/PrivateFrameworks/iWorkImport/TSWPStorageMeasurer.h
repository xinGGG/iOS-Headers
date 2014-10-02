//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSWPColumnMetrics.h"
#import "TSWPLayoutOwner.h"
#import "TSWPLayoutTarget.h"

@class NSMutableArray, TSDCanvas, TSDLayout, TSPObject<TSDHint>, TSWPPadding, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPStorageMeasurer : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics>
{
    TSWPStorage *_storage;
    NSMutableArray *_columns;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    unsigned int _flags;
    struct CGPoint _anchor;
}

@property(readonly, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
- (id).cxx_construct;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 outWidth:(float *)arg3 outGap:(float *)arg4;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
@property(readonly, nonatomic) unsigned int columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
@property(readonly, nonatomic) struct CGSize adjustedInsets;
- (id)textWrapper;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(int)arg2 afterCharIndex:(unsigned int)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (BOOL)caresAboutStorageChanges;
@property(readonly, nonatomic) BOOL layoutIsValid;
- (BOOL)isLayoutOffscreen;
@property(readonly, nonatomic) BOOL textIsVertical;
@property(readonly, nonatomic) unsigned int pageCount;
@property(readonly, nonatomic) unsigned int pageNumber;
@property(readonly, nonatomic) float maxAnchorY;
- (id)currentAnchoredDrawableLayouts;
- (void)addAttachmentLayout:(id)arg1;
- (id)currentInlineDrawableLayouts;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) int naturalAlignment;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
- (BOOL)isLastTarget;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *nextTargetTopicNumbers;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *previousTargetTopicNumbers;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
- (id)columnMetricsForCharIndex:(unsigned int)arg1 outRange:(struct _NSRange *)arg2;
- (struct CGSize)measuredSizeWithFlags:(unsigned int)arg1;
- (id)pLayoutWithMinSize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2 anchor:(struct CGPoint)arg3 flags:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, nonatomic) TSDCanvas *canvas;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) struct CGRect maskRect;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property(readonly, nonatomic) BOOL shouldHyphenate;
@property(readonly, nonatomic) float textScaleFactor;

@end
