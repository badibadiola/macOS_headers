//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEvent, NSNumber;

@interface IPXKeyCommand : NSObject
{
    NSNumber *_characterNumber;
    NSEvent *_event;
}

@property(readonly, nonatomic) NSEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (BOOL)hasDeleteCharacterWithModifierFlags:(unsigned long long)arg1;
- (BOOL)hasReturnCharacterWithModifierFlags:(unsigned long long)arg1;
- (BOOL)hasCharacter:(unsigned short)arg1 withModifierFlags:(unsigned long long)arg2;
@property(readonly, nonatomic) NSNumber *characterNumber;
- (id)init;
- (id)initWithEvent:(id)arg1;

@end

