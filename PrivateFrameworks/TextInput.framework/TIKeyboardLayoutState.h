/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {
    BOOL _hasCandidateKey;
    BOOL _hasAccentKey;
    BOOL _canMultitap;
    BOOL _isAlphabeticPlane;
    BOOL _interfaceIdiomIsPad;
    NSString *_inputMode;
}

@property(copy) NSString * inputMode;
@property BOOL hasCandidateKey;
@property BOOL hasAccentKey;
@property BOOL canMultitap;
@property BOOL isAlphabeticPlane;
@property BOOL interfaceIdiomIsPad;

+ (BOOL)supportsSecureCoding;

- (BOOL)interfaceIdiomIsPad;
- (BOOL)isAlphabeticPlane;
- (BOOL)canMultitap;
- (BOOL)hasAccentKey;
- (BOOL)hasCandidateKey;
- (id)inputMode;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setInterfaceIdiomIsPad:(BOOL)arg1;
- (void)setIsAlphabeticPlane:(BOOL)arg1;
- (void)setCanMultitap:(BOOL)arg1;
- (void)setHasAccentKey:(BOOL)arg1;
- (void)setHasCandidateKey:(BOOL)arg1;
- (void)setInputMode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
