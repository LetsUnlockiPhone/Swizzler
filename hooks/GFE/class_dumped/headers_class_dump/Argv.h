//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface Argv : NSObject
{
    int _argc;
    int _addIndex;
    char **_argv;
}

+ (id)newArgvWithCommandLine:(id)arg1;
@property(readonly, nonatomic) char **argv; // @synthesize argv=_argv;
@property(readonly, nonatomic) int argc; // @synthesize argc=_argc;
- (void)dealloc;
- (void)setMembersOnError;
- (BOOL)add:(id)arg1;
- (id)initWithArgc:(int)arg1;

@end
