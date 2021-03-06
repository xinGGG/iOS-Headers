/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface MFMailAccountProxy : NSObject
{
    NSDictionary *_properties;
}

+ (void)reloadAccounts;
+ (id)defaultMailAccountForDelivery;
+ (id)activeAccounts;
+ (id)mailAccounts;
+ (id)accountContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
- (id)_initWithProperties:(id)arg1;
- (void)dealloc;
- (BOOL)isDefaultDeliveryAccount;
- (id)fullUserName;
- (id)username;
- (id)firstEmailAddress;
- (id)emailAddresses;
- (id)fromEmailAddresses;
- (id)_emailAddressesAndAliases;
- (id)uniqueID;
- (BOOL)supportsEmoji;
- (BOOL)allowsEmoji;
- (BOOL)restrictsRepliesAndForwards;
- (BOOL)_isActive;
- (BOOL)_isRestricted;
- (id)mailAccount;

@end

