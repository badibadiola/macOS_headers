//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItem, NSDictionary, PXDisplayAssetVideoContentProviderRequest;

@protocol PXDisplayAssetVideoContentProviderRequestDelegate <NSObject>
- (void)request:(PXDisplayAssetVideoContentProviderRequest *)arg1 didFinishWithPlayerItem:(AVPlayerItem *)arg2 info:(NSDictionary *)arg3;
- (void)requestLoadingProgressDidChange:(PXDisplayAssetVideoContentProviderRequest *)arg1;
@end

