//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSADocumentRoot.h>

#import "TSCHCommandLifecycleDelegate.h"
#import "TSKModel.h"
#import "TSTResolverContainerNameProvider.h"

@class KNRecordingSyncMaintainer, KNShow, KNSlidePreviewManager, KNThumbnailManager;

__attribute__((visibility("hidden")))
@interface KNDocumentRoot : TSADocumentRoot <TSKModel, TSCHCommandLifecycleDelegate, TSTResolverContainerNameProvider>
{
    KNShow *mShow;
    KNThumbnailManager *mThumbnailManager;
    KNSlidePreviewManager *mSlidePreviewManager;
    KNRecordingSyncMaintainer *mRecordingSyncMaintainer;
    BOOL mIsObservingRecording;
}

+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2;
+ (Class)commandControllerClass;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_applicationWillResignActive:(id)arg1;
- (void)prepareForSavingAsTemplate;
- (void)preprocessForSaveAsTheme;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (id)resolverContainerNameForResolver:(id)arg1;
- (void)changeShowSizeTo:(struct CGSize)arg1;
- (id)resizeCommandForSlideNode:(id)arg1 fromOldSize:(struct CGSize)arg2;
- (void)didCommitChartCommand:(id)arg1;
- (void)willCommitChartCommand:(id)arg1;
- (BOOL)isMultiPageForQuickLook;
- (id)createViewStateRoot;
- (unsigned int)rootSearchTargetCountThroughIndex:(unsigned int)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned int)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (void)upgradeTextStylesForUnity;
- (id)protected_defaultTextPresetOrdering;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (id)stylesheet;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;
- (id)childEnumerator;
@property(nonatomic) id <KNDocumentRootDelegate> delegate; // @dynamic delegate;
- (void)dealloc;
- (void)willClose;
- (void)documentDidLoad;
- (id)initWithContext:(id)arg1;
@property(retain, nonatomic) KNShow *show;
- (unsigned int)applicationType;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct DocumentArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;

@end
