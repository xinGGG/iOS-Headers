/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProofReader/AppleSpell.h>

@interface AppleSpell (Korean)
- (id)spellServer:(id)arg1 suggestGuessesForKoreanWordRange:(struct _NSRange)arg2 inString:(id)arg3;
- (id)_correctionForKoreanString:(id)arg1 range:(struct _NSRange)arg2 inString:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned long long)arg5 dictionary:(id)arg6 keyEventData:(id)arg7 alternativeCorrection:(id *)arg8;
- (void)addGuessesForKoreanWord:(id)arg1 toMutableArray:(id)arg2 includeAdditionalGuesses:(_Bool)arg3;
@end
