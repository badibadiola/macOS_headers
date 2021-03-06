//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LFSessionOwnerListenerInterface-Protocol.h"

@class LFSessionOwnerListener, NSXPCListenerEndpoint;

@interface SessionOwnerCom : NSObject <LFSessionOwnerListenerInterface>
{
    LFSessionOwnerListener *_sessionOwnerListener;
    int _newSessionID;
    NSXPCListenerEndpoint *_originatingSessionEndpoint;
}

+ (id)sharedSessionOwnerCom;
@property(retain) NSXPCListenerEndpoint *originatingSessionEndpoint; // @synthesize originatingSessionEndpoint=_originatingSessionEndpoint;
@property int newSessionID; // @synthesize newSessionID=_newSessionID;
- (void)SOStartSessionWithOptions:(id)arg1 endpoint:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)signalNewSessionReady;
- (void)stopSOServer;
- (void)startSOServer;
- (void)dealloc;

@end

