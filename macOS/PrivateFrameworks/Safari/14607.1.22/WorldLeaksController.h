//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WorldLeaksController : NSObject
{
    BOOL shouldSuppressWorldLeaksDialog;
    int javascriptGlobalObjectWorldLeakCheckExceptions;
}

+ (id)worldLeaksString:(int)arg1;
+ (void)addLeakToArray:(id)arg1 count:(int)arg2 name:(id)arg3;
+ (id)sharedWorldLeaksControllerIfAvailable;
+ (id)_sharedWorldLeaksControllerAllocateIfNeeded:(BOOL)arg1;
+ (id)sharedWorldLeaksController;
- (void)addJavascriptGlobalObjectWorldLeakCheckException;
- (void)setShouldSuppressWorldLeaksDialog:(BOOL)arg1;
- (void)webViewsDidClose;
- (void)checkWorldLeaksSoonIfNeeded;
- (BOOL)_shouldCheckForWorldLeaks;
- (void)dealloc;

@end

