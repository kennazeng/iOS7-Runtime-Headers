/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSDocInfo;

@interface NSLeafProxy <NSCopying> {
    Class isa;
    NSString *dir;
    NSString *file;
    NSDocInfo *docInfo;
    int refCount;
    id realObject;
}

+ (void)forwardInvocation:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (/* Warning: Unrecognized filer type: '' using 'void*' */ void*)initialize;
     /* Encoded args for previous method:  */


- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)copy;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)reallyDealloc;
- (id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3;
- (BOOL)isProxy;

@end
