/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSMutableArray;

@interface SBResourceLoader : _ABAddressBookAddRecord
{
    struct map<SBResourceRequesterToken *, NSURL *, std::less<SBResourceRequesterToken *>, std::allocator<std::pair<SBResourceRequesterToken *const, NSURL *>>> m_asyncTokens;
    struct GxLock m_tokenLock;
    NSMutableArray *_delegates;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)unregisterDelegates;
- (void)unregisterDelegates:(id)fp8;
- (void)registerDelegates:(id)fp8;
- (void)unregisterDelegate:(id)fp8;
- (void)registerDelegate:(id)fp8;
- (void)processGMAEvent:(struct GMAEvent *)fp8 forUrl:(id)fp12 token:(struct SBResourceRequesterToken *)fp16;
- (void)processEmptyResponseForUrl:(id)fp8 withToken:(struct SBResourceRequesterToken *)fp12;
- (void)finalizeResourceLoading:(struct SBResourceDesc *)fp8 hasError:(BOOL)fp12 eor:(BOOL)fp16 startLoadingTime:(unsigned long long)fp20 isUsingCache:(_Bool)fp28;
- (void)processErrorResponseForUrl:(id)fp8 error:(id)fp12;
- (void)processFetchFromCache:(id)fp8 withToken:(struct SBResourceRequesterToken *)fp12;
- (void)processRedirectionNotification:(id)fp8 withToken:(struct SBResourceRequesterToken *)fp12;
- (void)processAuthRequestForUrl:(id)fp8 withToken:(struct SBResourceRequesterToken *)fp12;
- (void)releaseToken:(struct SBResourceRequesterToken *)fp8;
- (void)setToken:(struct SBResourceRequesterToken *)fp8 inErrorType:(id)fp12 error:(id)fp16 url:(id)fp20;
- (id)newUncompressedDataWithToken:(struct SBResourceRequesterToken *)fp8 data:(const struct basic_string<char, std::char_traits<char>, std::allocator<char>> *)fp12 url:(id)fp16 error:(char *)fp20;
- (void)processResourcePartForUrl:(id)fp8 withToken:(struct SBResourceRequesterToken *)fp12;
- (int)foundContentLengthInToken:(struct SBResourceRequesterToken *)fp8;
- (void)onTokenNotificationSelector:(id)fp8;
- (void)onTokenNotification:(id)fp8;
- (struct SBResourceRequesterToken *)newTokenWithCallback:(id)fp8;
- (struct SBIResourceContainerFactory *)resourceContainerFactory;
- (id)obtainThread;
- (int)obtainResourceForResourceDesc:(struct SBResourceDesc *)fp8 token:(struct SBResourceRequesterToken *)fp12;
- (void)abortLoading;
- (void)abortLoadingUrl:(id)fp8;
- (void)startLoadingSelector:(id)fp8 options:(id)fp12;
- (void)startLoading:(id)fp8 options:(id)fp12;
- (void)dealloc;
- (id)init;

@end

