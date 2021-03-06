//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAXTextBody : NSObject
{
}

+ (id)stringWithTextAnchorType:(unsigned char)arg1;
+ (id)stringWithTextBodyWrapType:(unsigned char)arg1;
+ (id)stringWithTextBodyFlowType:(unsigned char)arg1;
+ (id)stringWithTextBodyHorizontalOverflowType:(unsigned char)arg1;
+ (id)stringWithTextBodyVerticalOverflowType:(unsigned char)arg1;
+ (void)writeTextBodyProperties:(id)arg1 withPrefix:(id)arg2 to:(id)arg3;
+ (void)writeTextBodyParagraphs:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)writeTextBodyContent:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)writeTextBody:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (unsigned char)readHorizontalOverflowType:(id)arg1;
+ (unsigned char)readAnchorType:(id)arg1;
+ (unsigned char)readFlowType:(id)arg1;
+ (void)readTextBodyProperties:(struct _xmlNode *)arg1 textBodyProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readTextBodyFromXmlNode:(struct _xmlNode *)arg1 textBody:(id)arg2 drawingState:(id)arg3;
+ (void)writeTextBodyAutoFit:(id)arg1 to:(id)arg2;
+ (void)readHorizontalOverflowType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readVerticalOverflowType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readWrapType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readFlowType:(id)arg1 textBodyProperties:(id)arg2;

@end

