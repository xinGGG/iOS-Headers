/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSArray, NSNumber;

@interface SAWebWebSearchResult : AceObject <SAAceSerializable>
{
}

+ (id)webSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)webSearchResult;
@property(copy, nonatomic) NSArray *webResults;
@property(copy, nonatomic) NSArray *videoResults;
@property(copy, nonatomic) NSNumber *totalWebResults;
@property(copy, nonatomic) NSNumber *totalVideoResults;
@property(copy, nonatomic) NSNumber *totalNewsResults;
@property(copy, nonatomic) NSNumber *totalImageResults;
@property(copy, nonatomic) NSArray *relatedSearchResults;
@property(copy, nonatomic) NSArray *newsResults;
@property(copy, nonatomic) NSArray *imageResults;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

