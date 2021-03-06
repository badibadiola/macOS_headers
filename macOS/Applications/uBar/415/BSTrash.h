//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventListenerProtocol.h"

@class NSMutableArray, SCEvents;

@interface BSTrash : NSObject <SCEventListenerProtocol>
{
    NSMutableArray *volumePaths;
    NSMutableArray *volumeURLs;
    NSMutableArray *volumeItemCounts;
    SCEvents *trashFileMonitor;
    BOOL isEmpty;
    int itemCount;
    id delegate;
}

+ (id)sharedTrash;
@property(readonly) int itemCount; // @synthesize itemCount;
@property(readonly) BOOL isEmpty; // @synthesize isEmpty;
@property __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)pathWatcher:(id)arg1 eventOccurred:(id)arg2;
- (void)workspaceNotificationReceived:(id)arg1;
- (void)emptyTrashSecurely:(BOOL)arg1;
- (BOOL)checkSIPforAppIdentifier:(id)arg1;
- (void)openTrash;
- (void)updateItemCount;
- (void)updateItemCountForVolumePath:(id)arg1;
- (void)updateFileMonitorPaths;
- (void)dealloc;
- (id)init;

@end

