//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSTextField, PHXLevelIndicator;

@interface PHXWindowController : NSWindowController
{
    PHXLevelIndicator *_levelIndicator;
    NSTextField *_progressTextField;
}

@property NSTextField *progressTextField; // @synthesize progressTextField=_progressTextField;
@property(nonatomic) PHXLevelIndicator *levelIndicator; // @synthesize levelIndicator=_levelIndicator;
- (id)init;

@end

