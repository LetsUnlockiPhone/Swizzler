/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UIImageView;

@interface FolderViewEmailSecurityInfo : _ABAddressBookAddRecord
{
    UIImageView *securityIconView;
    UIImageView *flagComplete;
}

+ (id)loadSecurityInfo;
- (void)setFlagComplete:(id)fp8;
- (id)flagComplete;
- (void)setSecurityIconView:(id)fp8;
- (id)securityIconView;
- (void)setSecurityIcon:(id)fp8;
- (void)dealloc;

@end
