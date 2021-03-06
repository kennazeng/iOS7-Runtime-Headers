/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class UILabel, NSString, CALayer, NSMutableArray;

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView  {
    CALayer *_frameLayer;
    CALayer *_glossLayer;
    NSMutableArray *_frameViews;
    int _frameQuantity;
    int _imageQuantity;
    int _numPreviewImagesAdded;
    UILabel *_imageCountLabel;
    NSString *_forcedItemCountString;
    BOOL _updateLayout;
}

+ (unsigned int)displayedFrameMaximum;

- (void)setItemCountString:(id)arg1;
- (id)initWithPrincipalAttachments:(id)arg1;
- (struct CGSize { float x1; float x2; })_currentSize;
- (BOOL)_shouldDisplayImageCountLabel;
- (void)addPreviewImage:(id)arg1;
- (id)_itemCountString;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;
- (void)barMetricsDidChange;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)sizeToFit;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)layoutSubviews;

@end
