//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActivityItemDeferredSource.h"
#import "UIActivityItemSource.h"

@class NSDictionary, NSString, NSURL, PHAsset, PLVideoRemaker, _PUActivityItemSourceOperation;

@interface PUActivityItemSource : NSObject <UIActivityItemDeferredSource, UIActivityItemSource>
{
    PHAsset *_asset;
    BOOL _hasRecognizedVideoAdjustments;
    _PUActivityItemSourceOperation *_currentOperation;
    PLVideoRemaker *_remaker;
    CDUnknownBlockType _remakerCompletionHandler;
    id _strongSelf;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _postCompletionHandler;
    int __imageManagerRequestID;
    int __remakerWasCancelled;
    NSDictionary *__pasteboardRepresentation;
    NSURL *__videoRemakerURL;
    NSURL *__assetsLibraryURL;
    NSURL *__assetURL;
}

@property(retain, setter=_setAssetURL:) NSURL *_assetURL; // @synthesize _assetURL=__assetURL;
@property(retain, setter=_setAssetsLibraryURL:) NSURL *_assetsLibraryURL; // @synthesize _assetsLibraryURL=__assetsLibraryURL;
@property(retain, setter=_setVideoRemakerURL:) NSURL *_videoRemakerURL; // @synthesize _videoRemakerURL=__videoRemakerURL;
@property(retain, setter=_setPasteboardRepresentation:) NSDictionary *_pasteboardRepresentation; // @synthesize _pasteboardRepresentation=__pasteboardRepresentation;
@property(setter=_setRemakerWasCancelled:) int _remakerWasCancelled; // @synthesize _remakerWasCancelled=__remakerWasCancelled;
@property(setter=_setImageManagerRequestID:) int _imageManagerRequestID; // @synthesize _imageManagerRequestID=__imageManagerRequestID;
@property(copy) CDUnknownBlockType postCompletionHandler; // @synthesize postCompletionHandler=_postCompletionHandler;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)_removeTempFile;
- (void)_cleanupRemaker;
- (void)_cancelVideoRemaking:(id)arg1;
- (void)remakeVideoWithTrimStartTime:(double)arg1 endTime:(double)arg2 forMail:(BOOL)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)_operation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)_newPasteboardRepresentationForURL:(id)arg1;
- (id)_newOperationForActivityType:(id)arg1;
- (BOOL)_needsVideoRemakerForActivityType:(id)arg1 adjustmentData:(id)arg2 needsAssetsLibraryURL:(BOOL)arg3;
- (BOOL)_needsAssetsLibraryURLForActivityType:(id)arg1;
- (void)cancelRemaking;
- (void)cancel;
- (void)runWithActivityType:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

