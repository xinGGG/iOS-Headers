/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, TLAccessQueue;

@interface TLToneManager : NSObject
{
    NSMutableDictionary *_iTunesTonesByIdentifier;
    NSMutableDictionary *_textTonesByIdentifier;
    NSMutableDictionary *_iTunesIdentifiersByPID;
    NSDictionary *_previewBehaviorForDefaultIdentifier;
    NSDictionary *_identifierAliasMap;
    id _accessQueue;
    id _delegate;
}

+ (_Bool)identifierIsTextTone:(id)arg1;
+ (id)sharedRingtoneManager;
@property(retain, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
- (_Bool)transferPurchasedToITunes:(id)arg1;
- (unsigned long long)installedTonesSize;
- (id)installedTones;
- (void)deleteAllSyncedData;
- (_Bool)_removeToneFromManifest:(id)arg1 fileName:(id)arg2 deletedMetadata:(id *)arg3;
- (_Bool)_addToneToManifest:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (id)iTunesToneForPID:(id)arg1;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (_Bool)deleteSyncedToneByPID:(id)arg1;
- (_Bool)insertPurchasedToneMetadata:(id)arg1 filename:(id)arg2;
- (_Bool)insertSyncedToneMetadata:(id)arg1 filename:(id)arg2;
- (int)_lockManifest:(id)arg1;
- (_Bool)ensureDirectoryExists:(id)arg1;
- (unsigned int)_currentToneSoundID:(id)arg1 defaultIdentifier:(id)arg2;
- (id)_defaultToneNameForAlertType:(int)arg1;
- (id)_defaultToneIdentifierForAlertType:(int)arg1;
- (unsigned int)createPreviewSoundIDForToneIdentifier:(id)arg1;
- (unsigned int)soundIDForToneIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (unsigned int)soundIDForToneIdentifier:(id)arg1;
- (unsigned int)soundIDForTextToneIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (unsigned int)soundIDForTextToneIdentifier:(id)arg1;
- (unsigned int)_soundIDForSystemTone:(id)arg1 isValid:(_Bool *)arg2;
- (id)aliasForIdentifier:(id)arg1;
- (unsigned int)previewBehaviorForDefaultIdentifier:(id)arg1;
- (unsigned int)previewSoundIDForTextToneIdentifier:(id)arg1;
- (id)copyNameOfTextToneWithIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (unsigned int)currentTextToneSoundID;
- (id)nullTextToneName;
- (id)defaultTextToneName;
- (id)defaultTextToneIdentifier;
- (void)setCurrentRingtoneIdentifier:(id)arg1;
- (void)setCurrentTextToneIdentifier:(id)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)currentToneIdentifierForAlertType:(int)arg1;
- (id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_copySystemWideTonePreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)copyCurrentTextToneName;
- (id)copyCurrentTextToneIdentifier;
- (id)currentTextToneIdentifier;
- (void)loadTextToneInfo;
- (id)systemModernSoundDirectory;
- (id)systemNewSoundDirectory;
- (id)systemSoundDirectory;
- (id)systemRingtoneDirectory;
- (id)iTunesRingtoneDirectory;
- (id)ITunesRingtoneInformationPlist;
- (id)deviceITunesRingtoneInformationPlist;
- (id)deviceITunesRingtoneDirectory;
- (id)rootDirectory;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (_Bool)isTonePrivateWithIdentifier:(id)arg1;
- (_Bool)isToneProtectedWithIdentifier:(id)arg1;
- (unsigned long long)durationOfToneWithIdentifier:(id)arg1;
- (_Bool)isAlertTone:(id)arg1;
- (_Bool)isRingtonePurchased:(id)arg1;
- (id)newAVItemWithRingtoneIdentifier:(id)arg1;
- (_Bool)toneWithIdentifierIsNone:(id)arg1;
- (_Bool)toneWithIdentifierIsValid:(id)arg1;
- (_Bool)_toneWithIdentifierIsValid:(id)arg1;
- (id)copyNameOfIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (id)copyIdentifierForRingtoneAtPath:(id)arg1 isValid:(_Bool *)arg2;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1;
- (id)pathFromIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)localizedRingtoneNameWithIdentifier:(id)arg1;
- (id)localizedNameWithIdentifier:(id)arg1;
- (id)defaultRingtonePath;
- (id)defaultRingtoneName;
- (id)defaultRingtoneIdentifier;
- (id)currentRingtoneName;
- (id)currentRingtoneIdentifier;
- (id)copyCurrentRingtoneIdentifier;
- (id)copyCurrentRingtoneName;
- (void)_deviceRingtonesChangedNotification;
- (void)loadITunesRingtoneInfoPlistAtPath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)shouldShowAlarmSounds;
- (_Bool)shouldShowRingtones;
- (void)dealloc;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1 shouldInitializeGraphicsServices:(_Bool)arg2;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)initWithGraphicsServicesInitialization:(_Bool)arg1;
- (id)init;

@end

