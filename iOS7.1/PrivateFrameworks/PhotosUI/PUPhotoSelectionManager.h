//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableSet, NSOrderedSet, NSSet;

@interface PUPhotoSelectionManager : NSObject
{
    NSMapTable *_selectionEntriesByContainer;
    NSMutableSet *_uniqueAssetSelection;
    int _selectionChangeCount;
    int _options;
    id <PUPhotoSelectionManagerDelegate> _delegate;
}

@property(nonatomic) id <PUPhotoSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int options; // @synthesize options=_options;
- (void).cxx_destruct;
- (BOOL)_shouldUniqueAssets;
- (void)_endSelectionChange;
- (void)_beginSelectionChange;
- (void)invalidateAllAssetIndexes;
- (void)handleCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (id)localizedSelectionString;
@property(readonly, nonatomic) NSOrderedSet *orderedSelectedAssets;
@property(readonly, nonatomic) NSSet *selectedAssets;
- (id)selectedAssetsWithContainerOrdering:(id)arg1;
- (void)enumerateSelectedAssetsWithContainerOrdering:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)selectedAssetIndexesWithContainerOrdering:(id)arg1;
- (BOOL)areAllAssetsSelectedInContainers:(id)arg1;
- (BOOL)areAllAssetsSelectedInContainer:(id)arg1;
- (BOOL)isAnyAssetSelectedInContainers:(id)arg1;
- (BOOL)isAnyAssetSelectedInContainer:(id)arg1;
- (BOOL)isAssetAtIndexSelected:(unsigned int)arg1 inContainer:(id)arg2;
- (void)deselectAllAssets;
- (void)deselectAllAssetsInContainers:(id)arg1;
- (void)deselectAssetsAtIndexes:(id)arg1 inContainer:(id)arg2;
- (void)deselectAssetAtIndex:(unsigned int)arg1 inContainer:(id)arg2;
- (void)selectAllAssetsInContainers:(id)arg1;
- (void)selectAssetsAtIndexes:(id)arg1 inContainer:(id)arg2;
- (void)selectAssetAtIndex:(unsigned int)arg1 inContainer:(id)arg2;
- (id)_selectionEntryForContainer:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)initWithOptions:(int)arg1;
- (id)init;

@end
