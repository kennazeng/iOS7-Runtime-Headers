/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString  {
    NSMutableAttributedString *mutableAttributedString;
}


- (unsigned int)length;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithMutableAttributedString:(id)arg1;

@end
