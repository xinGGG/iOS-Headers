/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKChallenge.h>

@class GKScore;

@interface GKScoreChallenge : GKChallenge
{
    GKScore *_score;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
- (id)identifierKey;
- (id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2;
- (id)cellGoalTextForLeaderboard:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)titleTextForAuxData:(id)arg1;
- (id)goalTextForAuxData:(id)arg1;
- (void)loadAuxDataWithHandler:(id)arg1;

@end

