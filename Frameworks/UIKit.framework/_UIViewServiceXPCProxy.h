/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSObject<OS_dispatch_queue>, _UIQueueRedirectingProxy;

@interface _UIViewServiceXPCProxy : XPCProxy <_UIRemoteProtocolSettingViewServiceXPCProxyTarget> {
    int _connectionPID;
    _UIQueueRedirectingProxy *_queueRedirectingProxy;
    NSObject<OS_dispatch_queue> *_queue;
    int _lock;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)activeFencePort;

- (void)restrictDecodingToWhitelistedClassNames:(id)arg1;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 target:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)invalidate;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)_withRemoteProtocol:(id)arg1 do:(id)arg2;
- (void)forwardInvocation:(id)arg1 withRemoteProtocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1 withRemoteProtocol:(id)arg2;
- (id)proxyWithRemoteProtocol:(id)arg1;
- (int)__automatic_invalidation_logic;

@end