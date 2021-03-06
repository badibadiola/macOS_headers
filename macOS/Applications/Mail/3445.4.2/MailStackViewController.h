//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "StackDataSource-Protocol.h"
#import "StackDelegate-Protocol.h"

@class CALayer, NSArray, NSImage, NSMutableDictionary, NSMutableSet, NSString, NSView, StackController, _StackContainerView;

@interface MailStackViewController : NSObject <StackDataSource, StackDelegate>
{
    NSMutableDictionary *_messageViewControllers;
    NSMutableDictionary *_messageLayers;
    NSMutableSet *_snapshotWindows;
    BOOL _initialLoadCompleted;
    BOOL _performingAsynchronousAnimation;
    NSArray *_messagesOrConversations;
    NSImage *_topLayerSnapshot;
    NSView *_containerView;
    _StackContainerView *_stackContainerView;
    CALayer *_stackContainerLayer;
    StackController *_stackController;
}

@property(retain, nonatomic) StackController *stackController; // @synthesize stackController=_stackController;
@property(retain, nonatomic) CALayer *stackContainerLayer; // @synthesize stackContainerLayer=_stackContainerLayer;
@property(retain, nonatomic) _StackContainerView *stackContainerView; // @synthesize stackContainerView=_stackContainerView;
@property(readonly, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSImage *topLayerSnapshot; // @synthesize topLayerSnapshot=_topLayerSnapshot;
@property(nonatomic) BOOL performingAsynchronousAnimation; // @synthesize performingAsynchronousAnimation=_performingAsynchronousAnimation;
@property(retain, nonatomic) NSArray *messagesOrConversations; // @synthesize messagesOrConversations=_messagesOrConversations;
@property(nonatomic) BOOL initialLoadCompleted; // @synthesize initialLoadCompleted=_initialLoadCompleted;
- (void).cxx_destruct;
- (void)stackController:(id)arg1 willRemoveLayerForItem:(id)arg2;
- (void)stackController:(id)arg1 willDisplayLayer:(id)arg2 forItem:(id)arg3;
- (void)stackController:(id)arg1 willStackLayer:(id)arg2 forItem:(id)arg3;
- (void)stackControllerDidStopStackingLayers:(id)arg1;
- (void)stackControllerWillStartStackingLayers:(id)arg1;
- (void)stackController:(id)arg1 loadDataForItem:(id)arg2 inLayer:(id)arg3;
- (BOOL)stackController:(id)arg1 isDataLoadedForItem:(id)arg2 inLayer:(id)arg3;
- (id)stackController:(id)arg1 layerForItem:(id)arg2;
- (id)stackContainerLayerForStackController:(id)arg1;
- (id)_messageOrConversationListFromSelection:(id)arg1;
- (void)updateDisplayForSelection:(id)arg1;
- (id)_stackControllerCreateIfNeeded:(BOOL)arg1;
- (void)_abortAnimations;
- (void)mui_prepareToLayoutSynchronously:(CDUnknownBlockType)arg1;
- (void)mui_performAnimation;
- (void)mui_prepareToAnimate:(CDUnknownBlockType)arg1;
- (void)_viewDidEndLiveResize:(id)arg1;
- (void)_viewFrameDidChange:(id)arg1;
- (void)_resizeMessageViewWithID:(id)arg1 toSize:(struct CGSize)arg2 animating:(BOOL)arg3;
- (void)_messageViewControllerDidFinishLoading:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_takeSnapshotOfMessageViewForController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeMessageViewForItem:(id)arg1;
- (void)_createMessageViewForItem:(id)arg1;
- (void)_detachMessageViewFromIndividualWindow:(id)arg1;
- (void)_attachMessageViewToIndividualWindow:(id)arg1;
- (void)setStackVisible:(BOOL)arg1 animates:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

