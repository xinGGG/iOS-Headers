//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSExtension, NSString, UIImage;

@interface PUEditPlugin : NSObject
{
    NSExtension *_extension;
}

@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *smallIcon;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) NSString *title;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithExtension:(id)arg1;

@end

