//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

@protocol SmimePinManagerProtocol
- (void)cancelSelectedInCACPINLoginScreen;
- (void)showCACPINExpiredAlertView;
- (void)showCACPINLockedAlertView;
- (void)showConnectionErrorAlertView;
- (void)showCACInvalidPinAlertView;
- (void)passwordVerifyFailed;
- (void)passwordVerified;
- (void)showIncorrectPinAlertView:(int)arg1;
- (void)showPinAlertView:(int)arg1;
@end

