/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, SAUIAppPunchOut, SALocation;

@interface SAGKMapPod : SAGKPodView  {
}

@property(retain) SALocation * location;
@property(retain) SAUIAppPunchOut * punchOut;
@property(copy) NSNumber * showButton;
@property(copy) NSNumber * zoomLevel;

+ (id)mapPodWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapPod;

- (void)setShowButton:(id)arg1;
- (id)showButton;
- (void)setPunchOut:(id)arg1;
- (id)punchOut;
- (id)encodedClassName;
- (void)setZoomLevel:(id)arg1;
- (id)zoomLevel;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)groupIdentifier;

@end
