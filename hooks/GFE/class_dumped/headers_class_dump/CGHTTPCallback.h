//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSThread;

@interface CGHTTPCallback : NSObject
{
    NSObject *instance;
    NSThread *thread;
    SEL selector;
    NSObject *param;
}

+ (void)releaseHeldInstance:(id)arg1;
@property(retain, nonatomic) NSObject *param; // @synthesize param;
@property(nonatomic) SEL selector; // @synthesize selector;
@property(nonatomic) NSThread *thread; // @synthesize thread;
@property(nonatomic) NSObject *instance; // @synthesize instance;
- (void)dealloc;
- (void)execute;
- (void)executeWithParam:(id)arg1;
- (id)initWithInstance:(id)arg1 thread:(id)arg2 selector:(SEL)arg3 param:(id)arg4;

@end

