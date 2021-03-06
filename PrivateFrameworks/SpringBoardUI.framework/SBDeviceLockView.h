/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class SBDeviceLockEntryField, UIView, NSString, SBDeviceLockTitle;

@interface SBDeviceLockView : UIView  {
    int _style;
    int _interfaceOrientation;
    SBDeviceLockTitle *_statusView;
    SBDeviceLockEntryField *_entryView;
    id _delegate;
}

@property(readonly) UIView * statusView;
@property(readonly) UIView * entryView;
@property(readonly) UIView * keypadView;
@property(readonly) int style;
@property int interfaceOrientation;
@property(retain) NSString * statusTitle;
@property(retain) NSString * statusSubtitle;
@property(getter=isShowingStatusWarning) BOOL showingStatusWarning;
@property(retain) NSString * passcode;
@property(getter=isShowingEntryStatusWarning) BOOL showingEntryStatusWarning;
@property BOOL playsKeyboardClicks;
@property BOOL showsEmergencyCallButton;
@property(getter=isKeypadMinimized,readonly) BOOL keypadMinimized;
@property id delegate;

+ (int)defaultStyle;
+ (id)newWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3;
+ (int)defaultStyleForSiri;
+ (double)deviceLockAnimationDuration;
+ (int)defaultStyleForSiri:(BOOL)arg1;

- (void)setStatusSubtitle:(id)arg1;
- (id)statusSubtitle;
- (void)setStatusTitle:(id)arg1;
- (id)statusTitle;
- (BOOL)showsEmergencyCallButton;
- (id)passcode;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setShowingEntryStatusWarning:(BOOL)arg1;
- (BOOL)isShowingEntryStatusWarning;
- (void)blinkStatusView;
- (void)setShowingStatusWarning:(BOOL)arg1;
- (BOOL)isShowingStatusWarning;
- (id)entryView;
- (void)deviceLockEntryFieldDidCancelEntry:(id)arg1;
- (BOOL)deviceLockEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)didAnimateToInterfaceOrientation:(int)arg1;
- (void)willAnimateToInterfaceOrientation:(int)arg1;
- (void)animateToInterfaceInterfaceOrientation:(int)arg1;
- (BOOL)isKeypadMinimized;
- (id)keypadView;
- (void)notifyDelegateThatPasscodeWasEntered;
- (void)notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)notifyDelegateThatCancelButtonWasPressed;
- (void)notifyDelegateThatPasscodeDidChange;
- (void)deviceLockEntryFieldDidAcceptEntry:(id)arg1;
- (void)deviceLockEntryFieldTextDidChange:(id)arg1;
- (void)setPasscode:(id)arg1;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3;
- (BOOL)playsKeyboardClicks;
- (void)setPlaysKeyboardClicks:(BOOL)arg1;
- (id)statusView;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (int)style;
- (int)interfaceOrientation;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setInterfaceOrientation:(int)arg1;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)setUserInteractionEnabled:(BOOL)arg1;

@end
