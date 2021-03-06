//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPreviewSectionLayout : NSObject
{
    id <NSTouchBarCustomizationPreviewSectionLayoutDelegate> _delegate;
    long long _section;
    NSArray *_cachedLayoutAttributes;
    struct CGRect _cachedContainmentRect;
    NSString *_identifier;
    NSString *_accessibilityDescription;
}

+ (Class)layoutAttributesClass;
@property(copy) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property struct CGRect cachedContainmentRect; // @synthesize cachedContainmentRect=_cachedContainmentRect;
@property(copy) NSArray *cachedLayoutAttributes; // @synthesize cachedLayoutAttributes=_cachedLayoutAttributes;
@property(readonly) long long section; // @synthesize section=_section;
@property(readonly) id <NSTouchBarCustomizationPreviewSectionLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)canInsertItem:(id)arg1 atIndex:(long long)arg2;
- (id)overlappedIndexesForMovingItemAtIndex:(long long)arg1 toIndex:(long long)arg2 withFrame:(struct CGRect)arg3 primaryLocation:(struct CGPoint)arg4;
- (id)canMoveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 byRemovingItems:(id)arg3;
- (BOOL)canMoveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndex:(long long)arg1;
- (id)layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 section:(long long)arg2;

@end

