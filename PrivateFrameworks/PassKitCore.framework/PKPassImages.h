/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSURL;

@interface PKPassImages : NSObject <NSSecureCoding> {
    unsigned int _version;
    NSURL *_originCacheURL;
}

@property(copy) NSURL * originCacheURL;

+ (id)imageSet:(int)arg1 withCacheURL:(id)arg2 cardURL:(id)arg3 displayProfile:(id)arg4;
+ (id)archiveName;
+ (id)_archiveURL:(id)arg1;
+ (id)_archivedImages:(id)arg1;
+ (int)imageSet;
+ (Class)classForImageSet:(int)arg1;
+ (int)currentVersion;
+ (BOOL)supportsSecureCoding;

- (id)originCacheURL;
- (void)saveCache:(id)arg1;
- (void)setOriginCacheURL:(id)arg1;
- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;
- (void)preheatImages;
- (void)dealloc;
- (int)version;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
