#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // SceneFactory inner types declare
    // clang-format off
    struct PreCachePackage;
    // clang-format on

    // SceneFactory inner types define
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
};
