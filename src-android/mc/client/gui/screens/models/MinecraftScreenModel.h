#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ActiveDirectoryAction.h"
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/client/game/MinecraftGameFeatures.h"
#include "mc/client/game/WebviewInterfaceType.h"
#include "mc/client/gui/EncyclopediaTopicIndex.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/SelectWorldResult.h"
#include "mc/client/gui/screens/controllers/CreditsType.h"
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"
#include "mc/client/gui/screens/controllers/UpdateVersionScreenContext.h"
#include "mc/client/gui/screens/models/IMinecraftScreenModel.h"
#include "mc/client/gui/screens/models/PlatformStoreIconModel.h"
#include "mc/client/input/ButtonIndiciesEnum.h"
#include "mc/client/input/IconSize.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/client/input/TriggerIndiciesEnum.h"
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/persona/DefaultSkinType.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/services/download/IDlcBatcher.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/client/store/StoreCatalogCategory.h"
#include "mc/client/store/StoreErrorCodes.h"
#include "mc/client/store/commerce/PurchaseResult.h"
#include "mc/client/store/iap/StorePreviewVersion.h"
#include "mc/client/store/iap/TrialUpgradePurchaseTier.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/ClipboardFeatureFlags.h"
#include "mc/deps/code_builder/CodeBuilderPerformance.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/events/EduControlPanelUpdateType.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/events/UserGeneratedUriSource.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/ModalFormCancelReason.h"
#include "mc/network/packet/ResourcePackResponse.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/platform/MultiplayerLockedContext.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/util/ValidationStatus.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/inventory/FurnaceLayout.h"
#include "mc/world/inventory/FurnaceLeftTabIndex.h"
#include "mc/world/inventory/InventoryLayout.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"
#include "mc/world/inventory/InventoryRightTabIndex.h"
#include "mc/world/level/FileArchiver.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ActiveDirectoryIdentity;
class Actor;
class ChalkboardBlockActor;
class ClientInstanceModel;
class ClientModel;
class ClubsService;
class ContentAcquisition;
class ContentIdentity;
class ContentTierInfo;
class DateManager;
class DimensionHeightRange;
class DlcId;
class EDUSystems;
class EduDeeplinkObserver;
class EmoticonManager;
class FileArchiver;
class FileDataRequest;
class FilePickerSettings;
class GamePadRemappingLayout;
class GatheringManager;
class HitResult;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class IDlcBatchModel;
class IDlcValidation;
class IEDUDiscoveryService;
class IEntitlementManager;
class IGameConnectionListener;
class ILevelListCache;
class IMinecraftGame;
class INetworkGameConnector;
class IOfferRepository;
class IOptionRegistry;
class IResourcePackRepository;
class ISceneFactory;
class ISceneStack;
class IScreenCapabilities;
class IThirdPartyServerRepository;
class IUIDefRepository;
class ItemGroup;
class ItemRegistryRef;
class ItemStackBase;
class JpegCommentWriter;
class KeyboardRemappingLayout;
class LayeredAbilities;
class LevelData;
class LevelSettings;
class LevelStorage;
class LevelStorageEventing;
class LocalPlayer;
class MarketplaceServicesManager;
class MinecraftCommands;
class OnlineSafetyProgressHandler;
class PackDownloadManager;
class PackManifest;
class PackSettings;
class PackSettingsFactory;
class PersonaClient;
class PersonaRepository;
class PlatformMultiplayerRestrictions;
class PlatformUpsellDialog;
class Player;
class PlayerAchievementData;
class PlayerListEntry;
class PlayerMessagingService;
class ProgressHandler;
class PropertyBag;
class RealmsAPI;
class ResourceLocation;
class ResourcePackManager;
class SceneFactory;
class Scheduler;
class ScopedCPUBoost;
class Scoreboard;
class ScreenContext;
class ServicesManager;
class Skin;
class SkinHandle;
class SkinPackCollectionModel;
class SkinRepository;
class SoundEngine;
class StoreCatalogRepository;
class StructureEditorData;
class StructureTelemetryClientData;
class TaskGroup;
class TextToIconMapper;
class ToastManager;
class ToastMessage;
class TransactionContext;
class TrialManager;
class WebviewInterface;
class WireframeQueue;
struct ActiveDirectoryModalArgs;
struct ActorUniqueID;
struct ContentItem;
struct ContentLogMessage;
struct DownloadStateObject;
struct EduPurchaseDetails;
struct EducationLevelSettings;
struct EducationLocalLevelSettings;
struct FurnaceOptions;
struct InventoryOptions;
struct LevelSummary;
struct LinksToStyle;
struct MinecraftScreenModelContext;
struct PDFOptions;
struct PackIdVersion;
struct PacksInfoData;
struct PhotoStorageContainer;
struct PlayerInventorySlotData;
struct Purchase;
struct ReceiptFulfillment;
struct SplitScreenInfo;
struct StoreContentSources;
struct StoreDataDrivenScreenParams;
struct WorldTemplateInfo;
struct glTFExportData;
namespace Bedrock::Http { class Status; }
namespace Clubs { class ActivityFeed; }
namespace Clubs { struct ClubModel; }
namespace Clubs { struct FeedItem; }
namespace Clubs { struct NewFeedItem; }
namespace Clubs { struct ReportedItem; }
namespace Core { class Path; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Identity { struct SignOutResult; }
namespace Invites { struct Invite; }
namespace Invites { struct InviteId; }
namespace Json { class Value; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class Router; }
namespace Parties { class PartySystem; }
namespace Realms { class ContentService; }
namespace Realms { class InvitesService; }
namespace Realms { class SubscriptionService; }
namespace Realms { class WorldCache; }
namespace Realms { struct ConfigInfo; }
namespace Realms { struct InviteLink; }
namespace Realms { struct Player; }
namespace Realms { struct RealmId; }
namespace Realms { struct ServerRegion; }
namespace Realms { struct World; }
namespace Realms { struct WorldBackupList; }
namespace SDL { class SessionBinaries; }
namespace SDL { class SessionConfig; }
namespace SDL { struct ScreenLayoutQuery; }
namespace SDL { struct SubscriptionInfo; }
namespace Social { class FriendList; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class PresenceManager; }
namespace Social { class ProfileImageOptions; }
namespace Social { struct MultiIdentitySigninResult; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct XboxLiveUserProfileData; }
namespace Social::Events { class Property; }
namespace StoreFilter { struct FilterCollectionInfo; }
namespace World { class LocalWorldList; }
namespace edu::auth { struct CredentialsObserver; }
namespace mce { class UUID; }
namespace persona { struct PersonaCharacterHandle; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class MinecraftScreenModel : public ::IMinecraftScreenModel,
                             public ::std::enable_shared_from_this<MinecraftScreenModel>,
                             public ::IDlcBatcher {
public:
    // MinecraftScreenModel inner types define
    enum class FriendsDrawerLocation : int {
        MainMenu   = 0,
        InGameMenu = 1,
    };

    using Context = ::MinecraftScreenModelContext;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                        mMinecraft;
    ::ll::UntypedStorage<8, 24>                                        mAdvancedGraphicsOptions;
    ::ll::UntypedStorage<8, 24>                                        mClient;
    ::ll::UntypedStorage<8, 24>                                        mSceneStack;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AbstractScene>>          mLoadingScene;
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                          mSceneFactory;
    ::ll::TypedStorage<1, 1, bool>                                     mIsDirty;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientInstanceModel>>     mClientModel;
    ::ll::TypedStorage<4, 4, ::LoadingState>                           mResourcePackConfirmationLoadingState;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SkinPackCollectionModel>> mSkinPackCollectionModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SkinPackCollectionModel>> mPurchasableSkinPackCollectionModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SkinPackCollectionModel>> mOwnedSkinPackCollectionModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SkinPackCollectionModel>> mRealmsPlusSkinPackCollectionModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>               mAsyncTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlatformUpsellDialog>>   mPlatformUpsellDialog;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatcher>>             mDlcBatcher;
    ::ll::UntypedStorage<8, 16>                                        mStartServerResult;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IScreenCapabilities>>     mCapabilities;
    ::ll::TypedStorage<8, 16, ::PlatformStoreIconModel>                mPlatformStoreIconModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>               mStorageCheckTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::FriendList>>     mFriendList;
    ::ll::TypedStorage<4, 4, uint>                                     mSceneId;
    ::ll::TypedStorage<1, 1, bool>                                     mPlayerCanceledJoinGame;
    ::ll::TypedStorage<1, 1, bool>                                     mCurrentlyLoadingScene;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScreenModel& operator=(MinecraftScreenModel const&);
    MinecraftScreenModel(MinecraftScreenModel const&);
    MinecraftScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftScreenModel();

    virtual ::SubClientId getSubClientId() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const getUserManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> getUserManager();

    virtual void navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const&, bool);

    virtual bool tryNavigateToProfileScreen();

    virtual bool tryNavigateToSafeZoneScreenOnFirstSignin();

    virtual bool leaveScreen(std::string, bool);

    virtual bool isInGame() const;

    virtual void requestLeaveGame(bool, bool);

    virtual bool isLeaveGameDone() const;

    virtual bool isUserReady() const;

    virtual void destroyGame();

    virtual ::ResourcePackManager& getResourcePackManager() const;

    virtual void popScreensBackTo(::ui::SceneType const);

    virtual ::INetworkGameConnector& getNetworkGameConnector();

    virtual bool isSelectedSkinInitialized() const;

    virtual bool platformTTSExists() const;

    virtual ::IDlcBatchModel& getDlcBatchModel(std::vector<PackIdVersion> const&);

    virtual ::IDlcBatchModel& getDlcBatchModel(std::vector<std::string> const&);

    virtual ::IDlcBatchModel& getDlcBatchModel(std::vector<DlcId> const&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> getStoreCatalogRepository() const;

    virtual float getStoreNetworkFailureTimeout() const;

    virtual bool isAdhocEnabled() const;

    virtual bool isDirty() const;

    virtual ::SkinHandle const& getSelectedSkinHandle() const;

    virtual std::string const& getLastPoppedScreenName() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftScreenModel(::MinecraftScreenModelContext);

    MCNAPI bool _isPremium(::PackManifest const&) const;

    MCNAPI bool _isPremiumLocked(::PackManifest const&) const;

    MCNAPI bool _isRealmsPlus(::PackManifest const&) const;

    MCNAPI ::Bedrock::Threading::Async<void> _queueForMainThread(std::function<void()>&&);

    MCNAPI void _sendResourcePackClientResponse(::ResourcePackResponse, std::set<std::string>*);

    MCNAPI void _setLoadingRealmLink(bool);

    MCNAPI void
    _startLocalServerAsync(std::string const&, std::string const&, ::ContentIdentity const&, ::LevelSettings const&);

    MCNAPI void
        acceptRealmsInvite(::Invites::InviteId, std::function<void(Realms::GenericStatus, Realms::FailureReason)>);

    MCNAPI void
        acceptRealmsLink(std::string, std::function<void(Realms::GenericStatus, Realms::FailureReason, Realms::World)>);

    MCNAPI void acknowledgePartyDestinationCookie(bool);

    MCNAPI void acknowledgedAutoSave();

    MCNAPI void activateNewPreviewRealm(::Realms::RealmId, std::function<void(Realms::GenericStatus, Realms::RealmId)>);

    MCNAPI void addDownloadCallback(std::weak_ptr<bool>, std::function<void(DownloadStateObject&)>);

    MCNAPI void addEduCredentialsObserver(::edu::auth::CredentialsObserver&);

    MCNAPI void addEduDeeplinkObserver(::EduDeeplinkObserver&) const;

    MCNAPI bool addExternalServer(std::string const&, std::string const&, int);

    MCNAPI void addTTSMessage(std::string const&, bool, std::string const&, bool, bool);

    MCNAPI void addToRealmsBlocklist(
        ::Realms::RealmId,
        std::string const&,
        std::string const&,
        std::function<void(Realms::GenericStatus)>
    );

    MCNAPI bool allowBetaXblSignIn() const;

    MCNAPI bool areAnyDownloadsOrImportsActive() const;

    MCNAPI bool areOtherPlayersInGame() const;

    MCNAPI bool arePersonaAppearancesLoading() const;

    MCNAPI bool canEditPermissionsEDU(::ActorUniqueID const&);

    MCNAPI bool canLaunchUri(std::string const&);

    MCNAPI bool canManageSubscriptionForStoreId(std::string const&) const;

    MCNAPI bool canSignInToXBL() const;

    MCNAPI bool canUserDoActionForCurrentRealm(::Realms::PlayerRoleActions) const;

    MCNAPI bool canUserDoRealmRoleAction(::Realms::World const&, ::Realms::PlayerRoleActions) const;

    MCNAPI void cancelEDUServicePackDownload(std::string const&) const;

    MCNAPI void cancelJoinGame(::LoadingState);

    MCNAPI void cancelSignIn();

    MCNAPI void checkConnectionEvents();

    MCNAPI void checkForGoogleAccountHold(std::function<void(bool, ReceiptFulfillment)>);

    MCNAPI void checkPremiumPlatformAccessAsync(std::function<void(bool)>);

    MCNAPI void checkRealmsPaymentService(std::function<void(bool)>);

    MCNAPI void clearContentLogMessages();

    MCNAPI void clearDevConsoleScreenMessages();

    MCNAPI void clearIsWorldTransferInProgress() const;

    MCNAPI void clearTTSQueue();

    MCNAPI void clearUserCredentials();

    MCNAPI void
        closeRealmsWorld(::Realms::RealmId, std::function<void(Realms::GenericStatus)>, std::function<void(int)>);

    MCNAPI void clubNameVetting(std::string const&, std::function<void(Realms::GenericStatus, Realms::FailureReason)>);

    MCNAPI void completeServerForm(uint, ::Json::Value);

    MCNAPI void completeServerForm(uint, ::ModalFormCancelReason);

    MCNAPI void confirmResourcePackDownload(::ResourcePackResponse, bool, bool);

    MCNAPI void connectToPlatformNetwork(std::function<void(Social::UserPlatformConnectionResult)>, bool);

    MCNAPI bool continueResourcePackDownloadAfterCDNFailure();

    MCNAPI std::string copyWorld(std::string const&);

    MCNAPI void createAndUploadWorldToRealm(
        ::LevelSummary const&,
        ::LevelSettings const&,
        ::Realms::World,
        std::function<void(Realms::World)>
    );

    MCNAPI void createAndUploadWorldToRealm(
        std::string const&,
        std::string,
        ::LevelSettings const&,
        ::Realms::World,
        std::function<void(Realms::World)>
    );

    MCNAPI void
    createInviteLink(::Realms::RealmId, long const, std::function<void(Realms::GenericStatus, Realms::InviteLink)>);

    MCNAPI std::unique_ptr<JpegCommentWriter> createJpegCommentWriter();

    MCNAPI ::Bedrock::UniqueOwnerPointer<LevelStorage> createLevelStorage(
        ::Scheduler&,
        std::string const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const&,
        std::unique_ptr<LevelStorageEventing>&&
    );

    MCNAPI std::unique_ptr<PlatformMultiplayerRestrictions> createPlatformMultiplayerRestrictions();

    MCNAPI void deleteAllContentLogs() const;

    MCNAPI void deleteAllDiagnosticsAndProfilerCaptures() const;

    MCNAPI void deleteAllLocalScreenshots();

    MCNAPI void deleteInviteLink(std::string const&, std::function<void(Realms::GenericStatus)>);

    MCNAPI void deleteLevel(std::string const&);

    MCNAPI void deleteRealm(::Realms::RealmId, std::function<void(Realms::GenericStatus)>);

    MCNAPI void deleteRealmWorldBackup(
        ::Realms::RealmId const&,
        int const,
        std::string const&,
        std::function<void(int)>,
        std::function<void(Realms::GenericStatus, std::string)>
    );

    MCNAPI void devConsoleExecuteCommand(std::string const&);

    MCNAPI void displayPremiumUpsellDialogAsync(std::function<void(bool)>);

    MCNAPI bool doesServicesManagerHaveErrorStatus() const;

    MCNAPI bool doesUserHavePremiumPlatformAccess() const;

    MCNAPI bool doesUserPlatformConnectionAllowMultiplayer() const;

    MCNAPI bool editExternalServer(int, std::string const&, std::string const&, int, bool);

    MCNAPI std::string emoticonifyText(std::string const&, bool);

    MCNAPI void
    fetchActiveWorldCurrentSize(::Realms::RealmId const&, int, std::function<void(Realms::GenericStatus, long)>);

    MCNAPI void fetchRealmsWorlds(std::function<void(Realms::GenericStatus, std::vector<Realms::World>)>);

    MCNAPI void fetchScreenshots(std::vector<Core::PathBuffer<std::string>>&);

    MCNAPI ::Core::PathBuffer<std::string> fetchScreenshotsPath();

    MCNAPI std::string filterProfanityFromString(::ProfanityFilterContext const, std::string const&, bool const) const;

    MCNAPI bool findProfanityInString(::ProfanityFilterContext const, std::string const&) const;

    MCNAPI void finishGuidedFlow(bool);

    MCNAPI void fireBannedSkinVerification(std::string const&, bool, int const, std::string const&) const;

    MCNAPI void fireCodeBuilderCachePerformanceEvent(::CodeBuilderPerformance::Stage);

    MCNAPI void fireCodeCommandButtonPressedEvent() const;

    MCNAPI void fireEduServiceRequestFailed(
        std::string const&,
        std::string const&,
        std::string const&,
        ::buffer_span<std::pair<std::string_view, std::string_view>>
    ) const;

    MCNAPI void fireEventAdhocNetworkEnabled() const;

    MCNAPI void fireEventButtonPressed(std::string const&, std::unordered_map<std::string, std::string> const&);

    MCNAPI void fireEventChatSettingsUpdated(std::vector<Social::Events::Property> const&) const;

    MCNAPI void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType, double);

    MCNAPI void fireEventCreatorFollowedUnfollowed(std::string const&, std::string const&, bool);

    MCNAPI void fireEventDefaultCastSelected(int, ::mce::UUID, std::string const&);

    MCNAPI void fireEventEncyclopediaTopicChanged(std::string const&, ::InputMode);

    MCNAPI void fireEventFeedbackSubmitted(std::string const&, std::string const&, bool, bool) const;

    MCNAPI void fireEventGameTip(int, int, int, ::InputMode) const;

    MCNAPI void fireEventHowToPlayTopicChanged(std::string const&, ::InputMode);

    MCNAPI void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const) const;

    MCNAPI void fireEventInventoryClosed();

    MCNAPI void fireEventInventoryOpened(bool);

    MCNAPI void fireEventItemSelected(::ItemStackBase const&);

    MCNAPI void fireEventOptionsUpdated();

    MCNAPI void fireEventPartyButtonPressed(std::string const&, std::string const&) const;

    MCNAPI void fireEventPartyTravelToastExpired(std::string const&, std::string const&) const;

    MCNAPI void fireEventPlayerBanned(std::string const&);

    MCNAPI void fireEventPlayerKicked(std::string const&, std::string const&);

    MCNAPI void fireEventPopupClosed(std::string const&) const;

    MCNAPI void fireEventPopupFiredEdu(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::ActiveDirectoryAction const
    );

    MCNAPI void fireEventProfileButtonPressed(std::string const&) const;

    MCNAPI void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&);

    MCNAPI void fireEventScreenChanged(std::string const&, std::unordered_map<std::string, std::string> const&);

    MCNAPI void fireEventStartWorld(::NetworkType, std::string const&);

    MCNAPI void fireEventTagButtonPressed(std::string const&, bool);

    MCNAPI void fireEventUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource,
        ::Util::ResourceUri::ValidationStatus,
        std::string const&
    );

    MCNAPI void fireEventUserListUpdated(std::string const&, std::string const&, std::string const&, bool);

    MCNAPI void fireEventWorldGenerated(std::string const&, ::LevelSettings const&, bool);

    MCNAPI void fireEventWorldLoadTimes(std::string const&, std::vector<std::pair<std::string, float>> const);

    MCNAPI void
    fireInAppCodeBuilderActivatedEvent(::OpenCodeMethod, std::string const&, std::string const&, std::string const&);

    MCNAPI void fireInAppCodeBuilderDismissedEvent(std::string const&);

    MCNAPI void firePackSettingsEvent(::PackSettings const&, ::PackManifest const&, std::string);

    MCNAPI void fireSignOutEdu(std::string const&, std::string const&) const;

    MCNAPI void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        ::StructureTelemetryClientData const&
    );

    MCNAPI void fireSwitchAccountEdu() const;

    MCNAPI void fireglTFExportStateEvent(
        ::glTFExportData const&,
        ::IMinecraftEventing::ExportOutcome,
        ::IMinecraftEventing::ExportStage
    );

    MCNAPI void flushQueuedDevConsoleMessages();

    MCNAPI bool fulfillPriorEduPurchase(std::weak_ptr<Purchase>, std::unique_ptr<TransactionContext>);

    MCNAPI std::shared_ptr<FilePickerSettings>
           generateFilePickerSettingsForAlbum(::PDFOptions const&, std::string const&);

    MCNAPI std::shared_ptr<FilePickerSettings> generateFilePickerSettingsForExport();

    MCNAPI std::shared_ptr<FilePickerSettings>
           generateFilePickerSettingsForExport(std::string const&, std::string const&, ::FileArchiver::ExportType);

    MCNAPI ::PlayerAchievementData const& getAchievementData() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const ActiveDirectoryIdentity>> getActiveDirectoryIdentity();

    MCNAPI ::ui::SceneType getActiveSceneType() const;

    MCNAPI void getAllInviteLinks(
        ::Realms::RealmId,
        std::function<void(Realms::GenericStatus, std::vector<Realms::InviteLink>)>
    );

    MCNAPI bool getBlankLineDismissesChat() const;

    MCNAPI std::string getBuildDateISOString() const;

    MCNAPI ::BuildPlatform getBuildPlatform() const;

    MCNAPI std::string getButtonName(::ButtonIndiciesEnum);

    MCNAPI std::string getButtonTexture(::TriggerIndiciesEnum);

    MCNAPI std::string getButtonTexture(::ButtonIndiciesEnum, ::IconSize);

    MCNAPI ::ItemRegistryRef getClientItemRegistry() const;

    MCNAPI ::ClientModel& getClientModel() const;

    MCNAPI ::ClipboardFeatureFlags getClipboardFeatures() const;

    MCNAPI void getClubProfile(std::string const&, std::function<void(Clubs::ClubModel, Clubs::GenericStatus)>);

    MCNAPI void getClubUnreadCount(std::string const&, std::function<void(int, Clubs::GenericStatus)>);

    MCNAPI ::MinecraftCommands& getCommands();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ContentAcquisition>> getContentAcquisition() const;

    MCNAPI std::vector<ContentLogMessage> const& getContentLogMessages() const;

    MCNAPI ::IContentManager& getContentManager();

    MCNAPI ::ContentTierInfo getContentTierInfo() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> getContentTierManager() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getCurrentContentLogFileName() const;

    MCNAPI std::string getCurrentGamertag() const;

    MCNAPI int getCurrentMaxGUIScaleIndex() const;

    MCNAPI int getCurrentOptimalGUIScaleIndex() const;

    MCNAPI ::Realms::World& getCurrentRealm();

    MCNAPI ::Social::ProfileImageOptions getCurrentUserDefaultProfileImageOptions() const;

    MCNAPI std::string getCurrentXUID() const;

    MCNAPI ::ItemGroup const& getCursorSelectedItemGroup() const;

    MCNAPI ::SkinHandle getCustomSkinHandle(::persona::DefaultSkinType) const;

    MCNAPI int getCustomSkinIndex() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>> getDateManager() const;

    MCNAPI std::vector<std::string> const& getDevConsoleScreenMessages();

    MCNAPI bool getDevCreateRealmWithoutPurchase() const;

    MCNAPI std::string getDevelopmentVersionString() const;

    MCNAPI ::DimensionHeightRange getDimensionHeightRange() const;

    MCNAPI ::WireframeQueue* getDimensionWireframeQueue();

    MCNAPI std::string getDisplayName() const;

    MCNAPI ::IDlcValidation& getDlcValidation();

    MCNAPI ::Bedrock::NonOwnerPointer<EduCloud::IEduCloudSaveSystem> getEDUCloudSaveSystem() const;

    MCNAPI ::IEDUDiscoveryService& getEDUDiscoveryService();

    MCNAPI float getEDUServicePackProgress() const;

    MCNAPI ::Bedrock::NonOwnerPointer<EDUSystems> getEDUSystems() const;

    MCNAPI std::string getEduOfferPrice();

    MCNAPI ::EducationLevelSettings const* getEducationLevelSettings() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const EmoticonManager>> getEmoticonManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>> getEntitlementManager() const;

    MCNAPI int getExpectedStoreVersion() const;

    MCNAPI std::tuple<std::string, std::string, int> getExternalServerInfo(int);

    MCNAPI std::optional<Social::GameConnectionInfo> getGameConnectionInfo();

    MCNAPI ::IGameConnectionListener const& getGameConnectionListener();

    MCNAPI std::optional<std::string> getGameDevGitShaString() const;

    MCNAPI std::string getGameDevInfoString() const;

    MCNAPI ::GamePadRemappingLayout& getGamepadRemappingLayout();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<GatheringManager>> getGatheringManager();

    MCNAPI int getGraphicsMode() const;

    MCNAPI int getGuiScaleOffset() const;

    MCNAPI ::HitResult& getHitResult() const;

    MCNAPI ::PacksInfoData const& getHostSpecifiedPacks() const;

    MCNAPI int getHotbarSlotCount() const;

    MCNAPI ::ResourceLocation const& getImageLocationFromImageRepository(std::string const&) const;

    MCNAPI ::InputMode getInputMode() const;

    MCNAPI std::string getIpAddress() const;

    MCNAPI bool getIsWaitingForSession() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> getKeyProvider() const;

    MCNAPI std::string getKeyboardKeyName(int) const;

    MCNAPI ::KeyboardRemappingLayout& getKeyboardRemappingLayout() const;

    MCNAPI ::KeyboardRemappingLayout& getKeyboardRemappingLayoutByType(::KeyboardType) const;

    MCNAPI std::string const& getKnownPageId(std::string const&) const;

    MCNAPI std::string const& getLastContentLogMessage() const;

    MCNAPI std::string const& getLastDevConsoleMessage();

    MCNAPI std::string const getLatestTextureVersion() const;

    MCNAPI ::LevelData const* getLevelData() const;

    MCNAPI ::LevelData* getLevelData();

    MCNAPI ::LevelData* getLevelData(std::string const&);

    MCNAPI ::ILevelListCache& getLevelListCache() const;

    MCNAPI std::unordered_map<mce::UUID, PlayerListEntry> const& getLevelPlayerList() const;

    MCNAPI ::Scoreboard& getLevelScoreboard();

    MCNAPI void
    getLinkedPlatformIds(std::function<void(std::string, std::string)>, std::vector<std::string> const&) const;

    MCNAPI void getLinkedXuids(std::function<void(std::string, std::string)>, std::vector<std::string> const&) const;

    MCNAPI ::HitResult& getLiquidHitResult() const;

    MCNAPI float getLoadingProgress();

    MCNAPI ::LocalPlayer* getLocalPlayer() const;

    MCNAPI ::ActorUniqueID getLocalPlayerEntityID() const;

    MCNAPI ::mce::UUID getLocalPlayerUUID();

    MCNAPI std::string const getMarketplaceDisabledReason() const;

    MCNAPI std::pair<StoreErrorCodes, std::string> const getMarketplaceDisabledReasonWithErrorCode() const;

    MCNAPI std::string getMarketplacePassFullPrice() const;

    MCNAPI std::string getMarketplacePassPrice(std::string const&, std::string const&) const;

    MCNAPI ::MarketplaceServicesManager& getMarketplaceServicesManager() const;

    MCNAPI uint getMaxPlatformInvitablePlayers() const;

    MCNAPI int getMaxPlayerCount() const;

    MCNAPI uint getMaxSimRadiusInChunks() const;

    MCNAPI std::string getMinecraftAccountID() const;

    MCNAPI std::string getMultiplayerDisabledTextBody(::MultiplayerLockedContext) const;

    MCNAPI std::string getMultiplayerDisabledTextTitle(::MultiplayerLockedContext) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>
    getMultiplayerServiceManager() const;

    MCNAPI std::string getNetworkInfoStringInGame() const;

    MCNAPI std::string getNetworkProtocolVersion() const;

    MCNAPI bool getNewJukeboxPopupItemText(std::string&, bool&);

    MCNAPI bool getNewPopupItemText(std::string&, bool&);

    MCNAPI ::SDL::SubscriptionInfo getNextAvailableSubscriptionInfo() const;

    MCNAPI ulong getNumOnlineFriends() const;

    MCNAPI int getNumberOfFriendsRealms() const;

    MCNAPI int getNumberOfOwnedRealms() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>> getOfferRepository() const;

    MCNAPI ::Bedrock::PubSub::Connector<
        void(const PlayerListEntry&, const std::unordered_map<mce::UUID, PlayerListEntry>&)>&
    getOnPlayerListEntryRemovedConnector() const;

    MCNAPI ::IOptionRegistry& getOptions() const;

    MCNAPI std::shared_ptr<WebviewInterface> getOrCreateWebviewInterface(::WebviewInterfaceType);

    MCNAPI ::PackDownloadManager& getPackDownloadManager() const;

    MCNAPI ::Bedrock::NonOwnerPointer<Parties::PartySystem> getPartySystem() const;

    MCNAPI ::PersonaClient& getPersonaClient() const;

    MCNAPI ::PersonaRepository& getPersonaRepository() const;

    MCNAPI std::string getPlatformAppropriateSubscriptionLocString(std::string, bool) const;

    MCNAPI void getPlatformFriendProfiles(std::function<void(const std::vector<Social::PlatformUserProfileData>&)>);

    MCNAPI std::string getPlatformOnlineID() const;

    MCNAPI void getPlatformProfile(std::string const&, std::function<void(Social::PlatformUserProfileData&)>);

    MCNAPI ::Player const* getPlayer() const;

    MCNAPI ::LayeredAbilities* getPlayerAbilities();

    MCNAPI ::LayeredAbilities* getPlayerAbilitiesById(::ActorUniqueID&);

    MCNAPI ::FurnaceOptions const& getPlayerBlastFurnaceOptions() const;

    MCNAPI std::string const& getPlayerBlastFurnaceSearchString() const;

    MCNAPI ::CommandPermissionLevel getPlayerCommandPermissionLevel() const;

    MCNAPI ::FurnaceOptions const& getPlayerFurnaceOptions() const;

    MCNAPI std::string const& getPlayerFurnaceSearchString() const;

    MCNAPI ::GameType getPlayerGameType() const;

    MCNAPI ::Player* getPlayerInternal();

    MCNAPI ::InventoryOptions const& getPlayerInventoryOptions() const;

    MCNAPI std::string const& getPlayerInventorySearchString() const;

    MCNAPI ::PlayerMessagingService& getPlayerMessagingService() const;

    MCNAPI std::string getPlayerName() const;

    MCNAPI ::FurnaceOptions const& getPlayerSmokerOptions() const;

    MCNAPI std::string const& getPlayerSmokerSearchString() const;

    MCNAPI short getPointerX() const;

    MCNAPI short getPointerY() const;

    MCNAPI void getPreferredRegions(std::function<void(Realms::GenericStatus, std::vector<Realms::ServerRegion>)>);

    MCNAPI std::string getPriceDisclaimerText() const;

    MCNAPI std::pair<std::string, bool> const getPrivilegesBlockedString(
        ::Social::PermissionCheckResult const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    ) const;

    MCNAPI ::Bedrock::Threading::Async<Core::PathBuffer<std::string>>
    getProfileImageFile(::Social::ProfileImageOptions const&);

    MCNAPI void getProfiles(
        std::vector<std::string> const&,
        std::function<void(const std::vector<const Social::XboxLiveUserProfileData*>&)>
    );

    MCNAPI std::string getRandomSearchTermUsingCategory(::StoreCatalogCategory const&) const;

    MCNAPI void getRealmWorldBackupList(
        ::Realms::RealmId,
        int,
        std::function<void(Realms::GenericStatus, Realms::WorldBackupList)>
    );

    MCNAPI void
        getRealmsBlocklist(::Realms::RealmId, std::function<void(Realms::GenericStatus, std::vector<std::string>)>);

    MCNAPI void
        getRealmsConfigDetails(::Realms::RealmId, std::function<void(Realms::GenericStatus, Realms::ConfigInfo)>);

    MCNAPI ::Realms::ContentService& getRealmsContentService();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::InvitesService>> getRealmsInvitesService();

    MCNAPI void
        getRealmsMembers(::Realms::RealmId, std::function<void(Realms::GenericStatus, std::vector<Realms::Player>)>);

    MCNAPI void getRealmsOnlinePlayers(std::function<void(Realms::GenericStatus, std::vector<Realms::World>)>);

    MCNAPI bool getRealmsShowFriendInvitesOnly() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::SubscriptionService>> getRealmsSubscriptionService();

    MCNAPI void getRealmsWorld(::Realms::RealmId, std::function<void(Realms::GenericStatus, Realms::World)>, bool);

    MCNAPI std::shared_ptr<Realms::WorldCache> getRealmsWorldCache();

    MCNAPI ::Realms::World getRealmsWorldContextWorld() const;

    MCNAPI float getResourcePackDownloadProgress(std::string&) const;

    MCNAPI ::LoadingState getResourcePackDownloadingState() const;

    MCNAPI std::string getResourcePackProgress() const;

    MCNAPI ::IResourcePackRepository& getResourcePackRepository() const;

    MCNAPI ::ISceneFactory& getSceneFactory() const;

    MCNAPI uint getSceneId() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> getSceneStack() const;

    MCNAPI ::ScreenContext getScreenContext_DEPRECATED_DO_NOT_USE(float const);

    MCNAPI std::string getScreenName() const;

    MCNAPI ::ui::ScreenTechStackSelector& getScreenTechStackSelector();

    MCNAPI std::string getScreenTelemetry() const;

    MCNAPI ::PlayerInventorySlotData getSelectedSlot();

    MCNAPI std::string const& getServerSettingsData();

    MCNAPI uint getServerSettingsId();

    MCNAPI std::shared_ptr<const SDL::SessionConfig> getServiceSessionConfig() const;

    MCNAPI ::ServicesManager& getServicesManager() const;

    MCNAPI std::string const& getServicesManagerConfigId() const;

    MCNAPI std::string getServicesManagerErrorStatusCodeString() const;

    MCNAPI std::vector<StoreFilter::FilterCollectionInfo> const& getSessionConfigFilterCollections() const;

    MCNAPI std::string getSessionConfigKnownPageKeyValue(std::string const&) const;

    MCNAPI bool getSimPaused() const;

    MCNAPI std::shared_ptr<SkinRepository> getSkinRepository() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<SoundEngine>> getSoundEngine() const;

    MCNAPI ::SplitScreenInfo getSplitScreenInfo() const;

    MCNAPI bool getSplitscreenJoinPromptVisible() const;

    MCNAPI std::string getSplitscreenJoinText() const;

    MCNAPI ::StoreContentSources getStoreContentSources() const;

    MCNAPI std::string getStoreDocumentId() const;

    MCNAPI bool getStoreHasMarketplacePassProducts() const;

    MCNAPI bool getStoreHasRealmsProducts() const;

    MCNAPI std::string getStoreId() const;

    MCNAPI ::SDL::SubscriptionInfo getSubscriptionFullPriceInfo() const;

    MCNAPI std::string getTermsOfUseHyperlink() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<TextToIconMapper>> getTextToIconMapper();

    MCNAPI void getThirdPartyDisplayPictures(
        std::vector<std::string> const&,
        std::function<void(const std::string&, const Core::Path&)>
    );

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IThirdPartyServerRepository>> getThirdPartyServerRepository();

    MCNAPI bool getTipText(std::string&);

    MCNAPI ::ToastManager& getToastManager();

    MCNAPI ulong getTotalHardwareThreadsCount() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>> getTrialManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IUIDefRepository>> getUIDefRepo();

    MCNAPI ::OreUI::Router& getUIRouter();

    MCNAPI bool getUnfulfilledEduPurchase(::EduPurchaseDetails&);

    MCNAPI ::GameType getUnmappedPlayerGameType() const;

    MCNAPI std::vector<std::shared_ptr<SDL::ScreenLayoutQuery>> const& getUpsellLayoutList() const;

    MCNAPI uint getUserId() const;

    MCNAPI void getUserMemberOfWorldsCount(std::function<void(Realms::GenericStatus, bool)>);

    MCNAPI ::Social::XboxLiveUserProfileData const& getUserProfileDataByXuid(std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Social::XboxLiveUserProfileData>
    getUserProfileDataByXuidAsync(std::string const&);

    MCNAPI std::string getVersionString() const;

    MCNAPI std::shared_ptr<WebviewInterface> getWebviewInterface(::WebviewInterfaceType);

    MCNAPI std::string getWorldConverterDevVersionNumberString() const;

    MCNAPI std::string getWorldConverterDevelopmentVersionString() const;

    MCNAPI void
        getWorldFromLink(std::string, std::function<void(Realms::GenericStatus, const Json::Value&&, Realms::World)>);

    MCNAPI ::LoadingState getWorldLoadingState() const;

    MCNAPI std::vector<const Social::XboxLiveUserProfileData*> const& getXboxLiveFriends() const;

    MCNAPI std::vector<std::string> getXuidsInLobby() const;

    MCNAPI ::PurchaseResult
    goToExternalPlatformOffer(std::string const&, std::function<void(bool)>, std::function<void(bool, int)>);

    MCNAPI void grabMouse();

    MCNAPI void handleHideGUIButtonPress();

    MCNAPI void handleHidePaperDollButtonPress();

    MCNAPI void handleHideToolTipsButtonPress();

    MCNAPI bool hasActiveToast() const;

    MCNAPI bool hasCustomTrialConversionScreen() const;

    MCNAPI bool hasExternalCoinPurchases() const;

    MCNAPI bool hasInputDevice() const;

    MCNAPI bool hasInteractButton() const;

    MCNAPI bool hasLocalDeviceEntitlements() const;

    MCNAPI bool hasLocalPlayer() const;

    MCNAPI bool hasPlatformIcons() const;

    MCNAPI bool hasPlatformInvites() const;

    MCNAPI bool hasPlatformProfileCards() const;

    MCNAPI void initCodebuilderView();

    MCNAPI void initializeRealmsWorld(
        ::Realms::RealmId,
        std::string const&,
        std::string const&,
        std::function<void(Realms::GenericStatus, Realms::FailureReason)>
    );

    MCNAPI void invitePlayers(std::vector<std::string> const&, ::Social::MultiplayerServiceIdentifier const);

    MCNAPI ::Social::PermissionCheckResult isAddFriendAllowed() const;

    MCNAPI bool isAnyDlcDownloadingOrImportingExceptSkinPacks(std::vector<std::string> const&) const;

    MCNAPI bool isBanned() const;

    MCNAPI bool isChromebook() const;

    MCNAPI bool isConfigurableRealmEnvironment() const;

    MCNAPI bool isControllerConnected() const;

    MCNAPI bool isCreative() const;

    MCNAPI bool isCrossPlatformPlayEnabled() const;

    MCNAPI bool isDesktop() const;

    MCNAPI bool isDeviceBeingSunset() const;

    MCNAPI bool isDeviceSunset() const;

    MCNAPI bool isEditorEnabledOrPlaytesting() const;

    MCNAPI bool isEditorModeEnabled() const;

    MCNAPI bool isEditorPlayer() const;

    MCNAPI bool isEditorProjectWorld() const;

    MCNAPI bool isEduDemo();

    MCNAPI bool isEduMode() const;

    MCNAPI bool isEligibleForPauseFeature() const;

    MCNAPI bool isFeatureEnabled(::MinecraftGameFeatures) const;

    MCNAPI bool isFriendsDrawerEnabled(::MinecraftScreenModel::FriendsDrawerLocation) const;

    MCNAPI bool isGameModeEnabled(::GameType) const;

    MCNAPI bool isGameTipsEnabled();

    MCNAPI bool isGamepadCursorEnabled() const;

    MCNAPI bool isHostingLocalDedicatedServer() const;

    MCNAPI bool isHotbarOnlyTouch() const;

    MCNAPI bool isImageRepositoryReady() const;

    MCNAPI bool isInControlCustomization() const;

    MCNAPI bool isInMultiplayerGame() const;

    MCNAPI bool isInputModeGamepad() const;

    MCNAPI bool isInputModeMouse() const;

    MCNAPI bool isInputModeTouch() const;

    MCNAPI bool isInternetAvailable() const;

    MCNAPI bool isInviteEnabled(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isKeyboardActive() const;

    MCNAPI bool isLANAllowed() const;

    MCNAPI bool isLANAvailable() const;

    MCNAPI bool isLeftHanded() const;

    MCNAPI bool isLevelLoadingProgressScreen();

    MCNAPI bool const isLevelValid() const;

    MCNAPI bool isMarketplaceDisabled() const;

    MCNAPI bool isMultiPlayerClient() const;

    MCNAPI ::Social::PermissionCheckResult isMultiplayerAllowed() const;

    MCNAPI bool isMultiplayerFeatureAllowed() const;

    MCNAPI bool isMuteChat();

    MCNAPI bool isNetworkAllowed() const;

    MCNAPI bool isNetworkAvailable() const;

    MCNAPI bool isOnSceneStack(std::string const&);

    MCNAPI bool isOperator() const;

    MCNAPI bool isPersonaAppearanceLoading(int const) const;

    MCNAPI bool isPersonaInitialized() const;

    MCNAPI bool isPlatformConsole() const;

    MCNAPI bool isPlatformInviteEnabled() const;

    MCNAPI bool isPlatformNX() const;

    MCNAPI bool isPlatformSony() const;

    MCNAPI bool isPlatformStoreIconVisible() const;

    MCNAPI bool isPlatformThirdPartyConsole() const;

    MCNAPI bool isPlayerHosting(::ActorUniqueID const&);

    MCNAPI bool isPlayerValid();

    MCNAPI bool isPreGame() const;

    MCNAPI bool isPremiumOwnedMissing(::PackIdVersion const&, ::ContentIdentity const&) const;

    MCNAPI bool isPremiumPlatformAccessRequired() const;

    MCNAPI bool isPremiumPlatformAccessRequiredForMatchmaking() const;

    MCNAPI bool isPrimaryClient() const;

    MCNAPI bool isPrimaryLevelCrossPlatformMultiplayer() const;

    MCNAPI bool isPrimaryLevelMultiplayer() const;

    MCNAPI bool isRealmLevel() const;

    MCNAPI bool isRealmOwner() const;

    MCNAPI bool isRealmsCompatibilityCheckComplete() const;

    MCNAPI bool isRealmsEditWorldOreUIFeatureOn() const;

    MCNAPI bool isRealmsEnabled() const;

    MCNAPI bool isRealmsHubInGameFeatureOn() const;

    MCNAPI bool isRealmsInitialized() const;

    MCNAPI bool isResourceLoadingFinished() const;

    MCNAPI bool isRiding() const;

    MCNAPI bool isServiceMultiplayerEnabled(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isServiceMultiplayerSupported(::Social::MultiplayerServiceIdentifier const);

    MCNAPI bool isServicesManagerReady() const;

    MCNAPI bool isSessionConfigInProgress() const;

    MCNAPI bool isSessionConfigReady() const;

    MCNAPI bool isSessionConfigRetrievalDelayed() const;

    MCNAPI bool isSessionInfoValid(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isSignInInProgress() const;

    MCNAPI bool isSignedInToAdhoc() const;

    MCNAPI bool isSignedInToNEX() const;

    MCNAPI bool isSignedInToPSN() const;

    MCNAPI bool isSignedInToPlayfab() const;

    MCNAPI bool isSignedInToXBL() const;

    MCNAPI bool isSneaking() const;

    MCNAPI bool isSony() const;

    MCNAPI bool isSpectator() const;

    MCNAPI bool isSplitScreen();

    MCNAPI bool isStartingGame() const;

    MCNAPI bool isSwitchTrialsEnabled(bool) const;

    MCNAPI bool isTouchEnabled() const;

    MCNAPI bool isUILoadingDone() const;

    MCNAPI bool isUITTSEnabled() const;

    MCNAPI bool isUnableToShowXBLLogo() const;

    MCNAPI bool isUserAnonymous() const;

    MCNAPI bool isUserBanned() const;

    MCNAPI bool isUserConnectedToPlatform() const;

    MCNAPI ::Social::PermissionCheckResult isUserGeneratedContentAllowed() const;

    MCNAPI bool isUserWaitingForPlatformConnection() const;

    MCNAPI bool isUsingUnifiedJoinRealmFlow() const;

    MCNAPI bool isValidCrossPlatformSkin(bool) const;

    MCNAPI bool isValidRealmName(std::string);

    MCNAPI bool isWorldActive() const;

    MCNAPI bool isWorldTransferInProgress() const;

    MCNAPI bool isXboxLiveSupportedOnThisPlatform() const;

    MCNAPI void joinEDUDiscoveredWorld();

    MCNAPI void joinRealmFromInvite(::Realms::World);

    MCNAPI void joinRealmsGame(::Realms::World const&, ::Social::GameConnectionInfo const&);

    MCNAPI void joinRealmsWorld(
        ::Realms::World,
        std::function<void(const Social::GameConnectionInfo&, bool)>,
        std::function<void(Realms::GenericStatus, RealmsAPI::JoinStatus, Realms::FailureReason)>,
        std::function<void(int)>,
        ::IMinecraftEventing::RealmConnectionFlow,
        std::function<void(IMinecraftEventing::RealmConnectionFlow)>,
        std::function<void(IMinecraftEventing::RealmConnectionFlow, Bedrock::Http::StatusCode)>
    );

    MCNAPI void launchEduUri(std::string const&);

    MCNAPI void launchFeedbackHelpUri();

    MCNAPI void launchGooglePlaySubscriptions();

    MCNAPI bool launchManageSubscriptions();

    MCNAPI bool launchStoreForClientUpdates();

    MCNAPI void launchUri(std::string const&);

    MCNAPI void launchUserGeneratedUri(std::string const&, ::UserGeneratedUriSource, bool);

    MCNAPI void leaveRealmsWorld(::Realms::RealmId, std::function<void(Realms::GenericStatus)>);

    MCNAPI void listRealmsInvites(std::function<void(Realms::GenericStatus, std::vector<Invites::Invite>)>);

    MCNAPI void loadStoreDataDrivenScreenFromSidebar(::StoreDataDrivenScreenParams&);

    MCNAPI void makeBackupOfLevel(::LevelSummary const&);

    MCNAPI bool multiplayerLostConnectionToSignalingService() const;

    MCNAPI bool multiplayerRequiresUGCEnabled() const;

    MCNAPI void navigateToActiveDirectoryLogin(bool, ::LastClickedSource);

    MCNAPI void navigateToActiveDirectoryModal(::ActiveDirectoryModalArgs const&);

    MCNAPI void navigateToAddEditExternalServerScreen(int);

    MCNAPI void navigateToAdhocInProgressScreen(bool const);

    MCNAPI void navigateToCannotUseNetworkFeaturesScreen();

    MCNAPI void navigateToControlCustomizationScreen();

    MCNAPI void navigateToCreditsScreen(::CreditsType, std::function<void()>);

    MCNAPI void navigateToCustomTemplatesScreen(std::vector<WorldTemplateInfo> const&);

    MCNAPI void navigateToDayOneExperienceScreen();

    MCNAPI void navigateToDeleteAccountScreen();

    MCNAPI void navigateToDeleteProgressScreen(
        std::string const&,
        ::IContentManager&,
        std::vector<std::shared_ptr<const ContentItem>>
    );

    MCNAPI void navigateToDevConsole();

    MCNAPI void navigateToDisabledSkinScreen(bool, std::function<void()>);

    MCNAPI void navigateToDisconnectScreen(::Connection::DisconnectFailReason);

    MCNAPI void navigateToEduHomeScreen();

    MCNAPI void navigateToEncyclopediaScreen(::EncyclopediaTopicIndex);

    MCNAPI void navigateToFeedScreen(::Realms::World const&);

    MCNAPI void navigateToFeedbackPopup();

    MCNAPI void navigateToGamePlayScreen();

    MCNAPI void navigateToHowToPlayScreen(::HowToPlayTopicIndex);

    MCNAPI void navigateToInviteScreen();

    MCNAPI void navigateToLessonCompleteScreen(::IMinecraftEventing::LessonCompleteDialogEntryPoint const);

    MCNAPI void
    navigateToModalProgressScreen(std::string const&, std::unique_ptr<ProgressHandler>, bool, std::string const&, bool);

    MCNAPI void navigateToOnlineSafetyDialogScreen(::OnlineSafetyProgressHandler&);

    MCNAPI void navigateToOptionsScreen(::SettingsTabIndex, bool, bool const, std::string const&);

    MCNAPI void navigateToPermissionsScreen(::ActorUniqueID);

    MCNAPI void navigateToPlatformNetworkConnectConfirmationScreen(std::function<void(bool)>);

    MCNAPI void navigateToPlatformSplitScreenConnectConfirmationScreen(std::function<void(bool)>);

    MCNAPI void navigateToPlatformStoreConnectConfirmationScreen(std::function<void(bool)>);

    MCNAPI void navigateToRealmsHubScreen(::Realms::World const&);

    MCNAPI void
    navigateToRealmsInviteLinkSettingScreen(::Realms::World const&, ::Realms::InviteLink const&, ::SettingsTabIndex);

    MCNAPI void navigateToRealmsInviteLinksScreen(::Realms::World const&);

    MCNAPI void navigateToRealmsManageScreen(::Realms::World const&, ::SettingsTabIndex);

    MCNAPI void navigateToRealmsPackErrorsScreen();

    MCNAPI void navigateToRealmsPlanPicker();

    MCNAPI void navigateToRealmsSlotSettingsScreen(::Realms::World const&);

    MCNAPI void navigateToRealmsSlotsScreen(::Realms::World const&);

    MCNAPI void navigateToRealmsStoriesShareLinkModal(::Realms::World const&);

    MCNAPI void navigateToRealmsTimelineRequiredDisconnectScreen(long);

    MCNAPI void navigateToSafeZoneScreen();

    MCNAPI void navigateToScreenshotScreen();

    MCNAPI void navigateToSelectWorldPopup(
        std::function<void(SelectWorldResult, optional_ref<const LevelSummary>, optional_ref<const Realms::World>)>
    );

    MCNAPI void navigateToStartScreen();

    MCNAPI void navigateToStoreHomeScreen(std::string const&);

    MCNAPI void navigateToStoreRatingScreen();

    MCNAPI void navigateToTTSErrorScreen();

    MCNAPI void navigateToTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab);

    MCNAPI void navigateToTokenFAQScreen();

    MCNAPI void navigateToTokenPopupScreen();

    MCNAPI void navigateToTrialConversionScreen();

    MCNAPI void navigateToUpdateWorldHeightScreen(std::function<void(bool)>);

    MCNAPI void navigateToVersionUpdateScreen(::UpdateVersionScreenContext);

    MCNAPI void navigateToWorldRecoveryScreen(std::function<void()>);

    MCNAPI bool needPlatformConnectionBeforeXBLSignIn() const;

    MCNAPI bool needPlatformConnectionForMultiplayer() const;

    MCNAPI bool needPlatformConnectionForSplitScreenMultiplayer() const;

    MCNAPI bool needToRefreshPendingInvites() const;

    MCNAPI void onGameEventNotification(::ui::GameEventNotification);

    MCNAPI void onResourceLoadProgressHandlersComplete();

    MCNAPI void openBannedModal();

    MCNAPI void
        openRealmsWorld(::Realms::RealmId, std::function<void(Realms::GenericStatus)>, std::function<void(int)>);

    MCNAPI bool openingExternalResourceSuspendsApp() const;

    MCNAPI void pickFile(std::shared_ptr<FilePickerSettings>) const;

    MCNAPI void playUI(std::string const&, float, float);

    MCNAPI void precacheGameplayScreens();

    MCNAPI void precacheOreUIGameplayViews();

    MCNAPI void prepareToNavigateToGamePlayScreen();

    MCNAPI void printResourceLoadManagerRunningTasks() const;

    MCNAPI bool purchaseEduLicense(std::unique_ptr<TransactionContext>);

    MCNAPI void purchaseGame(std::function<void()>, ::TrialUpgradePurchaseTier const);

    MCNAPI void purchasePreview(::StorePreviewVersion) const;

    MCNAPI void pushToast(::ToastMessage);

    MCNAPI void quit(std::string const&, std::string const&);

    MCNAPI void quitStoreRatingScreen();

    MCNAPI ::RealmsAPI::Compatibility realmsCompatibility() const;

    MCNAPI void rebindKeys();

    MCNAPI void rebuildPlayScreenMenuStack();

    MCNAPI void recordResourceLoadProgressHandlerTime(std::string const&, float);

    MCNAPI void refreshCurrentRealmWorldInfo(std::function<void(Realms::GenericStatus, const Realms::World&)>);

    MCNAPI void registerServicesManagerSetupCallback(std::function<void()>);

    MCNAPI void rejectRealmsInvite(::Invites::InviteId, std::function<void(Realms::GenericStatus)>);

    MCNAPI void removeExternalServer(int);

    MCNAPI void
    removeFromRealmsBlocklist(::Realms::RealmId, std::string const&, std::function<void(Realms::GenericStatus)>);

    MCNAPI void requestClientLeaveGame(bool, bool);

    MCNAPI void requestDefaultPermissions(::PlayerPermissionLevel);

    MCNAPI std::shared_ptr<FileDataRequest>
    requestImageFromUrl(std::string const&, std::function<void(Bedrock::Http::Status, const Core::Path&, ulong)>);

    MCNAPI void requestPlayerPermissions(::LayeredAbilities const&, ::ActorUniqueID);

    MCNAPI void requestServerSettings();

    MCNAPI bool requiresNetworkOutageMessaging() const;

    MCNAPI bool requiresXBLSigninToPlay() const;

    MCNAPI void resetActiveDirectoryAuthenticationState();

    MCNAPI void resetInput();

    MCNAPI void
        resetRealmsWorld(::Realms::RealmId, std::function<void(Realms::GenericStatus)>, std::function<void(int)>);

    MCNAPI void resetRealmsWorldContext();

    MCNAPI void resetResourceLoadManagerRepeatedHitCount();

    MCNAPI void restoreRealmWorldBackup(
        ::Realms::RealmId,
        int,
        std::string const&,
        std::function<void(Realms::GenericStatus, std::string)> const&
    );

    MCNAPI void retryActiveDirectoryCheck();

    MCNAPI void saveAutoRealmWorldBackup(
        ::Realms::RealmId const&,
        int,
        std::string const&,
        std::string const&,
        std::vector<std::string> const&,
        std::function<void(Realms::GenericStatus, std::string)>
    );

    MCNAPI void saveEduReceipt(std::string const&, std::function<void(bool)> const&);

    MCNAPI void saveLevelData(std::string const&, ::LevelData const&);

    MCNAPI void savePlayerBlastFurnaceOptions(::FurnaceLeftTabIndex, bool, ::FurnaceLayout);

    MCNAPI void savePlayerBlastFurnaceSearchString(std::string const&);

    MCNAPI void savePlayerFurnaceOptions(::FurnaceLeftTabIndex, bool, ::FurnaceLayout);

    MCNAPI void savePlayerFurnaceSearchString(std::string const&);

    MCNAPI void savePlayerInventoryOptions(
        ::InventoryLeftTabIndex,
        ::InventoryRightTabIndex,
        bool,
        ::InventoryLayout,
        ::InventoryLayout
    );

    MCNAPI void savePlayerInventorySearchString(std::string const&);

    MCNAPI void savePlayerSmokerOptions(::FurnaceLeftTabIndex, bool, ::FurnaceLayout);

    MCNAPI void savePlayerSmokerSearchString(std::string const&);

    MCNAPI void saveRealmWorldBackup(
        ::Realms::RealmId const&,
        int const,
        std::string const&,
        std::vector<std::string>,
        std::function<void(Realms::GenericStatus, std::string)>
    );

    MCNAPI void scheduleCheckUserStorageAsync();

    MCNAPI bool screenPrecacheInProgress();

    MCNAPI void selectSlot(int, ::ContainerID);

    MCNAPI void sendDevConsoleMessage(std::string const&);

    MCNAPI void sendPurchaseReceiptsToServer();

    MCNAPI void sendSetDefaultGameTypePacket(::GameType);

    MCNAPI void sendSetDifficultyPacket(::SharedTypes::Legacy::Difficulty);

    MCNAPI void sendSettingsCommandPacket(std::string const&, bool);

    MCNAPI void sendTemplateOptionsUnlockPacket();

    MCNAPI void sendTrialWelcomeMessage();

    MCNAPI bool serverPermissionOpenChat() const;

    MCNAPI void setActiveDirectoryAuthenticationOfferPurchase();

    MCNAPI void setActiveDirectoryAuthenticationStateComplete();

    MCNAPI void setActiveDirectoryDemoVersion();

    MCNAPI void setActiveDirectoryEulaAccepted();

    MCNAPI void
    setActiveSlot(::Realms::RealmId, int, std::function<void(Realms::GenericStatus, Realms::FailureReason)>);

    MCNAPI void setClipboardData(std::string const&) const;

    MCNAPI void setClubProfile(::Clubs::ClubModel const&, std::function<void(Clubs::GenericStatus)>);

    MCNAPI void setCubemapRotationPaused(bool) const;

    MCNAPI void setCursorSelectedItemGroup(::ItemGroup const&);

    MCNAPI void setDefaultPermissionsRealms(
        ::Realms::RealmId,
        ::PlayerPermissionLevel const&,
        std::function<void(Realms::GenericStatus)>
    );

    MCNAPI void setGraphicsMode(int);

    MCNAPI void setInputBindingMode(::InputBindingMode);

    MCNAPI void setIsCheckoutInProgress(bool);

    MCNAPI void setIsDirty(bool);

    MCNAPI void setIsInGameBrowsing(bool);

    MCNAPI void setLanguage();

    MCNAPI void setLastSelectedSlot(int, ::ContainerID);

    MCNAPI void setNumberOfOwnedRealms(int);

    MCNAPI void setOpenControllerDisconnectScreen(bool);

    MCNAPI void setPlayerGameType(::GameType const&);

    MCNAPI void setRealmsShowFriendInvitesOnly(bool);

    MCNAPI void setRealmsWorldInfo(
        ::Realms::World,
        int const,
        bool const,
        std::function<void(Realms::GenericStatus, Realms::FailureReason)>
    );

    MCNAPI void setRefreshPendingInvites(bool);

    MCNAPI void setShareData(std::string, std::string, std::string);

    MCNAPI void setSimPaused(bool);

    MCNAPI void setStoreDocumentId(std::string const&);

    MCNAPI void setSuspendDirectionalInput(bool);

    MCNAPI void setSuspendInput(bool);

    MCNAPI void setTextBoxBackend(std::string const&);

    MCNAPI void setTexturePacksRequired(
        ::Realms::RealmId,
        bool const&,
        std::function<void(Realms::GenericStatus, Realms::FailureReason)>
    );

    MCNAPI void setTrialABTest(::PropertyBag*);

    MCNAPI void setUserPermissionRealms(
        ::Realms::RealmId,
        std::string const&,
        ::PlayerPermissionLevel const&,
        std::function<void(Realms::GenericStatus)>
    );

    MCNAPI void setValidScreenshot(::PhotoStorageContainer const&, std::string const&);

    MCNAPI bool shouldFireLayoutAndImageTelemetry() const;

    MCNAPI bool shouldShowFailRealmsPurchaseFulfillmentToggle() const;

    MCNAPI bool shouldShowThirdPartyDisconnected() const;

    MCNAPI bool shouldShowThirdPartySignIn() const;

    MCNAPI bool shouldShowVersionUpdateScreen();

    MCNAPI void showExternalLinkModalDialogPopup(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void()> const&
    );

    MCNAPI void showFriendFinder(std::function<void()>);

    MCNAPI void showPlatformEmptyStoreDialog(std::function<void(bool)>&&);

    MCNAPI void showPlayerProfile(std::string const&, std::string const&);

    MCNAPI void showShareUI();

    MCNAPI bool showSignInButton() const;

    MCNAPI void showStoreFeaturesDisabledWhenSignedOutScreen();

    MCNAPI void showUserSettings();

    MCNAPI void signIn(
        std::function<void()>,
        ::Social::IdentitySignInTrigger,
        std::string const&,
        std::function<void(Social::MultiIdentitySigninResult)>
    );

    MCNAPI void signOut();

    MCNAPI void signOut(std::function<void(Identity::SignOutResult)>);

    MCNAPI void silentSignin(
        ::Social::IdentitySignInTrigger,
        std::string const&,
        std::function<void(Social::MultiIdentitySigninResult)>
    );

    MCNAPI void startActiveDirectoryEduDemo();

    MCNAPI void startExternalNetworkWorld(std::string const&, std::string const&, int);

    MCNAPI void startLocalServerAsync(::LevelSummary const&, ::LevelSettings const&);

    MCNAPI void startLocalServerAsync(std::string const&, std::string, ::LevelSettings const&);

    MCNAPI void stopWebviewInterface(::WebviewInterfaceType);

    MCNAPI bool supports3DExport() const;

    MCNAPI bool supports3rdPartyServers() const;

    MCNAPI bool supportsClipboardSet() const;

    MCNAPI bool supportsGamepad() const;

    MCNAPI bool supportsKeyboardMouse() const;

    MCNAPI bool supportsLegacyWorlds() const;

    MCNAPI bool supportsMSAA() const;

    MCNAPI bool supportsShare();

    MCNAPI bool supportsTTSLanguage(std::string const&) const;

    MCNAPI bool supportsTouch() const;

    MCNAPI ::Bedrock::Threading::Async<Core::PathBuffer<std::string>> takeScreenshotForUploading();

    MCNAPI void travelToPartyDestination();

    MCNAPI void triggerBoardTextUpdatedTelemetry(::ChalkboardBlockActor&);

    MCNAPI void triggerContentShared(std::string const&, std::string const&, ::IMinecraftEventing::ShareMode const&);

    MCNAPI void triggerNpcUpdateTelemetry(::Actor&);

    MCNAPI void triggerPortfolioExportedTelemetry(int, int);

    MCNAPI void triggerRealmMemberlistCleared(::Realms::RealmId const&, int const);

    MCNAPI void
    triggerRealmShared(std::string const&, ::IMinecraftEventing::ShareMode const&, ::Realms::RealmId const&);

    MCNAPI void triggerRealmUrlGenerated(std::string const&, ::Realms::RealmId const&);

    MCNAPI void triggerWorldExportedTelemetry(long, ulong);

    MCNAPI ::ScopedCPUBoost tryEnableCPUBoost();

    MCNAPI bool
    tryNavigateToXblImmediateSignInScreen_DEPRECATED(std::string const&, std::function<void()>, std::function<void()>);

    MCNAPI bool updateEDUServicePackSystem() const;

    MCNAPI void updateInviteLink(
        ::Realms::RealmId,
        ::Realms::InviteLink,
        std::function<void(Realms::GenericStatus, Realms::InviteLink)>
    );

    MCNAPI void updateRealmsAllowList(
        ::Realms::RealmId,
        std::string const&,
        std::map<std::string, RealmsAPI::InviteAction>,
        std::function<void(Realms::GenericStatus, Realms::World)>
    );

    MCNAPI void
    updateRealmsConfig(::Realms::RealmId, std::string const&, std::function<void(Realms::GenericStatus, std::string)>);

    MCNAPI bool usePlatformProfilePicturesOnly() const;

    MCNAPI void verifySkinApproval(std::function<void(std::string)> const&, std::function<void()> const&) const;

    MCNAPI void waitingResourcePackConfimation();

    MCNAPI bool wasSessionCreated(::Social::MultiplayerServiceIdentifier const) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint& mSceneInstanceCounter();
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
    MCNAPI ::SubClientId $getSubClientId() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const $getUserManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> $getUserManager();

    MCNAPI void $navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const&, bool);

    MCNAPI bool $tryNavigateToProfileScreen();

    MCNAPI bool $tryNavigateToSafeZoneScreenOnFirstSignin();

    MCNAPI bool $leaveScreen(std::string, bool);

    MCNAPI bool $isInGame() const;

    MCNAPI void $requestLeaveGame(bool, bool);

    MCNAPI bool $isLeaveGameDone() const;

    MCNAPI bool $isUserReady() const;

    MCNAPI void $destroyGame();

    MCNAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCNAPI void $popScreensBackTo(::ui::SceneType const);

    MCNAPI ::INetworkGameConnector& $getNetworkGameConnector();

    MCNAPI bool $isSelectedSkinInitialized() const;

    MCNAPI bool $platformTTSExists() const;

    MCNAPI ::IDlcBatchModel& $getDlcBatchModel(std::vector<PackIdVersion> const&);

    MCNAPI ::IDlcBatchModel& $getDlcBatchModel(std::vector<std::string> const&);

    MCNAPI ::IDlcBatchModel& $getDlcBatchModel(std::vector<DlcId> const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> $getStoreCatalogRepository() const;

    MCNAPI float $getStoreNetworkFailureTimeout() const;

    MCNAPI bool $isAdhocEnabled() const;

    MCNAPI bool $isDirty() const;

    MCNAPI ::SkinHandle const& $getSelectedSkinHandle() const;

    MCNAPI std::string const& $getLastPoppedScreenName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
