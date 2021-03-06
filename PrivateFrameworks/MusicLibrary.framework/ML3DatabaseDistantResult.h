/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseDistantConnection, NSString, NSArray;

@interface ML3DatabaseDistantResult : ML3DatabaseResult  {
    NSArray *_cachedRows;
    ML3DatabaseDistantConnection *_distantConnection;
    NSString *_sql;
    NSArray *_parameters;
    NSString *_limitProperty;
    long long _limitValue;
}

@property(readonly) ML3DatabaseDistantConnection * distantConnection;
@property(readonly) NSString * sql;
@property(readonly) NSArray * parameters;
@property(retain) NSString * limitProperty;
@property long long limitValue;


- (void)setLimitValue:(long long)arg1;
- (void)setLimitProperty:(id)arg1;
- (id)limitProperty;
- (id)distantConnection;
- (BOOL)_fetchRowsIfEmpty;
- (void)_localEnumerateRowsWithBlock:(id)arg1;
- (void)_remoteEnumerateRowsWithBlock:(id)arg1;
- (void)setLimitProperty:(id)arg1 limitValue:(long long)arg2;
- (id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3;
- (id)columnNameIndexMap;
- (unsigned int)indexForColumnName:(id)arg1;
- (id)initWithStatement:(id)arg1;
- (long long)limitValue;
- (id)sql;
- (void)enumerateRowsWithBlock:(id)arg1;
- (id)parameters;
- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
