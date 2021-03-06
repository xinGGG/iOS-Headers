/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPPlaceholderArtwork : NSObject
{
}

+ (struct CGSize)unscaledArtworkSizeForFormatID:(unsigned int)arg1;
+ (unsigned int)currentScreenFormatIDFrom1XFormatID:(unsigned int)arg1;
+ (id)noArtPlaceholderImageForMediaType:(int)arg1 withFormat:(unsigned int)arg2;
+ (id)scaleImage:(id)arg1 withFormat:(unsigned int)arg2;
+ (id)padNoArtPlaceholderImageForMediaType:(int)arg1 size:(struct CGSize)arg2;
+ (id)padNoArtPlaceholderVideoImageForSize:(struct CGSize)arg1;
+ (id)padNoArtPlaceholderAudioBookImageForSize:(struct CGSize)arg1;
+ (id)padNoArtPlaceholderPodcastImageForSize:(struct CGSize)arg1;
+ (id)padNoArtPlaceholderMusicImageForSize:(struct CGSize)arg1;
+ (id)noArtPlaceholderImageForMediaType:(int)arg1;
+ (id)noArtPlaceholderImageForMediaType:(int)arg1 size:(struct CGSize)arg2;
+ (id)scaledNoArtPlaceholderVideoImageWithFormat:(unsigned int)arg1;
+ (id)noArtPlaceholderVideoImage;
+ (id)scaledNoArtPlaceholderAudioBookImageWithFormat:(unsigned int)arg1;
+ (id)noArtPlaceholderAudioBookImage;
+ (id)scaledNoArtPlaceholderPodcastImageWithFormat:(unsigned int)arg1;
+ (id)noArtPlaceholderPodcastImage;
+ (id)scaledNoArtPlaceholderMusicImageWithFormat:(unsigned int)arg1;
+ (id)noArtPlaceholderMusicImage;
- (BOOL)isPlaceholder:(id)arg1;

@end

