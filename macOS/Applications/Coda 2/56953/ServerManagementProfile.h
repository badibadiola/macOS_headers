//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TCMBEEPBencodingProfile.h"

__attribute__((visibility("hidden")))
@interface ServerManagementProfile : TCMBEEPBencodingProfile
{
    BOOL _didSendFILLST;
}

+ (void)initialize;
- (void)acceptUPDACK:(id)arg1;
- (void)replyToFILUPD:(id)arg1;
- (void)sendFileUpdates:(id)arg1;
- (void)acceptSETACKFAI:(id)arg1;
- (void)replyToATTSET:(id)arg1;
- (void)changeAttributes:(id)arg1 forFileWithID:(id)arg2;
- (void)acceptFILACK:(id)arg1;
- (void)replyToFILNEW:(id)arg1;
- (void)requestNewFileWithAttributes:(id)arg1;
- (void)acceptFILLST:(id)arg1;
- (void)replyToFILLST:(id)arg1;
- (void)askForFileList;
- (BOOL)didSendFILLST;
- (id)initWithChannel:(id)arg1;

@end

