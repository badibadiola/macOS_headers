//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString;

@protocol TITextCheckerSupport <NSObject>
- (void)appendWordToTextCheckerLocalDictionary:(NSString *)arg1;
- (void)requestTextCheckerLocalDictionaryWithCompletionHandler:(void (^)(NSData *))arg1;
- (void)string:(NSString *)arg1 isExemptFromTextCheckerWithCompletionHandler:(void (^)(BOOL))arg2;
@end

