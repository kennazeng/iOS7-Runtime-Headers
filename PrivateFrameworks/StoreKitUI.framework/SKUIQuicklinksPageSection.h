/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIQuicklinksViewController, SKUIQuicklinksPageComponent;

@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate> {
    SKUIQuicklinksViewController *_quicklinksViewController;
}

@property(readonly) SKUIQuicklinksPageComponent * pageComponent;


- (id)cellForIndexPath:(id)arg1;
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(int)arg3;
- (id)_quicklinksViewController;
- (void)willAppearInContext:(id)arg1;
- (int)numberOfCells;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
