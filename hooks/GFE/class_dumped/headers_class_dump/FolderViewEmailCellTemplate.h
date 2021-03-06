//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface FolderViewEmailCellTemplate : UITableViewCell
{
    UILabel *labelImportance;
    UILabel *labelFromName;
    UILabel *labelSubject;
    UILabel *labelPreviewText;
    UILabel *labelDate;
    UIImageView *messageIcon;
    UIButton *buttonSelectionToggle;
}

@property(retain, nonatomic) UIButton *buttonSelectionToggle; // @synthesize buttonSelectionToggle;
@property(retain, nonatomic) UIImageView *messageIcon; // @synthesize messageIcon;
@property(retain, nonatomic) UILabel *labelDate; // @synthesize labelDate;
@property(retain, nonatomic) UILabel *labelPreviewText; // @synthesize labelPreviewText;
@property(retain, nonatomic) UILabel *labelImportance; // @synthesize labelImportance;
@property(retain, nonatomic) UILabel *labelSubject; // @synthesize labelSubject;
@property(retain, nonatomic) UILabel *labelFromName; // @synthesize labelFromName;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showMessageIcon;
- (void)hideMessageIcon;
- (void)dealloc;

@end

