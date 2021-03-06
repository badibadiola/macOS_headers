//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_source;

@interface TSWPFastTypingState : NSObject
{
    unsigned char _flags;
    NSDate *_interimTimeout;
    NSDate *_timeout;
    NSObject<OS_dispatch_source> *_idleDispatchSource;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *idleDispatchSource; // @synthesize idleDispatchSource=_idleDispatchSource;
@property(retain, nonatomic) NSDate *timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSDate *interimTimeout; // @synthesize interimTimeout=_interimTimeout;
@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
- (void).cxx_destruct;

@end

