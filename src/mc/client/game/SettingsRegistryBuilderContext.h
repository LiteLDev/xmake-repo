#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/MinecraftGameFeatures.h"
#include "mc/client/gui/SettingsModalType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/settings/Eventing.h"
#include "mc/client/settings/IBuilderContext.h"
#include "mc/client/sound/SoundOptions.h"
#include "mc/client/storagemanager/ContentType.h"
#include "mc/client/world/WorldSettings.h"
#include "mc/common/GameEditionProperties.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/RawInputType.h"
#include "mc/options/FeatureOptionID.h"
#include "mc/options/GraphicsMode.h"

// auto generated forward declare list
// clang-format off
class ContentAcquisition;
class ContentItemCollection;
class ContentLogFileEndPoint;
class Experiments;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IContentManager;
class ILevelListCache;
class IOptionRegistry;
class IScreenCapabilities;
class InputSettingsHandler;
class LevelDataWrapper;
class LocalPlayer;
class MinecraftCommands;
class PacketSender;
class ProfanityContext;
class RealmsAPI;
class ServerInstance;
class ServicesManager;
class StoreCatalogRepository;
class TrialManager;
struct SettingsScreenCapabilities;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class FilePathManager; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Parties { class PartySystem; }
namespace Realms { class RealmsSystem; }
namespace SDL { class SessionBinaries; }
namespace Social { class IGameConnectionInfoProvider; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
namespace StorageManager { class ContentItemProvider; }
namespace StorageManager { class WorldConverter; }
// clang-format on

class SettingsRegistryBuilderContext : public ::Settings::RegistryBuilder::IBuilderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>        mClient;
    ::ll::UntypedStorage<8, 88>                         mServerTabAvailable;
    ::ll::UntypedStorage<8, 24>                         mAdvancedGraphicsOptions;
    ::ll::UntypedStorage<8, 48>                         mNavigateToGammaCalibrationScreen;
    ::ll::UntypedStorage<8, 48>                         mExperimentsProvider;
    ::ll::UntypedStorage<8, 48>                         mIsEditorModeOrInEditorWorld;
    ::ll::TypedStorage<1, 1, bool>                      mShouldShowRequestPlaystationNetworkAuthorization;
    ::ll::UntypedStorage<8, 88>                         mShouldShowRequestPlaystationNetworkAuthorizationPublisher;
    ::ll::TypedStorage<8, 64, ::SoundOptions>           mSoundOptions;
    ::ll::TypedStorage<8, 16, ::Settings::Eventing>     mSettingsEventing;
    ::ll::TypedStorage<8, 1552, ::World::WorldSettings> mWorldSettings;
    ::ll::UntypedStorage<8, 112>                        mWorldSettingsRules;
    ::ll::UntypedStorage<8, 48>                         mIsInGame;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IScreenCapabilities>>                  mSettingsScreenCapabilities;
    ::ll::TypedStorage<8, 24, ::GameEditionProperties>                              mGameEditionProperties;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                    mLevelListCache;
    ::ll::TypedStorage<8, 8, ::ServerInstance*>                                     mServerInstance;
    ::ll::UntypedStorage<8, 24>                                                     mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>                             mRealmsAPI;
    ::ll::UntypedStorage<8, 24>                                                     mRealmsSystem;
    ::ll::UntypedStorage<8, 24>                                                     mPartySystem;
    ::ll::UntypedStorage<8, 24>                                                     mContentAcquisistion;
    ::ll::UntypedStorage<8, 8>                                                      mServicesManager;
    ::ll::UntypedStorage<8, 24>                                                     mFilePathManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManager::ContentItemProvider>> mStorageContentItemProvider;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManager::WorldConverter>>      mStorageWorldConverter;
    ::ll::UntypedStorage<8, 24>                                                     mContentLogFilePath;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                         mTaskGroup;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                         mIOTaskGroup;
    ::ll::UntypedStorage<8, 248>                                                    mAsyncTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsRegistryBuilderContext& operator=(SettingsRegistryBuilderContext const&);
    SettingsRegistryBuilderContext(SettingsRegistryBuilderContext const&);
    SettingsRegistryBuilderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SettingsRegistryBuilderContext();

    virtual bool isPreGame() const;

    virtual bool isSplitScreenActive() const;

    virtual bool isPrimaryClient() const;

    virtual bool isPlayerInEditor() const;

    virtual bool isEditorModeOrInEditorWorld() const;

    virtual ::IOptionRegistry const& getOptions() const;

    virtual ::IOptionRegistry& getOptions();

    virtual int getClampedGuiScaleOffset() const;

    virtual ::SoundOptions& getSoundOptions();

    virtual ::Social::IGameConnectionInfoProvider const& getGameConnectionInfoProvider() const;

    virtual ::Settings::Eventing& getSettingsEventing();

    virtual ::TrialManager& getTrialManager();

    virtual ::MinecraftCommands& getCommands();

    virtual ::InputSettingsHandler& getInputSettingsHandler() const;

    virtual ::WorldSettingsRules const& getWorldSettingsRules() const;

    virtual std::optional<std::string> getFeedbackUrl() const;

    virtual bool supportsFullScreen() const;

    virtual bool supportsUserDefinedSafeZone() const;

    virtual int getRecommendedRenderDistance(::GraphicsMode) const;

    virtual int getMaxGUIScaleIndex() const;

    virtual int getOptimalGUIScaleIndex() const;

    virtual ::InputMode getCurrentInputMode() const;

    virtual ::Bedrock::PubSub::Subscription registerToUIScreenSizeChangedEvent(std::function<void ()>);

    virtual ::Bedrock::PubSub::Subscription registerLevelChangedListener(std::function<void (LevelDataWrapper&)>);

    virtual ::Bedrock::PubSub::Subscription registerToServerFormDataAvailableEvent(std::function<void ()>);

    virtual bool isServerFormDataAvailable() const;

    virtual void pushRoute(std::string_view);

    virtual void pushSettingsTabWithModal(::SettingsTabIndex, ::SettingsModalType);

    virtual void pushToast(std::string_view);

    virtual bool supportsSetClipboard();

    virtual void navigateToJsonSettingsTab(::SettingsTabIndex);

    virtual void navigateToHowToPlayScreen();

    virtual void setClipboardData(std::string_view);

    virtual void launchURI(std::string const&);

    virtual void navigateToPendingRealmInvites();

    virtual void setInputBindingMode(::InputBindingMode);

    virtual ::InputBindingMode getInputBindingMode() const;

    virtual ::Bedrock::PubSub::Subscription registerToRawInputEvent(std::function<void (int, RawInputType, ButtonState, bool)>);

    virtual ::Bedrock::PubSub::Subscription registerToInputModeEvent(std::function<void (InputMode)>);

    virtual void navigateToCustomizeTouchControl();

    virtual void refreshClientInputConfig();

    virtual bool isGamePlayTipsEnabled() const;

    virtual bool isSignedInToXBL() const;

    virtual bool isEligibleForPauseFeature() const;

    virtual bool supportsTTSLanguage(std::string_view) const;

    virtual bool isTTSEnabled() const;

    virtual bool isMultiplayerClient() const;

    virtual bool hasLocalPlayer() const;

    virtual bool hasCommands() const;

    virtual ::LevelDataWrapper& getLevelDataWrapper();

    virtual ::PacketSender& getPacketSender();

    virtual bool supportsKeyboardAndMouse() const;

    virtual bool supportsGamepad() const;

    virtual bool supportsTouch() const;

    virtual bool isInRealms() const;

    virtual bool isRealmsEnabled() const;

    virtual bool isRealmsOwner() const;

    virtual bool isRealmsFeatureEnabled(std::string_view) const;

    virtual bool canUserDoActionForCurrentRealm(::Realms::PlayerRoleActions) const;

    virtual bool isConfigurableRealmsEnvironment() const;

    virtual bool isPartySystemAvailable() const;

    virtual bool isTrial() const;

    virtual ::SettingsScreenCapabilities const& getSettingsScreenCapabilities() const;

    virtual bool isEduEdition() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> getAdvancedGraphicsOptions();

    virtual void navigateToGammaCalibrationScreen();

    virtual bool supportsAntiAliasing() const;

    virtual bool supportsTextureStreaming() const;

    virtual bool supportsTexelAntiAliasing() const;

    virtual bool supportsAdvancedGraphics() const;

    virtual bool supportsDeferredGraphics() const;

    virtual bool supportsDeferredPointLights() const;

    virtual bool supportsImprovedInputResponse() const;

    virtual bool supportsSplitScreen() const;

    virtual bool isFeatureEnabled(::FeatureOptionID) const;

    virtual bool isGameFeatureEnabled(::MinecraftGameFeatures) const;

    virtual ::GameEditionProperties const& getGameEditionProperties() const;

    virtual std::optional<std::reference_wrapper<LocalPlayer>> const getLocalPlayer() const;

    virtual ::ProfanityContext const& getProfanityContext() const;

    virtual std::optional<std::string> getMinecraftAccountId() const;

    virtual void showUserSettings();

    virtual std::string getDeviceId() const;

    virtual bool shouldShowSignOutOfMicrosoftAccount() const;

    virtual void signOutFromMicrosoftAccount();

    virtual void clearSignInData();

    virtual void navigateToDeleteMicrosoftAccount();

    virtual bool shouldShowRequestPlaystationNetworkAuthorization() const;

    virtual ::Bedrock::PubSub::Subscription subscribeToShouldShowRequestPlaystationNetworkAuthorization(std::function<void ()>);

    virtual void requestPlaystationNetworkAuthorization();

    virtual bool isConsolePlatform() const;

    virtual bool isDesktopPlatform() const;

    virtual std::shared_ptr<Social::User> const& getUser() const;

    virtual void navigateToTabbedUpsell();

    virtual bool needPlatformConnectionBeforeXBLSignIn() const;

    virtual bool isWaitingForPlatformConnection() const;

    virtual void navigateToPlatformNetworkConnectConfirmation(std::function<void (bool)>);

    virtual void navigateToXBLSignIn();

    virtual void navigateToContentLogHistoryScreen();

    virtual bool isSupportingFramePacing() const;

    virtual void cancelAllDownloads() const;

    virtual ::StoreCatalogRepository& getStoreCatalogRepository() const;

    virtual std::shared_ptr<SDL::SessionBinaries> getServiceSessionBinaries() const;

    virtual ::Core::FilePathManager& getFilePathManager() const;

    virtual void navigateToDeleteAreaProgressScreen(std::string_view, std::chrono::duration<long long, std::ratio<1, 1>> const, std::chrono::duration<long long, std::ratio<1, 1>> const, std::vector<std::tuple<Core::PathBuffer<Core::BasicStackString<char, 1024>>, std::string>>, std::function<void ()>) const;

    virtual ::Bedrock::PubSub::Subscription registerToContentItemCollectionReload(::StorageManager::ContentType, std::function<void (ContentItemCollection&)>);

    virtual std::optional<std::reference_wrapper<ContentItemCollection>> const getVisibleContentItemCollection(::StorageManager::ContentType) const;

    virtual std::optional<std::reference_wrapper<StorageManager::WorldConverter>> getStorageWorldConverter() const;

    virtual void navigateToFetchLegacyWorldsScreen();

    virtual bool isCloudStorageManagerEnabled() const;

    virtual ::TaskGroup& getIOTaskGroup();

    virtual ::Bedrock::NonOwnerPointer<const ContentLogFileEndPoint> getContentLogFileEndPoint() const;

    virtual std::string getCurrentContentLogFileName();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SettingsRegistryBuilderContext(
        ::IClientInstance&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        std::function<void()>,
        std::function<const Experiments*()>,
        std::function<bool()>,
        ::ILevelListCache&,
        ::ServerInstance*,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>,
        std::weak_ptr<RealmsAPI>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsSystem>>,
        ::Bedrock::NonOwnerPointer<Parties::PartySystem>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentAcquisition>>,
        ::ServicesManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>>,
        ::IContentManager&,
        ::Bedrock::NonOwnerPointer<const ContentLogFileEndPoint>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IClientInstance&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        std::function<void()>,
        std::function<const Experiments*()>,
        std::function<bool()>,
        ::ILevelListCache&,
        ::ServerInstance*,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>,
        std::weak_ptr<RealmsAPI>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsSystem>>,
        ::Bedrock::NonOwnerPointer<Parties::PartySystem>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentAcquisition>>,
        ::ServicesManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>>,
        ::IContentManager&,
        ::Bedrock::NonOwnerPointer<const ContentLogFileEndPoint>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isPreGame() const;

    MCNAPI bool $isSplitScreenActive() const;

    MCNAPI bool $isPrimaryClient() const;

    MCNAPI bool $isPlayerInEditor() const;

    MCNAPI bool $isEditorModeOrInEditorWorld() const;

    MCNAPI ::IOptionRegistry const& $getOptions() const;

    MCNAPI ::IOptionRegistry& $getOptions();

    MCNAPI int $getClampedGuiScaleOffset() const;

    MCNAPI ::SoundOptions& $getSoundOptions();

    MCNAPI ::Social::IGameConnectionInfoProvider const& $getGameConnectionInfoProvider() const;

    MCNAPI ::Settings::Eventing& $getSettingsEventing();

    MCNAPI ::TrialManager& $getTrialManager();

    MCNAPI ::MinecraftCommands& $getCommands();

    MCNAPI ::InputSettingsHandler& $getInputSettingsHandler() const;

    MCNAPI ::WorldSettingsRules const& $getWorldSettingsRules() const;

    MCNAPI std::optional<std::string> $getFeedbackUrl() const;

    MCNAPI bool $supportsFullScreen() const;

    MCNAPI bool $supportsUserDefinedSafeZone() const;

    MCNAPI int $getRecommendedRenderDistance(::GraphicsMode) const;

    MCNAPI int $getMaxGUIScaleIndex() const;

    MCNAPI int $getOptimalGUIScaleIndex() const;

    MCNAPI ::InputMode $getCurrentInputMode() const;

    MCNAPI ::Bedrock::PubSub::Subscription $registerToUIScreenSizeChangedEvent(std::function<void()>);

    MCNAPI ::Bedrock::PubSub::Subscription $registerLevelChangedListener(std::function<void(LevelDataWrapper&)>);

    MCNAPI ::Bedrock::PubSub::Subscription $registerToServerFormDataAvailableEvent(std::function<void()>);

    MCNAPI bool $isServerFormDataAvailable() const;

    MCNAPI void $pushRoute(std::string_view);

    MCNAPI void $pushSettingsTabWithModal(::SettingsTabIndex, ::SettingsModalType);

    MCNAPI void $pushToast(std::string_view);

    MCNAPI bool $supportsSetClipboard();

    MCNAPI void $navigateToJsonSettingsTab(::SettingsTabIndex);

    MCNAPI void $navigateToHowToPlayScreen();

    MCNAPI void $setClipboardData(std::string_view);

    MCNAPI void $launchURI(std::string const&);

    MCNAPI void $navigateToPendingRealmInvites();

    MCNAPI void $setInputBindingMode(::InputBindingMode);

    MCNAPI ::InputBindingMode $getInputBindingMode() const;

    MCNAPI ::Bedrock::PubSub::Subscription
        $registerToRawInputEvent(std::function<void(int, RawInputType, ButtonState, bool)>);

    MCNAPI ::Bedrock::PubSub::Subscription $registerToInputModeEvent(std::function<void(InputMode)>);

    MCNAPI void $navigateToCustomizeTouchControl();

    MCNAPI void $refreshClientInputConfig();

    MCNAPI bool $isGamePlayTipsEnabled() const;

    MCNAPI bool $isSignedInToXBL() const;

    MCNAPI bool $isEligibleForPauseFeature() const;

    MCNAPI bool $supportsTTSLanguage(std::string_view) const;

    MCNAPI bool $isTTSEnabled() const;

    MCNAPI bool $isMultiplayerClient() const;

    MCNAPI bool $hasLocalPlayer() const;

    MCNAPI bool $hasCommands() const;

    MCNAPI ::LevelDataWrapper& $getLevelDataWrapper();

    MCNAPI ::PacketSender& $getPacketSender();

    MCNAPI bool $supportsKeyboardAndMouse() const;

    MCNAPI bool $supportsGamepad() const;

    MCNAPI bool $supportsTouch() const;

    MCNAPI bool $isInRealms() const;

    MCNAPI bool $isRealmsEnabled() const;

    MCNAPI bool $isRealmsOwner() const;

    MCNAPI bool $isRealmsFeatureEnabled(std::string_view) const;

    MCNAPI bool $canUserDoActionForCurrentRealm(::Realms::PlayerRoleActions) const;

    MCNAPI bool $isConfigurableRealmsEnvironment() const;

    MCNAPI bool $isPartySystemAvailable() const;

    MCNAPI ::SettingsScreenCapabilities const& $getSettingsScreenCapabilities() const;

    MCNAPI bool $isEduEdition() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> $getAdvancedGraphicsOptions();

    MCNAPI void $navigateToGammaCalibrationScreen();

    MCNAPI bool $supportsAntiAliasing() const;

    MCNAPI bool $supportsTextureStreaming() const;

    MCNAPI bool $supportsTexelAntiAliasing() const;

    MCNAPI bool $supportsAdvancedGraphics() const;

    MCNAPI bool $supportsDeferredGraphics() const;

    MCNAPI bool $supportsDeferredPointLights() const;

    MCNAPI bool $supportsImprovedInputResponse() const;

    MCNAPI bool $supportsSplitScreen() const;

    MCNAPI bool $isFeatureEnabled(::FeatureOptionID) const;

    MCNAPI bool $isGameFeatureEnabled(::MinecraftGameFeatures) const;

    MCNAPI ::GameEditionProperties const& $getGameEditionProperties() const;

    MCNAPI std::optional<std::reference_wrapper<LocalPlayer>> const $getLocalPlayer() const;

    MCNAPI ::ProfanityContext const& $getProfanityContext() const;

    MCNAPI std::optional<std::string> $getMinecraftAccountId() const;

    MCNAPI void $showUserSettings();

    MCNAPI std::string $getDeviceId() const;

    MCNAPI bool $shouldShowSignOutOfMicrosoftAccount() const;

    MCNAPI void $signOutFromMicrosoftAccount();

    MCNAPI void $clearSignInData();

    MCNAPI void $navigateToDeleteMicrosoftAccount();

    MCNAPI bool $shouldShowRequestPlaystationNetworkAuthorization() const;

    MCNAPI ::Bedrock::PubSub::Subscription
        $subscribeToShouldShowRequestPlaystationNetworkAuthorization(std::function<void()>);

    MCNAPI void $requestPlaystationNetworkAuthorization();

    MCNAPI bool $isConsolePlatform() const;

    MCNAPI bool $isDesktopPlatform() const;

    MCNAPI std::shared_ptr<Social::User> const& $getUser() const;

    MCNAPI void $navigateToTabbedUpsell();

    MCNAPI bool $needPlatformConnectionBeforeXBLSignIn() const;

    MCNAPI bool $isWaitingForPlatformConnection() const;

    MCNAPI void $navigateToPlatformNetworkConnectConfirmation(std::function<void(bool)>);

    MCNAPI void $navigateToXBLSignIn();

    MCNAPI void $navigateToContentLogHistoryScreen();

    MCNAPI bool $isSupportingFramePacing() const;

    MCNAPI void $cancelAllDownloads() const;

    MCNAPI ::StoreCatalogRepository& $getStoreCatalogRepository() const;

    MCNAPI std::shared_ptr<SDL::SessionBinaries> $getServiceSessionBinaries() const;

    MCNAPI ::Core::FilePathManager& $getFilePathManager() const;

    MCNAPI void $navigateToDeleteAreaProgressScreen(
        std::string_view,
        std::chrono::duration<long long, std::ratio<1, 1>> const,
        std::chrono::duration<long long, std::ratio<1, 1>> const,
        std::vector<std::tuple<Core::PathBuffer<Core::BasicStackString<char, 1024>>, std::string>>,
        std::function<void()>
    ) const;

    MCNAPI ::Bedrock::PubSub::Subscription $registerToContentItemCollectionReload(
        ::StorageManager::ContentType,
        std::function<void(ContentItemCollection&)>
    );

    MCNAPI std::optional<std::reference_wrapper<ContentItemCollection>> const
           $getVisibleContentItemCollection(::StorageManager::ContentType) const;

    MCNAPI std::optional<std::reference_wrapper<StorageManager::WorldConverter>> $getStorageWorldConverter() const;

    MCNAPI void $navigateToFetchLegacyWorldsScreen();

    MCNAPI bool $isCloudStorageManagerEnabled() const;

    MCNAPI ::TaskGroup& $getIOTaskGroup();

    MCNAPI ::Bedrock::NonOwnerPointer<const ContentLogFileEndPoint> $getContentLogFileEndPoint() const;

    MCNAPI std::string $getCurrentContentLogFileName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SettingsRegistryBuilderContext {};
#endif // @header-generator platform
