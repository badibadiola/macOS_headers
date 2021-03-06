//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVFullScreenViewController, AVPresentationContainerView, AVPresentationContextTransition, AVPresentationController, UIView, UIViewController, UIWindow;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface AVPresentationContext : NSObject
{
    BOOL _allowsSecondWindowPresentations;
    BOOL _allowsPausingWhenTransitionCompletes;
    UIView *_sourceView;
    UIView *_touchBlockingView;
    UIView *_backgroundView;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIWindow *_rotatableSecondWindow;
    AVFullScreenViewController *_avFullScreenViewController;
    AVPresentationContextTransition *_presentingTransition;
    AVPresentationContextTransition *_dismissingTransition;
    AVPresentationController *_presentationController;
}

+ (BOOL)supportsInteractiveCounterRotationDismissals;
@property(readonly, nonatomic) __weak AVPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(nonatomic) BOOL allowsPausingWhenTransitionCompletes; // @synthesize allowsPausingWhenTransitionCompletes=_allowsPausingWhenTransitionCompletes;
@property(retain, nonatomic) AVPresentationContextTransition *dismissingTransition; // @synthesize dismissingTransition=_dismissingTransition;
@property(retain, nonatomic) AVPresentationContextTransition *presentingTransition; // @synthesize presentingTransition=_presentingTransition;
@property(readonly, nonatomic) __weak AVFullScreenViewController *avFullScreenViewController; // @synthesize avFullScreenViewController=_avFullScreenViewController;
@property(retain, nonatomic) UIWindow *rotatableSecondWindow; // @synthesize rotatableSecondWindow=_rotatableSecondWindow;
@property(nonatomic) BOOL allowsSecondWindowPresentations; // @synthesize allowsSecondWindowPresentations=_allowsSecondWindowPresentations;
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIView *touchBlockingView; // @synthesize touchBlockingView=_touchBlockingView;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (id)dismissalToView;
- (id)presentationFromView;
@property(readonly, nonatomic) BOOL canBeInteractivelyDismissed;
@property(readonly, nonatomic) long long transitionType;
@property(readonly, nonatomic) AVPresentationContextTransition *currentTransition;
@property(readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property(readonly, nonatomic, getter=isDismissing) BOOL dismissing;
@property(readonly, nonatomic) BOOL wasInitiallyInteractive;
@property(readonly, nonatomic) BOOL hasActiveTransition;
@property(readonly, nonatomic) __weak UIViewController *presentedViewController;
@property(readonly, nonatomic) __weak AVPresentationContainerView *presentedView;
@property(readonly, nonatomic) __weak AVFullScreenViewController *rotatableWindowViewController;
@property(readonly, nonatomic) __weak UIWindow *presentationWindow;
- (id)presentingView;
@property(readonly, nonatomic) __weak UIView *containerView;
- (id)initWithPresentationController:(id)arg1;

@end

