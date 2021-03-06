//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVAsynchronousKeyValueLoading-Protocol.h>
#import <AVFoundation/NSCopying-Protocol.h>

@class AVAssetCollectionInspector, AVWeakReference, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface AVAssetCollectionInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVWeakReference *_weakReference;
    NSURL *_URL;
    BOOL _loadingCanceled;
    NSObject<OS_dispatch_queue> *loadingQ;
    NSMutableArray *loadingBatches;
    struct OpaqueFigAssetCollection *_optionalFigCollection;
    int _figCollectionCreateErr;
    AVAssetCollectionInspector *_optionalInspector;
    NSObject<OS_dispatch_queue> *completionHandlerQ;
}

- (id)_loadingBatches;
- (id)_loadingQ;
- (id)_completionHandlerQ;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)_mapFigErrorCodeToNSError:(int)arg1;
- (id)_figPropertiesByKey;
- (long long)_loadStatusForProperty:(id)arg1 returningError:(int *)arg2;
- (void)cancelLoading;
- (id)inspector;
- (struct OpaqueFigAssetCollection *)_loadingQOnly_figCollection;
- (struct OpaqueFigAsset *)copyFigAssetWithURL:(id)arg1 options:(id)arg2 figErr:(int *)arg3;
- (struct OpaqueFigAsset *)copyFigAssetAtIndex:(unsigned long long)arg1 options:(id)arg2 figErr:(int *)arg3;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, nonatomic) NSString *type;
- (void)finalize;
- (void)dealloc;
- (void)_cleanUpUncollectables;
- (id)initWithFigCollectionAtURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

