//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookCore/ABMetadataOperation.h>

@class NSArray;

@interface ABMetadataMarkViewedOperation : ABMetadataOperation
{
    NSArray *_uniqueIds;
    BOOL _oneShot;
}

- (void).cxx_destruct;
- (void)main;
- (void)_markViewedForPeople:(id)arg1;
- (void)markOneShot;
- (int)metadataJobType;
- (id)initWithMetadataManager:(id)arg1 recordUniqueIds:(id)arg2;

@end

