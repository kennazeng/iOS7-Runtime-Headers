/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class SBDeviceLockViewWithKeyboard;

@interface SBDeviceLockKeyboard : UIKeyboard  {
    SBDeviceLockViewWithKeyboard *_deviceLockView;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 deviceLockView:(id)arg2;
- (BOOL)isActive;
- (void)maximize;
- (void)minimize;
- (BOOL)canDismiss;
- (BOOL)shouldSaveMinimizationState;

@end
