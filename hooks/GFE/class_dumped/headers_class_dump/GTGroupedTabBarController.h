//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, UIImageView, UILabel, UIScrollView, UIToolbar, UIView;

@interface GTGroupedTabBarController : UIViewController <UIScrollViewDelegate>
{
    UIScrollView *_tabView;
    UIView *_contentView;
    UIView *_selectedViewContainer;
    UIImageView *_selectedLargeImage;
    UILabel *_selectedLabel;
    UIViewController *_selectedViewController;
    unsigned int _selectedIndex;
    NSArray *_viewControllers;
    id <UITabBarControllerDelegate> _delegate;
    UIToolbar *_toolbar;
    BOOL _appeared;
    BOOL _hidden;
    UIImageView *tabBackgroundView;
}

@property(nonatomic) BOOL appeared; // @synthesize appeared=_appeared;
@property id <UITabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *tabBackgroundView; // @synthesize tabBackgroundView;
@property(retain, nonatomic) UIScrollView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UIView *selectedViewContainer; // @synthesize selectedViewContainer=_selectedViewContainer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)alignSelectedIndexContainer_old:(float)arg1 tabWidth:(float)arg2 tabsPerScreen:(unsigned int)arg3 tabPadding:(float)arg4 marginPadding:(float)arg5;
- (void)adjustTabs_old;
- (void)createTabs_old;
- (id)selectedButtonFromViewController:(id)arg1;
@property(nonatomic) BOOL barHidden;
@property(readonly, nonatomic) UIView *tabBar;
- (void)runSelectedActionBlock;
- (void)handleSingleTap:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)toolbarHidden;
- (void)setToolbar:(id)arg1;
- (unsigned int)selectedIndex;
- (void)alignSelectedIndexContainer:(float)arg1 tabWidth:(float)arg2 tabsPerScreen:(unsigned int)arg3 tabPadding:(float)arg4 marginPadding:(float)arg5;
- (void)alignSelectedIndexContainer;
- (void)scrollToSelectedTab;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)showSelectedView;
- (void)didSelectViewController:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (id)selectedViewController;
- (void)setSelectedViewController:(id)arg1;
- (void)selectViewControllerButtonAction:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)adjustTabs;
- (void)createTabs;
- (void)layoutTabs;
- (unsigned int)tabsPerScreen;
- (void)viewDidLoad;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)viewControllers;
- (void)updateBackgroundForOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)init;

@end

