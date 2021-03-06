//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mondrian/MOPhotosSupplementaryFooter.h>

#import "PXCPLServiceUIDelegate-Protocol.h"

@class NSString, PFCoalescer, PXCPLServiceUI;

@interface IPXPhotosBrowserFooter : MOPhotosSupplementaryFooter <PXCPLServiceUIDelegate>
{
    PFCoalescer *_cplStatusUpdateCoalescer;
    PXCPLServiceUI *_cplServiceUI;
    double _lastHeight;
}

+ (id)attributedString:(id)arg1 actionLink:(id)arg2 attributes:(id)arg3;
@property(nonatomic) double lastHeight; // @synthesize lastHeight=_lastHeight;
@property(retain, nonatomic) PXCPLServiceUI *cplServiceUI; // @synthesize cplServiceUI=_cplServiceUI;
@property(retain, nonatomic) PFCoalescer *cplStatusUpdateCoalescer; // @synthesize cplStatusUpdateCoalescer=_cplStatusUpdateCoalescer;
- (void).cxx_destruct;
- (BOOL)serviceUI:(id)arg1 performAction:(long long)arg2;
- (void)serviceUI:(id)arg1 statusDidChange:(id)arg2;
- (void)prepareForRecycling;
- (void)prepareForReuse;
- (void)viewDidUnhide;
- (void)viewDidMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_requestUpdate;
- (void)_update;
- (void)_manageLocalStorage;
- (void)_manageiCloudStorage;
- (void)_openiCloudPreferencesPanelWithArguments:(id)arg1;
- (void)_showErrorOpeningiCloudSystemPreferences;
- (id)_XMLStringFromDictionary:(id)arg1;
- (void)_showiCPLUploadFailedSmartAlbum;
- (void)_stopMonitoringServicesChanges;
- (void)_startMonitoringServicesChanges;
- (id)_database;
- (id)_library;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

