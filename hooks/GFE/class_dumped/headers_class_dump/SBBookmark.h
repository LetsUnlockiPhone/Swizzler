//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSString;

@interface SBBookmark : NSObject
{
    struct ASBBookmarkRecord *_record;
    BOOL isRecordExist;
    BOOL hasParent;
    int type;
    NSString *url;
    NSString *name;
    int internalType;
}

@property(nonatomic) int internalType; // @synthesize internalType;
- (struct ASBBookmarkRecord *)getRecord;
@property(readonly, nonatomic) BOOL hasParent; // @synthesize hasParent;
@property(readonly, nonatomic) BOOL isRecordExist; // @synthesize isRecordExist;
- (unsigned int)recordID;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
@property(readonly, nonatomic) NSString *url; // @synthesize url;
@property(readonly, nonatomic) int type; // @synthesize type;
- (id)initWithRecord:(struct ASBBookmarkRecord *)arg1;
- (id)initWithType:(int)arg1;

@end
