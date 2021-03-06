//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface SBUtilEx : NSObject
{
}

+ (BOOL)isIPAddress:(id)arg1;
+ (id)safeFilenameWithString:(id)arg1;
+ (id)percentEscapedUrlStr:(id)arg1;
+ (id)stringFromCFNetworkErrorCode:(int)arg1;
+ (id)stringFromSBConnectionErrorCode:(int)arg1;
+ (id)stringFromSBConnectionErrorInformation:(int)arg1 errScope:(id)arg2 errSubCode:(int)arg3;
+ (BOOL)isUrlStr:(id)arg1 sameAsUrlStr:(id)arg2;
+ (BOOL)isUrl:(id)arg1 sameAsUrl:(id)arg2;
+ (id)escapeNewLineAndQuotes:(id)arg1 originalString:(id)arg2;
+ (id)loadScriptString:(id)arg1 Type:(id)arg2;
+ (BOOL)isFullPageDocumentMimeType:(id)arg1;
+ (BOOL)isAVMimeType:(id)arg1;
+ (id)filenameExtensionFromMimeType:(id)arg1;
+ (id)mimeTypeFromFilenameExtension:(id)arg1;
+ (id)mimeTypeFromFilename:(id)arg1;
+ (BOOL)isDocumentMIMEType:(id)arg1;
+ (id)filenameFromContentDispositionHeaderValue:(id)arg1;

@end

