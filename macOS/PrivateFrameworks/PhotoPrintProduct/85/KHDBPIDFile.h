//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KHDBPIDFile : NSObject
{
    NSString *_path;
    BOOL _locked;
    NSString *_lockedBy;
    int _lockedByPid;
}

- (int)lockedByPid;
- (id)lockedBy;
- (void)removeLock;
- (int)acquireLock;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

