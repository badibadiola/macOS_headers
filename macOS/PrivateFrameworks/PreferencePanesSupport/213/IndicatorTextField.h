//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class IndicatorImageView;

@interface IndicatorTextField : NSTextField
{
    BOOL mShowIndicator;
    IndicatorImageView *mIdicatorImageView;
    NSTextField *mNoteField;
}

+ (id)_indicatorImage;
@property(retain) NSTextField *noteField; // @synthesize noteField=mNoteField;
- (void).cxx_destruct;
- (void)setShowIndicator:(BOOL)arg1 noteString:(id)arg2;
- (void)setShowIndicator:(BOOL)arg1;
- (BOOL)isShowingIndicator;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)becomeFirstResponder;

@end

