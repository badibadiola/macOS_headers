//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterUI/GKDetailViewController.h>

@class GKDashboardPlayerPhotoView, GKLeaderboard, GKScore, NSButton, NSTextField;

@interface GKDashboardLeaderboardDetailViewController : GKDetailViewController
{
    GKDashboardPlayerPhotoView *_playerView;
    NSTextField *_nameLabel;
    NSTextField *_descriptionLabel;
    NSTextField *_earnedOnLabel;
    NSTextField *_infoLabel;
    NSButton *_firstButton;
    NSButton *_secondButton;
    NSButton *_reportProblemButton;
    GKLeaderboard *_leaderboard;
    GKScore *_score;
}

@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(nonatomic) NSButton *reportProblemButton; // @synthesize reportProblemButton=_reportProblemButton;
@property(nonatomic) NSButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) NSButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) NSTextField *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) NSTextField *earnedOnLabel; // @synthesize earnedOnLabel=_earnedOnLabel;
@property(nonatomic) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
- (void)report:(id)arg1;
- (void)share:(id)arg1;
- (void)challenge:(id)arg1;
- (void)configureForScore;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithScore:(id)arg1 leaderboard:(id)arg2;

@end

