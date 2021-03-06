/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKOverlay>, VKOverlayContainerModel;

@interface VKOverlayPainter : NSObject  {
    <VKOverlay> *_overlay;
    VKOverlayContainerModel *_containerModel;
    float _brightness;
}

@property(readonly) <VKOverlay> * overlay;
@property VKOverlayContainerModel * containerModel;


- (id)containerModel;
- (id)initWithOverlay:(id)arg1;
- (void)drawDebug:(id)arg1 tiles:(id)arg2;
- (void)drawWithContext:(id)arg1 tiles:(id)arg2;
- (void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)setContainerModel:(id)arg1;
- (void)stylesheetDidChange;
- (void)dealloc;
- (id)overlay;

@end
