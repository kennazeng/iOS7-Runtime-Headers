/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSURL, NSManagedObjectContext, NSManagedObject;

@interface RadioAudioClip : RadioTrack <RadioManagedObjectWrapperProtocol> {
    BOOL _isSkipable;
}

@property(copy) NSURL * assetURL;
@property long long purchaseID;
@property(readonly) BOOL isSkipable;
@property BOOL isSkippable;
@property(readonly) NSManagedObject * managedObject;
@property(readonly) NSManagedObjectContext * context;


- (long long)purchaseID;
- (BOOL)isSkippable;
- (id)assetURL;
- (void)setIsSkippable:(BOOL)arg1;
- (void)setPurchaseID:(long long)arg1;
- (void)setAssetURL:(id)arg1;
- (BOOL)isSkipable;

@end