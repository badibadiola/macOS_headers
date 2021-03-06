//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ChatMessageCall-Protocol.h"
#import "ChatMessageText-Protocol.h"

@class NSArray, NSDate, NSMutableDictionary, NSString;

@interface ChatContentItem : NSObject <ChatMessageCall, ChatMessageText>
{
    NSMutableDictionary *_dictionary;
}

@property(readonly, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
@property unsigned long long postedTextHistoryMask;
@property unsigned long long compoundState;
@property BOOL canShowLargeSmiley;
- (void)setURLPreviewMediaDocuments:(id)arg1;
@property(readonly, nonatomic) NSArray *URLPreviewMediaDocuments;
- (void)setPreviewURLs:(id)arg1;
@property(readonly) NSArray *previewURLs;
- (void)setUrlPreviewMode:(unsigned long long)arg1;
@property(readonly) unsigned long long urlPreviewMode;
- (void)setUrlPreviewsProfilesLoaded:(BOOL)arg1;
@property(readonly) BOOL urlPreviewsProfilesLoaded;
- (void)loadURLPreviewProfiles;
@property(readonly, nonatomic) NSString *localizedCallStatusDescription;
@property(readonly, nonatomic) NSString *localizedCallDurationDescription;
@property unsigned long long callUpsellVisibility;
@property(nonatomic, getter=isMergedCallMessage) BOOL mergedCallMessage;
@property(readonly, nonatomic, getter=isEndedCallMessage) BOOL endedCallMessage;
- (id)conversation;
@property(readonly, nonatomic) BOOL canShowCallUpsell;
@property(readonly, nonatomic) unsigned long long callEndReason;
@property(readonly, getter=isHistorical) BOOL historical;
@property(nonatomic) BOOL shouldShowSendingStatus;
@property(readonly, nonatomic) unsigned long long sendingStatus;
@property(readonly, nonatomic, getter=isUnread) BOOL unread;
@property(readonly, nonatomic, getter=isSystemMessage) BOOL systemMessage;
@property(readonly, nonatomic, getter=isSending) BOOL sending;
@property(readonly, nonatomic, getter=isRemoved) BOOL removed;
@property(readonly, nonatomic, getter=isFailed) BOOL failed;
@property(readonly, nonatomic, getter=isEditedByMe) BOOL editedByMe;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property(readonly, nonatomic) NSString *editorDisplayName;
@property(readonly, nonatomic) NSString *editor;
@property(readonly, nonatomic) id contact;
@property(readonly, nonatomic) NSString *bodyTextToEdit;
@property(readonly, nonatomic) NSString *author;
@property(readonly, nonatomic) NSDate *timestamp;
@property(nonatomic) NSString *bodyTextSansXML;
@property(readonly, nonatomic) NSString *bodyXML;
@property(readonly, nonatomic) NSDate *editedTimestamp;
@property(readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property(readonly, nonatomic) NSString *authorFullName;
@property(readonly, nonatomic) NSString *authorDisplayName;
@property(readonly, nonatomic) NSString *messageTypeDescription;
@property(readonly, nonatomic) unsigned long long messageType;
@property(readonly, nonatomic) NSString *messageIdentifier;
@property(readonly, nonatomic) NSString *conversationIdentifier;
- (unsigned long long)objectID;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

