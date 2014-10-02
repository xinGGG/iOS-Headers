//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

@class TSDMediaInfo;

__attribute__((visibility("hidden")))
@interface TSDMediaOriginalSizeCommand : TSKCommand
{
    TSDMediaInfo *mInfo;
    struct CGSize mNewOriginalSize;
    BOOL mHasOldOriginalSize;
    struct CGSize mOldOriginalSize;
}

- (id).cxx_construct;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_do;
- (BOOL)process;
- (void)dealloc;
- (id)initWithMediaInfo:(id)arg1 newOriginalSize:(struct CGSize)arg2;

@end
