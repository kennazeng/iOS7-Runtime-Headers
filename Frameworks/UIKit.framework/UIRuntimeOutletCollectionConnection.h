/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection  {
    NSString *runtimeCollectionClassName;
    BOOL addsContentToExistingCollection;
}

@property(copy) NSString * runtimeCollectionClassName;
@property BOOL addsContentToExistingCollection;


- (void)connect;
- (void)dealloc;
- (id)description;
- (void)setAddsContentToExistingCollection:(BOOL)arg1;
- (BOOL)addsContentToExistingCollection;
- (void)setRuntimeCollectionClassName:(id)arg1;
- (void)performConnect;
- (id)runtimeCollectionClassName;
- (void)connectForSimulator;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
