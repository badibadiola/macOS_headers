//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGPlayerDocument;

@interface MGMediaClipPreviewProvider : NSObject
{
    MGPlayerDocument *_document;
}

- (void).cxx_destruct;
- (id)audioPreviewForMediaClip:(id)arg1;
- (id)videoPreviewForMediaClip:(id)arg1;
- (id)playerItemFromMediaClip:(id)arg1 withDuration:(CDStruct_1b6d18a9)arg2 atEnd:(BOOL)arg3;
- (id)initWithDocument:(id)arg1;

@end

