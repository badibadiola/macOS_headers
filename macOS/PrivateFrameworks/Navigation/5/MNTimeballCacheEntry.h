//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNJSONOutput-Protocol.h>

@class MNPlannedDestination, MNRouteUpdate, NSDate, NSString;

@interface MNTimeballCacheEntry : NSObject <MNJSONOutput>
{
    MNRouteUpdate *_routeUpdate;
    MNPlannedDestination *_destination;
    NSDate *_lastUpdate;
    NSDate *_nextUpdate;
}

@property(retain, nonatomic) NSDate *nextUpdate; // @synthesize nextUpdate=_nextUpdate;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) MNPlannedDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) MNRouteUpdate *routeUpdate; // @synthesize routeUpdate=_routeUpdate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)jsonDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

