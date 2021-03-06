//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSCopying.h"

@class CKContainerID, CKOperationConfiguration, NSString;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying>
{
    BOOL _manateeContainer;
    CKContainerID *_containerID;
    NSString *_pushTopic;
    CKOperationConfiguration *_defaultOperationConfiguration;
}

@property(copy) CKOperationConfiguration *defaultOperationConfiguration; // @synthesize defaultOperationConfiguration=_defaultOperationConfiguration;
@property(getter=isManateeContainer) BOOL manateeContainer; // @synthesize manateeContainer=_manateeContainer;
@property(copy) NSString *pushTopic; // @synthesize pushTopic=_pushTopic;
@property(readonly, copy) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;
- (id)initWithContainerID:(id)arg1;

@end

