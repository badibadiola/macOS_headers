//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ITNSWindow.h"

@interface ITNSPopoverWindow : ITNSWindow
{
    weak_ptr_b631f5cc _parentView;
    shared_ptr_c47a0a18 _maskImage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)shadowOptions;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilitySubrole;
- (id)accessibilityRole;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (shared_ptr_e4fdc9b2)popover;
- (void)setCornerMaskImage:(shared_ptr_c47a0a18)arg1;
@property(nonatomic) shared_ptr_d213862f parentView;
- (id)_cornerMask;
- (float)_backdropBleedAmount;
- (void)dealloc;

@end

