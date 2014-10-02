//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "_SBUIWidgetViewController_Host_IPC.h"

@class SBWidgetViewControllerHost;

@interface _SBWidgetViewControllerHost_Proxy : _UIRemoteViewController <_SBUIWidgetViewController_Host_IPC>
{
    SBWidgetViewControllerHost *_managingHost;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) SBWidgetViewControllerHost *managingHost; // @synthesize managingHost=_managingHost;
- (void)__invalidatePreferredViewSize;
- (void)__requestLaunchOfURL:(id)arg1;
- (void)__requestPresentationOfViewController:(id)arg1 presentationStyle:(long long)arg2 context:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)_hostDidDismiss;
- (void)_hostWillDismiss;
- (void)_hostDidPresent;
- (void)_hostWillPresent;
- (void)_requestServicePreferredViewSizeWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_setWidgetIdiom:(long long)arg1;
- (void)_setWidgetIdentifier:(id)arg1;

@end
