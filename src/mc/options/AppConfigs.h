#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AppPlatform;
#else // @header-generator platform
#endif // @header-generator platform
class IAppConfigData;
class IContentAccessibilityProvider;
#if defined(LL_PLAT_A) // @header-generator platform
class ISceneStack;
#else // @header-generator platform
#endif // @header-generator platform
class IScreenCapabilities;
class LevelData;
#if defined(LL_PLAT_A) // @header-generator platform
class SceneFactory;
#else // @header-generator platform
#endif // @header-generator platform
struct AppConfigsDependencies;
struct ConnectionDefinition;
struct LevelSummary;
struct PackIdVersion;
struct ScreenCapabilitiesRepo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ISceneStack;
class SceneFactory;
#endif // @header-generator platform
// clang-format on

class AppConfigs : public ::Bedrock::EnableNonOwnerReferences {
public:
    // AppConfigs inner types define
    enum class MaelstromEduUsabilityStatus : uchar {
        Unknown   = 0,
        Unallowed = 1,
        Allowed   = 2,
    };

    using LeaveGameCallback =
#if defined(LL_PLAT_A) // @header-generator platform
        std::function<void(const gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>&, SceneFactory&)>;
#else // @header-generator platform
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&, ::SceneFactory&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                       mCanAccessWorldCallback;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScreenCapabilitiesRepo>> mScreenCapabilities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<const AppConfigsDependencies>> const> mDependencies;
    ::ll::UntypedStorage<8, 48>                                                                    mLeaveGameCallback;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<bool(::LevelSummary const&)>> mCanAccessWorldCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenCapabilitiesRepo>>   mScreenCapabilities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::AppConfigsDependencies const>> const> mDependencies;
    ::ll::
        TypedStorage<8, 64, ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&, ::SceneFactory&)>>
            mLeaveGameCallback;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AppConfigs();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AppConfigs();
#else // @header-generator platform
    virtual ~AppConfigs() /*override*/ = default;
#endif // @header-generator platform

    virtual void loadFromData(::IAppConfigData const&);

    virtual bool arePremiumSkinPacksAllowed() const;

    virtual bool areResourcePacksAllowed() const;

    virtual bool isPlayScreenAllowed() const;

    virtual bool isChatScreenAllowed() const;

    virtual bool isGameTabShownInSettings() const;

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

    virtual bool allowGameArguments() const;

    virtual ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;

    virtual bool isSaveToCloudOn() const;

    virtual bool isEduAIOn() const;

    virtual bool isEduDedicatedServerOn() const;

    virtual void setIsEduDedicatedServerOn(bool);

    virtual bool isTimeForEduDedicatedServerRefresh() const;

    virtual void setEduDedicatedServerRefreshed();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setEduDedicatedServerRefreshAfterSeconds(std::chrono::duration<long long, std::ratio<1, 1>>);
#else // @header-generator platform
    virtual void setEduDedicatedServerRefreshAfterSeconds(::std::chrono::seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getExcludedCatalogueTags() const;
#else // @header-generator platform
    virtual ::std::vector<::std::string> getExcludedCatalogueTags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<PackIdVersion> getAdditionalClientPacks(bool) const;
#else // @header-generator platform
    virtual ::std::vector<::PackIdVersion> getAdditionalClientPacks(bool enteringLevel) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IScreenCapabilities> getScreenCapabilities(std::string const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::IScreenCapabilities> getScreenCapabilities(::std::string const& screenName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IContentAccessibilityProvider> createContentAccessibility() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::IContentAccessibilityProvider> createContentAccessibility() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getFeedbackURL() const;
#else // @header-generator platform
    virtual ::std::string getFeedbackURL() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getSettingsFeedbackURL() const;
#else // @header-generator platform
    virtual ::std::string getSettingsFeedbackURL() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getHelpCenterURL() const;
#else // @header-generator platform
    virtual ::std::string getHelpCenterURL() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getPrivacyAndOnlineSafetyURL() const;
#else // @header-generator platform
    virtual ::std::string getPrivacyAndOnlineSafetyURL() const;
#endif // @header-generator platform

    virtual void applyLevelDataOverride(::LevelData&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AppConfigs(::AppConfigsDependencies&&);

    MCNAPI bool canAccessWorld(::LevelSummary const&) const;

    MCNAPI void setLeaveGameOverride(
        std::function<void(const gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>&, SceneFactory&)>
    );

    MCNAPI bool tryLeaveGameOverride(::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&, ::SceneFactory&);
#else // @header-generator platform
    MCAPI explicit AppConfigs(::AppConfigsDependencies&& dependencies);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AppConfigsDependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::AppConfigsDependencies&& dependencies);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadFromData(::IAppConfigData const&);
#else // @header-generator platform
    MCFOLD void $loadFromData(::IAppConfigData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $arePremiumSkinPacksAllowed() const;
#else // @header-generator platform
    MCFOLD bool $arePremiumSkinPacksAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $areResourcePacksAllowed() const;
#else // @header-generator platform
    MCFOLD bool $areResourcePacksAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPlayScreenAllowed() const;
#else // @header-generator platform
    MCFOLD bool $isPlayScreenAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isChatScreenAllowed() const;
#else // @header-generator platform
    MCFOLD bool $isChatScreenAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isGameTabShownInSettings() const;
#else // @header-generator platform
    MCFOLD bool $isGameTabShownInSettings() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $areEmotesSupported() const;
#else // @header-generator platform
    MCFOLD bool $areEmotesSupported() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useNormalizedFontSize() const;
#else // @header-generator platform
    MCFOLD bool $useNormalizedFontSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useFullScreenByDefault() const;
#else // @header-generator platform
    MCFOLD bool $useFullScreenByDefault() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $muteByDefault() const;
#else // @header-generator platform
    MCFOLD bool $muteByDefault() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCoursesCacheEnabled() const;
#else // @header-generator platform
    MCFOLD bool $isCoursesCacheEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldPromptBeforeExit() const;
#else // @header-generator platform
    MCFOLD bool $shouldPromptBeforeExit() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $gameArgumentsNeedAuthentication() const;
#else // @header-generator platform
    MCFOLD bool $gameArgumentsNeedAuthentication() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $worldBuilderDisabled() const;
#else // @header-generator platform
    MCFOLD bool $worldBuilderDisabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $worldsAreSingleUse() const;
#else // @header-generator platform
    MCFOLD bool $worldsAreSingleUse() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EducationEditionOffer $getEducationEditionOffering() const;
#else // @header-generator platform
    MCFOLD ::EducationEditionOffer $getEducationEditionOffering() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $requireTrustedContent() const;
#else // @header-generator platform
    MCFOLD bool $requireTrustedContent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isExternalPlayerCommunicationAllowed() const;
#else // @header-generator platform
    MCFOLD bool $isExternalPlayerCommunicationAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supports3DExport() const;
#else // @header-generator platform
    MCAPI bool $supports3DExport() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $requireEduLevelSettings() const;
#else // @header-generator platform
    MCFOLD bool $requireEduLevelSettings() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ConnectionDefinition $getConnectionDefinition() const;
#else // @header-generator platform
    MCAPI ::ConnectionDefinition $getConnectionDefinition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsChangingMultiplayerDuringPlay() const;
#else // @header-generator platform
    MCFOLD bool $supportsChangingMultiplayerDuringPlay() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $webSocketsDisabled() const;
#else // @header-generator platform
    MCFOLD bool $webSocketsDisabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $sendPermissionsTelemetry() const;
#else // @header-generator platform
    MCFOLD bool $sendPermissionsTelemetry() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useEduDemoUpsellDialog() const;
#else // @header-generator platform
    MCFOLD bool $useEduDemoUpsellDialog() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowGameArguments() const;
#else // @header-generator platform
    MCFOLD bool $allowGameArguments() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AppConfigs::MaelstromEduUsabilityStatus $canUseMaelstrom() const;
#else // @header-generator platform
    MCFOLD ::AppConfigs::MaelstromEduUsabilityStatus $canUseMaelstrom() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSaveToCloudOn() const;
#else // @header-generator platform
    MCFOLD bool $isSaveToCloudOn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEduAIOn() const;
#else // @header-generator platform
    MCFOLD bool $isEduAIOn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEduDedicatedServerOn() const;
#else // @header-generator platform
    MCFOLD bool $isEduDedicatedServerOn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setIsEduDedicatedServerOn(bool);
#else // @header-generator platform
    MCFOLD void $setIsEduDedicatedServerOn(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTimeForEduDedicatedServerRefresh() const;
#else // @header-generator platform
    MCFOLD bool $isTimeForEduDedicatedServerRefresh() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setEduDedicatedServerRefreshed();
#else // @header-generator platform
    MCFOLD void $setEduDedicatedServerRefreshed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setEduDedicatedServerRefreshAfterSeconds(std::chrono::duration<long long, std::ratio<1, 1>>);
#else // @header-generator platform
    MCFOLD void $setEduDedicatedServerRefreshAfterSeconds(::std::chrono::seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getExcludedCatalogueTags() const;
#else // @header-generator platform
    MCFOLD ::std::vector<::std::string> $getExcludedCatalogueTags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<PackIdVersion> $getAdditionalClientPacks(bool) const;
#else // @header-generator platform
    MCAPI ::std::vector<::PackIdVersion> $getAdditionalClientPacks(bool enteringLevel) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IScreenCapabilities> $getScreenCapabilities(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::IScreenCapabilities> $getScreenCapabilities(::std::string const& screenName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IContentAccessibilityProvider> $createContentAccessibility() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::IContentAccessibilityProvider> $createContentAccessibility() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getFeedbackURL() const;
#else // @header-generator platform
    MCAPI ::std::string $getFeedbackURL() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getSettingsFeedbackURL() const;
#else // @header-generator platform
    MCAPI ::std::string $getSettingsFeedbackURL() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getHelpCenterURL() const;
#else // @header-generator platform
    MCAPI ::std::string $getHelpCenterURL() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getPrivacyAndOnlineSafetyURL() const;
#else // @header-generator platform
    MCAPI ::std::string $getPrivacyAndOnlineSafetyURL() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyLevelDataOverride(::LevelData&) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $applyLevelDataOverride(::LevelData&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
