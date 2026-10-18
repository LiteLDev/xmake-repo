#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/resource/PackIdVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/options/AppConfigs.h"
#include "mc/options/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
class LevelData;
#if defined(LL_PLAT_A) // @header-generator platform
struct AppConfigsDependencies;
#else // @header-generator platform
#endif // @header-generator platform
struct ConnectionDefinition;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct PackIdVersion;
#endif // @header-generator platform
// clang-format on

class DataBackedAppConfigs : public ::AppConfigs {
public:
    // DataBackedAppConfigs inner types declare
    // clang-format off
    struct EduDedicatedServerConfigData;
    struct Data;
    // clang-format on

    // DataBackedAppConfigs inner types define
    struct EduDedicatedServerConfigData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<1, 1, bool> mEnabled;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mRefreshAfterSeconds;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRefreshTime;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnk85dec8;
        ::ll::UntypedStorage<8, 8> mUnkd7e679;
        ::ll::UntypedStorage<8, 8> mUnkb3eef7;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        EduDedicatedServerConfigData& operator=(EduDedicatedServerConfigData const&);
        EduDedicatedServerConfigData(EduDedicatedServerConfigData const&);
        EduDedicatedServerConfigData();
#endif // @header-generator platform
    };

    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool> mAllowPremiumSkinPacks;
        ::ll::TypedStorage<1, 1, bool> mAllowResourcePacks;
        ::ll::TypedStorage<1, 1, bool> mAllowPlayScreen;
        ::ll::TypedStorage<1, 1, bool> mAllowChatScreen;
        ::ll::TypedStorage<1, 1, bool> mEmotesSupported;
        ::ll::TypedStorage<1, 1, bool> mNormalizedFontSize;
        ::ll::TypedStorage<1, 1, bool> mFullscreenDefault;
        ::ll::TypedStorage<1, 1, bool> mMuteDefault;
        ::ll::TypedStorage<1, 1, bool> mCourseCacheEnabled;
        ::ll::TypedStorage<1, 1, bool> mPromptBeforeExit;
        ::ll::TypedStorage<1, 1, bool> mGameArgumentsNeedAuthentication;
        ::ll::TypedStorage<1, 1, bool> mWorldBuilderDisabled;
        ::ll::TypedStorage<1, 1, bool> mWebSocketsDisabled;
        ::ll::TypedStorage<1, 1, bool> mWorldsAreSingleUse;
        ::ll::TypedStorage<1, 1, bool> mRequireTrustedContent;
        ::ll::TypedStorage<1, 1, bool> mIsSaveToCloudOn;
        ::ll::TypedStorage<1, 1, bool> mIsEduAIOn;
        ::ll::TypedStorage<8, 32, std::optional<DataBackedAppConfigs::EduDedicatedServerConfigData>> mEduServerConfig;
        ::ll::TypedStorage<8, 24, std::vector<std::string>>                   mExcludedCatalogueTags;
        ::ll::TypedStorage<1, 1, bool>                                        mRequireEduLevelSettings;
        ::ll::TypedStorage<1, 1, bool>                                        mSendPermissionsTelemetry;
        ::ll::TypedStorage<1, 1, bool>                                        mSupports3DExport;
        ::ll::TypedStorage<1, 1, bool>                                        mUseEduDemoUpsellDialog;
        ::ll::TypedStorage<1, 1, bool>                                        mIsExternalPlayerCommunicationAllowed;
        ::ll::UntypedStorage<1, 1>                                            mMaelstromStatus;
        ::ll::TypedStorage<4, 4, ::EducationEditionOffer>                     mOffer;
        ::ll::TypedStorage<8, 8, std::unique_ptr<ConnectionDefinition>>       mConnectionDefinition;
        ::ll::TypedStorage<1, 1, bool>                                        mChangeMultiplayerDuringPlay;
        ::ll::TypedStorage<8, 8, std::unique_ptr<std::vector<PackIdVersion>>> mAdditionalClientPacks;
        ::ll::UntypedStorage<8, 8>                                            mLevelData;
        ::ll::TypedStorage<8, 24, std::string>                                mFeedbackURL;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1>  mUnk33e408;
        ::ll::UntypedStorage<1, 1>  mUnk2e69ac;
        ::ll::UntypedStorage<1, 1>  mUnkaa6d31;
        ::ll::UntypedStorage<1, 1>  mUnk713eeb;
        ::ll::UntypedStorage<1, 1>  mUnkeb9391;
        ::ll::UntypedStorage<1, 1>  mUnk556953;
        ::ll::UntypedStorage<1, 1>  mUnke9b26e;
        ::ll::UntypedStorage<1, 1>  mUnk2a2090;
        ::ll::UntypedStorage<1, 1>  mUnk63e8b0;
        ::ll::UntypedStorage<1, 1>  mUnk12099f;
        ::ll::UntypedStorage<1, 1>  mUnk2989d6;
        ::ll::UntypedStorage<1, 1>  mUnked6027;
        ::ll::UntypedStorage<1, 1>  mUnk12a360;
        ::ll::UntypedStorage<1, 1>  mUnk351487;
        ::ll::UntypedStorage<1, 1>  mUnkd1f2c4;
        ::ll::UntypedStorage<1, 1>  mUnkf0c77b;
        ::ll::UntypedStorage<1, 1>  mUnk7a6716;
        ::ll::UntypedStorage<8, 32> mUnk32a255;
        ::ll::UntypedStorage<8, 24> mUnk3aaed8;
        ::ll::UntypedStorage<1, 1>  mUnkeff0d7;
        ::ll::UntypedStorage<1, 1>  mUnkafa516;
        ::ll::UntypedStorage<1, 1>  mUnk4b7f87;
        ::ll::UntypedStorage<1, 1>  mUnk227431;
        ::ll::UntypedStorage<1, 1>  mUnk6b66c7;
        ::ll::UntypedStorage<1, 1>  mUnk468138;
        ::ll::UntypedStorage<4, 4>  mUnk241cfc;
        ::ll::UntypedStorage<8, 8>  mUnkc1eb70;
        ::ll::UntypedStorage<1, 1>  mUnkf20421;
        ::ll::UntypedStorage<8, 8>  mUnkf78b2d;
        ::ll::UntypedStorage<8, 8>  mUnk9f2779;
        ::ll::UntypedStorage<8, 32> mUnkb97fe3;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Data();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 160> mData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 160> mUnk83fb84;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DataBackedAppConfigs& operator=(DataBackedAppConfigs const&);
    DataBackedAppConfigs(DataBackedAppConfigs const&);
#endif // @header-generator platform
    DataBackedAppConfigs();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DataBackedAppConfigs() = default;
#else // @header-generator platform
    virtual ~DataBackedAppConfigs() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool arePremiumSkinPacksAllowed() const;
#else // @header-generator platform
    virtual bool arePremiumSkinPacksAllowed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool areResourcePacksAllowed() const;
#else // @header-generator platform
    virtual bool areResourcePacksAllowed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayScreenAllowed() const;
#else // @header-generator platform
    virtual bool isPlayScreenAllowed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isChatScreenAllowed() const;
#else // @header-generator platform
    virtual bool areEmotesSupported() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool areEmotesSupported() const;
#else // @header-generator platform
    virtual ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useNormalizedFontSize() const;
#else // @header-generator platform
    virtual bool useNormalizedFontSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useFullScreenByDefault() const;
#else // @header-generator platform
    virtual bool useFullScreenByDefault() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool muteByDefault() const;
#else // @header-generator platform
    virtual bool muteByDefault() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isCoursesCacheEnabled() const;
#else // @header-generator platform
    virtual bool isCoursesCacheEnabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldPromptBeforeExit() const;
#else // @header-generator platform
    virtual bool isChatScreenAllowed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool gameArgumentsNeedAuthentication() const;
#else // @header-generator platform
    virtual bool shouldPromptBeforeExit() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool worldBuilderDisabled() const;
#else // @header-generator platform
    virtual bool gameArgumentsNeedAuthentication() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool worldsAreSingleUse() const;
#else // @header-generator platform
    virtual ::EducationEditionOffer getEducationEditionOffering() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EducationEditionOffer getEducationEditionOffering() const;
#else // @header-generator platform
    virtual bool worldsAreSingleUse() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool requireTrustedContent() const;
#else // @header-generator platform
    virtual bool isSaveToCloudOn() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isExternalPlayerCommunicationAllowed() const;
#else // @header-generator platform
    virtual bool isEduAIOn() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool supports3DExport() const;
#else // @header-generator platform
    virtual bool isEduDedicatedServerOn() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool requireEduLevelSettings() const;
#else // @header-generator platform
    virtual void setIsEduDedicatedServerOn(bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ConnectionDefinition getConnectionDefinition() const;
#else // @header-generator platform
    virtual bool isTimeForEduDedicatedServerRefresh() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool supportsChangingMultiplayerDuringPlay() const;
#else // @header-generator platform
    virtual void setEduDedicatedServerRefreshed() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool webSocketsDisabled() const;
#else // @header-generator platform
    virtual void setEduDedicatedServerRefreshAfterSeconds(::std::chrono::seconds) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool sendPermissionsTelemetry() const;
#else // @header-generator platform
    virtual ::std::vector<::std::string> getExcludedCatalogueTags() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useEduDemoUpsellDialog() const;
#else // @header-generator platform
    virtual bool requireEduLevelSettings() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;
#else // @header-generator platform
    virtual bool requireTrustedContent() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSaveToCloudOn() const;
#else // @header-generator platform
    virtual bool supports3DExport() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEduAIOn() const;
#else // @header-generator platform
    virtual bool isExternalPlayerCommunicationAllowed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEduDedicatedServerOn() const;
#else // @header-generator platform
    virtual ::ConnectionDefinition getConnectionDefinition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setIsEduDedicatedServerOn(bool);
#else // @header-generator platform
    virtual bool supportsChangingMultiplayerDuringPlay() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTimeForEduDedicatedServerRefresh() const;
#else // @header-generator platform
    virtual bool worldBuilderDisabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setEduDedicatedServerRefreshed();
#else // @header-generator platform
    virtual bool webSocketsDisabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setEduDedicatedServerRefreshAfterSeconds(std::chrono::duration<long long, std::ratio<1, 1>>);
#else // @header-generator platform
    virtual bool sendPermissionsTelemetry() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getExcludedCatalogueTags() const;
#else // @header-generator platform
    virtual bool useEduDemoUpsellDialog() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<PackIdVersion> getAdditionalClientPacks(bool) const;
#else // @header-generator platform
    virtual ::std::vector<::PackIdVersion> getAdditionalClientPacks(bool enteringLevel) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getFeedbackURL() const;
#else // @header-generator platform
    virtual ::std::string getFeedbackURL() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyLevelDataOverride(::LevelData&) const;
#else // @header-generator platform
    virtual void applyLevelDataOverride(::LevelData&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
