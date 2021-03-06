/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class UIButton, UILabel, UIView, NSMutableArray;

@interface SLMicroBlogActiveAccountView : UIView  {
    NSMutableArray *_constraints;
    UIView *_grayPerforationView;
    UILabel *_fromLabel;
    UIButton *_activeAccountButton;
}

@property(retain) UILabel * fromLabel;
@property(retain) UIButton * activeAccountButton;


- (void)setActiveAccountButton:(id)arg1;
- (void)setFromLabel:(id)arg1;
- (id)fromLabel;
- (id)activeAccountButton;
- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
