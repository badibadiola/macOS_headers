//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@interface SHKShareWindow : NSPanel
{
    BOOL _isClosing;
}

@property BOOL isClosing; // @synthesize isClosing=_isClosing;
- (void)_close;
- (void)displayIfNeeded;
- (void)display;
- (BOOL)hidesOnDeactivate;
- (BOOL)isMovableByWindowBackground;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;

@end

