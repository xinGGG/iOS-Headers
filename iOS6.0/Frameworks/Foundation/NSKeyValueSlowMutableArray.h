/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSKeyValueMutableArray.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray
{
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptyArrays;
    char _padding[3];
}

+ (CDStruct_e8a1eea0 *)_proxyNonGCPoolPointer;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeLastObject;
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObject:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;
- (unsigned int)count;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end
