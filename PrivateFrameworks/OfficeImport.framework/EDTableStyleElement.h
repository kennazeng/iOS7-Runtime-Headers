/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDDifferentialStyle;

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {
    EDCollection *mDifferentialStyles;
    int mType;
    unsigned int mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}

+ (id)tableStyleElementWithResources:(id)arg1;

- (void)setDifferentialStyleWithIndex:(unsigned int)arg1;
- (void)setBandSize:(unsigned int)arg1;
- (unsigned int)bandSize;
- (id)differentialStyle;
- (void)setDifferentialStyle:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)setType:(int)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (int)key;

@end
