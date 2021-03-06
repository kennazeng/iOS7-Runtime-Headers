/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSArray;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable> {
}

@property(copy) NSString * description;
@property(copy) NSArray * metadata;
@property(copy) NSNumber * selected;

+ (id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)metadataGroup;

- (id)encodedClassName;
- (void)setDescription:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)description;
- (id)selected;
- (void)setSelected:(id)arg1;
- (id)groupIdentifier;

@end
