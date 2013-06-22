/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSManagedObject.h"

@class NSData, NSString, NoteObject;

@interface NoteBodyObject : NSManagedObject
{
}

- (id)contentAsPlainTextPreservingNewlines;
@property(readonly, nonatomic) NSString *contentAsPlainText;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *externalContentRef; // @dynamic externalContentRef;
@property(retain, nonatomic) NSData *externalRepresentation; // @dynamic externalRepresentation;
@property(retain, nonatomic) NoteObject *owner; // @dynamic owner;

@end
