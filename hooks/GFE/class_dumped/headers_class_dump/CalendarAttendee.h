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

@interface CalendarAttendee : NSObject
{
    BOOL _distributionList;
    unsigned int _attendeeId;
    NSString *_name;
    NSString *_email;
    int _attendenceType;
    int _response;
    int _availablity;
}

@property(nonatomic) BOOL distributionList; // @synthesize distributionList=_distributionList;
@property(nonatomic) int availablity; // @synthesize availablity=_availablity;
@property(nonatomic) int response; // @synthesize response=_response;
@property(nonatomic) int attendenceType; // @synthesize attendenceType=_attendenceType;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int attendeeId; // @synthesize attendeeId=_attendeeId;
- (void)dealloc;

@end

