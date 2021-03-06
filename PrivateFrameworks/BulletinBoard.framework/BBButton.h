/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString, BBAction;

@interface BBButton : NSObject <NSCopying, NSCoding> {
    NSString *_title;
    BBAction *_action;
    NSString *_identifier;
}

@property(copy) NSString * title;
@property(retain) BBAction * action;
@property(copy) NSString * identifier;

+ (id)buttonWithTitle:(id)arg1 action:(id)arg2;
+ (void)_removeButtonFromCache:(id)arg1;
+ (id)_possiblyCachedButtonForInitializedButton:(id)arg1;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2 identifier:(id)arg3;
+ (void)_addButtonToCache:(id)arg1;

- (void)setTitle:(id)arg1;
- (id)title;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setAction:(id)arg1;
- (id)action;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
