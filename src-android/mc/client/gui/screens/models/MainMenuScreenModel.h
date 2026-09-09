#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/FeedbackType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/ClassroomSetting.h"
#include "mc/client/gui/screens/controllers/EduShareMethodType.h"
#include "mc/client/gui/screens/controllers/EduShareUriType.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/gui/screens/controllers/SlotSelectedAction.h"
#include "mc/client/gui/screens/models/IMainMenuScreenModel.h"
#include "mc/client/gui/screens/models/InstantiationResult.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/network/NetworkFilter.h"
#include "mc/client/services/catalog/RequirementCategory.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/enums/RawInputType.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/identity/IdentityType.h"
#include "mc/network/EditorConnectionJoinIntent.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/DownloadError.h"
#include "mc/util/UploadState.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class AnnouncementSurface;
class CatalogCollection;
class CatalogInfo;
class ClientNetworkSystem;
class CloudSaveLevelInfo;
class DlcChecker;
class DlcId;
class DlcUIWrapper;
class EDUServersScreenController;
class FlightingService;
class IContentAccessibilityProvider;
class IMinecraftEventing;
class IStoreCatalogItem;
class LegacyWorldConverter;
class LessonItem;
class LibraryCollection;
class LibraryCollectionConfig;
class LibraryItem;
class MainMenuScreenController;
class MinecoinCatalogModel;
class Offer;
class OfferCollectionComponent;
class PackManifest;
class PlatformOfferModel;
class PlatformOfferTransactionContext;
class PlayScreenModel;
class ProgressHandler;
class RealmsCreateParams;
class RealmsTransactionContext;
class ResourceLocation;
class ResourcePackFileUploadManager;
class SearchQuery;
class SkinHandle;
class SkinPack;
class SkinPackCollectionModel;
class SkinPackModel;
class SkinPickerUpsellTreatmentQuery;
class StoreCatalogItem;
class StoreCatalogRepository;
class StoreSearchQuery;
class TransactionContext;
class TreatmentPackDownloadMonitor;
class WorldFileDownloadManager;
class WorldFileUploadManager;
class WorldSeedCatalogModel;
class WorldTemplateManager;
struct EDULibraryCategory;
struct ExperienceJoinRequestInfo;
struct ExperiencePromotion;
struct LevelSummary;
struct LinksToStyle;
struct MinecraftScreenModelContext;
struct PDPData;
struct PackContentItem;
struct PackIdVersion;
struct PackSettingsInfo;
struct PlatformOfferPurchaseDetails;
struct Purchase;
struct RealmsPurchaseDetails;
struct StoreDataDrivenScreenParams;
struct SubmitItemRatingResult;
struct WorldTemplateInfo;
namespace Bedrock::Http { class Status; }
namespace Bedrock::PubSub { class Subscription; }
namespace Clubs { struct FeedItem; }
namespace Core { class Path; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Realms { class RealmsWorldContext; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Realms::Stories { class FacetStateManager; }
namespace Realms::Stories { class RealmEvent; }
namespace ResourcePackPathLifetimeHelpers { class ResourcePackPathCache; }
namespace Social { class User; }
namespace Social { struct EduDedicatedServerDetails; }
namespace World { class LocalWorldList; }
namespace mce { class UUID; }
// clang-format on

class MainMenuScreenModel : public ::MinecraftScreenModel, public ::IMainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecoinCatalogModel>> mMinecoinCatalogModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldSeedCatalogModel>> mWorldSeedCatalogModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<WorldFileDownloadManager>> mFileDownloadManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mFileUploadTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Threading::SharedAsync<void>>> mPreviousUpload;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackPathLifetimeHelpers::ResourcePackPathCache>> mResourcePackPathCache;
    ::ll::UntypedStorage<8, 24> mWorldTemplateManager;
    ::ll::UntypedStorage<8, 24> mLoginAnnouncementSurface;
    ::ll::UntypedStorage<8, 24> mMarketplaceAnnouncementSurface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcChecker>> mDlcChecker;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LegacyWorldConverter>> mLegacyWorldConverter;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MainMenuScreenModel();

    virtual bool isInGame() const;

    virtual bool isSelectedSkinInitialized() const;

    virtual bool platformTTSExists() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> getStoreCatalogRepository() const;

    virtual float getStoreNetworkFailureTimeout() const;

    virtual bool isAdhocEnabled() const;

    virtual std::string const& getLastPoppedScreenName() const;

    virtual void navigateToDlcProgressScreen(std::vector<DlcId> const&, std::function<void (bool, bool)>, bool, bool, bool);

    virtual bool doesPlatformSupportRealms() const;

    virtual void repopulateWorldTemplates();

    virtual ::WorldTemplateInfo const* findWorldTemplateByUUID(std::vector<mce::UUID> const&) const;

    virtual bool isPackIdInRealmsPlus(std::string const&) const;

    virtual ::IMinecraftEventing& getMinecraftEventing() const;

    virtual bool isNetworkEnabled(::NetworkFilter) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MainMenuScreenModel(::MinecraftScreenModelContext);

    MCNAPI void _showAnnouncementIfAvailable(::Bedrock::NonOwnerPointer<AnnouncementSurface>);

    MCNAPI bool canDisableRecipeUnlockingAsDefault() const;

    MCNAPI void cancelCreateRealmsWorld();

    MCNAPI bool checkStoreForAvailableUpdates() const;

    MCNAPI void clearAllUserCache();

    MCNAPI void clearScreenshotsCache();

    MCNAPI std::shared_ptr<CatalogCollection> createCatalogCollection(::StoreSearchQuery const&, int const);

    MCNAPI std::shared_ptr<CatalogCollection>
           createCatalogCollection(std::vector<std::shared_ptr<SearchQuery>> const&, int const);

    MCNAPI std::vector<EDULibraryCategory> createLibraryCategoryPage(std::vector<std::string> const&);

    MCNAPI std::shared_ptr<LibraryCollection> createLibraryCollection(std::shared_ptr<LibraryCollectionConfig>);

    MCNAPI std::shared_ptr<WorldFileDownloadManager> createLibraryWorldFileDownloadManager();

    MCNAPI std::shared_ptr<ResourcePackFileUploadManager> createResourcePackFileUploadManager();

    MCNAPI std::shared_ptr<WorldFileUploadManager> createWorldFileUploadManager();

    MCNAPI void cycleNextDebugOverlayPage();

    MCNAPI void cyclePreviousDebugOverlayPage();

    MCNAPI void dismissNewPlayerFlow();

    MCNAPI void fetchContentInRealmsPlus(std::function<void()>);

    MCNAPI void fetchLibraryWorldSize(std::shared_ptr<LessonItem>);

    MCNAPI void fireClassroomSettingUpdated(::ClassroomSetting, ::SettingsScreenMode) const;

    MCNAPI void fireEventControlRemappedByPlayer(std::string const&, ::RawInputType, int) const;

    MCNAPI void fireEventRealmDownload(std::string const&, std::string const&, int const, int const, int const);

    MCNAPI void
    fireEventRealmUpload(std::string const&, std::string const&, int const, int const, int const, bool const);

    MCNAPI void fireEventUnfulfilledPurchaseFound(::PlatformOfferPurchaseDetails&);

    MCNAPI void fireLibraryButtonPressedEvent(std::string const&, std::string const&, std::string const&) const;

    MCNAPI void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult
    );

    MCNAPI void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow);

    MCNAPI void fireShareButtonPressedEvent(std::string const&, ::EduShareUriType, ::EduShareMethodType, bool) const;

    MCNAPI void forcePersonaServiceSync() const;

    MCNAPI bool
        fulfillPriorPlatformOfferPurchase(std::weak_ptr<Purchase>, std::unique_ptr<PlatformOfferTransactionContext>);

    MCNAPI bool fulfillPriorRealmsPurchase(std::weak_ptr<Purchase>, std::unique_ptr<RealmsTransactionContext>);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentAccessibilityProvider>>
    getAccessibilityProvider() const;

    MCNAPI std::shared_ptr<FlightingService> getFlightingService() const;

    MCNAPI ::LegacyWorldConverter& getLegacyWorldConverter();

    MCNAPI ::EDULibraryCategory* getLibraryCategory(std::string const&);

    MCNAPI std::shared_ptr<World::LocalWorldList> getLocalWorldList() const;

    MCNAPI ::MinecoinCatalogModel& getMinecoinCatalogModel();

    MCNAPI ::Bedrock::Threading::Async<bool> getNeedsOfflineAuthCode();

    MCNAPI std::string_view getNewPlayerFlowTargetRoute() const;

    MCNAPI std::shared_ptr<Social::User> getPrimaryUser() const;

    MCNAPI std::shared_ptr<Realms::Stories::FacetStateManager> const getRealmsStoriesFacetStateManager() const;

    MCNAPI std::shared_ptr<Realms::RealmsWorldContext> const getRealmsWorldContext() const;

    MCNAPI ::SkinPackCollectionModel& getSkinPackCollection();

    MCNAPI ::StoreCatalogItem& getStoreCatalogItemByProductId(std::string const&);

    MCNAPI bool getStoreRequiresRestoreButton() const;

    MCNAPI bool getStoreShouldHideUpdateRow() const;

    MCNAPI bool getStoreSupportsSubscriptions() const;

    MCNAPI std::string getSunsettingText();

    MCNAPI bool getUnfulfilledPlatformOfferPurchase(::PlatformOfferPurchaseDetails&);

    MCNAPI bool getUnfulfilledRealmsPurchase(::RealmsPurchaseDetails&);

    MCNAPI int getUserCoinBalance() const;

    MCNAPI std::string getUserCoinBalanceAsString() const;

    MCNAPI std::string const getUserDisplayName() const;

    MCNAPI ::WorldFileDownloadManager& getWorldFileDownloadManager();

    MCNAPI ::WorldSeedCatalogModel& getWorldSeedCatalogModel();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> getWorldTemplateManager() const;

    MCNAPI bool hasDismissedNewPlayerFlow() const;

    MCNAPI bool hasSeenSonyTokensPopup() const;

    MCNAPI void instantiateTemplate(::PackManifest const&, std::function<void(LevelSummary*, InstantiationResult)>);

    MCNAPI bool isAbleToFetch(bool const) const;

    MCNAPI bool isAppStoreReady() const;

    MCNAPI bool isConnectedToThirdPartyServer() const;

    MCNAPI bool isGamePlayTipsEnabled() const;

    MCNAPI bool isMarketplacePassTrialAvailable() const;

    MCNAPI bool isNewPlayerPathV3ABCTest() const;

    MCNAPI bool isPlatformServiceMultiplayerConnected() const;

    MCNAPI bool isPrimaryUser() const;

    MCNAPI bool isRealmsCachedTrialAvailable() const;

    MCNAPI bool isResourcePackOnStack(::PackIdVersion const&) const;

    MCNAPI bool isSelectedSkinInitializedWithoutTimedOut() const;

    MCNAPI bool isServiceMultiplayerAvailableAndConnected(::Social::MultiplayerServiceIdentifier) const;

    MCNAPI bool isSidebarNavigationLayoutActive(::sidebar::navigationLayout::Type) const;

    MCNAPI void joinExperienceWorld(::ExperienceJoinRequestInfo const&);

    MCNAPI void joinRealmWorldWithRoute(std::string const&, ::IMinecraftEventing::RealmConnectionFlow);

    MCNAPI void launchSunsettingUri();

    MCNAPI bool meetsClientRequirement(::RequirementCategory, std::string const&) const;

    MCNAPI void navigateToAdhocScreen();

    MCNAPI void navigateToApplyResourcePacksScreen(std::function<void(MinecraftScreenModel&)>);

    MCNAPI void
    navigateToBundleWarningScreen(::IStoreCatalogItem const&, ::OfferCollectionComponent const&, std::function<void()>);

    MCNAPI void
        navigateToChooseRealmScreen(std::function<void(Realms::World)>, ::SlotSelectedAction, std::function<void()>);

    MCNAPI void navigateToCoinPurchaseScreen(std::string const&, int, std::function<void(bool, int)>);

    MCNAPI void navigateToContentLogHistoryScreen();

    MCNAPI void navigateToCreateWorldUpsellScreen(bool, std::string const&);

    MCNAPI void navigateToEDUFetchProgressHandler(std::shared_ptr<PlayScreenModel>);

    MCNAPI void navigateToEDUFetchServersProgressHandler(::Bedrock::NonOwnerPointer<EDUServersScreenController>);

    MCNAPI void navigateToEDULibraryCategoryScreen(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        int,
        std::vector<EDULibraryCategory> const&,
        bool
    );

    MCNAPI void navigateToEDULibraryRoot();

    MCNAPI void navigateToEDUPlayScreen();

    MCNAPI void navigateToEDUServerResolvingProgressHandler(
        ::Social::EduDedicatedServerDetails const&,
        std::string const&,
        std::shared_ptr<PlayScreenModel>,
        ::brstd::move_only_function<void()>&
    );

    MCNAPI void navigateToEDUServersScreen();

    MCNAPI void navigateToEDUUploadProgressHandler(
        std::string const&,
        std::string const&,
        ::Bedrock::NonOwnerPointer<EduCloud::IEduCloudSaveSystem>,
        std::optional<CloudSaveLevelInfo>
    );

    MCNAPI void navigateToEDUWorldTemplatesScreen();

    MCNAPI void navigateToEDUWorldsScreen(bool);

    MCNAPI void navigateToFeaturedWorld();

    MCNAPI void navigateToFileDownloadScreenAsync(
        ulong,
        std::string const&,
        int const,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void(bool)>
    );

    MCNAPI void navigateToGammaCalibrationScreen();

    MCNAPI void navigateToLibraryItemScreen(std::string);

    MCNAPI void navigateToLibraryItemScreen(std::shared_ptr<LibraryItem>);

    MCNAPI void
    navigateToLibrarySearchScreen(std::shared_ptr<LibraryCollection>, std::string const&, std::string const&);

    MCNAPI void navigateToLibraryTagScreen(
        std::shared_ptr<LibraryCollection>,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void navigateToLibraryWorldScreen(
        std::shared_ptr<LibraryCollection>,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void
    navigateToLocalWorldPickerScreen(std::string const&, int const, std::function<void(UploadState, Realms::World)>);

    MCNAPI void navigateToMakeInfiniteScreen(::LevelSummary const&, ::StorageVersion);

    MCNAPI void
    navigateToManifestValidationScreen(::ResourceLocation const&, std::shared_ptr<const PackContentItem> const&);

    MCNAPI void navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex, ::sidebar::navigationLayout::Type);

    MCNAPI void navigateToMarketplacePassPDPViewAllPacksScreen();

    MCNAPI void navigateToMarketplacePassPurchaseAmazonDeviceWarningScreen();

    MCNAPI void navigateToMarketplacePassPurchaseWarningScreen();

    MCNAPI void navigateToMarketplacePassUpsellScreen();

    MCNAPI void navigateToMarketplacePassWelcomeScreen();

    MCNAPI void navigateToOreUIChooseRealmSubscriptionScreen();

    MCNAPI void navigateToOreUIRealmsCreatePreviewWithOnlyOneSubscriptionScreen();

    MCNAPI void navigateToPackSettingsScreen(::PackSettingsInfo);

    MCNAPI void navigateToPlayScreen(::PlayScreenDefaultTab);

    MCNAPI void navigateToPromotionAction(::ExperiencePromotion const&);

    MCNAPI void navigateToPurchaseOfferScreen(::IStoreCatalogItem const&, ::StoreNavigationOrigin, bool const);

    MCNAPI void
    navigateToPurchaseOfferScreen(std::string const&, ::StoreNavigationOrigin, std::string const&, bool const);

    MCNAPI void
    navigateToPurchaseOfferScreen(::mce::UUID const&, ::StoreNavigationOrigin, std::string const&, bool const);

    MCNAPI void navigateToRealmsAllowListScreen(::Realms::World const&, std::function<void()>);

    MCNAPI void navigateToRealmsCreateScreen(::RealmsCreateParams const&);

    MCNAPI bool navigateToRealmsOffers(::StoreDataDrivenScreenParams const&);

    MCNAPI void navigateToRealmsPDPViewAllPacksScreen();

    MCNAPI void navigateToRealmsPendingInvitesScreen(bool);

    MCNAPI void navigateToRealmsPlusPurchaseWarningScreen(std::function<void()>);

    MCNAPI void navigateToRealmsWarningScreen();

    MCNAPI void navigateToRealmsWorldProgressScreen(
        std::string const&,
        std::unique_ptr<ProgressHandler>,
        std::unique_ptr<ProgressHandler>,
        std::function<void()>
    );

    MCNAPI void navigateToStorageSpaceWarningScreen(std::string const&);

    MCNAPI void navigateToStoreInventoryScreen();

    MCNAPI void navigateToStoreSearchScreen(std::string const&, std::string const&);

    MCNAPI void navigateToStoreSearchScreen(::LinksToStyle const&, std::string const&, std::string const&);

    MCNAPI void navigateToSubmitFeedbackScreen(::FeedbackType, std::string const&);

    MCNAPI void navigateToSunsettingScreen(std::string);

    MCNAPI void
        navigateToUGCViewerScreen(std::function<void(const std::string&, const std::string&, const Core::Path&)>);

    MCNAPI void navigateToUploadPackFileProgressScreen(
        std::string const&,
        ::Core::Path const&,
        int,
        bool,
        std::function<void(UploadState, Realms::World)>
    );

    MCNAPI void navigateToWorldConversionCompleteScreen(std::string const&, std::function<void()>);

    MCNAPI std::unique_ptr<DlcUIWrapper> newDlcUIWrapper(::MainMenuScreenController&);

    MCNAPI void
    performPlayerSafetyScanRequest(std::string const&, std::function<void(const Bedrock::Http::Status&, bool)>);

    MCNAPI bool prepareAppStoreForPurchases(std::function<void(bool)>);

    MCNAPI void purchaseMarketplacePass(std::string const&, std::unique_ptr<TransactionContext>&&);

    MCNAPI bool
    purchasePlatformOffer(::PlatformOfferModel const&, std::unique_ptr<TransactionContext>&&, ::PurchasePath);

    MCNAPI void quickPlay();

    MCNAPI void redeemRealmsCatalogOffer(std::string const&, std::function<void(bool)>);

    MCNAPI void refreshUserInventory() const;

    MCNAPI ::Bedrock::PubSub::Subscription
        registerPrimaryUserSignInSubscriber(std::function<void(uint, Social::IdentityType)>);

    MCNAPI ::Bedrock::Threading::Async<bool> requestOfflineAuthCode();

    MCNAPI void resetJoinRealmWarningModals();

    MCNAPI void setDeepLinkListenerMainMenuParameters(std::function<void(const DownloadError&)>);

    MCNAPI void setEditorConnectionJoinIntent(::EditorConnectionJoinIntent);

    MCNAPI void setHasSeenSonyTokenPopup(bool);

    MCNAPI void setStoreCatalogItemViewed(std::string const&) const;

    MCNAPI void setStoreCatalogItemViewed(::IStoreCatalogItem const&) const;

    MCNAPI void showLoginAnnouncementIfAvailable();

    MCNAPI void showMarketplaceAnnouncementIfAvailable();

    MCNAPI void submitReviewFor(std::string const&, int, std::function<void()>);

    MCNAPI ::Bedrock::Threading::Async<SubmitItemRatingResult>
    submitReviewForEntitlementManager(std::string const&, int);

    MCNAPI bool supportsFliteTTS() const;

    MCNAPI bool supportsXboxLiveAchievements() const;

    MCNAPI void
    uploadLocalWorldFile(std::string const&, std::string const&, int, std::function<void(UploadState, Realms::World)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenModelContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInGame() const;

    MCNAPI bool $isSelectedSkinInitialized() const;

    MCNAPI bool $platformTTSExists() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> $getStoreCatalogRepository() const;

    MCNAPI float $getStoreNetworkFailureTimeout() const;

    MCNAPI bool $isAdhocEnabled() const;

    MCNAPI std::string const& $getLastPoppedScreenName() const;

    MCNAPI void
    $navigateToDlcProgressScreen(std::vector<DlcId> const&, std::function<void(bool, bool)>, bool, bool, bool);

    MCNAPI bool $doesPlatformSupportRealms() const;

    MCNAPI void $repopulateWorldTemplates();

    MCNAPI ::WorldTemplateInfo const* $findWorldTemplateByUUID(std::vector<mce::UUID> const&) const;

    MCNAPI bool $isPackIdInRealmsPlus(std::string const&) const;

    MCNAPI ::IMinecraftEventing& $getMinecraftEventing() const;

    MCNAPI bool $isNetworkEnabled(::NetworkFilter) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
