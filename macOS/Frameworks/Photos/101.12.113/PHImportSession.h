//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSString;

@interface PHImportSession : PHAssetCollection
{
    NSString *_importSessionID;
}

+ (id)fetchImportSessionsWithOptions:(id)arg1;
+ (id)identifierCode;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyMap;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
@property(readonly, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
- (void).cxx_destruct;
- (id)description;
- (id)localizedTitle;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

