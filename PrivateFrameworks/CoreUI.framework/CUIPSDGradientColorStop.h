/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {
    struct _psdGradientColor { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    } gradientColor;
}

+ (id)colorStopWithLocation:(float)arg1 gradientColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg2;
+ (void)initialize;

- (id)initWithLocation:(float)arg1 gradientColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg2;
- (struct _psdGradientColor { double x1; double x2; double x3; double x4; })gradientColor;
- (float)colorLocation;
- (BOOL)isColorStop;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
