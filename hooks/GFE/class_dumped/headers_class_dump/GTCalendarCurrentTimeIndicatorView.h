//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

@class NSDate, NSString;

@interface GTCalendarCurrentTimeIndicatorView : UIView
{
    NSDate *_date;
    NSString *_timeSuffix;
    NSString *_timeText;
}

+ (void)initialize;
+ (id)alloc;
@property(retain, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
@property(retain, nonatomic) NSString *timeSuffix; // @synthesize timeSuffix=_timeSuffix;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;

@end

