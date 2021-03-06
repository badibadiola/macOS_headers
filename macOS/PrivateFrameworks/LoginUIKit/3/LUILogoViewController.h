//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUIViewController.h>

@class CALayer, NSWindow;

@interface LUILogoViewController : LUIViewController
{
    CALayer *_appleLogoLayer;
    NSWindow *_grayWindow;
    CALayer *_grayBackgroundLayer;
    CALayer *_grayBackgroundAppleLogoLayer;
    int _layout;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)refresh;
- (struct CGRect)progressRect;
- (void)hideProgressIndicator;
- (void)setLayout:(int)arg1;
- (int)layout;
- (void)_setupGrayWindow:(struct CGRect)arg1;
- (void)_releaseGrayWindow;
- (void)_setupContentView;
- (void)_layoutContentView:(BOOL)arg1;
- (struct CGPoint)_centerPointForLayer:(id)arg1 inFrame:(struct CGRect)arg2;
- (id)_darkGrayAppleLogoLayerInBounds:(struct CGRect)arg1;
- (id)_backgroundLayerWithBounds:(struct CGRect)arg1;

@end

