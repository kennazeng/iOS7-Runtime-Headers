/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSDictionary;

@interface FTDeviceSupport : NSObject  {
    BOOL _blockPost;
    BOOL _supportsFrontCamera;
    BOOL _supportsBackCamera;
    BOOL _supportsiMessage;
    BOOL _supportsSMS;
    BOOL _supportsMMS;
    BOOL _supportsFT;
    BOOL _supportsFTA;
    BOOL _supportsWiFi;
    BOOL _supportsWLAN;
    BOOL _supportsNonWiFiFaceTime;
    BOOL _supportsCellularData;
    BOOL _shouldUseSIMState;
    BOOL _commCenterDead;
    BOOL _simBecameNotReady;
    int _carrierBundleSupported;
    int _iMessageAllowedToken;
    BOOL _faceTimeBlocked;
    BOOL _iMessageBlocked;
    BOOL _accountModificationRestricted;
    int _performanceClass;
}

@property(readonly) BOOL isTelephonyDevice;
@property(readonly) BOOL faceTimeAvailable;
@property(readonly) BOOL faceTimeBlocked;
@property(readonly) BOOL faceTimeSupported;
@property(readonly) BOOL callingAvailable;
@property(readonly) BOOL callingBlocked;
@property(readonly) BOOL callingSupported;
@property(readonly) BOOL nonWifiFaceTimeAvailable;
@property(readonly) BOOL nonWifiCallingAvailable;
@property(readonly) BOOL iMessageAvailable;
@property(readonly) BOOL iMessageBlocked;
@property(readonly) BOOL iMessageSupported;
@property(readonly) BOOL identityServicesSupported;
@property(readonly) BOOL madridAvailable;
@property(readonly) BOOL madridBlocked;
@property(readonly) BOOL madridSupported;
@property(readonly) BOOL conferencingEnabled;
@property(readonly) BOOL conferencingBlocked;
@property(readonly) BOOL conferencingAllowed;
@property(readonly) BOOL registrationSupported;
@property(readonly) BOOL commCenterDead;
@property(readonly) BOOL accountModificationRestricted;
@property(readonly) BOOL wantsBreakBeforeMake;
@property(readonly) BOOL isC2KEquipment;
@property(readonly) BOOL supportsSimultaneousVoiceAndDataRightNow;
@property(readonly) BOOL supportsSMSIdentification;
@property(readonly) BOOL supportsAppleIDIdentification;
@property(readonly) BOOL supportsSMS;
@property(readonly) BOOL supportsMMS;
@property(readonly) BOOL supportsWiFi;
@property(readonly) BOOL supportsCellularData;
@property(readonly) BOOL supportsWLAN;
@property(readonly) BOOL supportsNonWiFiFaceTime;
@property(readonly) BOOL supportsNonWiFiCalling;
@property(readonly) BOOL supportsFrontFacingCamera;
@property(readonly) BOOL supportsBackFacingCamera;
@property(readonly) NSDictionary * CTNetworkInformation;
@property(readonly) NSDictionary * telephonyCapabilities;
@property(readonly) NSString * deviceName;
@property(readonly) NSString * deviceIDPrefix;
@property(readonly) NSString * deviceTypeIDPrefix;
@property(readonly) NSString * model;
@property(readonly) NSString * userAgentString;
@property(readonly) NSString * productName;
@property(readonly) NSString * productVersion;
@property(readonly) NSString * productBuildVersion;
@property(readonly) NSString * deviceInformationString;
@property(readonly) NSString * telephoneNumber;
@property(readonly) int performanceClass;
@property(readonly) int deviceType;

+ (id)sharedInstance;

- (int)deviceType;
- (BOOL)supportsSimultaneousVoiceAndDataRightNow;
- (BOOL)supportsBackFacingCamera;
- (BOOL)supportsFrontFacingCamera;
- (BOOL)faceTimeAvailable;
- (BOOL)identityServicesSupported;
- (BOOL)registrationSupported;
- (BOOL)supportsSMSIdentification;
- (id)deviceIDPrefix;
- (BOOL)supportsSMS;
- (id)telephoneNumber;
- (BOOL)callingAvailable;
- (id)userAgentString;
- (id)productBuildVersion;
- (id)productName;
- (BOOL)supportsMMS;
- (BOOL)supportsCellularData;
- (BOOL)supportsWiFi;
- (BOOL)nonWifiCallingAvailable;
- (int)performanceClass;
- (id)CTNetworkInformation;
- (void)_handlePhoneNumberRegistrationStateChanged:(id)arg1;
- (void)_handleTechnologyChange:(id)arg1;
- (void)_simStatusChanged:(id)arg1;
- (BOOL)wantsBreakBeforeMake;
- (id)telephonyCapabilities;
- (id)deviceTypeIDPrefix;
- (BOOL)accountModificationRestricted;
- (BOOL)iMessageBlocked;
- (BOOL)iMessageAvailable;
- (BOOL)commCenterDead;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_carrierChanged;
- (void)_operatorChanged;
- (void)_registerForCommCenterReadyNotifications;
- (void)carrierSettingsChanged:(id)arg1;
- (BOOL)nonWifiFaceTimeAvailable;
- (void)_lockdownStateChanged:(id)arg1;
- (id)deviceInformationString;
- (BOOL)supportsAppleIDIdentification;
- (BOOL)iMessageSupported;
- (BOOL)faceTimeSupported;
- (BOOL)supportsNonWiFiFaceTime;
- (BOOL)conferencingAllowed;
- (BOOL)conferencingBlocked;
- (BOOL)conferencingEnabled;
- (BOOL)madridAvailable;
- (BOOL)faceTimeBlocked;
- (BOOL)callingBlocked;
- (BOOL)madridBlocked;
- (BOOL)madridSupported;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForCarrierNotifications;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_registerForCapabilityNotifications;
- (void)_registerForCarrierNotifications;
- (void)_updateManagedConfigurationSettings;
- (void)_watchNotifyTokens;
- (BOOL)isC2KEquipment;
- (id)productVersion;
- (id)model;
- (id)deviceName;
- (BOOL)supportsNonWiFiCalling;
- (BOOL)supportsWLAN;
- (BOOL)callingSupported;
- (BOOL)isTelephonyDevice;
- (id)init;
- (void)dealloc;
- (void)_updateCapabilities;

@end
