/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PLAssetContainer>, NSMutableSet, NSMutableIndexSet, NSIndexSet, NSArray;

@interface PUPhotoSelectionEntry : NSObject  {
    BOOL _hasValidAssetIndexes;
    <PLAssetContainer> *_container;
    NSMutableSet *_selectedAssets;
    NSMutableIndexSet *_selectedIndexes;
}

@property(readonly) <PLAssetContainer> * container;
@property(readonly) NSIndexSet * selectedIndexes;
@property(readonly) NSArray * selectedAssets;


- (void)setSelectedAssetsSet:(id)arg1;
- (void)_ensureValidAssetIndexes;
- (void)handleCollectionChangeNotification:(id)arg1;
- (void)enumerateSelectedAssetsWithBlock:(id)arg1;
- (id)selectedIndexes;
- (BOOL)isIndexSelected:(unsigned int)arg1;
- (void)deselectAssetsAtIndexes:(id)arg1;
- (void)selectAssetsAtIndexes:(id)arg1;
- (id)initWithContainer:(id)arg1 uniqueSelectedAssets:(id)arg2;
- (void)invalidateAllAssetIndexes;
- (id)selectedAssets;
- (void).cxx_destruct;
- (id)container;

@end
