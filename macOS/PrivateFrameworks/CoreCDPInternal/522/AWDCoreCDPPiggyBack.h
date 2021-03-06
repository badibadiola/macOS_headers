//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDCoreCDPPiggyBack : PBCodable <NSCopying>
{
    long long _errorCode;
    unsigned long long _timestamp;
    NSString *_errorDomain;
    BOOL _success;
    struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int success:1;
    } _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL hasTimestamp;

@end

