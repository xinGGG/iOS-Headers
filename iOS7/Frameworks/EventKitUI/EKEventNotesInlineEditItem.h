/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventEditItem.h>

#import "UITextViewDelegate-Protocol.h"

@class CalendarNotesCell;

// Not exported
@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate>
{
    CalendarNotesCell *_cell;
}

- (void).cxx_destruct;
- (_Bool)textViewShouldReturn:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;
- (_Bool)isInline;
- (void)reset;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 forWidth:(double)arg3;

@end

