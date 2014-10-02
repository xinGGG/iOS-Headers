//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUICellLayout.h>

#import "SKUIEditorialLinkViewDelegate.h"

@class SKUIEditorialLinkView, SKUITextBoxView;

@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate>
{
    struct UIEdgeInsets _contentInset;
    float _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    float _totalHeight;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (id)_textBoxView;
- (id)_linkView;
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(int)arg2 expanded:(BOOL)arg3;
- (void)dealloc;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)_initSKUIEditorialCellLayout;

@end
