//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface FileAuditorFoundFile : NSObject
{
    NSURL *_URL;
    NSArray *_receipts;
}

+ (id)foundFileWithURL:(id)arg1 receipts:(id)arg2;
+ (id)keyPathsForValuesAffectingPath;
@property(copy, nonatomic) NSArray *receipts; // @synthesize receipts=_receipts;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)addReceipt:(id)arg1;
@property(copy, nonatomic) NSString *path;
- (id)initWithURL:(id)arg1 receipts:(id)arg2;

@end

