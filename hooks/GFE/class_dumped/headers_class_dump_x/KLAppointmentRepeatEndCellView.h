/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class AppointmentWrapper;

@interface KLAppointmentRepeatEndCellView : _ABAddressBookAddRecord
{
    AppointmentWrapper *appWrapper;
    AppointmentWrapper *appWrapperTmp;
    AppointmentWrapper *appWrapperTmpLoc;
    int row;
    BOOL highlighted;
}

- (void)setRow:(int)fp8;
- (int)row;
- (void)setAppWrapperTmpLoc:(id)fp8;
- (id)appWrapperTmpLoc;
- (void)setAppWrapperTmp:(id)fp8;
- (id)appWrapperTmp;
- (void)setAppWrapper:(id)fp8;
- (id)appWrapper;
- (BOOL)isHighlighted;
- (void)dealloc;
- (void)drawRect:(struct CGRect)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

