/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKWelcomeViewController : GKViewController <GKBubbleFlowableViewController> {
}


- (BOOL)_shouldAnimateBubblesIn;
- (BOOL)_gkCanBeRemovedFromParentWhenCovered;
- (BOOL)updateBubbleTextImmediatelyForTransitionFromViewController:(id)arg1;
- (double)bubbleFlowAnimateInDuration;
- (void)configureControlForBubble:(id)arg1;
- (struct CGSize { float x1; float x2; })finalSizeForBubbleOfType:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalScreenFrameInViewCoordinatesForBubbleOfType:(int)arg1;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })finalPositionInViewCoordinatesWithZForBubbleOfType:(int)arg1;
- (struct CGPoint { float x1; float x2; })finalPositionInViewCoordinatesForBubbleOfType:(int)arg1;
- (id)animatorForTransitionInZFromVC:(id)arg1;
- (id)animatorForTransitionFromVC:(id)arg1;
- (BOOL)_gkUsesBubbleFlowModalPresentation;
- (double)bubbleFlowAnimateOutDuration;
- (void)viewDidLoad;

@end