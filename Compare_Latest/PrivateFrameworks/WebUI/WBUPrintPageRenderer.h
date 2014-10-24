//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPrintPageRenderer.h"

#import "UIPrintInteractionControllerDelegate.h"

@class NSNumberFormatter, NSString, UIColor, UIFont, UIPrintFormatter, UIWebBrowserView, UIWebPaginationInfo, WebFrame;

@interface WBUPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate>
{
    NSNumberFormatter *_numberFormatter;
    UIWebPaginationInfo *_paginationInfo;
    float _URLWidth;
    NSString *_dateString;
    float _dateWidth;
    float _printWidth;
    struct CGPoint _contentOffset;
    struct CGPoint _footerOffset;
    UIFont *_footerFont;
    UIColor *_footerColor;
    BOOL _printFooter;
    UIWebBrowserView *_browserView;
    WebFrame *_webFrame;
    NSString *_URLString;
    UIPrintFormatter *_contentFormatter;
}

@property(nonatomic) BOOL printFooter; // @synthesize printFooter=_printFooter;
@property(retain, nonatomic) UIPrintFormatter *contentFormatter; // @synthesize contentFormatter=_contentFormatter;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) WebFrame *webFrame; // @synthesize webFrame=_webFrame;
@property(retain, nonatomic) UIWebBrowserView *browserView; // @synthesize browserView=_browserView;
- (void).cxx_destruct;
- (void)associateWithPrintController:(id)arg1;
- (id)printInfoWithPageTitle:(id)arg1;
- (id)printControllerWithPageTitle:(id)arg1;
- (void)printInteractionControllerDidFinishJob:(id)arg1;
- (void)printInteractionControllerWillStartJob:(id)arg1;
- (id)printingFrame;
- (void)drawFooterForPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (void)drawContentForPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (int)numberOfPages;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
