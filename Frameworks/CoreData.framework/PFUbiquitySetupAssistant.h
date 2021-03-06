/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSObject<OS_dispatch_semaphore>, PFUbiquityBaseline, NSMutableSet, PFUbiquityPeerState, NSMutableArray, PFUbiquityContainerIdentifier, NSString, PFUbiquityStoreMetadata, NSPersistentStore, PFUbiquityPeerReceipt, PFUbiquityKnowledgeVector, NSMutableDictionary, PFUbiquityMigrationAssistant, PFUbiquityLocation, <NSObject><NSCopying><NSCoding>, NSPersistentStoreCoordinator, NSError, PFUbiquityMigrationManager, PFUbiquitySwitchboardEntry, _PFUbiquityStack, NSURL;

@interface PFUbiquitySetupAssistant : NSObject  {
    NSMutableDictionary *_options;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    NSString *_storeType;
    NSURL *_storeURL;
    NSURL *_actualStoreFileURL;
    NSMutableDictionary *_storeMetadataDict;
    BOOL _needsMetadataWrite;
    PFUbiquityKnowledgeVector *_storeKV;
    BOOL _ubiquityEnabled;
    <NSObject><NSCopying><NSCoding> *_ubiquityIdentityToken;
    NSURL *_ubiquityRootURL;
    NSString *_ubiquityRootSubpath;
    NSString *_ubiquityName;
    NSString *_ubiquityContainerIdentifier;
    NSString *_localPeerID;
    NSString *_modelVersionHash;
    NSString *_previousModelVersionHash;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeerState *_localPeerState;
    PFUbiquityKnowledgeVector *_metaKV;
    PFUbiquityBaseline *_baseline;
    BOOL _baselineFileExistsInCloud;
    BOOL _hasUploadingBaseline;
    BOOL _monitorUploadingBaselineAsync;
    BOOL _didBaselineCopy;
    PFUbiquityKnowledgeVector *_baselineKV;
    BOOL _votedOffIsland;
    BOOL _reapUbiquitousLogs;
    BOOL _respondToBaselineRoll;
    BOOL _storeFileExists;
    BOOL _storeFileIsReadOnly;
    BOOL _hasStoreMetadataFile;
    BOOL _hasStoreMetadataEntry;
    BOOL _hasContainerUUID;
    BOOL _hasContainerUUIDInStore;
    BOOL _needsMetadataRecovery;
    PFUbiquityPeerReceipt *_localPeerReceipt;
    PFUbiquityKnowledgeVector *_receiptKV;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    NSString *_preStoreContainerUUID;
    BOOL _usedExistingUUIDMapping;
    BOOL _hasLocalTransactionLogs;
    BOOL _hasMigrationOptions;
    BOOL _didMigrateBaseline;
    BOOL _storeWasMigrated;
    PFUbiquityMigrationAssistant *_migrationAssistant;
    PFUbiquityMigrationManager *_migrationManager;
    BOOL _replayLogsSynchronously;
    BOOL _useLocalAccount;
    BOOL _seedStore;
    NSURL *_seedStoreURL;
    BOOL _haveExistingUUIDMappings;
    BOOL _abortSetup;
    PFUbiquitySwitchboardEntry *_entry;
    BOOL _gotExportNotification;
    int _sideLoadLock;
    NSMutableSet *_logLocationsExportedDuringSideLoad;
    NSMutableDictionary *_gidToRid;
    NSMutableDictionary *_entityNameToGidSet;
    NSObject<OS_dispatch_semaphore> *_initialSyncSemaphore;
    int _initialSyncComplete;
    NSMutableArray *_queryLocations;
    BOOL _notifyAboutSetupProgress;
    int _numSetupTries;
    unsigned int _retryDelaySec;
    BOOL _failSetup;
    NSError *_failSetupError;
    BOOL _gotAccountChange;
    BOOL _cacheFilePresenterForUbiquityRoot;
}

@property(readonly) NSDictionary * options;
@property(readonly) BOOL ubiquityEnabled;
@property(readonly) BOOL needsMetadataRecovery;
@property(readonly) NSString * localPeerID;
@property(readonly) NSURL * ubiquityRootURL;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) PFUbiquityLocation * localRootLocation;
@property(readonly) PFUbiquityContainerIdentifier * containerIdentifier;
@property(readonly) BOOL useLocalAccount;
@property BOOL storeWasMigrated;
@property(readonly) NSURL * actualStoreFileURL;
@property BOOL abortSetup;
@property(readonly) PFUbiquityKnowledgeVector * storeKV;
@property unsigned int retryDelaySec;
@property BOOL cacheFilePresenterForUbiquityRoot;
@property BOOL failSetup;
@property(retain) NSError * failSetupError;

+ (void)cleanUserDefaultsForStore:(id)arg1;
+ (BOOL)ubiquityMetadataTablesPresentInStore:(id)arg1;
+ (id)generateMachineUUIDString;
+ (id)createBaselineFromMostRecentLocation:(id)arg1 localPeerID:(id)arg2 error:(id*)arg3;
+ (void)setContainerIdentifierUUID:(id)arg1 forIdentityToken:(id)arg2 forStoreName:(id)arg3;
+ (BOOL)doBasicSanityCheckForUbiquityRootURL:(id)arg1 withError:(id*)arg2;
+ (id)createActualStoreURLForStoreURL:(id)arg1 localPeerID:(id)arg2 containerIdentifier:(id)arg3 andStoreName:(id)arg4;
+ (id)createDefaultLocalPeerID;
+ (id)findContainerIDForToken:(id)arg1 storeName:(id)arg2 haveExistingMappings:(BOOL*)arg3;
+ (void)removeUbiquityMetadataFromStore:(id)arg1;
+ (void)initialize;

- (BOOL)cacheFilePresenterForUbiquityRoot;
- (id)failSetupError;
- (void)setFailSetup:(BOOL)arg1;
- (BOOL)failSetup;
- (void)setRetryDelaySec:(unsigned int)arg1;
- (unsigned int)retryDelaySec;
- (BOOL)abortSetup;
- (BOOL)storeWasMigrated;
- (id)containerIdentifier;
- (BOOL)needsMetadataRecovery;
- (void)_setUbiquityRootLocation:(id)arg1 storeName:(id)arg2 localPeerID:(id)arg3 andModelVersionHash:(id)arg4;
- (BOOL)isInitialSyncComplete;
- (void)insertEntriesInDicitonary:(id)arg1 inBigramManagedObjectContext:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryJPManagedObjectContext:(id)arg2;
- (BOOL)checkAndPerformMigrationForStore:(id)arg1 error:(id*)arg2;
- (BOOL)rewriteTransactionLogs:(id)arg1 toMatchStore:(id)arg2 error:(id*)arg3;
- (id)createSetOfLocalLogLocations:(id*)arg1;
- (BOOL)tryToReplaceLocalStore:(id)arg1 withStoreSideLoadedByImporter:(id)arg2;
- (void)exportedLog:(id)arg1;
- (BOOL)migrateMetadataRoot:(id*)arg1;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryManagedObjectContext:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inUserDictionaryManagedObjectContext:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (id)migrationAssistant;
- (void)initialSyncComplete;
- (BOOL)seedStore:(id)arg1 error:(id*)arg2;
- (BOOL)pruneStagingDirectoryForStore:(id)arg1 error:(id*)arg2;
- (BOOL)moveLocalLogFilesToUbiquityLocation:(id*)arg1;
- (BOOL)attemptMetadataRecoveryForStore:(id)arg1 error:(id*)arg2;
- (BOOL)respondToBaselineRoll:(id*)arg1;
- (BOOL)sideLoadStore:(id)arg1 error:(id*)arg2;
- (BOOL)checkKnowledgeVectorsAndBaselineWithStore:(id)arg1 error:(id*)arg2;
- (BOOL)initializeBaselineForStore:(id)arg1 error:(id*)arg2;
- (BOOL)initializeStack:(id*)arg1;
- (BOOL)initializeContainerIdentifierWithStore:(id)arg1 error:(id*)arg2;
- (BOOL)initializeReceiptFile:(id*)arg1;
- (BOOL)detectAndFixForkedContainer:(id*)arg1;
- (BOOL)cleanUpFromFailedSetup:(id*)arg1;
- (BOOL)finishSetupForStore:(id)arg1 error:(id*)arg2;
- (void)finishSetupWithRetry:(id)arg1;
- (BOOL)initializeStoreKnowledgeVectorFromStore:(id)arg1 error:(id*)arg2;
- (void)ubiquityIdentityTokenChanged:(id)arg1;
- (id)getCurrentUbiquityIdentityToken;
- (id)longDescription;
- (BOOL)doPostValidationInit:(id*)arg1;
- (void)setFailSetupError:(id)arg1;
- (BOOL)useLocalAccount;
- (id)storeKV;
- (void)setAbortSetup:(BOOL)arg1;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (id)localRootLocation;
- (id)ubiquityRootLocation;
- (id)localPeerID;
- (id)ubiquityRootURL;
- (BOOL)canReadFromUbiquityRootLocation:(id*)arg1;
- (void)setCacheFilePresenterForUbiquityRoot:(BOOL)arg1;
- (BOOL)performCoordinatorPostStoreSetup:(id)arg1 error:(id*)arg2;
- (void)setStoreWasMigrated:(BOOL)arg1;
- (id)actualStoreFileURL;
- (BOOL)ubiquityEnabled;
- (BOOL)validateOptionsWithError:(id*)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4;
- (id)init;
- (void)dealloc;
- (id)options;

@end
