//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError;

@interface TSRCTrimTimeRangeOperation : NSOperation
{
    BOOL _canSimulateTrimmingProgress;
    float _simulatedProgress;
    BOOL _trimMode;
    CDUnknownBlockType _progressUpdateBlock;
    CDStruct_73a5d3ca _timeRange;
}

@property(copy, nonatomic) CDUnknownBlockType progressUpdateBlock; // @synthesize progressUpdateBlock=_progressUpdateBlock;
@property(readonly, nonatomic) BOOL trimMode; // @synthesize trimMode=_trimMode;
@property(readonly, nonatomic) CDStruct_c3b9c2ee timeRange; // @synthesize timeRange=_timeRange;
- (void).cxx_destruct;
- (void)_postFinalProgressUpdateNotification;
- (float)_progress;
- (void)simulateTrimmingProgress;
- (void)setCanSimulateTrimmingProgress:(BOOL)arg1;
- (void)updateExportSessionProgressWithInterval:(double)arg1;
@property(readonly, nonatomic) BOOL progressShouldContinueUpdating;
@property(readonly, nonatomic) double progress;
- (void)main;
- (void)start;
- (id)initWithTimeRange:(CDStruct_c3b9c2ee)arg1 trimMode:(long long)arg2;

// Remaining properties
@property(readonly, nonatomic) NSError *error; // @dynamic error;
@property(readonly, nonatomic) double exportedDuration; // @dynamic exportedDuration;
@property(readonly, nonatomic) BOOL success; // @dynamic success;

@end

