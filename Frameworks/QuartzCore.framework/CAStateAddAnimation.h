/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSString, CAAnimation;

@interface CAStateAddAnimation : CAStateElement  {
    NSString *_key;
    CAAnimation *_animation;
}

@property(copy) NSString * key;
@property(retain) CAAnimation * animation;


- (id)animation;
- (void)apply:(id)arg1;
- (void)setAnimation:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)matches:(id)arg1;
- (void)setKey:(id)arg1;
- (id)keyPath;
- (id)key;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
