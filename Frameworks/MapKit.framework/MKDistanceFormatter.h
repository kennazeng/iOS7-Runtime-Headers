/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter  {
    NSLocale *_locale;
    unsigned int _units;
    unsigned int _unitStyle;
}

@property(copy) NSLocale * locale;
@property unsigned int units;
@property unsigned int unitStyle;


- (void)setUnitStyle:(unsigned int)arg1;
- (unsigned int)unitStyle;
- (double)distanceFromString:(id)arg1;
- (id)stringFromDistance:(double)arg1;
- (BOOL)_useMetric;
- (unsigned int)units;
- (void)setUnits:(unsigned int)arg1;
- (id)init;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 errorDescription:(id*)arg5;
- (BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)stringForObjectValue:(id)arg1;

@end
