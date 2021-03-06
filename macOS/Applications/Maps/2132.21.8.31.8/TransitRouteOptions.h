//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GEOTransitOptions, RoutePlanningTiming;

__attribute__((visibility("hidden")))
@interface TransitRouteOptions : NSObject <NSCopying>
{
    BOOL _hasSurchargeOption;
    BOOL _showICFares;
    int _sortOption;
    int _surchargeOption;
    RoutePlanningTiming *_timing;
    long long _disabledModes;
}

+ (id)footerTextForICFares;
+ (id)cellTextForICFares;
+ (id)footerTextForDisabledModes;
+ (id)headerTextForDisabledModes;
+ (BOOL)isModeDisabled:(long long)arg1 inModes:(long long)arg2;
+ (long long)disabledModesByTogglingMode:(long long)arg1 inModes:(long long)arg2;
+ (long long)enabledModesFromDisabled:(long long)arg1;
+ (id)defaultRouteOptions;
@property(nonatomic) BOOL showICFares; // @synthesize showICFares=_showICFares;
@property(nonatomic) int surchargeOption; // @synthesize surchargeOption=_surchargeOption;
@property(readonly, nonatomic) BOOL hasSurchargeOption; // @synthesize hasSurchargeOption=_hasSurchargeOption;
@property(nonatomic) int sortOption; // @synthesize sortOption=_sortOption;
@property(nonatomic) long long disabledModes; // @synthesize disabledModes=_disabledModes;
@property(retain, nonatomic) RoutePlanningTiming *timing; // @synthesize timing=_timing;
- (void).cxx_destruct;
- (void)toggleModeEnabled:(long long)arg1;
- (BOOL)isModeDisabled:(long long)arg1;
@property(readonly, nonatomic) GEOTransitOptions *geoTransitOptions;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTransitRouteOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTiming:(id)arg1 disabledModes:(long long)arg2 sortOption:(int)arg3 hasSurchargeOption:(BOOL)arg4 surchargeOption:(int)arg5 showICFares:(BOOL)arg6;

@end

