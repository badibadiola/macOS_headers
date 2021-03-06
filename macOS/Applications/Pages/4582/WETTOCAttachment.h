//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "WETAttachment.h"

@interface WETTOCAttachment : WETAttachment
{
}

+ (void)generateTOCPageBookmarksFor:(id)arg1 documentState:(id)arg2;
+ (void)mapTOCAttachment:(id)arg1 blockListState:(id)arg2;
+ (id)mapNoPageNumbersSwitchWithSet:(id)arg1;
+ (id)handleHeadingsIn:(id)arg1 nextUnusedLevel:(int *)arg2 indexedStylesByName:(id)arg3 tocSettings:(id)arg4 noPageNums:(id)arg5 documentState:(id)arg6;
+ (void)updateStyleList:(id)arg1 withStyleName:(id)arg2 indexedStylesByName:(id)arg3 tocSettings:(id)arg4 level:(int *)arg5 noPageNums:(id)arg6 documentState:(id)arg7;
+ (id)mapTocStyleAndRelated:(id)arg1 indexedStylesByName:(id)arg2 tocSettings:(id)arg3 level:(int *)arg4 noPageNums:(id)arg5 documentState:(id)arg6;
+ (int)mapTocStyle:(id)arg1 level:(int)arg2 noPageNums:(id)arg3 documentState:(id)arg4;
+ (id)newIndexedStylesByStyleName:(id)arg1 tpTheme:(id)arg2;
+ (id)filterIndexedStyles:(id)arg1;
+ (void)endBookmarkForToNextTocs:(id)arg1;
+ (void)startBookmarkForToNextTocs:(id)arg1 blockListState:(id)arg2;
+ (void)endBookmarkForSectionTocs:(struct _NSRange)arg1 blockListState:(id)arg2;
+ (void)startBookmarkForSectionTocs:(struct _NSRange)arg1 blockListState:(id)arg2;
+ (BOOL)rangeHasSectionTOCs:(struct _NSRange)arg1 documentState:(id)arg2;
+ (id)mapTOCBookmarkRange:(struct _NSRange)arg1 blockListState:(id)arg2;

@end

