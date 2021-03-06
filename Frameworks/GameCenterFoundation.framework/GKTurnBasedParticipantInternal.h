/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSDate, NSString, GKPlayerInternal;

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation  {
    NSString *_sessionID;
    GKPlayerInternal *_player;
    GKPlayerInternal *_invitedBy;
    NSString *_inviteMessage;
    NSString *_status;
    NSDate *_lastTurnDate;
    NSDate *_timeoutDate;
    unsigned int _matchOutcome;
    unsigned char _slot;
}

@property(readonly) NSString * playerID;
@property(retain) NSString * sessionID;
@property(retain) GKPlayerInternal * player;
@property(retain) GKPlayerInternal * invitedBy;
@property(retain) NSString * inviteMessage;
@property(retain) NSString * status;
@property(retain) NSDate * lastTurnDate;
@property(retain) NSDate * timeoutDate;
@property unsigned int matchOutcome;
@property unsigned char slot;

+ (id)secureCodedPropertyKeys;

- (id)playerID;
- (void)setInviteMessage:(id)arg1;
- (void)setLastTurnDate:(id)arg1;
- (void)setSlot:(unsigned char)arg1;
- (void)setInvitedBy:(id)arg1;
- (void)setTimeoutDate:(id)arg1;
- (void)setMatchOutcome:(unsigned int)arg1;
- (id)invitedBy;
- (id)timeoutDate;
- (id)lastTurnDate;
- (unsigned int)matchOutcome;
- (id)inviteMessage;
- (id)serverRepresentation;
- (void)setSessionID:(id)arg1;
- (id)sessionID;
- (unsigned char)slot;
- (void)setPlayer:(id)arg1;
- (id)player;
- (id)status;
- (void)setStatus:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end
