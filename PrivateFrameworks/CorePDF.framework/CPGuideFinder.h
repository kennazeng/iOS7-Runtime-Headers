/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPCluster, CPZone, NSMutableArray;

@interface CPGuideFinder : NSObject <CPDisposable> {
    CPZone *contentZone;
    unsigned int countOfWordsInZone;
    double *anchorArray;
    double *rightHandSideArray;
    struct { float x1; float x2; float x3; float x4; int x5; int *x6; struct CPPDFStyle {} *x7; } *crossingWordArray;
    CPCluster *anchors;
    CPCluster *rightHandSides;
    float medianFontSizeOfFirstCharacter;
    float medianFontSizeOfLastCharacter;
    NSMutableArray *gutters;
    NSMutableArray *leftGuides;
    NSMutableArray *rightGuides;
}

+ (BOOL)guideSeparates:(id)arg1 from:(id)arg2;
+ (void)reclusterBetweenGuides:(id)arg1;
+ (void)reclusterPreservingAlignment:(id)arg1;
+ (BOOL)gutterSeparates:(id)arg1 from:(id)arg2;

- (float)medianFontSizeOfLastCharacter;
- (float)medianFontSizeOfFirstCharacter;
- (void)splitTextLinesBetweenBorderWords;
- (void)splitTextLinesAtBorderWords;
- (BOOL)hasRightGuides;
- (BOOL)hasLeftGuides;
- (BOOL)hasGutters;
- (void)subdivideRightGuideAt:(unsigned int)arg1;
- (void)subdivideLeftGuideAt:(unsigned int)arg1;
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)findWordEdgeClusters;
- (void)getWordEdges;
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(struct { float x1; float x2; float x3; float x4; int x5; int *x6; struct CPPDFStyle {} *x7; }*)arg4 ofCount:(unsigned int)arg5 crossedBy:(struct { float x1; float x2; float x3; float x4; int x5; int *x6; struct CPPDFStyle {} *x7; }*)arg6 ofCount:(unsigned int)arg7;
- (void)setAlignForWordWithExtent:(struct { float x1; float x2; float x3; float x4; int x5; int *x6; struct CPPDFStyle {} *x7; }*)arg1 stripArray:(id)arg2 stripMax:(double)arg3;
- (BOOL)addStripTo:(id)arg1 bottom:(float)arg2 left:(float)arg3 top:(float)arg4 right:(float)arg5;
- (void)splitTextLines;
- (void)markTextLines;
- (void)findGuides;
- (void)findGutters;
- (id)initWithContentZone:(id)arg1;
- (id)gutters;
- (id)rightGuides;
- (id)leftGuides;
- (void)dispose;
- (void)finalize;
- (void)dealloc;

@end
