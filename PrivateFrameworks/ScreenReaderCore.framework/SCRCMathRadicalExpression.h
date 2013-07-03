/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCMathExpression;

@interface SCRCMathRadicalExpression : SCRCMathExpression  {
    SCRCMathExpression *_radicand;
    SCRCMathExpression *_rootIndex;
}

@property(retain) SCRCMathExpression * radicand;
@property(retain) SCRCMathExpression * rootIndex;


- (BOOL)_isCubeRoot;
- (BOOL)_isSquareRoot;
- (id)rootIndex;
- (id)radicand;
- (void)setRootIndex:(id)arg1;
- (void)setRadicand:(id)arg1;
- (id)mathMLString;
- (unsigned int)fractionLevel;
- (id)latexMathModeDescription;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end