#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/FeedbackType.h"
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/EncyclopediaTopicIndex.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/ProgressContentType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/screens/OnlineSafetyDialogVisibility.h"
#include "mc/client/gui/screens/SelectWorldResult.h"
#include "mc/client/gui/screens/controllers/CreditsType.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/LibraryModalScreenType.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/controllers/SlotSelectedAction.h"
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"
#include "mc/client/gui/screens/controllers/UpdateVersionScreenContext.h"
#include "mc/client/gui/screens/interfaces/ISceneFactory.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/client/tts/TTSEnabledStatus.h"
#include "mc/deps/core/file/FileUploadType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/UploadState.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class AbstractScreenSetupCleanupStrategy;
class BaseScreen;
class BlockActor;
class BlockPos;
class CachedScenes;
class DlcId;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IContentKeyProvider;
class IContentManager;
class IMinecraftGame;
class ISceneStack;
class IStoreCatalogItem;
class IUIDefRepository;
class LayoutManager;
class LibraryCollection;
class LibraryItem;
class MinecraftScreenModel;
class OfferCollectionComponent;
class OnlineSafetyProgressHandler;
class PackManifestFactory;
class Player;
class ProgressHandler;
class RealmsCreateParams;
class ResourceLocation;
class SceneFactoryProxy;
class ScreenController;
class SkinPackCollectionModel;
class SkinPackModel;
class StoreCatalogItem;
class TaskGroup;
class UIControl;
class UIControlFactory;
class UIScene;
class UISoundPlayer;
class VisualTree;
struct ActiveDirectoryModalArgs;
struct ContentItem;
struct DimensionType;
struct EDULibraryCategory;
struct INpcDialogueData;
struct LegacyWorldInfo;
struct LevelSummary;
struct LinksToStyle;
struct ModalScreenData;
struct PackContentItem;
struct PackSettingsInfo;
struct StoreDataDrivenScreenParams;
struct UserManagementModalScreenData;
struct WorldTemplateInfo;
namespace Bedrock::StorageMigration { class StorageMigrationService; }
namespace Core { class Path; }
namespace Json { class Value; }
namespace OreUI { class SceneProvider; }
namespace Realms { struct InviteLink; }
namespace Realms { struct World; }
namespace Social { struct MultiIdentitySigninResult; }
// clang-format on

class SceneFactory : public ::ISceneFactory {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/client/events/OnlineSafetyDialogVisibility.h"
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/EncyclopediaTopicIndex.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/ProgressContentType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/screens/SelectWorldResult.h"
#include "mc/client/gui/screens/controllers/CreditsType.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/LibraryModalScreenType.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/controllers/SlotSelectedAction.h"
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"
#include "mc/client/gui/screens/controllers/UpdateVersionScreenContext.h"
#include "mc/client/gui/screens/interfaces/ISceneFactory.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/client/tts/TTSEnabledStatus.h"
#include "mc/deps/core/file/FileUploadType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/options/FeedbackType.h"
#include "mc/util/UploadState.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class BaseScreen;
class BlockActor;
class BlockPos;
class CachedScenes;
class DlcId;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IContentKeyProvider;
class IContentManager;
class IMinecraftGame;
class ISceneStack;
class IStoreCatalogItem;
class IUIDefRepository;
class LayoutManager;
class LibraryCollection;
class LibraryItem;
class MinecraftScreenModel;
class OfferCollectionComponent;
class OnlineSafetyProgressHandler;
class PackManifestFactory;
class Player;
class ProgressHandler;
class RealmsCreateParams;
class ResourceLocation;
class SceneFactoryProxy;
class ScreenController;
class TaskGroup;
class UIControl;
class UIControlFactory;
class UIScene;
class UISoundPlayer;
class VisualTree;
struct ActiveDirectoryModalArgs;
struct ActorUniqueID;
struct ContentItem;
struct DimensionType;
struct EDULibraryCategory;
struct INpcDialogueData;
struct LevelSummary;
struct ModalScreenData;
struct PackContentItem;
struct PackSettingsInfo;
struct StoreDataDrivenScreenParams;
struct UserManagementModalScreenData;
struct WorldTemplateInfo;
namespace Bedrock::StorageMigration { class StorageMigrationService; }
namespace Core { class Path; }
namespace Json { class Value; }
namespace OreUI { class SceneProvider; }
namespace Realms { struct InviteLink; }
namespace Realms { struct World; }
// clang-format on

class SceneFactory : public ::ISceneFactory {
#else // @header-generator platform
class SceneFactory {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // SceneFactory inner types declare
    // clang-format off
    struct PreCachePackage;
    // clang-format on

    // SceneFactory inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PreCachePackage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                       screenName;
        ::ll::TypedStorage<8, 16, std::shared_ptr<UIControlFactory>> controlFactory;
        ::ll::TypedStorage<8, 8, std::unique_ptr<VisualTree>>        visualTree;
        ::ll::TypedStorage<8, 8, std::unique_ptr<LayoutManager>>     layoutManager;
        ::ll::TypedStorage<8, 16, std::shared_ptr<UIControl>>        rootControl;
        ::ll::UntypedStorage<8, 16>                                  taskHandle;
        // NOLINTEND
    };

    using InGameScreenCreator = std::function<std::shared_ptr<UIScene>(
        SceneFactory&,
        IMinecraftGame&,
        IClientInstance&,
        const gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>&,
        const std::string&,
        Player&,
        const BlockPos&,
        ActorUniqueID
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                            mClient;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                            mMinecraft;
    ::ll::UntypedStorage<8, 24>                                                            mAdvancedGraphicsOptions;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                   mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                         mUseClientInstanceStack;
    ::ll::TypedStorage<8, 8, ::OreUI::SceneProvider&>                                      mSceneProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<UISoundPlayer>>                               mSoundPlayer;
    ::ll::TypedStorage<8, 8, ::CachedScenes&>                                              mCachedScenes;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SceneFactory::PreCachePackage>>> mPreCachePackages;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SceneFactoryProxy>>                           mProxy;
    ::ll::UntypedStorage<8, 40>                                                            mRegisteredInGameScreens;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSceneStackDestroyedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneFactory& operator=(SceneFactory const&);
    SceneFactory(SceneFactory const&);
    SceneFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SceneFactory();

    virtual std::shared_ptr<AbstractScene> createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab);

    virtual std::shared_ptr<AbstractScene> createStartMenuScreen(bool);

    virtual std::shared_ptr<AbstractScene> createStoreDataDrivenScreen(::StoreDataDrivenScreenParams const&, bool const, std::function<void ()>);

    virtual std::shared_ptr<AbstractScene> createDevConsole();

    virtual ::Json::Value createGlobalVars(::gsl::not_null<Bedrock::NonOwnerPointer<const IUIDefRepository>>) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SceneFactory(
        ::IMinecraftGame&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::OreUI::SceneProvider&
    );

    MCNAPI ::Json::Value _calculateSafeZoneSize(float const, float, bool, bool) const;

    MCNAPI std::shared_ptr<AbstractScene>
           _createPlayScreenImpl(::PlayScreenDefaultTab, std::string const&, std::function<void()>);

    MCNAPI ::Json::Value _createSafeZoneSizeVar(float const, float, bool, bool) const;

    MCNAPI std::shared_ptr<AbstractScene> _createScreen(std::shared_ptr<BaseScreen>);

    MCNAPI void _preCacheScreen(::Json::Value const&, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene>
           createAcceptDeclineInvitationScreen(std::string const&, std::string const&, std::function<void(bool, bool)>);

    MCNAPI std::shared_ptr<AbstractScene> createActiveDirectoryAuthenticationScreen(bool, ::LastClickedSource);

    MCNAPI std::shared_ptr<AbstractScene> createActiveDirectoryModal(::ActiveDirectoryModalArgs const&);

    MCNAPI std::shared_ptr<AbstractScene> createAddEditExternalServerScreen(int);

    MCNAPI std::shared_ptr<AbstractScene> createAdhocInProgressScreen(bool const);

    MCNAPI std::shared_ptr<AbstractScene> createAdhocScreen();

    MCNAPI std::shared_ptr<AbstractScene> createApplyResourcePacksScreen(std::function<void(MinecraftScreenModel&)>);

    MCNAPI std::shared_ptr<AbstractScene> createAutoSaveInfoScreen();

    MCNAPI std::shared_ptr<AbstractScene> createBetaFeedbackQrScreen(std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createBookScreen(int, bool, int, ::BlockActor*);

    MCNAPI std::shared_ptr<AbstractScene> createBundlePurchaseWarningScreen(
        ::IStoreCatalogItem const&,
        ::OfferCollectionComponent const&,
        std::function<void()>
    );

    MCNAPI std::shared_ptr<AbstractScene> createCannotUseNetworkFeaturesScreen();

    MCNAPI std::shared_ptr<AbstractScene> createCellularDataWarningScreen(std::function<void(bool)>);

    MCNAPI std::shared_ptr<AbstractScene> createChalkboardScreen(::BlockPos const&, bool);

    MCNAPI std::shared_ptr<AbstractScene> createChatScreen();

    MCNAPI std::shared_ptr<AbstractScene>
           createChooseRealmScreen(std::function<void(Realms::World)>, ::SlotSelectedAction, std::function<void()>);

    MCNAPI std::shared_ptr<AbstractScene> createCodeScreen(::OpenCodeMethod);

    MCNAPI std::shared_ptr<AbstractScene> createCommonDialogInfoScreen(std::string const&, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene>
           createConnectGamepadScreen(::GameControllerErrorType const, std::function<void()>);

    MCNAPI std::shared_ptr<AbstractScene> createConsoleScreen();

    MCNAPI std::shared_ptr<AbstractScene> createContentLogHistoryScreen();

    MCNAPI std::shared_ptr<AbstractScene> createCreditsScreen(::CreditsType, std::function<void()>);

    MCNAPI std::shared_ptr<AbstractScene> createCubeMapScreen(bool);

    MCNAPI std::shared_ptr<AbstractScene> createCustomTemplatesScreen(std::vector<WorldTemplateInfo> const&);

    MCNAPI std::shared_ptr<AbstractScene> createDayOneExperienceIntroPopup();

    MCNAPI std::shared_ptr<AbstractScene> createDayOneExperienceScreen();

    MCNAPI std::shared_ptr<AbstractScene> createDeathScreen();

    MCNAPI std::shared_ptr<AbstractScene> createDebugScreen();

    MCNAPI std::shared_ptr<AbstractScene> createDeeplinkConfirmationScreen(std::function<void(bool)>);

    MCNAPI std::shared_ptr<AbstractScene> createDeleteAccountScreen();

    MCNAPI std::shared_ptr<AbstractScene> createDeleteProgressScreen(
        std::string const&,
        ::IContentManager&,
        std::vector<std::shared_ptr<const ContentItem>>&&
    );

    MCNAPI std::shared_ptr<AbstractScene> createDimensionChangeProgressScreen(bool, ::DimensionType);

    MCNAPI std::shared_ptr<AbstractScene> createDisabledSkinScreen(bool, std::function<void()>);

    MCNAPI std::shared_ptr<AbstractScene>
           createDisconnectScreen(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene>
           createDlcProgressScreen(std::vector<DlcId> const&, std::function<void(bool, bool)>, bool, bool, bool);

    MCNAPI std::shared_ptr<AbstractScene> createEDULibraryCategoryScreen(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        int,
        std::vector<EDULibraryCategory> const&,
        bool
    );

    MCNAPI std::shared_ptr<AbstractScene> createEDUPlayScreen(std::string);

    MCNAPI std::shared_ptr<AbstractScene> createEDUServersScreen();

    MCNAPI std::shared_ptr<AbstractScene> createEDUWorldTemplatesScreen();

    MCNAPI std::shared_ptr<AbstractScene> createEDUWorldsScreen();

    MCNAPI std::shared_ptr<AbstractScene>
           createEditWorldScreen(::LevelSummary const&, std::string const&, std::function<void()>);

    MCNAPI std::shared_ptr<AbstractScene> createEmoteWheelScreen();

    MCNAPI std::shared_ptr<AbstractScene> createEncryptionWarningScreen(std::function<void(bool)>);

    MCNAPI std::shared_ptr<AbstractScene> createEncyclopediaScreen(::EncyclopediaTopicIndex);

    MCNAPI std::shared_ptr<AbstractScene> createExternalLinkDialogScreen(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void()> const&
    );

    MCNAPI std::shared_ptr<AbstractScene>
           createFeedbackPromptPopup(std::string const&, std::string const&, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createFileDownloadProgressScreen(
        std::string const&,
        int const,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void(bool)>
    );

    MCNAPI std::shared_ptr<AbstractScene> createFileUploadProgressScreen(
        std::string const&,
        std::string const&,
        int const,
        bool,
        ::Core::FileUploadType,
        std::function<void(UploadState, Realms::World)>
    );

    MCNAPI std::shared_ptr<AbstractScene> createGamepadDisconnectScreen();

    MCNAPI std::shared_ptr<AbstractScene> createGameplayScreen();

    MCNAPI std::shared_ptr<AbstractScene> createGammaCalibrationScreen();

    MCNAPI std::shared_ptr<AbstractScene> createGlobalPauseScreen();

    MCNAPI std::shared_ptr<AbstractScene> createHowToPlayScreen(::HowToPlayTopicIndex);

    MCNAPI std::shared_ptr<AbstractScene> createHudScreen();

    MCNAPI std::shared_ptr<AbstractScene> createIPSafetyDialogScreen(int);

    MCNAPI std::shared_ptr<AbstractScene> createImmersiveReader(std::string);

    MCNAPI std::shared_ptr<AbstractScene>
           createImportExportProgressScreen(std::string const&, std::string const&, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createInBedScreen();

    MCNAPI std::shared_ptr<AbstractScene> createInGameSceneFromUrl(std::string const&, ::OreUI::RouteMode);

    MCNAPI std::shared_ptr<AbstractScene>
           createInGameScreen(std::string const&, ::Player&, ::BlockPos const&, ::ActorUniqueID const);

    MCNAPI std::shared_ptr<AbstractScene> createInventoryScreen(::CraftingType);

    MCNAPI std::shared_ptr<AbstractScene> createInviteScreen();

    MCNAPI std::shared_ptr<AbstractScene> createLateJoinPreGameScreen(std::function<void()> const&, bool);

    MCNAPI std::shared_ptr<AbstractScene>
           createLeaveLevelScreen(std::string const&, std::deque<std::unique_ptr<ProgressHandler>>, bool);

    MCNAPI std::shared_ptr<AbstractScene> createLegacyCreateWorldFromTemplateScreen(::LevelSummary const&);

    MCNAPI std::shared_ptr<AbstractScene> createLegacyCreateWorldScreen();

    MCNAPI std::shared_ptr<AbstractScene> createLegacyRealmsPlusEndedScreen();

    MCNAPI std::shared_ptr<AbstractScene> createLegacyWorldTemplateLoadingScreen(std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createLessonCompleteScreen();

    MCNAPI std::shared_ptr<AbstractScene>
           createLibraryItemScreen(std::shared_ptr<LibraryItem>, std::unordered_map<std::string, std::string>);

    MCNAPI std::shared_ptr<AbstractScene> createLibraryModalScreen(
        ::LibraryModalScreenType,
        std::function<void(bool)>,
        std::vector<std::pair<std::string, std::string>>
    );

    MCNAPI std::shared_ptr<AbstractScene> createLibraryScreen(std::shared_ptr<LibraryCollection>);

    MCNAPI std::shared_ptr<AbstractScene>
           createLibrarySearchScreen(std::shared_ptr<LibraryCollection>, std::string const&, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createLibraryTagScreen(
        std::shared_ptr<LibraryCollection>,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI std::shared_ptr<AbstractScene> createLibraryWorldScreen(
        std::shared_ptr<LibraryCollection>,
        std::string,
        std::string,
        std::string,
        std::string const&
    );

    MCNAPI std::shared_ptr<AbstractScene>
           createLocalWorldPickerScreen(std::string const&, int const, std::function<void(UploadState, Realms::World)>);

    MCNAPI std::shared_ptr<AbstractScene> createMakeInfiniteScreen(::LevelSummary const&, ::StorageVersion);

    MCNAPI std::shared_ptr<AbstractScene> createManifestValidationScreen(
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::ResourceLocation const&,
        ::Core::Path const&,
        bool,
        std::shared_ptr<const PackContentItem> const
    );

    MCNAPI std::shared_ptr<AbstractScene>
           createMarketplacePassPDPScreen(::MarketplacePassTabIndex, ::sidebar::navigationLayout::Type);

    MCNAPI std::shared_ptr<AbstractScene> createMarketplacePassPurchaseAmazonDeviceWarningScreen();

    MCNAPI std::shared_ptr<AbstractScene> createMarketplacePassPurchaseWarningScreen();

    MCNAPI std::shared_ptr<AbstractScene> createMarketplacePassUpsellScreen();

    MCNAPI std::shared_ptr<AbstractScene> createMarketplacePassWelcomeScreen();

    MCNAPI std::shared_ptr<AbstractScene> createMobEffectsScreen();

    MCNAPI std::shared_ptr<AbstractScene> createModalProgressScreen(
        std::string const&,
        std::unique_ptr<ProgressHandler>,
        bool,
        bool,
        std::string const&,
        bool,
        float
    );

    MCNAPI std::shared_ptr<AbstractScene> createModalScreen(::ModalScreenData const&);

    MCNAPI std::shared_ptr<AbstractScene> createNetworkProgressScreen(
        std::string const&,
        std::unique_ptr<ProgressHandler>,
        bool,
        bool,
        ::OnlineSafetyDialogVisibility
    );

    MCNAPI std::shared_ptr<AbstractScene> createNetworkProgressScreen(
        std::string const&,
        std::deque<std::unique_ptr<ProgressHandler>>&&,
        bool,
        bool,
        ::OnlineSafetyDialogVisibility
    );

    MCNAPI std::shared_ptr<AbstractScene> createNoInvitesOrJoiningScreen();

    MCNAPI std::shared_ptr<AbstractScene> createNoLicenseScreen();

    MCNAPI std::shared_ptr<AbstractScene> createNoWifiWarningScreen();

    MCNAPI std::shared_ptr<AbstractScene> createNotSignedIntoNintendoScreen(std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createNpcInteractScreen(::Player&, std::shared_ptr<INpcDialogueData>);

    MCNAPI std::shared_ptr<AbstractScene>
           createOSWriteThrottleDialogScreen(std::chrono::duration<double, std::ratio<1, 1>>, std::shared_ptr<bool>);

    MCNAPI std::shared_ptr<AbstractScene> createOnlineSafetyDialogScreen(::OnlineSafetyProgressHandler&);

    MCNAPI std::shared_ptr<AbstractScene>
           createOptionsScreen(::SettingsTabIndex, bool, bool const, std::string const&, bool, bool);

    MCNAPI std::shared_ptr<AbstractScene>
    createOptionsScreen(::LevelSummary const&, ::SettingsTabIndex, bool, bool const, std::string const&, bool, bool);

    MCNAPI std::shared_ptr<AbstractScene> createPackSettingsScreen(::PackSettingsInfo);

    MCNAPI std::shared_ptr<AbstractScene> createPauseScreen(bool);

    MCNAPI std::shared_ptr<AbstractScene> createPermissionsScreen(::ActorUniqueID);

    MCNAPI std::shared_ptr<AbstractScene> createPlatformNetworkConnectConfirmationScreen(std::function<void(bool)>);

    MCNAPI std::shared_ptr<AbstractScene> createPlatformSplitScreenConnectConfirmationScreen(std::function<void(bool)>);

    MCNAPI std::shared_ptr<AbstractScene> createPlatformStoreConnectConfirmationScreen(std::function<void(bool)>);

    MCNAPI std::shared_ptr<AbstractScene> createPlayScreen(::PlayScreenDefaultTab, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createPortfolioScreen();

    MCNAPI std::shared_ptr<AbstractScene>
           createProgressScreen(std::string const&, std::unique_ptr<ProgressHandler>, bool, bool, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createProgressScreen(
        std::string const&,
        std::deque<std::unique_ptr<ProgressHandler>>&&,
        bool,
        bool,
        std::string const&
    );

    MCNAPI std::shared_ptr<AbstractScene> createProgressScreen(
        std::string const&,
        std::deque<std::unique_ptr<ProgressHandler>>,
        bool,
        bool,
        bool,
        bool,
        ::ProgressContentType,
        ::GameType
    );

    MCNAPI std::shared_ptr<AbstractScene>
           createRatingPromptPopup(std::string const&, std::string const&, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene>
           createRealmNetworkProgressScreen(std::string const&, std::unique_ptr<ProgressHandler>);

    MCNAPI std::shared_ptr<AbstractScene>
           createRealmsAllowListScreen(::Realms::World const&, std::function<void()>, bool);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsCreateScreen(::RealmsCreateParams const&);

    MCNAPI std::shared_ptr<AbstractScene>
           createRealmsInviteLinkSettingScreen(::Realms::World const&, ::Realms::InviteLink const&, ::SettingsTabIndex);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsInviteLinksScreen(::Realms::World const&);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsJoinProgressScreen(
        std::string const&,
        std::unique_ptr<ProgressHandler>,
        std::unique_ptr<ProgressHandler>,
        bool,
        bool,
        std::function<void()>
    );

    MCNAPI std::shared_ptr<AbstractScene> createRealmsManageMembersScreen(::Realms::World const&);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsManageScreen(::Realms::World const&, ::SettingsTabIndex);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsPackErrorsScreen();

    MCNAPI std::shared_ptr<AbstractScene> createRealmsPendingInvitesScreen(bool);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsPlusPurchaseWarningScreen(std::function<void()>);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsSavesScreen(::Realms::World const&);

    MCNAPI std::shared_ptr<AbstractScene>
           createRealmsSettingsScreen(::Realms::World const&, ::SettingsTabIndex, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsSharingLauncherScreen(std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsSlotSettingsScreen(::Realms::World const&, ::SettingsTabIndex);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsSlotsScreen(::Realms::World&);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsStoriesTransitionScreen(::Realms::World const&);

    MCNAPI std::shared_ptr<AbstractScene> createRealmsWarningScreen();

    MCNAPI std::shared_ptr<AbstractScene>
    createRealmsWarningScreenWithParams(::Realms::World const&, std::string const&, int, std::string const&, int);

    MCNAPI std::shared_ptr<AbstractScene> createSafeZoneScreen();

    MCNAPI std::shared_ptr<AbstractScene> createSceneFromUrl(std::string const&, ::OreUI::RouteMode);

    MCNAPI std::shared_ptr<AbstractScene> createScreenshotScreen();

    MCNAPI std::shared_ptr<AbstractScene> createSelectWorldScreen(
        std::function<void(SelectWorldResult, optional_ref<const LevelSummary>, optional_ref<const Realms::World>)>
    );

    MCNAPI std::shared_ptr<AbstractScene> createServerForm(uint, std::string const&);

    MCNAPI std::shared_ptr<AbstractScene>
           createServerTrustModalScreen(std::string, ::Bedrock::Threading::AsyncPromise<bool>);

    MCNAPI std::shared_ptr<AbstractScene> createSignScreen(::BlockPos const&, ::BlockActorType, bool);

    MCNAPI std::shared_ptr<AbstractScene> createStorageMigrationProgressScreen(
        ::Bedrock::NonOwnerPointer<Bedrock::StorageMigration::StorageMigrationService> const&
    );

    MCNAPI std::shared_ptr<AbstractScene> createStorageSpaceWarningScreen(std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createStoreFeaturesDisabledScreen(std::string const&);

    MCNAPI std::shared_ptr<AbstractScene>
           createStoreInventoryScreen(::InventoryTabIndex, std::optional<StoreDataDrivenScreenParams>);

    MCNAPI std::shared_ptr<AbstractScene> createSubmitFeedbackScreen(::FeedbackType, std::string const&, int);

    MCNAPI std::shared_ptr<AbstractScene> createSunsettingScreen(std::string&);

    MCNAPI std::shared_ptr<AbstractScene> createTTSEnabledWarningScreen(::TTSEnabledStatus);

    MCNAPI std::shared_ptr<AbstractScene> createTTSErrorScreen();

    MCNAPI std::shared_ptr<AbstractScene> createToastScreen();

    MCNAPI std::shared_ptr<AbstractScene> createTokenFAQScreen();

    MCNAPI std::shared_ptr<AbstractScene> createTokenPopupScreen();

    MCNAPI std::shared_ptr<AbstractScene> createTrade2Screen(::Player&, ::ActorUniqueID const&);

    MCNAPI std::shared_ptr<AbstractScene> createTradeScreen(::Player&, ::ActorUniqueID const&);

    MCNAPI std::shared_ptr<UIScene>
           createUIScene(::IMinecraftGame&, ::IClientInstance&, std::string const&, std::shared_ptr<ScreenController>);

    MCNAPI std::shared_ptr<AbstractScene> createUpdateWorldHeightScreen(std::function<void(bool)>);

    MCNAPI std::shared_ptr<AbstractScene> createUpsellScreen(bool, bool);

    MCNAPI std::shared_ptr<AbstractScene>
           createUserManagementModalScreen(::UserManagementModalScreenData const&, std::function<void(bool)>);

    MCNAPI std::shared_ptr<AbstractScene> createVersionUpdateScreen(::UpdateVersionScreenContext);

    MCNAPI std::shared_ptr<AbstractScene> createWin10TrialConversionScreen();

    MCNAPI std::shared_ptr<AbstractScene>
           createWorldConversionCompleteScreen(std::string const&, std::function<void()>);

    MCNAPI std::shared_ptr<AbstractScene> createWorldRecoveryScreen(std::function<void()>);

    MCNAPI std::shared_ptr<AbstractScene>
           createWorldSeedCatalogScreen(std::function<void(const std::string&, const std::string&, const Core::Path&)>);

    MCNAPI std::shared_ptr<AbstractScene> createWorldTemplateScreen(bool);

    MCNAPI std::shared_ptr<AbstractScene> createXblConsoleQrSignInScreen(std::string const&);

    MCNAPI std::shared_ptr<AbstractScene> createXblConsoleSignInScreen(std::string const&);

    MCNAPI std::shared_ptr<AbstractScene>
           createXblImmediateSignInScreen(std::string const&, std::string const&, bool const);

    MCNAPI std::shared_ptr<AbstractScene>
           createXblImmediateSignInScreen(std::string const&, std::function<void()>, std::function<void()>);

    MCNAPI ::Json::Value generateGlobalVars(std::string const&, ::ScreenController&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> getCurrentSceneStack();

    MCNAPI bool isUsingClientSceneStack();

    MCNAPI void precacheGameplayScreens();

    MCNAPI void precacheOreUIGameplayViews();

    MCNAPI void registerInGameScreen(
        std::string const&,
        std::function<std::shared_ptr<UIScene>(
            SceneFactory&,
            IMinecraftGame&,
            IClientInstance&,
            const gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>&,
            const std::string&,
            Player&,
            const BlockPos&,
            ActorUniqueID
        )>
    );

    MCNAPI void registerInGameScreen(
        std::string const&,
        std::string const&,
        std::function<std::shared_ptr<UIScene>(
            SceneFactory&,
            IMinecraftGame&,
            IClientInstance&,
            const gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>&,
            const std::string&,
            Player&,
            const BlockPos&,
            ActorUniqueID
        )>
    );

    MCNAPI void resetSceneStackForOutOfGameUse();

    MCNAPI bool screenPrecacheInProgress() const;

    MCNAPI void setIsEditorModeEnabled(bool);

    MCNAPI void setUseClientInstanceStack(bool const);

    MCNAPI void terminateAsyncUILoading();

    MCNAPI void unregisterInGameScreens();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IMinecraftGame&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::OreUI::SceneProvider&
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
    MCNAPI std::shared_ptr<AbstractScene> $createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab);

    MCNAPI std::shared_ptr<AbstractScene> $createStartMenuScreen(bool);

    MCNAPI std::shared_ptr<AbstractScene>
           $createStoreDataDrivenScreen(::StoreDataDrivenScreenParams const&, bool const, std::function<void()>);

    MCNAPI std::shared_ptr<AbstractScene> $createDevConsole();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PreCachePackage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                         screenName;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControlFactory>> controlFactory;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VisualTree>>        visualTree;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LayoutManager>>     layoutManager;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>>        rootControl;
        ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>     taskHandle;
        // NOLINTEND
    };

    using InGameScreenCreator = ::std::function<::std::shared_ptr<::UIScene>(
        ::SceneFactory&,
        ::IMinecraftGame&,
        ::IClientInstance&,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&,
        ::std::string const&,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>          mClient;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                          mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                             mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                       mUseClientInstanceStack;
    ::ll::TypedStorage<8, 8, ::OreUI::SceneProvider&>                                    mSceneProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UISoundPlayer>>                         mSoundPlayer;
    ::ll::TypedStorage<8, 8, ::CachedScenes&>                                            mCachedScenes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SceneFactory::PreCachePackage>>> mPreCachePackages;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SceneFactoryProxy>>                             mProxy;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::std::pair<
                ::std::string,
                ::std::function<::std::shared_ptr<::UIScene>(
                    ::SceneFactory&,
                    ::IMinecraftGame&,
                    ::IClientInstance&,
                    ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&,
                    ::std::string const&,
                    ::Player&,
                    ::BlockPos const&,
                    ::ActorUniqueID
                )>>>>
                                                               mRegisteredInGameScreens;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSceneStackDestroyedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneFactory& operator=(SceneFactory const&);
    SceneFactory(SceneFactory const&);
    SceneFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SceneFactory() /*override*/;

    virtual ::std::shared_ptr<::AbstractScene> createDevConsole();

    virtual ::std::shared_ptr<::AbstractScene>
    createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab tab) /*override*/;

    virtual ::std::shared_ptr<::AbstractScene> createStoreDataDrivenScreen(
        ::StoreDataDrivenScreenParams const& params,
        bool const                           forceDisableProgressScreen,
        ::std::function<void()>              initializedCallback
    ) /*override*/;

    virtual ::std::shared_ptr<::AbstractScene> createStartMenuScreen(bool shouldSendEvent) /*override*/;

    virtual ::Json::Value
    createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SceneFactory(
        ::IMinecraftGame&                                                minecraft,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider
    );

    MCAPI ::Json::Value _calculateSafeZoneSize(
        float safeZoneScaleFactor,
        float screenPositionOffset,
        bool  horizontal,
        bool  isToporLeft
    ) const;

    MCAPI ::std::shared_ptr<::AbstractScene> _createPlayScreenImpl(
        ::PlayScreenDefaultTab  tab,
        ::std::string const&    dirtyLevelId,
        ::std::function<void()> initializedCallback
    );

    MCAPI ::Json::Value _createSafeZoneSizeVar(
        float safeZoneScaleFactor,
        float screenPositionOffset,
        bool  horizontal,
        bool  isToporLeft
    ) const;

    MCAPI ::std::shared_ptr<::AbstractScene> _createScreen(::std::shared_ptr<::BaseScreen> newScreen);

    MCAPI void _preCacheScreen(::Json::Value const& globalVars, ::std::string const& screenName);

    MCAPI ::std::shared_ptr<::AbstractScene> createAcceptDeclineInvitationScreen(
        ::std::string const&              title,
        ::std::string const&              subtitle,
        ::std::function<void(bool, bool)> callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createActiveDirectoryAuthenticationScreen(bool displaySignIn, ::LastClickedSource lastClickedSource);

    MCAPI ::std::shared_ptr<::AbstractScene> createActiveDirectoryModal(::ActiveDirectoryModalArgs const& args);

    MCAPI ::std::shared_ptr<::AbstractScene> createAddEditExternalServerScreen(int id);

    MCAPI ::std::shared_ptr<::AbstractScene> createAdhocInProgressScreen(bool enableAdhoc);

    MCAPI ::std::shared_ptr<::AbstractScene> createAdhocScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createApplyResourcePacksScreen(::std::function<void(::MinecraftScreenModel&)> applyPacks);

    MCAPI ::std::shared_ptr<::AbstractScene> createAutoSaveInfoScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createBetaFeedbackQrScreen(::std::string const& feedbackUrl);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createBookScreen(int bookSlot, bool editable, int page, ::BlockActor* lectern);

    MCAPI ::std::shared_ptr<::AbstractScene> createBundlePurchaseWarningScreen(
        ::IStoreCatalogItem const&        catalogItem,
        ::OfferCollectionComponent const& bundleCollection,
        ::std::function<void()>           onPurchaseCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createCannotUseNetworkFeaturesScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createCellularDataWarningScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createChalkboardScreen(::BlockPos const& pos, bool lockVisible);

    MCAPI ::std::shared_ptr<::AbstractScene> createChatScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createChooseRealmScreen(
        ::std::function<void(::Realms::World)> callback,
        ::SlotSelectedAction                   action,
        ::std::function<void()>                onCancelCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createCodeScreen(::OpenCodeMethod openMethod);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createCommonDialogInfoScreen(::std::string const& dialogTitle, ::std::string const& dialogBody);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createConnectGamepadScreen(::GameControllerErrorType controllerError, ::std::function<void()> onCompleteCallback);

    MCAPI ::std::shared_ptr<::AbstractScene> createConsoleScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createContentLogHistoryScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createCreditsScreen(::CreditsType contentType, ::std::function<void()> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createCubeMapScreen(bool flushable);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createCustomTemplatesScreen(::std::vector<::WorldTemplateInfo> const& customTemplates);

    MCAPI ::std::shared_ptr<::AbstractScene> createDayOneExperienceIntroPopup();

    MCAPI ::std::shared_ptr<::AbstractScene> createDayOneExperienceScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createDeathScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createDebugScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createDeeplinkConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createDeleteAccountScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createDeleteProgressScreen(
        ::std::string const&                                    uniqueEventName,
        ::IContentManager&                                      contentManager,
        ::std::vector<::std::shared_ptr<::ContentItem const>>&& itemsToDelete
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createDimensionChangeProgressScreen(bool localServer, ::DimensionType targetDimensionID);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createDisabledSkinScreen(bool twoButtonWithCallback, ::std::function<void()> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createDisconnectScreen(
        ::std::string const& titleMessage,
        ::std::string const& displayMessage,
        ::std::string const& screenNameOverride,
        ::std::string const& telemetryOverride
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createDlcProgressScreen(
        ::std::vector<::DlcId> const&     dlcIds,
        ::std::function<void(bool, bool)> callback,
        bool                              showCloseButton,
        bool                              processingUpdates,
        bool                              requireCancelToExit
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createEDULibraryCategoryScreen(
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       description,
        ::std::string const&                       screenshotRatio,
        int                                        columnCount,
        ::std::vector<::EDULibraryCategory> const& categories,
        bool                                       firstPage
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createEDUPlayScreen(::std::string initialCode);

    MCAPI ::std::shared_ptr<::AbstractScene> createEDUServersScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createEDUWorldTemplatesScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createEDUWorldsScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createEditWorldScreen(
        ::LevelSummary const&   levelSummary,
        ::std::string const&    packId,
        ::std::function<void()> onOpenCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createEmoteWheelScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createEncryptionWarningScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createEncyclopediaScreen(::EncyclopediaTopicIndex startingTopicIndex);

    MCAPI ::std::shared_ptr<::AbstractScene> createExternalLinkDialogScreen(
        ::std::string const&           title,
        ::std::string const&           externalLink,
        ::std::string const&           message,
        ::std::string const&           goToPageText,
        ::std::string const&           secondButtonText,
        ::std::function<void()> const& callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createFeedbackPromptPopup(::std::string const& title, ::std::string const& image, ::std::string const& buttonName);

    MCAPI ::std::shared_ptr<::AbstractScene> createFileDownloadProgressScreen(
        ::std::string const&        realmID,
        int                         slotIndex,
        ::std::string const&        realmName,
        ::std::string const&        realmVersion,
        ::std::string const&        realmVersionName,
        ::std::function<void(bool)> callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createFileUploadProgressScreen(
        ::std::string const&                                  realmID,
        ::std::string const&                                  fileID,
        int                                                   slotIndex,
        bool                                                  needArchiving,
        ::Core::FileUploadType                                fileUploadType,
        ::std::function<void(::UploadState, ::Realms::World)> callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createGameInputErrorScreen(::std::function<void()> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createGamepadDisconnectScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createGameplayScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createGammaCalibrationScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createGlobalPauseScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createHowToPlayScreen(::HowToPlayTopicIndex startingTopicIndex);

    MCAPI ::std::shared_ptr<::AbstractScene> createHudScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createIPSafetyDialogScreen(int externalServerId);

    MCAPI ::std::shared_ptr<::AbstractScene> createImmersiveReader(::std::string readerText);

    MCAPI ::std::shared_ptr<::AbstractScene> createImportExportProgressScreen(
        ::std::string const& titleText,
        ::std::string const& uniqueEventName,
        ::std::string const& messageText
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createInBedScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createInGameSceneFromUrl(::std::string const& url, ::OreUI::RouteMode mode);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createInGameScreen(::std::string const& name, ::Player& player, ::BlockPos const& pos, ::ActorUniqueID uniqueId);

    MCAPI ::std::shared_ptr<::AbstractScene> createInventoryScreen(::CraftingType craftingType);

    MCAPI ::std::shared_ptr<::AbstractScene> createInviteScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createLateJoinPreGameScreen(::std::function<void()> const& userReadyCallback, bool hasXBLBroadcast);

    MCAPI ::std::shared_ptr<::AbstractScene> createLeaveLevelScreen(
        ::std::string const&                               uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressHandlerList,
        bool                                               loadAssets
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createLegacyCreateWorldFromTemplateScreen(::LevelSummary const& levelSummary);

    MCAPI ::std::shared_ptr<::AbstractScene> createLegacyCreateWorldScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createLegacyRealmsPlusEndedScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createLegacyWorldTemplateLoadingScreen(::std::string const& manifestId);

    MCAPI ::std::shared_ptr<::AbstractScene> createLessonCompleteScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryItemScreen(
        ::std::shared_ptr<::LibraryItem>                   item,
        ::std::unordered_map<::std::string, ::std::string> additionalOptions
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryModalScreen(
        ::LibraryModalScreenType                                 type,
        ::std::function<void(bool)>                              callback,
        ::std::vector<::std::pair<::std::string, ::std::string>> eventProperties
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryScreen(::std::shared_ptr<::LibraryCollection> collection);

    MCAPI ::std::shared_ptr<::AbstractScene> createLibrarySearchScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string const&                   libraryTitle,
        ::std::string const&                   libraryIcon
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryTagScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string const&                   libraryTitle,
        ::std::string const&                   libraryIcon,
        ::std::string const&                   libraryPageDescription
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryWorldScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string                          libraryTitle,
        ::std::string                          libraryIcon,
        ::std::string                          libraryPageDescription,
        ::std::string const&                   categoryTitle
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLocalWorldPickerScreen(
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        ::std::function<void(::UploadState, ::Realms::World)> callbackAfterUpload
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createMakeInfiniteScreen(::LevelSummary const& editedLevel, ::StorageVersion storageVersion);

    MCAPI ::std::shared_ptr<::AbstractScene> createManifestValidationScreen(
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::ResourceLocation const&                                         resourceLocation,
        ::Core::Path const&                                               originalFilePath,
        bool                                                              packInUserDataPath,
        ::std::shared_ptr<::PackContentItem const>                        item
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPDPScreen(
        ::MarketplacePassTabIndex         tabIndex,
        ::sidebar::navigationLayout::Type sidebarLayoutType
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPurchaseAmazonDeviceWarningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPurchaseWarningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassUpsellScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassWelcomeScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMigrationErrorScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMobEffectsScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createModalProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 forceRenderBelow,
        ::std::string const&                 screenNameOverride,
        bool                                 isCancellable,
        float                                backgroundFillAlpha
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createModalScreen(::ModalScreenData const& modalScreenData);

    MCAPI ::std::shared_ptr<::AbstractScene> createNetworkProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        bool                                 allowSmallDownloads,
        bool                                 sendProgressTelem,
        ::OnlineSafetyDialogVisibility       onlineSafetyDialogVisibility
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createNetworkProgressScreen(
        ::std::string const&                                 uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>>&& connectHandlers,
        bool                                                 allowSmallDownloads,
        bool                                                 sendProgressTelem,
        ::OnlineSafetyDialogVisibility                       onlineSafetyDialogVisibility
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createNoInvitesOrJoiningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createNoLicenseScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createNoWifiWarningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createNotSignedIntoNintendoScreen(::std::string const& messageOverride);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createNpcInteractScreen(::Player& player, ::std::shared_ptr<::INpcDialogueData> data);

    MCAPI ::std::shared_ptr<::AbstractScene> createOSWriteThrottleDialogScreen(
        ::std::chrono::duration<double, ::std::ratio<1, 1>> totalWait,
        ::std::shared_ptr<bool>                             dialogStillAlive
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createOnlineSafetyDialogScreen(::OnlineSafetyProgressHandler& handler);

    MCAPI ::std::shared_ptr<::AbstractScene> createOptionsScreen(
        ::LevelSummary const& levelSummary,
        ::SettingsTabIndex    startingTabIndex,
        bool                  navToMenuOnExit,
        bool                  maintainOldFocus,
        ::std::string const&  initialPackId,
        bool                  fullscreen,
        bool                  legacySyncOnly
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createPackSettingsScreen(::PackSettingsInfo packSettingsInfo);

    MCAPI ::std::shared_ptr<::AbstractScene> createPauseScreen(bool overlaySocialDrawerOnce);

    MCAPI ::std::shared_ptr<::AbstractScene> createPermissionsScreen(::ActorUniqueID defaultPlayerId);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createPlatformNetworkConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createPlatformSplitScreenConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createPlatformStoreConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createPortfolioScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 sendProgressTelem,
        ::std::string const&                 overrideScreen
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createProgressScreen(
        ::std::string const&                                 uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>>&& progressHandlerList,
        bool                                                 loadAssets,
        bool                                                 sendProgressTelem,
        ::std::string const&                                 overrideScreen
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createProgressScreen(
        ::std::string const&                               uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressHandlerList,
        bool                                               loadAssets,
        bool                                               sendProgressTelem,
        bool                                               useRandomProgressMessage,
        bool                                               allowSmallDownloads,
        ::ProgressContentType                              contentType,
        ::GameType                                         gameType
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createRatingPromptPopup(::std::string const& title, ::std::string const& image, ::std::string const& buttonName);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmNetworkProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsAllowListScreen(
        ::Realms::World const&  world,
        ::std::function<void()> followUpActionAfterCreation,
        bool                    forceNewWorld
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsCreateScreen(::RealmsCreateParams const& screenDetails);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsInviteLinkSettingScreen(
        ::Realms::World const&      world,
        ::Realms::InviteLink const& link,
        ::SettingsTabIndex          initialTab
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsInviteLinksScreen(::Realms::World const& world);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsJoinProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 realmsPlusExpired,
        ::std::function<void()>              onlineSafetyCancelledCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsManageMembersScreen(::Realms::World const& world);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createRealmsManageScreen(::Realms::World const& world, ::SettingsTabIndex initialTab);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsPackErrorsScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsPendingInvitesScreen(bool hasPendingInvites);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsPlusPurchaseWarningScreen(::std::function<void()> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsSavesScreen(::Realms::World const& world);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsSettingsScreen(
        ::Realms::World const& world,
        ::SettingsTabIndex     initialTab,
        ::std::string const&   initialPackId
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsSharingLauncherScreen(::std::string const& realmsInvite);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createRealmsSlotSettingsScreen(::Realms::World const& world, ::SettingsTabIndex initialTab);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsSlotsScreen(::Realms::World& world);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsStoriesTransitionScreen(::Realms::World const& world);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsWarningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsWarningScreenWithParams(
        ::Realms::World const& world,
        ::std::string const&   ip,
        int                    port,
        ::std::string const&   serverRegion,
        int                    serviceQuality
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createSafeZoneScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createSceneFromUrl(::std::string const& url, ::OreUI::RouteMode mode);

    MCAPI ::std::shared_ptr<::AbstractScene> createScreenshotScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createSelectWorldScreen(
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>
            callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createServerForm(uint formId, ::std::string const& formJSON);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createServerTrustModalScreen(::std::string serverAddress, ::Bedrock::Threading::AsyncPromise<bool> resultPromise);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createSignScreen(::BlockPos const& pos, ::BlockActorType blockActorType, bool isFrontSide);

    MCAPI ::std::shared_ptr<::AbstractScene> createStorageMigrationProgressScreen(
        ::Bedrock::NonOwnerPointer<::Bedrock::StorageMigration::StorageMigrationService> const& migrationService
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createStorageSpaceWarningScreen(::std::string const& message);

    MCAPI ::std::shared_ptr<::AbstractScene> createStoreFeaturesDisabledScreen(::std::string const& messageOverride);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createStoreInventoryScreen(::InventoryTabIndex tabIndex, ::std::optional<::StoreDataDrivenScreenParams> paramsOpt);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createSubmitFeedbackScreen(::FeedbackType feedbackType, ::std::string const& identifier, int feedbackTextLimit);

    MCAPI ::std::shared_ptr<::AbstractScene> createSunsettingScreen(::std::string& title);

    MCAPI ::std::shared_ptr<::AbstractScene> createTTSEnabledWarningScreen(::TTSEnabledStatus status);

    MCAPI ::std::shared_ptr<::AbstractScene> createTTSErrorScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createToastScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createTokenFAQScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createTokenPopupScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createTrade2Screen(::Player&, ::ActorUniqueID const& uniqueID);

    MCAPI ::std::shared_ptr<::AbstractScene> createTradeScreen(::Player&, ::ActorUniqueID const& uniqueID);

    MCAPI ::std::shared_ptr<::UIScene> createUIScene(
        ::IMinecraftGame&                     mc,
        ::IClientInstance&                    client,
        ::std::string const&                  screenName,
        ::std::shared_ptr<::ScreenController> controller
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createUpdateWorldHeightScreen(::std::function<void(bool)> startWorldCallback);

    MCAPI ::std::shared_ptr<::AbstractScene> createUpsellScreen(bool isNewWorld, bool timeExpired);

    MCAPI ::std::shared_ptr<::AbstractScene> createUserManagementModalScreen(
        ::UserManagementModalScreenData const& screenData,
        ::std::function<void(bool)>            callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createVersionUpdateScreen(::UpdateVersionScreenContext context);

    MCAPI ::std::shared_ptr<::AbstractScene> createWin10TrialConversionScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createWorldConversionCompleteScreen(::std::string const& levelId, ::std::function<void()> cancelCallback);

    MCAPI ::std::shared_ptr<::AbstractScene> createWorldRecoveryScreen(::std::function<void()> successCallback);

    MCAPI ::std::shared_ptr<::AbstractScene> createWorldSeedCatalogScreen(
        ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)> closeCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createWorldTemplateScreen(bool hideTopBar);

    MCAPI ::std::shared_ptr<::AbstractScene> createXblConsoleSignInScreen(::std::string const& code);

    MCAPI ::std::shared_ptr<::AbstractScene> createXblImmediateSignInScreen(
        ::std::string const&    signInSource,
        ::std::function<void()> callBackAfterSignIn,
        ::std::function<void()> callBackAfterCancel
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createXblImmediateSignInScreen(
        ::std::string const& signInSource,
        ::std::string const& redirectToRoute,
        bool                 replacePreviousRouteAfterSignIn
    );

    MCAPI ::Json::Value generateGlobalVars(::std::string const& screenName, ::ScreenController& controller);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getCurrentSceneStack();

    MCAPI void precacheGameplayScreens();

    MCAPI void registerInGameScreen(
        ::std::string const& registeredName,
        ::std::string const& resourceName,
        ::std::function<::std::shared_ptr<::UIScene>(
            ::SceneFactory&,
            ::IMinecraftGame&,
            ::IClientInstance&,
            ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&,
            ::std::string const&,
            ::Player&,
            ::BlockPos const&,
            ::ActorUniqueID
        )>                   creationFunc
    );

    MCAPI void resetSceneStackForOutOfGameUse();

    MCAPI void setUseClientInstanceStack(bool useClientInstanceStack);

    MCAPI void unregisterInGameScreens();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IMinecraftGame&                                                minecraft,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::AbstractScene> $createDevConsole();

    MCAPI ::std::shared_ptr<::AbstractScene> $createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab tab);

    MCAPI ::std::shared_ptr<::AbstractScene> $createStoreDataDrivenScreen(
        ::StoreDataDrivenScreenParams const& params,
        bool const                           forceDisableProgressScreen,
        ::std::function<void()>              initializedCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> $createStartMenuScreen(bool shouldSendEvent);
    // NOLINTEND
#else // @header-generator platform
    struct PreCachePackage {};
#endif // @header-generator platform
#endif // @header-generator platform
};
