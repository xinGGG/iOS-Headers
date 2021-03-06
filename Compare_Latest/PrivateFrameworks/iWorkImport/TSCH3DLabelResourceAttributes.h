//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, TSCH3DLabelBitmapContextInfo, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying>
{
    TSWPParagraphStyle *mParagraphStyle;
    NSString *mString;
    TSCH3DLabelBitmapContextInfo *mBitmapContextInfo;
    float mLabelWidth;
    float mRenderSamples;
}

+ (id)labelAttributesWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(float)arg4 renderSamples:(float)arg5;
@property(readonly, nonatomic) float renderSamples; // @synthesize renderSamples=mRenderSamples;
@property(readonly, nonatomic) float labelWidth; // @synthesize labelWidth=mLabelWidth;
@property(readonly, nonatomic) TSCH3DLabelBitmapContextInfo *bitmapContextInfo; // @synthesize bitmapContextInfo=mBitmapContextInfo;
@property(readonly, nonatomic) NSString *string; // @synthesize string=mString;
@property(readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
- (unsigned int)hash;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(float)arg4 renderSamples:(float)arg5;

@end

