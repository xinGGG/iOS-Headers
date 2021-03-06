/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSKnownKeysDictionary, PLManagedObject;

@interface PLObjectSnapshot : NSObject
{
    PLManagedObject *_managedObject;
    NSKnownKeysDictionary *_snapshotValues;
    struct __CFDictionary *_indexMaps;
}

+ (struct __CFDictionary *)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2;
+ (id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(BOOL)arg3;
@property(readonly, nonatomic) PLManagedObject *managedObject; // @synthesize managedObject=_managedObject;
- (void)setAssetsSnapshot:(id)arg1;
- (id)_allSnapshotValuesDescription;
- (id)_snapshotValueForProperty:(id)arg1;
- (id)description;
- (id)filteredIndexesForFilter:(id)arg1;
- (BOOL)hasSnapshotValueForProperty:(id)arg1;
- (id)snapshotValueForProperty:(id)arg1;
- (id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(struct __CFDictionary *)arg4 useCommitedValues:(BOOL)arg5;
- (void)dealloc;
- (id)init;

@end

