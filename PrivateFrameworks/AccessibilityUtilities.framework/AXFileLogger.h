/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSString;

@interface AXFileLogger : NSObject  {
    NSString *_filePath;
}

@property(copy) NSString * filePath;

+ (id)defaultFileLogger;

- (void)dealloc;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)log:(id)arg1;
- (id)initWithFilePath:(id)arg1;

@end