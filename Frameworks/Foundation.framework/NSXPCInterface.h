/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class Protocol;

@interface NSXPCInterface : NSObject  {
    Protocol *_protocol;
    struct __CFDictionary { } *_methods2;
    id _reserved1;
}

@property Protocol * protocol;

+ (id)interfaceWithProtocol:(id)arg1;
+ (id)signatureForBlock:(id)arg1;
+ (id)mf_mailComposeRemoteHostInterface;
+ (id)mf_mailComposeRemoteServiceInterface;

- (id)init;
- (id)debugDescription;
- (void)finalize;
- (void)dealloc;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;
- (void)setProtocol:(id)arg1;
- (id)_verifiedMethodSignatureForSelector:(SEL)arg1;
- (id)_allowedClassesForSelector:(SEL)arg1 reply:(BOOL)arg2;
- (id)_interfaceForArgument:(unsigned int)arg1 ofSelector:(SEL)arg2 reply:(BOOL)arg3;
- (id)_verifiedMethodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)protocol;

@end
