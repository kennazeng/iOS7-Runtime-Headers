/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAAceSerializable>;

@interface SAGetDeferredObjectResponse : SABaseClientBoundCommand  {
}

@property(retain) <SAAceSerializable> * object;

+ (id)getDeferredObjectResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getDeferredObjectResponse;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setObject:(id)arg1;
- (id)object;
- (id)groupIdentifier;

@end
