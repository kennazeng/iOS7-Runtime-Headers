/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIAccelerometerDelegate>;

@interface UIAccelerometer : NSObject  {
    double _updateInterval;
    <UIAccelerometerDelegate> *_delegate;
    struct { 
        unsigned int delegateDidAccelerate : 1; 
        unsigned int reserved : 31; 
    } _accelerometerFlags;
}

@property double updateInterval;
@property <UIAccelerometerDelegate> * delegate;

+ (id)sharedAccelerometer;

- (id)init;
- (void)setUpdateInterval:(double)arg1;
- (double)updateInterval;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;

@end
