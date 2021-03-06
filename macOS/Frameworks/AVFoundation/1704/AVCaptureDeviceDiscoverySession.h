//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDeviceDiscoverySessionInternal, NSArray;

@interface AVCaptureDeviceDiscoverySession : NSObject
{
    AVCaptureDeviceDiscoverySessionInternal *_internal;
}

+ (id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 allowIOSMacEnvironment:(BOOL)arg4;
+ (id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;
- (id)description;
@property(readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;
@property(readonly, nonatomic) NSArray *devices;
- (void)dealloc;
- (id)init;
- (id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 allowIOSMacEnvironment:(BOOL)arg4;

@end

