//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEnumerator, TSKDocumentRoot, TSWPStorage;

@protocol TSWPHeaderFooterProvider <NSObject>
- (float)bodyWidth;
- (TSKDocumentRoot *)documentRoot;
- (NSEnumerator *)headerFooterFragmentEnumerator;
- (BOOL)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;
- (BOOL)isHeaderFooterEmpty:(int)arg1;
- (int)headerFragmentIndexForModel:(id <TSKModel>)arg1;
- (int)headerFooterTypeForModel:(id <TSKModel>)arg1;
- (TSWPStorage *)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;
- (BOOL)usesSingleHeaderFooter;
@end
