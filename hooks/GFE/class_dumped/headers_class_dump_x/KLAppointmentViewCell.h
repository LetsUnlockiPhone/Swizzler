/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class KLAppointmentViewCellView, UIViewController;

@interface KLAppointmentViewCell : _ABAddressBookAddRecord
{
    int cellType;
    KLAppointmentViewCellView *appView;
    UIViewController *controller;
    BOOL showDetails;
}

- (void)setShowDetails:(BOOL)fp8;
- (BOOL)showDetails;
- (void)setController:(id)fp8;
- (id)controller;
- (void)setAppView:(id)fp8;
- (id)appView;
- (void)setCellType:(int)fp8;
- (int)cellType;
- (void)dealloc;
- (void)setAppWrapper:(id)fp8;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)createAppointmentViewCellView;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
