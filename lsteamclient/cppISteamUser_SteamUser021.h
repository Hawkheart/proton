struct cppISteamUser_SteamUser021_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser021_GetHSteamUser( struct cppISteamUser_SteamUser021_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser021_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser021_BLoggedOn( struct cppISteamUser_SteamUser021_BLoggedOn_params *params );

struct cppISteamUser_SteamUser021_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser021_GetSteamID( struct cppISteamUser_SteamUser021_GetSteamID_params *params );

struct cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED_params
{
    void *linux_side;
    int _ret;
    void *pAuthBlob;
    int cbMaxAuthBlob;
    CSteamID steamIDGameServer;
    uint32 unIPServer;
    uint16 usPortServer;
    bool bSecure;
};
extern void cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED_params *params );

struct cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED_params *params );

struct cppISteamUser_SteamUser021_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser021_TrackAppUsageEvent( struct cppISteamUser_SteamUser021_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser021_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int cubBuffer;
};
extern void cppISteamUser_SteamUser021_GetUserDataFolder( struct cppISteamUser_SteamUser021_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser021_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser021_StartVoiceRecording( struct cppISteamUser_SteamUser021_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser021_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser021_StopVoiceRecording( struct cppISteamUser_SteamUser021_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser021_GetAvailableVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    uint32 *pcbCompressed;
    uint32 *pcbUncompressed_Deprecated;
    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated;
};
extern void cppISteamUser_SteamUser021_GetAvailableVoice( struct cppISteamUser_SteamUser021_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser021_GetVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    bool bWantCompressed;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
    bool bWantUncompressed_Deprecated;
    void *pUncompressedDestBuffer_Deprecated;
    uint32 cbUncompressedDestBufferSize_Deprecated;
    uint32 *nUncompressBytesWritten_Deprecated;
    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated;
};
extern void cppISteamUser_SteamUser021_GetVoice( struct cppISteamUser_SteamUser021_GetVoice_params *params );

struct cppISteamUser_SteamUser021_DecompressVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    const void *pCompressed;
    uint32 cbCompressed;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
    uint32 nDesiredSampleRate;
};
extern void cppISteamUser_SteamUser021_DecompressVoice( struct cppISteamUser_SteamUser021_DecompressVoice_params *params );

struct cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate_params *params );

struct cppISteamUser_SteamUser021_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser021_GetAuthSessionTicket( struct cppISteamUser_SteamUser021_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser021_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser021_BeginAuthSession( struct cppISteamUser_SteamUser021_BeginAuthSession_params *params );

struct cppISteamUser_SteamUser021_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser021_EndAuthSession( struct cppISteamUser_SteamUser021_EndAuthSession_params *params );

struct cppISteamUser_SteamUser021_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamUser_SteamUser021_CancelAuthTicket( struct cppISteamUser_SteamUser021_CancelAuthTicket_params *params );

struct cppISteamUser_SteamUser021_UserHasLicenseForApp_params
{
    void *linux_side;
    EUserHasLicenseForAppResult _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamUser_SteamUser021_UserHasLicenseForApp( struct cppISteamUser_SteamUser021_UserHasLicenseForApp_params *params );

struct cppISteamUser_SteamUser021_BIsBehindNAT_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser021_BIsBehindNAT( struct cppISteamUser_SteamUser021_BIsBehindNAT_params *params );

struct cppISteamUser_SteamUser021_AdvertiseGame_params
{
    void *linux_side;
    CSteamID steamIDGameServer;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser021_AdvertiseGame( struct cppISteamUser_SteamUser021_AdvertiseGame_params *params );

struct cppISteamUser_SteamUser021_RequestEncryptedAppTicket_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    void *pDataToInclude;
    int cbDataToInclude;
};
extern void cppISteamUser_SteamUser021_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser021_RequestEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser021_GetEncryptedAppTicket_params
{
    void *linux_side;
    bool _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser021_GetEncryptedAppTicket( struct cppISteamUser_SteamUser021_GetEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser021_GetGameBadgeLevel_params
{
    void *linux_side;
    int _ret;
    int nSeries;
    bool bFoil;
};
extern void cppISteamUser_SteamUser021_GetGameBadgeLevel( struct cppISteamUser_SteamUser021_GetGameBadgeLevel_params *params );

struct cppISteamUser_SteamUser021_GetPlayerSteamLevel_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamUser_SteamUser021_GetPlayerSteamLevel( struct cppISteamUser_SteamUser021_GetPlayerSteamLevel_params *params );

struct cppISteamUser_SteamUser021_RequestStoreAuthURL_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchRedirectURL;
};
extern void cppISteamUser_SteamUser021_RequestStoreAuthURL( struct cppISteamUser_SteamUser021_RequestStoreAuthURL_params *params );

struct cppISteamUser_SteamUser021_BIsPhoneVerified_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser021_BIsPhoneVerified( struct cppISteamUser_SteamUser021_BIsPhoneVerified_params *params );

struct cppISteamUser_SteamUser021_BIsTwoFactorEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser021_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser021_BIsTwoFactorEnabled_params *params );

struct cppISteamUser_SteamUser021_BIsPhoneIdentifying_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser021_BIsPhoneIdentifying( struct cppISteamUser_SteamUser021_BIsPhoneIdentifying_params *params );

struct cppISteamUser_SteamUser021_BIsPhoneRequiringVerification_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser021_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser021_BIsPhoneRequiringVerification_params *params );

struct cppISteamUser_SteamUser021_GetMarketEligibility_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUser_SteamUser021_GetMarketEligibility( struct cppISteamUser_SteamUser021_GetMarketEligibility_params *params );

struct cppISteamUser_SteamUser021_GetDurationControl_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUser_SteamUser021_GetDurationControl( struct cppISteamUser_SteamUser021_GetDurationControl_params *params );

struct cppISteamUser_SteamUser021_BSetDurationControlOnlineState_params
{
    void *linux_side;
    bool _ret;
    EDurationControlOnlineState eNewState;
};
extern void cppISteamUser_SteamUser021_BSetDurationControlOnlineState( struct cppISteamUser_SteamUser021_BSetDurationControlOnlineState_params *params );

