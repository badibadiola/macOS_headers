//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject
{
    NSMutableDictionary *_fontFamilyToProgress;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)downloadFont:(id)arg1;
- (double)downloadProgressForFont:(id)arg1;
- (BOOL)hasOngoingRequestForFont:(id)arg1;
- (id)init;

@end

