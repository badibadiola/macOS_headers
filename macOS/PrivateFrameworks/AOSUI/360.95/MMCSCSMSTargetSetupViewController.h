//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MMPhoneNumberFormatter, NSButton, NSImageView, NSPopUpButton, NSString, NSTextField;
@protocol MMCSCSMSTargetSetupViewControllerDelegate;

@interface MMCSCSMSTargetSetupViewController : NSViewController
{
    id <MMCSCSMSTargetSetupViewControllerDelegate> _delegate;
    NSImageView *_smsTargetImageView;
    NSPopUpButton *_smsTargetCountryMenu;
    NSTextField *_smsTargetTextField;
    NSButton *_smsTargetCancelButton;
    NSButton *_smsTargetConfirmButton;
    NSTextField *_smsTargetTitle;
    NSTextField *_smsTargetMessage;
    NSTextField *_smsTargetCountryLabel;
    NSTextField *_smsTargetNumberLabel;
    NSButton *_smsTargetHelpButton;
    MMPhoneNumberFormatter *_smsTargetFormatter;
}

@property(retain) MMPhoneNumberFormatter *smsTargetFormatter; // @synthesize smsTargetFormatter=_smsTargetFormatter;
@property NSButton *smsTargetHelpButton; // @synthesize smsTargetHelpButton=_smsTargetHelpButton;
@property NSButton *smsTargetConfirmButton; // @synthesize smsTargetConfirmButton=_smsTargetConfirmButton;
@property NSButton *smsTargetCancelButton; // @synthesize smsTargetCancelButton=_smsTargetCancelButton;
@property NSTextField *smsTargetTextField; // @synthesize smsTargetTextField=_smsTargetTextField;
@property NSTextField *smsTargetNumberLabel; // @synthesize smsTargetNumberLabel=_smsTargetNumberLabel;
@property NSPopUpButton *smsTargetCountryMenu; // @synthesize smsTargetCountryMenu=_smsTargetCountryMenu;
@property NSTextField *smsTargetCountryLabel; // @synthesize smsTargetCountryLabel=_smsTargetCountryLabel;
@property NSTextField *smsTargetMessage; // @synthesize smsTargetMessage=_smsTargetMessage;
@property NSTextField *smsTargetTitle; // @synthesize smsTargetTitle=_smsTargetTitle;
@property NSImageView *smsTargetImageView; // @synthesize smsTargetImageView=_smsTargetImageView;
@property id <MMCSCSMSTargetSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controlTextDidChange:(id)arg1;
- (void)_selectCountryCodeInPopUpMenu:(id)arg1;
@property(readonly) NSString *smsTarget;
@property(readonly) NSString *smsCountryPrefix;
@property(readonly) NSString *smsCountryCode;
- (void)popUpMenuItemSelected:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)confirmButtonClicked:(id)arg1;
- (void)setup;

@end

