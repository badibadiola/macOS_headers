//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SpecialItemFactory : NSObject
{
}

+ (id)factorySmallerItemsGroupItemWithParentDirectory:(id)arg1 smallerItems:(id)arg2;
+ (id)factorySpecialItemByType:(unsigned char)arg1;
+ (id)factorySnapshotsItem;
+ (id)factoryUnknownSpaceItem;
+ (id)factoryReservedSpaceItem;
+ (id)factoryPurgeableSpaceItem;
+ (id)factoryHiddenSpaceItem;
+ (id)factoryAvailableSpaceItem;
+ (id)factoryFreeSpaceItem;
+ (void)setDefaultTextColor:(id)arg1;

@end

