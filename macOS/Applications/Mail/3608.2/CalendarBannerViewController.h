//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BannerViewController.h"

@class NSButton, NSString, NSTextField;

@interface CalendarBannerViewController : BannerViewController
{
    NSTextField *_eventTitle;
    NSTextField *_eventTime;
    NSButton *_openCalendarButton;
    NSString *_alternateTimeProposal;
}

+ (id)keyPathsForValuesAffectingShouldHideMeetingCancellationOKButton;
+ (id)keyPathsForValuesAffectingShouldHideMeetingRequestButtons;
@property(copy, nonatomic) NSString *alternateTimeProposal; // @synthesize alternateTimeProposal=_alternateTimeProposal;
@property(nonatomic) __weak NSButton *openCalendarButton; // @synthesize openCalendarButton=_openCalendarButton;
@property(nonatomic) __weak NSTextField *eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) __weak NSTextField *eventTitle; // @synthesize eventTitle=_eventTitle;
- (void).cxx_destruct;
- (id)_dateStringForEvent:(id)arg1;
- (id)_titleForEvent:(id)arg1;
- (id)_eventForCurrentMessage;
- (void)openInCalendar:(id)arg1;
- (void)sendMeetingResponse:(id)arg1;
@property(readonly, nonatomic) BOOL shouldHideMeetingCancellationOKButton;
@property(readonly, nonatomic) BOOL shouldHideMeetingRequestButtons;
- (void)updateBannerContents;
- (id)_proposalStringForMessage:(id)arg1 withAttachments:(id)arg2;
- (void)updateWantsDisplay;
- (double)bannerHeight;

@end

