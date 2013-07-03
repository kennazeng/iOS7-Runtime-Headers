/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAWeatherCurrentConditions, NSArray, NSString, SAWeatherUnits, SAWeatherLocation;

@interface SAWeatherObject : SADomainObject  {
}

@property(retain) SAWeatherCurrentConditions * currentConditions;
@property(copy) NSArray * dailyForecasts;
@property(copy) NSString * extendedForecastUrl;
@property(copy) NSArray * hourlyForecasts;
@property(retain) SAWeatherUnits * units;
@property(copy) NSString * view;
@property(retain) SAWeatherLocation * weatherLocation;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;

- (void)setHourlyForecasts:(id)arg1;
- (id)hourlyForecasts;
- (void)setExtendedForecastUrl:(id)arg1;
- (id)extendedForecastUrl;
- (void)setDailyForecasts:(id)arg1;
- (id)dailyForecasts;
- (void)setCurrentConditions:(id)arg1;
- (void)setWeatherLocation:(id)arg1;
- (id)weatherLocation;
- (id)currentConditions;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)units;
- (void)setUnits:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (id)groupIdentifier;

@end