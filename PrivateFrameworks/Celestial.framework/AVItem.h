/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItem : NSObject  {
    struct AVItemPrivate { id x1; id x2; double x3; float x4; float x5; float x6; unsigned int x7; BOOL x8; BOOL x9; id x10; int x11; long long x12; long long x13; BOOL x14; id x15; id x16; BOOL x17; BOOL x18; id x19; id x20; struct OpaqueFigThread {} *x21; struct OpaqueCMByteStream {} *x22; int x23; id x24; id x25; } *_priv;
}

+ (id)avItemWithPath:(id)arg1 error:(id*)arg2;
+ (id)avItem;

- (id)errorLog;
- (id)accessLog;
- (void)cancelDownload;
- (long)downloadStatus;
- (float)downloadProgress;
- (long)beginDownloading;
- (void*)downloadThread;
- (id)chapterImageForImageID:(int)arg1;
- (void)setEQPreset:(int)arg1;
- (int)_instantiateItem;
- (id)urlFromPath:(id)arg1;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(int)arg3;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(int)arg4;
- (id)formatDetailsForTracks;
- (int)eqPreset;
- (void)stopDownload;
- (BOOL)setPath:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id*)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)attributeForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)path;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (double)duration;
- (id)url;

@end
