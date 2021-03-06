/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class SmimeAlertView, SmimeAlertViewsFactory, SmimeModuleAccessor, SmimeSoftTokenImportInstallCertificateViewController, SoftTokenImportResult, UINavigationController;

@interface SoftTokenImportWorker : _ABAddressBookAddRecord
{
    struct SMIMESoftTokenImportData *softTokenData;
    SmimeModuleAccessor *smimeModuleAccessor;
    SmimeAlertViewsFactory *alertViewsFactory;
    SmimeAlertView *softTokenAlertView;
    id <SoftTokenImportFinishedProtocol> managerCallback;
    SoftTokenImportResult *softTokenImportResultData;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _certPinKey;
    BOOL _certInstallSucceed;
    BOOL _expectingChangePasswordResult;
    SmimeSoftTokenImportInstallCertificateViewController *_certImportVC;
    BOOL invokedFromPreferences;
    BOOL noMoreQueuedTokensToInstall;
    BOOL isSoftTokenImportFinishedHandled;
    UINavigationController *navControllerForSoftTokenImportUsage;
}

- (void)setIsSoftTokenImportFinishedHandled:(BOOL)fp8;
- (BOOL)isSoftTokenImportFinishedHandled;
- (void)setNoMoreQueuedTokensToInstall:(BOOL)fp8;
- (BOOL)noMoreQueuedTokensToInstall;
- (BOOL)certInstallSucceed;
- (void)setNavControllerForSoftTokenImportUsage:(id)fp8;
- (id)navControllerForSoftTokenImportUsage;
- (void)setInvokedFromPreferences:(BOOL)fp8;
- (BOOL)invokedFromPreferences;
- (void)setManagerCallback:(id)fp8;
- (id)managerCallback;
- (void)setSoftTokenData:(struct SMIMESoftTokenImportData *)fp8;
- (struct SMIMESoftTokenImportData *)softTokenData;
- (void)setSmimeModuleAccessor:(id)fp8;
- (id)smimeModuleAccessor;
- (void)setAlertViewsFactory:(id)fp8;
- (id)alertViewsFactory;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeTokenFromQueue;
- (void)dismissSoftTokenAlertView;
- (void)informAboutFailure;
- (void)validateSoftToken:(struct GxSecureString *)fp8 validateCertificate:(_Bool)fp12;
- (void)certMismatchViewButtonClicked:(id)fp8;
- (void)handleLastPINAttemptAlertOKButton;
- (void)handleErrorViewIndexButton:(id)fp8;
- (void)handleSoftTokenInstallState:(BOOL)fp8 installCancelled:(BOOL)fp12;
- (void)handleUserSelectedButtonAction:(id)fp8 pinText:(id)fp12;
- (id)certPin;
- (void)setCertPin:(id)fp8;
- (void)createAndShowSoftTokenInfoAboutCancelAlertView;
- (void)createAndShowSoftTokenCertDetailsAlertView;
- (void)createAndShowSoftTokenImportCertMismatchAlertView;
- (void)createAndShowSoftTokenImportErrorAlertView:(int)fp8;
- (void)createAndShowSoftTokenImportAlertView:(int)fp8;
- (void)processValidationFailureResult:(int)fp8;
- (void)processValidationSuccessResult:(id)fp8 smimePkcsStatus:(int)fp12;
- (void)dealloc;
- (void)finishInstallation:(id)fp8;
- (BOOL)startInstallation;

@end

