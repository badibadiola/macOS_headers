//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AXPrototypeParent.h"

@class NSString;

@protocol AXTheme <AXPrototypeParent>
- (void)axSetThemeDescription:(NSString *)arg1;
- (NSString *)axGetThemeDescription;
- (void)axSetSlideSize:(struct CGSize)arg1;
- (struct CGSize)axGetSlideSize;
- (void)axSetChanged:(BOOL)arg1;
- (BOOL)axIsChanged;
- (id <AXMasterSlide>)axNewMasterSlide;
- (id <AXMasterSlide>)axGetMasterSlide:(unsigned int)arg1;
- (unsigned int)axGetMasterSlideCount;
@end

