//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKEvent.h>

#import "FRPersonalizationExternalSignal-Protocol.h"

@class NSDate, NSString;

@interface _DKEvent (FRPersonalizationExternalSignalType) <FRPersonalizationExternalSignal>
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) NSString *content;
@property(readonly, nonatomic) long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

