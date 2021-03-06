/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDAnchor.h>

@interface EDTwoCellAnchor : EDAnchor
{
    struct EDCellAnchorMarker mFrom;
    struct EDCellAnchorMarker mTo;
    BOOL mIsRelative;
    int mEditAs;
}

- (id)init;
- (struct EDCellAnchorMarker)from;
- (void)setFrom:(struct EDCellAnchorMarker)arg1;
- (struct EDCellAnchorMarker)to;
- (void)setTo:(struct EDCellAnchorMarker)arg1;
- (BOOL)isRelative;
- (void)setRelative:(BOOL)arg1;
- (int)editAs;
- (void)setEditAs:(int)arg1;
- (id).cxx_construct;

@end

