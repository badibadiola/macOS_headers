//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSMutableArray, NSString;

@interface GEONetworkDefaults : NSObject
{
    NSMutableArray *_completionHandlers;
    BOOL _isRegistering;
    NSDictionary *_networkDefaults;
    NSLock *_networkDefaultsLock;
    NSString *_cacheFilePath;
    int _configChangedToken;
}

+ (id)sharedNetworkDefaults;
+ (void)setRunningInDaemon:(BOOL)arg1;
- (void)registerNetworkDefaults:(CDUnknownBlockType)arg1;
- (id)valueForKey:(id)arg1;
- (BOOL)needsUpdate;
- (void)refreshNetworkDefaults;
- (void)dealloc;
- (id)init;
- (void)_registrationComplete;

@end

