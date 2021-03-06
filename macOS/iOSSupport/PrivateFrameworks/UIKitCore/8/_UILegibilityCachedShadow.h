//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, _UILegibilitySettings;

__attribute__((visibility("hidden")))
@interface _UILegibilityCachedShadow : NSObject
{
    _UILegibilitySettings *_settings;
    double _strength;
    UIImage *_shadow;
}

@property(retain, nonatomic) UIImage *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) _UILegibilitySettings *settings; // @synthesize settings=_settings;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesSettings:(id)arg1 strength:(double)arg2;
- (void)dealloc;

@end

