//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (RadioRequestAdditions)
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(BOOL)arg3 error:(id *)arg4;
+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(BOOL)arg2 error:(id *)arg3;
- (id)propertyListForRadioResponseReturningError:(id *)arg1 unparsedResponseDictionary:(id *)arg2;
- (id)propertyListForRadioResponseReturningError:(id *)arg1;
@end
