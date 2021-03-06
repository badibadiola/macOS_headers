//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAQuestion, FBAQuestionGroup, FBAQuestionGroupViewController, NSView;

@protocol FBADraftController <NSObject>
- (void)updateStatusForAllQuestions;
- (BOOL)hasPendingOperations;
- (void)canCloseWithCompletionHandler:(void (^)(BOOL))arg1;
- (FBAQuestionGroupViewController *)questionGroupViewControllerForQuestionGroup:(FBAQuestionGroup *)arg1;
- (NSView *)mainView;

@optional
- (void)updateChildControllers;
- (void)updateWindowTitle;
- (BOOL)fileAnswerIsValidForQuestion:(FBAQuestion *)arg1 error:(id *)arg2;
- (void)migrateFilesToNewTempDirectory;
@end

