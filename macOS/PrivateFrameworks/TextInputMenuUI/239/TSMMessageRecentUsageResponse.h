//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputMenuUI/TSMMessageProtocol-Protocol.h>

@class NSArray;

@interface TSMMessageRecentUsageResponse : NSObject <TSMMessageProtocol>
{
    NSArray *_sortedRecentlyUsedInputSourceUniqueIdentifiers;
}

@property(readonly, nonatomic) NSArray *sortedRecentlyUsedInputSourceUniqueIdentifiers; // @synthesize sortedRecentlyUsedInputSourceUniqueIdentifiers=_sortedRecentlyUsedInputSourceUniqueIdentifiers;
- (void)replyReceiver:(int)arg1 withInfo:(id)arg2;
- (struct __CFData *)copyMessageReceiver:(int)arg1 withInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end

