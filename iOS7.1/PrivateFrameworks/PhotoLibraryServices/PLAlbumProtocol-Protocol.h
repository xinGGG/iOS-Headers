//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAssetContainer.h"

@class NSDictionary, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSPredicate, NSString, NSURL, UIImage;

@protocol PLAlbumProtocol <PLAssetContainer>
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
@property(readonly, nonatomic) CDUnknownBlockType sectioningComparator;
@property(readonly, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property(readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isStandInAlbum;
@property(readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isWallpaperAlbum;
@property(readonly, nonatomic) BOOL isPanoramasAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(readonly, nonatomic) UIImage *posterImage;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) NSNumber *kind;
- (void)batchFetchAssets:(NSOrderedSet *)arg1;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (NSIndexSet *)displayableIndexesForCount:(unsigned int)arg1;
- (NSString *)titleForSectionStartingAtIndex:(unsigned int)arg1;

@optional
@property(readonly, nonatomic) NSString *name;
- (void)setUINotificationsEnabled:(BOOL)arg1;
- (NSMutableIndexSet *)filteredIndexesForPredicate:(NSPredicate *)arg1;
@end

