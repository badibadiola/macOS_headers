//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSUserNotification.h>

@class NSImage, NSString;

@interface NSUserNotification (NCHelpers)
+ (id)keyPathsForValuesAffectingScaledContentImage;
+ (id)keyPathsForValuesAffectingIdentityImage;
@property(readonly, copy, nonatomic) NSString *ncNotificationExtensionIdentifier;
@property(readonly, copy, nonatomic) NSString *ncAlertExtensionIdentifier;
@property(readonly, nonatomic) NSImage *systemAppImage;
- (void)setAlternateActionIndex:(unsigned long long)arg1;
- (void)clearScaledContentImage;
@property(readonly, nonatomic) NSImage *scaledContentImage;
- (void)clearIdentityImage;
@property(readonly, nonatomic) NSImage *identityImage;
@end

