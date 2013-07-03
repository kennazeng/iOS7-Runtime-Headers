/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSData, NSDate, NSNumber;

@interface ISPurchaseReceipt : NSObject  {
    NSData *mReceiptData;
    struct SecCmsMessageStr { } *mDecodedMessage;
    struct SecCmsSignedDataStr { } *mSignedData;
    NSString *mReceiptPath;
    NSString *mBundleID;
    NSString *mBundleVersion;
    NSString *mParentalControls;
    NSString *mDownloadID;
    NSString *mAdamID;
    NSDate *mPurchaseDate;
    NSString *mPurchaseDateString;
    NSString *mDSID;
    NSString *mHWType;
    NSDate *mReceiptCreationDate;
    NSString *mDeveloperID;
    NSString *mInstallerVersionID;
    NSString *mReceiptType;
    NSNumber *mFRToolVersion;
    NSString *mExpirationDateString;
    NSDate *mExpirationDate;
    NSString *mRenewalDateString;
    NSDate *mRenewalDate;
    NSString *mOraganizationDisplayName;
    NSString *mCancellationReason;
    BOOL mHashIsValid;
    BOOL _createdFromCoder;
}

@property(readonly) NSString * receiptType;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * parentalControls;
@property(readonly) NSDate * purchaseDate;
@property(readonly) NSString * purchaseDateString;
@property(readonly) NSString * dsid;
@property(readonly) NSString * hwtype;
@property(readonly) NSDate * receiptCreationDate;
@property(readonly) NSString * developerID;
@property(readonly) NSString * downloadID;
@property(readonly) NSString * adamID;
@property(readonly) NSString * installerVersionID;
@property(readonly) NSNumber * frToolVersion;
@property(readonly) NSDate * expirationDate;
@property(readonly) NSDate * renewalDate;
@property(readonly) NSString * renewalDateString;
@property(readonly) NSString * organizationDisplayName;
@property(readonly) NSString * cancellationReason;
@property(readonly) BOOL isVPPLicensed;
@property(readonly) BOOL isRevoked;
@property(readonly) NSData * receiptData;
@property(readonly) NSString * receiptDataString;
@property(readonly) BOOL isProductionReceipt;

+ (id)receiptFromBundleAtURL:(id)arg1;
+ (id)receiptFromBundleAtPath:(id)arg1;
+ (id)receiptWithContentsOfFile:(id)arg1;
+ (id)receiptPathForBundleAtPath:(id)arg1;

- (id)parentalControls;
- (id)cancellationReason;
- (id)organizationDisplayName;
- (id)renewalDateString;
- (id)renewalDate;
- (id)frToolVersion;
- (id)installerVersionID;
- (id)developerID;
- (id)hwtype;
- (id)purchaseDateString;
- (id)receiptType;
- (BOOL)isVPPLicensed;
- (BOOL)isProductionReceipt;
- (id)receiptDataString;
- (BOOL)validateAndCheckGUIDSepately:(BOOL*)arg1;
- (int)checkSignatureAgainstCurrentDate;
- (int)checkSignatureSkipRevocation;
- (int)checkSignature;
- (id)receiptData;
- (BOOL)validateAndCheckGUIDSeparately:(BOOL*)arg1;
- (int)_verifySignatureCheckRevocation:(BOOL)arg1 checkExpiration:(BOOL)arg2 useCurrentDate:(BOOL)arg3;
- (BOOL)_checkWWDRIssuerForTrust:(struct __SecTrust { }*)arg1;
- (id)receiptCreationDate;
- (struct __CFArray { }*)_copySignedDataCertificates;
- (id)dsid;
- (id)downloadID;
- (id)purchaseDate;
- (id)expirationDate;
- (id)adamID;
- (id)bundleVersion;
- (BOOL)_load;
- (BOOL)isValid;
- (void)dealloc;
- (BOOL)isRevoked;
- (id)bundleIdentifier;
- (id)initWithContentsOfFile:(id)arg1;

@end