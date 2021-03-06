//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNUIIDSAvailabilityProvider;

@interface CNUIIDSContactPropertyResolver : NSObject
{
    CNUIIDSAvailabilityProvider *_idsAvailabilityProvider;
}

+ (id)IDSRelevantPropertiesForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
@property(readonly, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider; // @synthesize idsAvailabilityProvider=_idsAvailabilityProvider;
- (void).cxx_destruct;
- (id)resolveBestIMessageIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2;
- (id)resolveBestFaceTimeIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2;
- (id)resolveBestIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 usingAvailabilityProviderCall:(CDUnknownBlockType)arg3;
- (id)initWithIDSAvailabilityProvider:(id)arg1;

@end

