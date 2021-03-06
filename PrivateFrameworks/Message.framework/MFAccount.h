/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, ACAccount, NSDictionary, NSMutableDictionary;

@interface MFAccount : NSObject  {
    ACAccount *_persistentAccount;
    int _persistentAccountLock;
    NSMutableDictionary *_unsavedAccountProperties;
    NSString *_sourceApplicationBundleIdentifier;
}

@property(readonly) ACAccount * persistentAccount;
@property(readonly) ACAccount * parentAccount;
@property(readonly) NSString * parentAccountIdentifier;
@property(readonly) NSDictionary * properties;
@property(readonly) NSString * uniqueId;
@property(readonly) NSString * identifier;
@property(readonly) NSString * syncStoreIdentifier;
@property(readonly) NSString * managedTag;
@property(readonly) NSString * type;
@property(retain) NSString * username;
@property(retain) NSString * hostname;
@property(retain) NSString * displayName;
@property(copy) NSString * sourceApplicationBundleIdentifier;
@property(readonly) ACAccount * accountForRenewingCredentials;

+ (id)saslProfileName;
+ (BOOL)isSSLEditable;
+ (BOOL)isCommonPortNumber:(unsigned int)arg1;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (id)myFullName;
+ (void*)legacyKeychainProtocol;
+ (id)displayedShortAccountTypeString;
+ (id)propertiesWhichRequireValidation;
+ (BOOL)isPredefinedAccountType;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)accountWithPersistentAccount:(id)arg1;
+ (id)authSchemesForAccountClass;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)predefinedValueForKey:(id)arg1;
+ (unsigned int)defaultPortNumber;
+ (unsigned int)defaultSecurePortNumber;
+ (BOOL)usesSSL;
+ (id)displayedAccountTypeString;
+ (id)accountTypeString;
+ (BOOL)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3;
+ (id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2;
+ (id)_newPersistentAccount;
+ (id)_accountClass;
+ (id)accountWithProperties:(id)arg1;
+ (id)accountTypeIdentifier;
+ (id)supportedDataclasses;
+ (id)hostname;

- (void)removeAccountPropertyForKey:(id)arg1;
- (id)syncStoreIdentifier;
- (id)copyDiagnosticInformation;
- (id)inaccessiblePasswordErrorWithTitle:(id)arg1;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (BOOL)enableAccount;
- (BOOL)shouldEnableAfterError:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
- (id)secureConnectionSettings;
- (id)insecureConnectionSettings;
- (id)alternateConnectionSettings;
- (void)applySettingsAsDefault:(id)arg1;
- (id)authenticatedConnection;
- (void)setPreferredAuthScheme:(id)arg1;
- (void)validateConnections;
- (void)releaseAllForcedConnections;
- (BOOL)fetchTokensIfNecessary:(id*)arg1;
- (id)managedTag;
- (BOOL)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(BOOL)arg2 completionHandler:(id)arg3;
- (BOOL)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (id)_credential;
- (BOOL)canGoOffline;
- (BOOL)_boolForAccountInfoKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)_objectForAccountInfoKey:(id)arg1;
- (id)valueInAccountPropertiesForKey:(id)arg1;
- (void)removeValueInAccountPropertiesForKey:(id)arg1;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)removePersistentAccount;
- (void)savePersistentAccount;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (id)customTitleForError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (unsigned int)credentialAccessibility;
- (id)customTitleForAuthenticationError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (id)defaultConnectionSettings;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (id)sourceApplicationBundleIdentifier;
- (BOOL)allowsTrustPrompt;
- (struct __CFString { }*)connectionServiceType;
- (id)secureServiceName;
- (void)setTryDirectSSL:(BOOL)arg1;
- (void)setClientCertificates:(id)arg1;
- (id)clientCertificates;
- (id)certUIService;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setUsesSSL:(BOOL)arg1;
- (BOOL)_connectAndAuthenticate:(id)arg1;
- (id)_newConnection;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (unsigned int)portNumber;
- (unsigned int)defaultPortNumber;
- (unsigned int)defaultSecurePortNumber;
- (id)accountForRenewingCredentials;
- (BOOL)setCredentialItem:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)credentialItemForKey:(id)arg1 error:(id*)arg2;
- (id)preferredAuthScheme;
- (id)_passwordWithError:(id*)arg1;
- (id)_password;
- (id)_credentialCreateIfNecessary:(BOOL)arg1 error:(id*)arg2;
- (id)_credentialCreateIfNecessary:(BOOL)arg1;
- (BOOL)usesSSL;
- (void)_queueAccountInfoDidChange;
- (void)accountInfoDidChange;
- (id)persistentAccount;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (void)releaseAllConnections;
- (void)setPersistentAccount:(id)arg1;
- (void)_setAccountProperties:(id)arg1;
- (id)initWithPersistentAccount:(id)arg1;
- (BOOL)requiresAuthentication;
- (id)accountClass;
- (void)setPassword:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)credentialItemForKey:(id)arg1;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)parentAccountIdentifier;
- (id)enabledDataclasses;
- (BOOL)isActive;
- (id)parentAccount;
- (id)username;
- (id)uniqueId;
- (void)setHostname:(id)arg1;
- (id)hostname;
- (id)init;
- (id)password;
- (id)domain;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (void)setActive:(BOOL)arg1;
- (id)serviceName;
- (id)type;
- (id)properties;
- (id)initWithProperties:(id)arg1;
- (void)setDomain:(id)arg1;
- (Class)connectionClass;

@end
