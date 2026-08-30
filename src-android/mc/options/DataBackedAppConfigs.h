#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/options/AppConfigs.h"
#include "mc/options/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct AppConfigsDependencies;
struct ConnectionDefinition;
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
        // clang-format off
        ::ll::TypedStorage<1, 1, bool> mEnabled;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mRefreshAfterSeconds;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRefreshTime;
        // clang-format on
        // NOLINTEND
    };

    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    DataBackedAppConfigs();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataBackedAppConfigs() = default;

    virtual bool arePremiumSkinPacksAllowed() const;

    virtual bool areResourcePacksAllowed() const;

    virtual bool isPlayScreenAllowed() const;

    virtual bool isChatScreenAllowed() const;

    virtual bool areEmotesSupported() const;

    virtual bool useNormalizedFontSize() const;

    virtual bool useFullScreenByDefault() const;

    virtual bool muteByDefault() const;

    virtual bool isCoursesCacheEnabled() const;

    virtual bool shouldPromptBeforeExit() const;

    virtual bool gameArgumentsNeedAuthentication() const;

    virtual bool worldBuilderDisabled() const;

    virtual bool worldsAreSingleUse() const;

    virtual ::EducationEditionOffer getEducationEditionOffering() const;

    virtual bool requireTrustedContent() const;

    virtual bool isExternalPlayerCommunicationAllowed() const;

    virtual bool supports3DExport() const;

    virtual bool requireEduLevelSettings() const;

    virtual ::ConnectionDefinition getConnectionDefinition() const;

    virtual bool supportsChangingMultiplayerDuringPlay() const;

    virtual bool webSocketsDisabled() const;

    virtual bool sendPermissionsTelemetry() const;

    virtual bool useEduDemoUpsellDialog() const;

    virtual ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;

    virtual bool isSaveToCloudOn() const;

    virtual bool isEduAIOn() const;

    virtual bool isEduDedicatedServerOn() const;

    virtual void setIsEduDedicatedServerOn(bool);

    virtual bool isTimeForEduDedicatedServerRefresh() const;

    virtual void setEduDedicatedServerRefreshed();

    virtual void setEduDedicatedServerRefreshAfterSeconds(std::chrono::duration<long long, std::ratio<1, 1>>);

    virtual std::vector<std::string> getExcludedCatalogueTags() const;

    virtual std::vector<PackIdVersion> getAdditionalClientPacks(bool) const;

    virtual std::string getFeedbackURL() const;

    virtual void applyLevelDataOverride(::LevelData&) const;
    // NOLINTEND
};
