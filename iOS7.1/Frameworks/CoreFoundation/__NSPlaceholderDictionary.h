//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderDictionary : NSMutableDictionary
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)mutablePlaceholder;
+ (id)immutablePlaceholder;
+ (void)initialize;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned int)arg3;

@end
