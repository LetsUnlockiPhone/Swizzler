/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSData, NSDate, NSString;

@interface AppStorePolicy : _ABAddressBookAddRecord
{
    NSString *name;
    NSString *guid;
    NSData *accessToken;
    NSString *metaUrl;
    NSString *url;
    NSString *fileName;
    NSData *icon;
    NSString *company;
    NSString *description;
    NSString *version;
    NSDate *date;
    NSString *appleUrl;
    int type;
    unsigned long size;
    unsigned long recordId;
    BOOL hasMeta;
    BOOL removed;
    BOOL needUpdate;
}

+ (id)dataWithCString:(const char *)fp8;
+ (id)stringWithUTF8String:(const char *)fp8;
+ (id)requestMetaData:(id)fp8;
+ (id)policyWithDb:(struct AppPolicyDatabase *)fp8 record:(unsigned long)fp12;
- (void)setNeedUpdate:(BOOL)fp8;
- (BOOL)needUpdate;
- (void)setRemoved:(BOOL)fp8;
- (BOOL)removed;
- (void)setHasMeta:(BOOL)fp8;
- (BOOL)hasMeta;
- (void)setRecordId:(unsigned long)fp8;
- (unsigned long)recordId;
- (void)setSize:(unsigned long)fp8;
- (unsigned long)size;
- (void)setType:(int)fp8;
- (int)type;
- (void)setAppleUrl:(id)fp8;
- (id)appleUrl;
- (void)setDate:(id)fp8;
- (id)date;
- (void)setVersion:(id)fp8;
- (id)version;
- (void)setDescription:(id)fp8;
- (id)description;
- (void)setCompany:(id)fp8;
- (id)company;
- (void)setFileName:(id)fp8;
- (id)fileName;
- (void)setUrl:(id)fp8;
- (id)url;
- (void)setMetaUrl:(id)fp8;
- (id)metaUrl;
- (void)setAccessToken:(id)fp8;
- (id)accessToken;
- (void)setGuid:(id)fp8;
- (id)guid;
- (void)setName:(id)fp8;
- (id)name;
- (void)updateMeta;
- (int)compareByName:(id)fp8;
- (void)setMetaData:(id)fp8;
- (id)iconFilePath;
- (void)removeIcon;
- (void)saveIcon;
- (void)loadIcon;
- (void)setIcon:(id)fp8;
- (id)icon;
- (id)fullUrl;
- (id)fullMetaUrl;
- (void)dealloc;
- (id)init;

@end

