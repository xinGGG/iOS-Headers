/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADLineJoin.h>

@interface OADMiterLineJoin : OADLineJoin
{
    float mLimit;
    unsigned int mIsLimitOverridden:1;
}

+ (id)defaultProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDefaults;
- (float)limit;
- (void)setLimit:(float)arg1;
- (BOOL)isLimitOverridden;

@end
