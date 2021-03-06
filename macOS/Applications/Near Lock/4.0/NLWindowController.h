//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class MyButton;
@protocol NLWindowControllerDelegate;

@interface NLWindowController : NSWindowController
{
    BOOL _windowIsShown;
    id <NLWindowControllerDelegate> _windowDelegate;
    MyButton *_closeButton;
}

@property(retain, nonatomic) MyButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) BOOL windowIsShown; // @synthesize windowIsShown=_windowIsShown;
@property(nonatomic) __weak id <NLWindowControllerDelegate> windowDelegate; // @synthesize windowDelegate=_windowDelegate;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)setBackgroundImage:(id)arg1 toView:(id)arg2;
- (void)setBackgroundImage:(id)arg1;
- (void)centerFrame;
- (void)showWindowInFront;
- (void)showWindow;
- (void)windowDidLoad;
- (void)initialize;
- (void)closeWindow;
- (void)closeButtonPressed;
- (void)createCloseButton;
- (id)mainView;
- (void)bringCloseButtonToFront;
- (void)showCloseButton:(BOOL)arg1;
- (id)nibName;
- (id)init;

@end

