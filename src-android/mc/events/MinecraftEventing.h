#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Connection__ReconnectionType.h"
#include "mc/certificates/identity/ActiveDirectoryAction.h"
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/game/DiskStatus.h"
#include "mc/client/game/edu_cloud/CloudItemType.h"
#include "mc/client/game/edu_cloud/ConflictResolutionStatus.h"
#include "mc/client/gui/screens/controllers/ClassroomSetting.h"
#include "mc/client/gui/screens/controllers/EduShareMethodType.h"
#include "mc/client/gui/screens/controllers/EduShareUriType.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/MultiplayerState.h"
#include "mc/client/social/ServiceState.h"
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/crash_manager/CrashTelemetryProcessor.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/application/storage_migration/WorldRecoveryTelemetryHandler.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/RawInputType.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/events/ConnectedStorageEventType.h"
#include "mc/events/EduControlPanelUpdateType.h"
#include "mc/events/FatalClientPackErrorType.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/events/UserGeneratedUriSource.h"
#include "mc/events/identity/EduSignInStage.h"
#include "mc/events/store_event_data/StoreType.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/SignInResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/services/signaling/SignalServiceConnectStage.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/server/safety/ChatFloodingAction.h"
#include "mc/util/ValidationStatus.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/containers/managers/controllers/MapOutputType.h"
#include "mc/world/item/ItemAcquisitionMethod.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/FileArchiverOutcome.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/block/CommandBlockMode.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AppPlatform;
class ArmorTrim;
class BaseCommandBlock;
class Block;
class BlockPos;
class ChalkboardBlockActor;
class ChunkRecyclerTelemetryData;
class ContentIdentity;
class DBStorageFolderWatcher;
class Experiments;
class IPacketObserver;
class IPurchaseEventing;
class IRealmsTelemetry;
class IResourceLoadEventing;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Level;
class LevelChunk;
class LevelData;
class LevelSeed64;
class LevelSettings;
class MessagePerformance;
class Mob;
class MobEffectInstance;
class NetworkIdentifier;
class PackInstance;
class PackManifest;
class PackSettings;
class PacketObserver;
class PerfContextTrackerReport;
class Player;
class PlayerRespawnTelemetryData;
class PushNotificationMessage;
class ScriptPluginResult;
class StructureEditorData;
class StructureTelemetryClientData;
class TaskGroup;
class TelemetryInfo;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
struct BehaviorPackContents;
struct BiomeIdType;
struct ChunkRecyclerTelemetryOutput;
struct DBStoragePerformanceTelemetryData;
struct DimensionTransferTelemetryData;
struct DimensionType;
struct ExtraLicenseData;
struct ImageTelemetryInfo;
struct LevelStorageEventingContext;
struct LowMemoryReport;
struct MinecraftEventingDependencies;
struct NewBlockID;
struct OnlineAudioStreamEnded;
struct PacksInfoData;
struct ProfilerLiteTelemetry;
struct ResourcePackContents;
struct ResourceProcessingPerfData;
struct SplitScreenUpdatedEventData;
struct StackStats;
struct WebviewDownloadInfo;
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct CrashUploadStatus; }
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DirectoryEntry; }
namespace Bedrock { struct WorldRecoveryTelemetryEvent; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::Profiling::Orchestrator { struct ProfilerCaptureParams; }
namespace Bedrock::Profiling::Orchestrator { struct ProfilerMetadataParams; }
namespace Core { class Path; }
namespace Core::Profile { struct FileCounters; }
namespace Json { class Value; }
namespace PuvLoadData { struct TelemetryEventData; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlayerIDs; }
namespace Social::Events { class AchievementEventing; }
namespace Social::Events { class Event; }
namespace Social::Events { class EventManager; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class MobTelemetry; }
namespace Social::Events { class OptionChange; }
namespace Social::Events { class PlayerTelemetry; }
namespace Social::Events { class Property; }
namespace Social::Events { class ScreenFlow; }
namespace Social::Events { class TelemetryHeartbeat; }
namespace Social::Events { struct InboxSummaryData; }
namespace Social::Events { struct PageDisplayRecord; }
namespace Social::Events { struct ServerTelemetryData; }
namespace Webview { struct TelemetryCommonProperties; }
namespace dragon::texturestreaming { struct TextureStreamingPerformanceTelemetryData; }
namespace mce { class UUID; }
// clang-format on

class MinecraftEventing : public ::IMinecraftEventing,
                          public ::Bedrock::CrashTelemetryProcessor,
                          public ::Bedrock::WorldRecoveryTelemetryHandler {
public:
    // MinecraftEventing inner types declare
    // clang-format off
    struct RealmsTelemetryBox;
    // clang-format on

    // MinecraftEventing inner types define
    enum class PoiEventBlockType : int {
        BlastFurnace     = 0,
        BrewingStand     = 1,
        CartographyTable = 2,
        Grindstone       = 3,
        Loom             = 4,
        Smoker           = 5,
        Stonecutter      = 6,
        Barrel           = 7,
        Bell             = 8,
        Campfire         = 9,
        Cauldron         = 10,
        Composter        = 11,
        Lectern          = 12,
    };

    enum class POIBlockInteractionType : uchar {
        None                = 0,
        Extend              = 1,
        Clone               = 2,
        Lock                = 3,
        Create              = 4,
        CreateLocator       = 5,
        Rename              = 6,
        ItemPlaced          = 7,
        ItemRemoved         = 8,
        Cooking             = 9,
        Dousing             = 10,
        Lighting            = 11,
        Haystack            = 12,
        Filled              = 13,
        Emptied             = 14,
        AddDye              = 15,
        DyeItem             = 16,
        ClearItem           = 17,
        EnchantArrow        = 18,
        CompostItemPlaced   = 19,
        RecoveredBonemeal   = 20,
        BookPlaced          = 21,
        BookOpened          = 22,
        Disenchant          = 23,
        Repair              = 24,
        DisenchantAndRepair = 25,
    };

    enum class BlockPlacementMethod : int {
        Entity  = 0,
        Command = 1,
    };

    enum class InteractionType : uchar {
        Breeding   = 1,
        Taming     = 2,
        Curing     = 3,
        Crafted    = 4,
        Shearing   = 5,
        Milking    = 6,
        Trading    = 7,
        Feeding    = 8,
        Igniting   = 9,
        Coloring   = 10,
        Naming     = 11,
        Leashing   = 12,
        Unleashing = 13,
        PetSleep   = 14,
        Trusting   = 15,
        Commanding = 16,
        Equipping  = 17,
    };

    enum class TeleportationCause : int {
        Unknown                  = 0,
        Projectile               = 1,
        ChorusFruit              = 2,
        Command                  = 3,
        Behavior                 = 4,
        TeleportationCause_Count = 5,
    };

    enum class ChangeType : int {
        Unknown = 0,
        Added   = 1,
        Removed = 2,
        Updated = 3,
    };

    enum class AchievementIds : uchar {
        ChestFullOfCobblestone          = 7,
        DiamondForYou                   = 10,
        IronBelly                       = 20,
        IronMan                         = 21,
        OnARail                         = 29,
        Overkill                        = 30,
        ReturnToSender                  = 37,
        SniperDuel                      = 38,
        StayinFrosty                    = 39,
        TakeInventory                   = 40,
        MapRoom                         = 50,
        FreightStation                  = 52,
        SmeltEverything                 = 53,
        TasteOfYourOwnMedicine          = 54,
        WhenPigsFly                     = 56,
        Inception                       = 58,
        ArtificialSelection             = 60,
        FreeDiver                       = 61,
        SpawnTheWither                  = 62,
        Beaconator                      = 63,
        GreatView                       = 64,
        SuperSonic                      = 65,
        TheEndAgain                     = 66,
        TreasureHunter                  = 67,
        ShootingStar                    = 68,
        FashionShow                     = 69,
        SelfPublishedAuthor             = 71,
        AlternativeFuel                 = 72,
        SleepWithTheFishes              = 73,
        Castaway                        = 74,
        ImAMarineBiologist              = 75,
        SailThe7Seas                    = 76,
        MeGold                          = 77,
        Ahoy                            = 78,
        Atlantis                        = 79,
        OnePickleTwoPickleSeaPickleFour = 80,
        DoaBarrelRoll                   = 81,
        Moskstraumen                    = 82,
        Echolocation                    = 83,
        WhereHaveYouBeen                = 84,
        TopOfTheWorld                   = 85,
        FruitOnTheLoom                  = 86,
        SoundTheAlarm                   = 87,
        BuyLowSellHigh                  = 88,
        Disenchanted                    = 89,
        TimeForStew                     = 90,
        BeeOurGuest                     = 91,
        TotalBeeLocation                = 92,
        StickySituation                 = 93,
        CoverMeInDebris                 = 94,
        FloatYourGoat                   = 95,
        Friend                          = 96,
        WaxOnWaxOff                     = 97,
        StriderRiddenInLavaInOverworld  = 98,
        GoatHornAcquired                = 99,
        JukeboxUsedInMeadows            = 100,
        TradedAtWorldHeight             = 101,
        SurvivedFallFromWorldHeight     = 102,
        SneakCloseToSculkSensor         = 103,
        ItSpreads                       = 104,
        BirthdaySong                    = 105,
        WithOurPowersCombined           = 106,
        PlantingThePast                 = 107,
        CarefulRestoration              = 108,
        Revaulting                      = 109,
        CraftersCraftingCrafters        = 110,
        WhoNeedsRockets                 = 111,
        OverOverkill                    = 112,
        HeartTransplanter               = 113,
        StayHydrated                    = 114,
        MobKabob                        = 115,
        AdventuringTime                 = 116,
        UhOh                            = 117,
        GettingWood                     = 118,
        BenchMaking                     = 119,
        TimeToMine                      = 120,
        HotTopic                        = 121,
        AcquireHardware                 = 122,
        GettingAnUpgrade                = 123,
        MonsterHunter                   = 124,
        Diamonds                        = 125,
        PlethoraOfCats                  = 126,
        Count                           = 127,
    };

    enum class ItemInteractMethod : int {
        Use   = 0,
        Place = 1,
    };

    enum class AccountType : int {
        Xbl   = 1,
        Guest = 2,
        Other = 3,
    };

    struct RealmsTelemetryBox {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<IRealmsTelemetry>> mTelemetry;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<TelemetryInfo>> mTelemetryInfo;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::Events::TelemetryHeartbeat>> mHeartbeat;
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mAssertTelemetrySubscription;
    ::ll::UntypedStorage<8, 24> mSettingsDir;
    ::ll::TypedStorage<8, 24, std::string> mPlayerSessionID;
    ::ll::TypedStorage<8, 24, std::string> mAppSessionID;
    ::ll::TypedStorage<1, 1, bool> mShouldHaveAchievementsEnabled;
    ::ll::TypedStorage<1, 1, bool> mAchievementsAlwaysEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mAchivementsAlwaysOptionSubscription;
    ::ll::TypedStorage<8, 8, double> mLastScreenTimestamp;
    ::ll::TypedStorage<8, 8, double> mLastImGuiScreenTimestamp;
    ::ll::TypedStorage<1, 1, bool> mFlagPlayerGameTypeDefault;
    ::ll::TypedStorage<1, 1, bool> mFlagDeepLink;
    ::ll::TypedStorage<4, 4, int> mNumTimesDeviceLost;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, double>> mPlayerLastDamagedTimestamp;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mWorldSessionIdGenerationTimestamp;
    ::ll::UntypedStorage<8, 8> mServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PacketObserver>> mPacketObserver;
    ::ll::UntypedStorage<8, 8> mPacketObserverRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkRecyclerTelemetryData>> mChunkRecyclerTelemetryData;
    ::ll::UntypedStorage<8, 8> mChunkRecyclerTelemetryDataRegistrationToken;
    ::ll::UntypedStorage<8, 8> mWorldRecoveryRegistrationToken;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<MinecraftEventingDependencies>>> mDeps;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::UntypedStorage<8, 48> mRealmsTelemetry;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftEventing();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MinecraftEventing();

    virtual void init(::Bedrock::NonOwnerPointer<AppPlatform> const&);

    virtual void initDeviceAndSessionIds();

    virtual void shutdown();

    virtual std::string const& getPlayerSessionId();

    virtual std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> getWorldSessionIdGenerationTimestamp() const;

    virtual bool getShouldHaveAchievementsEnabled();

    virtual void setShouldHaveAchievementsEnabled(bool);

    virtual bool getAchievementsAlwaysEnabled();

    virtual uint getPrimaryLocalUserId() const;

    virtual void forceSendEvents();

    virtual ::Social::Events::EventManager& getEventManager() const;

    virtual void updatePrimaryLocalUserId(uint const&);

    virtual std::string getUserUID(::Social::IdentityType, std::string const&) const;

    virtual void registerSecondaryUserCommonProperties(uint const&, std::string const&) const;

    virtual void unregisterSecondaryUserCommonProperties(uint const&) const;

    virtual void updateIsLegacyPlayer(bool) const;

    virtual void updateIsTrial(bool) const;

    virtual void updateEditionType() const;

    virtual void updateClientId() const;

    virtual void registerOptionsObserver(::brstd::function_ref<Bedrock::PubSub::Subscription (std::function<void (bool)>) const, Bedrock::PubSub::Subscription (std::function<void (bool)>)>);

    virtual void addListener(std::unique_ptr<Social::Events::IEventListener>);

    virtual void clearListeners();

    virtual ::Json::Value propertiesAsJsonValue() const;

    virtual void fireEvent(std::string const&, std::vector<Social::Events::Property> const&, std::vector<Social::Events::Measurement> const&, bool);

    virtual void fireEventBlockTypeRegistryChecksumMismatch(std::string const&, ulong const&, ulong const&, std::string const&);

    virtual void fireEventOnSuccessfulClientLogin(::Level const*);

    virtual void fireEventStartClient(std::string const&, bool);

    virtual void fireEventStartWorld(::NetworkType, std::string const&, ::Social::MultiplayerServiceIdentifier const);

    virtual void fireEventPlayerJoinWorld(uint const&, ::SubClientId const, bool, std::optional<bool>, ::IConnectionEventing::PlayerJoinWorldAttemptState const, int, ::Connection::DisconnectFailReason, ::Json::Value const&, ::TransportLayer, ::NetworkType, ::Social::MultiplayerState, bool, bool, ::Social::MultiplayerServiceIdentifier, std::string const&, std::string const&, std::string const&, std::string const&, bool, bool, bool, ::Connection::ReconnectionType, bool, ulong, ::Social::GameConnectionInfo const&);

    virtual void fireEventClientLastPackets(uint const&, ::SubClientId const, int, ::Json::Value const&, ::Json::Value const&);

    virtual void fireEventSignalServiceConnect(::SignalServiceConnectStage, bool, ::Json::Value const&, std::string const&, std::string const&);

    virtual void fireEventSignalMessagePerformance(std::string const&, ::MessagePerformance const&);

    virtual void fireEventOnClientDisconnect(::NetworkIdentifier const&, ::SubClientId, bool, ::Connection::DisconnectFailReason, std::string const&, std::string const&, std::string const&);

    virtual void fireEventOnServerDisconnect(::Connection::DisconnectFailReason, ::NetworkIdentifier const&, ::SubClientId, std::string const&, ulong, std::string const&);

    virtual void fireEventOnServerAsyncJoinTaskVerdict(::nonstd::expected<AsyncJoinAllow, AsyncJoinDeny> const&, ::SubClientId const, uint);

    virtual void fireEventNPLNLifecycle(int, ::Social::MultiplayerState, ::Social::ServiceState);

    virtual void fireEventNPLNRpcFailure(int, int, ::Social::MultiplayerState, ::Social::ServiceState, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>);

    virtual void fireEventHttpClientError(std::string const&);

    virtual void fireGlobalResourcePackCrashRecovery(::PackInstance&, ::mce::UUID, int);

    virtual void fireServerConnectionEvent(::IConnectionEventing::ServerConnectionOutcome, uint, double, std::string const&, std::string const&);

    virtual void fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&);

    virtual void fireTextToSpeechToggled(bool, bool);

    virtual void fireEventAppInitFileOpenStats(::Core::Profile::FileCounters const&, ::Core::Profile::FileCounters const&);

    virtual void fireEventStartupPerformance(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireEventOnAppStart(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireEventOnAppSuspend(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::IMinecraftEventing::SuspendTriggersDisconnect, bool, bool);

    virtual void fireEventOnAppResume(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, std::optional<long>);

    virtual void fireEventOnDeviceLost(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireEventHardwareInfo();

    virtual void fireEventDeviceLost();

    virtual void fireEventRenderingSizeChanged();

    virtual void fireEventDiskStatus(::DiskStatus, ::Core::LevelStorageState, ulong);

    virtual void fireEventStorageAreaFull(std::string const&, std::vector<Bedrock::DirectoryEntry> const&);

    virtual void fireEventOptionsUpdated(bool, ::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireEventChatSettingsUpdated(::Player const*, std::vector<Social::Events::Property> const&) const;

    virtual void fireEventPerformanceMetrics(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::ProfilerLiteTelemetry const&, bool, int);

    virtual void fireEventPerformanceContext(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::PerfContextTrackerReport const&, bool, int);

    virtual void fireEventProfilerMetadata(::Bedrock::Profiling::Orchestrator::ProfilerMetadataParams const&);

    virtual void fireEventProfilerCapture(::Bedrock::Profiling::Orchestrator::ProfilerCaptureParams const&);

    virtual void fireTextureStreamingPerf(::dragon::texturestreaming::TextureStreamingPerformanceTelemetryData const&);

    virtual void fireEventDevSlashCommandExecuted(std::string const&, std::string const&);

    virtual void fireCommandParseTableTelemetry(bool const, std::vector<IMinecraftEventing::CommandParseTableEntry> const&) const;

    virtual void fireEventPlayerTravelled(::Player*, float, int);

    virtual void fireEventVideoPlayed(std::string const&, std::string const&);

    virtual void fireEventRespondedToAcceptContent(::PacksInfoData const&, bool, bool);

    virtual void fireEventWorldLoadTimes(std::string const&, std::vector<std::pair<std::string, float>> const);

    virtual void fireCDNDownloadEvent(std::string const&, std::string const&, std::string const&, ::IMinecraftEventing::CDNDownloadResult const&, ::IMinecraftEventing::CDNDownloadEventOrigin const&, float const&);

    virtual void fireEventSignInToIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, std::string const&, bool, ::IMinecraftEventing::SignInStage, ::Social::SignInResult, int, ::Social::PlayerIDs, std::string const&);

    virtual void fireEventSignOutOfIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, std::string const&, std::string const&);

    virtual void fireEventAppPaused();

    virtual void fireEventAppUnpaused();

    virtual void fireEventAppSurfaceCreated();

    virtual void fireEventAppSurfaceDestroyed();

    virtual void fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const&);

    virtual void fireEventPopupClosed(std::string const&) const;

    virtual void fireEventWorldImported(long, ulong);

    virtual void fireEventWorldImportedResult(::FileArchiverOutcome);

    virtual void fireCurrentInputUpdated(uint, ::InputMode);

    virtual void fireEventTreatmentPackApplied(::PackManifest const&);

    virtual void fireEventPackPlayed(::PackInstance const&, uint);

    virtual void fireEventTreatmentPackDownloadFailed(std::string, std::string, std::string, std::string);

    virtual void fireEventTreatmentPackDownloaded(std::string, std::string, std::string, std::string);

    virtual void fireEventTreatmentPackRemoved(std::string);

    virtual void fireEventPackDeleted(std::string_view, std::string const&, ::PackType, ::PackOrigin, std::string const&, long);

    virtual void fireEventContentLogsInWorldSession(std::string const&, uint, uint);

    virtual void fireEventEntitlementCacheLoadTimeout();

    virtual void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow);

    virtual void fireRealmConnectionEventGenericLambdaCalled(::IMinecraftEventing::RealmConnectionFlow, ::IMinecraftEventing::RealmConnectionLambda, ::IMinecraftEventing::RealmConnectionResult);

    virtual void fireEventCompoundCreatorCreated(int, int);

    virtual void fireEventElementConstructorUsed(int, int, ::IMinecraftEventing::ElementConstructorUseType);

    virtual void fireEventEntitySpawned(::Player*, int, uint);

    virtual void fireEventReducerBlockEntered(::ItemDescriptor const&);

    virtual void fireEventRespawn(::Player&, int);

    virtual void fireEventServerRespawnSearchTime(::Player&, ::PlayerRespawnTelemetryData const&);

    virtual void firePackSettingsEvent(::PackSettings const&, ::PackManifest const&, std::string);

    virtual void removeTestBuildIdTag();

    virtual void removeTestTelemetryTag();

    virtual void setTestBuildIdTag(char const*);

    virtual void setTestTelemetryTag(char const*);

    virtual void stopDebugEventLoggingForAllListeners();

    virtual void tick();

    virtual void fireEventMultiplayerClientConnectionStateChanged(std::string const&, uint, uint, uint, std::string const&);

    virtual void fireEventPacketViolationDetected(ulong, std::string, ::PacketViolationResponse, ::MinecraftPacketIds, ::NetworkIdentifier const&, uint, ::SubClientId, ::SubClientId, uint);

    virtual void fireEventServerReceivedValidPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId);

    virtual void fireEventClientSentOrReceivedPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, std::string, bool);

    virtual void fireEventJoinCanceled(::LoadingState);

    virtual void fireIgnoredNotificationsEvent(::IMinecraftEventing::IgnoredNotificationsType, int, std::set<IMinecraftEventing::IgnoredNotificationSource>);

    virtual void fireClubsEngagementEvent(::IMinecraftEventing::ClubsEngagementAction, ::IMinecraftEventing::ClubsEngagementTargetType, char const*, long const, std::string const&);

    virtual void fireClubsOpenFeedScreenEvent(::IMinecraftEventing::ClubsFeedScreenSource const, long const, std::string const&, int);

    virtual void fireEventEntitlementListInfo(std::vector<ContentIdentity>&, bool);

    virtual void fireEventStorage(int, std::string const&);

    virtual void fireEventDlcStorageFull(std::string const&, ulong, ulong, ulong, ulong);

    virtual void fireEventTotalDlcSizes(ulong, ulong);

    virtual void fireEventPlatformStorePurchaseFailure(std::string const&, std::string const&);

    virtual void fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&);

    virtual void fireEventTreatmentsCleared();

    virtual void fireEventTreatmentsSet(std::vector<std::string> const&, std::string const&);

    virtual void updateAppliedTreatmentPacks(std::vector<std::string> const&);

    virtual void fireEventProgressionsSet(std::vector<std::string> const&);

    virtual void fireEventPackImportTimeout(std::string const&);

    virtual void fireEventFatalClientPackError(::FatalClientPackErrorType, ::gsl::span<const std::string>);

    virtual void fireEventPackActivationError(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, bool);

    virtual void fireEventStoreErrorPage(std::string const&, std::string const&, std::string const&, std::string const&);

    virtual void setServerIdsforClient(std::string const&, std::string const&, ::Social::Events::ServerTelemetryData const&);

    virtual void removeServerIdsForClient();

    virtual void setConnectionCommonProperties(uint, std::string const&, ::NetworkType);

    virtual void removeConnectionCommonProperties(uint);

    virtual void trySetExperienceIdentifiers(std::string const&, std::string const&);

    virtual void removeExperienceIdentifiers();

    virtual std::string getExperienceId() const;

    virtual std::string getExperienceSessionId() const;

    virtual void fireEventSearchCatalogRequest(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireEventStoreSessionResponse(std::string const&, int const, int const, bool const);

    virtual void fireEventStoreDiscoveryRequestResponse(int const, int const, bool const);

    virtual void fireEventStoreInventoryRefreshRequestResponse(int const, int const, bool const);

    virtual void fireEventInventoryVersionRefreshRequestResponse(int const, int const, bool const);

    virtual void fireEventServerDrivenLayoutPageLoaded(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, std::string, int, int, int, int, int);

    virtual void fireEventServerDrivenLayoutImagesLoaded(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, std::string, ::ImageTelemetryInfo const&);

    virtual void fireEventLockedItemGiven();

    virtual void fireEventPlayerBounced(::Player*, ::Block const&, int);

    virtual void fireEventSetValidForAchievements(::Player*, bool);

    virtual void fireEventAchievementReceived(std::string const&, std::string const&, std::string const&);

    virtual void updatePlayerUndergroundStatus(::Player*, bool const);

    virtual void fireEventPlayerAttemptingExploit(::Player*, ::IMinecraftEventing::ExploitType);

    virtual void fireEventWorldLoaded(::Player*, ::brstd::function_ref<void (Social::Events::EventManager&, Social::Events::Event&) const, void (Social::Events::EventManager&, Social::Events::Event&)>);

    virtual void fireEventMarkLevelForSync(std::string const&, long, long, ::IMinecraftEventing::MarkLevelForSyncReason);

    virtual void fireMinecraftVersionLaunched(bool);

    virtual void fireMinecraftVersionInviteAccepted(bool, ulong);

    virtual void fireInviteStatusReceived(std::string);

    virtual void fireInviteStatusSentImpl(uint, std::vector<std::string>);

    virtual void fireDayOneExperienceStateChanged(::IMinecraftEventing::DayOneExperienceState, std::optional<uint>, std::optional<ulong>);

    virtual void fireContentDecryptionFailure(std::string const&, std::string const&, std::string const&);

    virtual void fireWorldConversionAttemptEvent(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireWorldConversionInitiatedEvent(std::string const&);

    virtual void fireWorldUpgradedToCnCPart2(bool, std::string const&, ::Experiments const&, std::string const&, ::LevelSeed64, float);

    virtual void fireEventAssertFailed(std::string const&, std::string const&);

    virtual void fireEventCrashSystemFailedToInit();

    virtual void fireChatUsedEvent(uint, bool);

    virtual void fireEventJoinByCode(std::string const&);

    virtual void fireEventBlockPlacedByCommand(::Block const&, int);

    virtual void fireEventServerPlayerJoinedGame(::NetworkIdentifier const&, ::SubClientId, std::string const&);

    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const&, bool);

    virtual void fireEventScriptPluginRun(::ScriptPluginResult const&, std::chrono::duration<long long, std::ratio<1, 1000000>>, bool);

    virtual void fireEventScriptDebuggerListen(bool, bool);

    virtual void fireEventScriptDebuggerConnect(bool, bool, int);

    virtual void fireEditorEventToolActivated(std::string const&);

    virtual void fireEditorUndo(std::string const&);

    virtual void fireEditorRedo(std::string const&);

    virtual void fireEditorScriptAction(std::string const&, std::string const&, std::string const&);

    virtual void fireEditorTutorialEvent(std::string_view, std::optional<std::string> const&, std::string const&, std::optional<std::string> const&);

    virtual void fireEventWorldLoadedClassroomCustomization(::IMinecraftEventing::WorldClassroomCustomization, ::buffer_span<std::pair<std::string_view, std::string_view>>);

    virtual void fireClassroomSettingUpdated(::ClassroomSetting, ::SettingsScreenMode);

    virtual void fireEventNpcPropertiesUpdated(::Actor&, bool);

    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor&);

    virtual void fireEventCameraUsed(bool);

    virtual void fireEventPortfolioExported(int, int);

    virtual void fireQuickPlayEvent();

    virtual void firePermissionsSetEvent(::PlayerPermissionLevel const, ::CommandPermissionLevel const, ::PlayerPermissionLevel const, ::CommandPermissionLevel const);

    virtual void fireExternalUriLaunched(std::string const&) const;

    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource) const;

    virtual void fireUserGeneratedUriLaunchFailed(::UserGeneratedUriSource, ::Util::ResourceUri::ValidationStatus, std::string const&) const;

    virtual void fireEventEmptyLibraryCategoryError(std::string const&) const;

    virtual void fireCodeBuilderCachePerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;

    virtual void fireCodeBuilderLoadPerformance(std::string const&, ulong, ulong, std::chrono::duration<long long, std::ratio<1, 1000>>) const;

    virtual void fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;

    virtual void fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&);

    virtual void fireCourseButtonPressed(std::string const&, std::string const&);

    virtual void fireLessonActionTaken(std::string const&, std::string const&, std::string const&, ::IMinecraftEventing::EducationLessonAction, int);

    virtual void fireLessonProgressEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, int);

    virtual void fireShareButtonPressed(std::string const&, ::EduShareUriType, ::EduShareMethodType, bool);

    virtual void fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const) const;

    virtual void fireInAppCodeBuilderActivated(::OpenCodeMethod, std::string const&, std::string const&, std::string const&) const;

    virtual void fireInAppCodeBuilderDismissed(std::string const&) const;

    virtual void fireCodeCommandButtonPressed();

    virtual void fireIDESelected(std::string const&) const;

    virtual void fireEventEduResources() const;

    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const&) const;

    virtual void fireEventCodeBuilderClosed() const;

    virtual void fireEventCodeBuilderLog(::Webview::TelemetryCommonProperties const&, std::string const&, std::string&) const;

    virtual void fireEventCodeBuilderScoreChanged(std::string const&, int const) const;

    virtual void fireEventCodeBuilderRuntimeAction(std::string const&) const;

    virtual void fireEventEduServiceStatus(std::string const&, std::string const&, int, ::buffer_span<std::pair<std::string_view, std::string_view>>) const;

    virtual void fireEventWebviewDownload(std::string const&, ::WebviewDownloadInfo const&) const;

    virtual void fireEduServiceRequestFailed(std::string const&, std::string const&, std::string const&, ::buffer_span<std::pair<std::string_view, std::string_view>>) const;

    virtual void fireEventButtonPressed(std::string const&, std::unordered_map<std::string, std::string> const&) const;

    virtual void fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&) const;

    virtual void fireEventOptionsChanged(std::string const&, std::unordered_map<std::string, int> const&) const;

    virtual void fireEventOptionsChangedAlt(std::string const&, std::unordered_map<std::string, Social::Events::OptionChange> const&) const;

    virtual void fireEventTagButtonPressed(std::string const&, bool) const;

    virtual void fireEventLevelDataOverride(std::string_view) const;

    virtual void fireEventEduContentVerificationFailed() const;

    virtual void fireEventLibrarySearch(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) const;

    virtual void fireEventLibrarySearchItemSelected(int const, int const, std::string const&, int const, int const) const;

    virtual void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType, double) const;

    virtual void fireEventWorldExported(long, ulong);

    virtual void fireEventControlRemappedByPlayer(std::string const&, ::RawInputType, int) const;

    virtual void fireEventDifficultySet(::SharedTypes::Legacy::Difficulty, ::SharedTypes::Legacy::Difficulty);

    virtual void fireEventGameRulesUpdated(float, float, std::string const&);

    virtual void fireEventGameRulesUpdated(int, int, std::string const&);

    virtual void fireEventGameRulesUpdated(bool, bool, std::string const&);

    virtual void fireEventDefaultGameTypeChanged(::GameType, ::GameType);

    virtual void fireEventNewContentCheckCompleted(std::string const&, bool);

    virtual void fireEventEncyclopediaTopicChanged(std::string const&, ::InputMode);

    virtual void fireEventHowToPlayTopicChanged(std::string const&, ::InputMode);

    virtual void fireEventAndroidHelpRequest();

    virtual void fireEventWorldFilesListed(ulong, ulong, ulong, ulong);

    virtual void fireEventLabTableCreated(int, int, int);

    virtual void fireEventPlayerMessageSay(std::string const&, std::string const&);

    virtual void fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&);

    virtual void fireEventPlayerMessageChat(std::string const&, std::string const&);

    virtual void fireEventPlayerMessageMe(std::string const&, std::string const&);

    virtual void fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&);

    virtual void fireEventPlayerDamaged(::Player*, ::SharedTypes::Legacy::ActorDamageCause);

    virtual void fireEventPlayerKicked(std::string const&, std::string const&);

    virtual void fireEventPlayerBanned(std::string const&);

    virtual void fireEventRealmShared(std::string const&, ::IMinecraftEventing::ShareMode const&, long const&);

    virtual void fireEventRealmMemberlistCleared(long const&, int const&);

    virtual void fireEventRealmUrlGenerated(std::string const&, long const&);

    virtual void fireEventStructureExport(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::IMinecraftEventing::ExportOutcome, ::IMinecraftEventing::ExportStage) const;

    virtual void fireEventContentShared(std::string const&, std::string const&, ::IMinecraftEventing::ShareMode const&);

    virtual void fireEventStorageReport(std::string const&);

    virtual void fireEventStackLoaded(::StackStats const&, ::gsl::span<const PackInstance>);

    virtual void fireEventUnknownBlockReceived(::NewBlockID const&, ushort);

    virtual void fireEventSignInEdu(std::string const&, ::edu::Role, ::Identity::EduSignInStage, std::string const&, std::string const&, std::vector<std::pair<std::string, std::string>> const&);

    virtual void fireEventSignOutEdu(std::string const&, ::edu::Role, std::string const&, std::string const&, std::string const&);

    virtual void fireEventSwitchAccountEdu(std::string const&, ::edu::Role, std::string const&);

    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource);

    virtual void fireEventPopupFiredEdu(std::string const&, std::string const&, std::string const&, std::string const&, ::ActiveDirectoryAction const);

    virtual void fireEventPlayIntegrityCheck(std::string const&, std::string const&, std::string const&, std::string const&);

    virtual void fireEventCloudOperationStartedEdu(::EduCloudUtils::Operation const, ::EduCloud::CloudItemType const, std::string const&, ulong const, std::optional<std::string> const&);

    virtual void fireEventCloudMyWorldsSummary(int const, int const, int const, int const, int const);

    virtual void fireEventCloudOperationEndedEdu(::EduCloudUtils::Operation const, ::EduCloud::CloudItemType const, std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>> const, uint const, ulong const, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&);

    virtual void fireEventCloudConflictCheckEdu(std::string const&, ::EduCloud::ConflictResolutionStatus const);

    virtual void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&);

    virtual void fireEventPurchaseGameResult(int);

    virtual void fireEventTrialDeviceIdCorrelation(long, std::string const&, long, std::string const&);

    virtual void fireEventDeviceIdManagerFailOnIdentityGained();

    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const&);

    virtual void fireEventPushNotificationOpened(std::string const&, std::string const&);

    virtual void firePerfTestEvent(std::string const&, std::string const&, std::string const&, uint, uint, std::string const&, std::vector<std::pair<std::string, float>> const&);

    virtual void fireEventLicenseCheck(bool, ::ExtraLicenseData&);

    virtual void fireQueryOfferResult(std::string const&, int, bool);

    virtual void fireEventQueryPurchasesResult(std::string const&, std::string const&, int, bool);

    virtual void fireEventWorldGenerated(std::string const&, ::LevelSettings const&, bool);

    virtual void fireEventCopyWorldEducationEnabled();

    virtual void fireEventBundleSubOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&);

    virtual void fireEventStoreOfferClicked(std::string const, std::string const&);

    virtual void fireEventStoreOfferClicked(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireEventPersonaOfferClicked(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireEventStoreSearch(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireEventSearchItemSelected(int const, int const, std::string const&, int const, int const, int const, std::string const&);

    virtual void fireEventUserListUpdated(std::string const&, std::string const&, std::string const&, bool);

    virtual void fireEventCreatorFollowedUnfollowed(std::string const&, std::string const&, bool);

    virtual void fireEventUgcAcquisitionStateChanged(std::string const&, ulong, double, bool, int, bool, int, std::string const&, std::string const&, int, int, bool);

    virtual void fireEventRealmsGeneralCall(std::string const&, ::Bedrock::Http::Status);

    virtual void fireEventRealmsRealmSpecificCall(std::string const&, long, ::Bedrock::Http::Status);

    virtual void fireEventRealmDownload(std::string const&, std::string const&, int const, int const, int const);

    virtual void fireEventRealmBackupDownloadFailed(int const, std::string const&, long const, long const, ::gsl::span<const std::string>);

    virtual void fireEventRealmUpload(std::string const&, std::string const&, int const, int const, int const, bool const);

    virtual void fireEventRealmsPackUpload(int const, int const, std::string const&, std::string const&, ::PackType, std::string const&, std::string const&, bool const, bool const, ::PackOrigin, int const, ulong const);

    virtual void fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow);

    virtual void fireRealmConnectionEventRealmAPIResponse(::IMinecraftEventing::RealmConnectionFlow, int);

    virtual std::string getSessionId();

    virtual void fireEventChunkLoaded(::LevelChunk&);

    virtual void fireEventChunkUnloaded(::LevelChunk&);

    virtual void fireEventChunkChanged(::LevelChunk&);

    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<Level>);

    virtual void fireEventLevelDestruct();

    virtual void flagEventDeepLink();

    virtual void flagEventPlayerGameTypeDefault(bool);

    virtual void fileEventCloudWorldPullFailed(std::string const&, std::string const&, bool);

    virtual void fireEventLevelDatLoadFailed(std::string const&, std::string const&, bool);

    virtual void fireEventWorldCorruptionCausedWorldShutdown(::LevelStorageEventingContext const&, std::string const&, std::optional<bool>);

    virtual void fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool);

    virtual void fireEventServerShutdownDueToError(std::string const&);

    virtual void fireEventServerInitializationFailed(std::string const&, bool, bool);

    virtual void fireEventDBStorageSizeSnapshot(::LevelStorageEventingContext const&, ::DBStorageFolderWatcher const&, ::DBStorageFolderWatcherSnapshotKind);

    virtual void fireEventLevelDBPerformanceData(::LevelStorageEventingContext const&, ::DBStoragePerformanceTelemetryData const&);

    virtual void fireEventDBReadFail(::LevelStorageEventingContext const&, std::string const&);

    virtual void fireEventSidebarNavigation(uint const&, std::string const&, std::string const&, int const, bool const, bool const, bool const);

    virtual void fireEventSidebarVerboseToggled(uint const&, std::string const&, std::string const&, bool const);

    virtual void fireEventPersonaUserLoadedActive(::persona::ProfileType const, std::string const&, bool);

    virtual void fireEventPersonaItemPreviewed(::persona::ProfileType const, std::string const&, std::string const&, uint, uint, ::IMinecraftEventing::PromotionType, bool, std::string const&, std::string const&, double, ::StoreEventData::StoreType);

    virtual void fireEventPersonaAvatarUpdated(::persona::ProfileType const, std::vector<std::string> const&, std::vector<bool> const&, std::vector<bool> const&, bool, bool, std::string const&, std::string const&, std::string const&, bool, std::vector<std::string> const&, std::vector<std::string> const&);

    virtual void fireEventPersonaSkinChanged(::persona::ProfileType const, std::string const&, bool);

    virtual void fireEventPersonaAvatarsListed(std::vector<persona::ProfileType> const&);

    virtual void fireEventPersonaEmotePlayed(std::string const&, bool, int);

    virtual void fireEventDefaultCastSelected(int, ::mce::UUID, std::string const&);

    virtual void fireEventPersonaInitalizationEvent(uint, std::string const&, std::string const&);

    virtual void fireEventPersonaGeneralError(std::string const&, uint);

    virtual void fireEventPersonaLoadingPieces(uint, double);

    virtual void fireEventPersonaPiecePackEviction(uint, uint, uint, uint, bool, double);

    virtual void fireEventPersonaCreationFailed(std::string_view, std::string_view, bool, bool, std::string_view, std::string_view);

    virtual void fireEventPersonaCategoryInformation(std::string const&);

    virtual void fireEventDisplayLoggedError(std::string const&, std::string const&, std::string const&);

    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const&, std::string const&, std::string const&);

    virtual void fireStructureBlockAction(::IMinecraftEventing::StructureBlockActionType, ::StructureEditorData const&, ::StructureTelemetryClientData const*);

    virtual void fireStructureBlockRedstoneActivated(::IMinecraftEventing::StructureBlockActionType, ::StructureEditorData const&, ::StructureTelemetryClientData const*);

    virtual void fireEventOreUIError(uint const&, std::string const&);

    virtual void fireEventOreUIScreenPerformance(uint const&, ::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);

    virtual void fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool const);

    virtual void fireEventOnboardingWorldCreationUsage(bool, bool, bool);

    virtual void fireEventDeviceAccountSuccess(bool, std::string const&);

    virtual void fireEventDeviceAccountFailure(::IMinecraftEventing::SignInStage, ::IMinecraftEventing::DeviceAccountFailurePhase, uint, std::string const&);

    virtual std::shared_ptr<void*> requestEventDeferment();

    virtual ::gsl::not_null<Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor();

    virtual void fireEventLevelChunkPerformanceData(bool);

    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const&);

    virtual void fireEventActorValueValidationFailed(std::string const&, char const*);

    virtual void fireDBStorageError(::LevelStorageEventingContext const&, std::string const&);

    virtual void fireServerStarted(::Social::Events::ServerTelemetryData const&, std::unordered_map<std::string, std::string> const&);

    virtual void fireServerShutdown();

    virtual void fireSafetyServiceTextProcessEvent(std::string const&, ::TextProcessingEventOrigin, ushort, std::string const&, bool, double, char, char, ::Json::Value const&, bool, bool);

    virtual void fireBannedSkinVerificationEvent(uint const&, std::string const&, bool, int const, std::string const&);

    virtual void fireEventPlayerReportSent(bool, std::string const&, std::string const&, std::string const&);

    virtual void fireEventOneDSPlayerReportPayload(std::string const&, std::string const&);

    virtual void fireEventSafetyHTTPRequest(std::string const&, std::string const&, int const);

    virtual void fireEventProfanityFilter(bool, bool, bool);

    virtual void fireEventChatFloodingActionTaken(std::string const&, ::Safety::ChatFloodingAction, std::string const&);

    virtual void fireEventTextProcessorStartupFailed(std::string const&, int, int);

    virtual void firePlayerAccountMetadata(::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, bool, bool);

    virtual void fireEventBlockUser(std::string const&, bool, bool);

    virtual void fireEventMuteUser(std::string const&, bool, bool);

    virtual void fireStorageMigrationEvent(bool, ::Bedrock::StorageMigration::StorageMigrationType, int, int, double, double, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&, std::string const&);

    virtual void fireEventConnectedStorageResult(::ConnectedStorageEventType, bool, uint, std::optional<uint>, std::string const&, std::string const&, long, std::optional<uint>, std::optional<uint>, std::optional<uint>);

    virtual void fireEventConnectedStorageError(char const*, std::string const&, long);

    virtual void fireEventUwpToGdkMigrationComplete(::Bedrock::DeviceIdContext const&, std::string const&, std::string_view);

    virtual void fireEventOSKErrorEncountered(std::string_view);

    virtual void fireNetworkChangedEvent(std::string const&);

    virtual void fireEventMessageServiceImpression(std::string const&, std::string const&, std::string const&, std::string const&, bool const, std::string const&);

    virtual void fireEventMessageReceived(std::string const&, std::string const&, std::string const&, std::string const&, bool const, std::string const&);

    virtual void fireEventPartyPlayFabError(std::string const&, std::string const&, std::string const&);

    virtual void fireEventPartyButtonPressed(std::string const&, std::string const&);

    virtual void fireEventPartyTravelToastExpired(std::string const&, std::string const&);

    virtual void fireEventGoogleAccountHoldWarning(bool);

    virtual void fireDelayedEventReportOfflineAction(std::string const&);

    virtual void fireEventFeedbackSubmitted(std::string const&, std::string const&, bool, bool);

    virtual void fireEventTrackDeeplinks(std::string const&, std::string const&, std::string const&, std::string const&);

    virtual void fireEventUriActivation(std::string const&, std::string const&);

    virtual void firePlayerUnexpectedFallDamage(float const, bool, float const);

    virtual void fireEventActorMovementCorrectionDivergence(::ActorType, std::vector<float> const&);

    virtual void fireEventDedicatedServerDiscoveryResponse(int const, int const);

    virtual void fireEventInGamePause(bool);

    virtual void fireEventGameTip(int, int, int, ::InputMode);

    virtual void fireEventAddedFriend(std::string const&, ::IMinecraftEventing::AddedFriendLocation, bool);

    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const&);

    virtual void fireEventTrialStatusFailed(int);

    virtual void fireEventSaveDataExpansion(ulong, ulong, ulong);

    virtual void fireEventProfileButtonPressed(std::string const&) const;

    virtual void fireEventWorldCopy(ulong, ulong, ::LevelSeed64);

    virtual void fireEventWriteBudgetLow(ulong, float, float, std::chrono::duration<long long, std::ratio<1, 1000000000>>, bool, std::string const&);

    virtual void fireEventWriteBudgetReplenished(std::chrono::duration<long long, std::ratio<1, 1000000000>>, ulong, std::optional<ulong>, std::chrono::duration<long long, std::ratio<1, 1000000000>>, bool, std::string const&);

    virtual void fireEventLargeFileWriteStall(ulong, std::vector<std::string> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&, ulong, bool, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::chrono::duration<long long, std::ratio<1, 1000000000>>, int, ulong, std::vector<std::string> const&);

    virtual void fireEventLowMemoryDetected(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::LowMemoryReport const&);

    virtual void fireEventReceivedApplicationExitInfo(std::string const&, int, int, int, long, long, std::string const&, bool);

    virtual void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const);

    virtual void fireEventPacketSerializationMismatch(::MinecraftPacketIds, std::string_view, std::string_view);

    virtual void fireEventPUVLoad(std::string const&, ::PuvLoadData::TelemetryEventData&&);

    virtual void fireEventRemoteDesktop(bool);

    virtual void fireEventResourceProcessingPerf(::ResourceProcessingPerfData const&);

    virtual void fireEventOnlineAudioStreamEnded(::OnlineAudioStreamEnded const&);

    virtual void fireEventDimensionTransfer(::DimensionTransferTelemetryData const&);

    virtual void fireEventMarketplaceImpressions(std::string const&, std::string const&, ::Social::Events::PageDisplayRecord&);

    virtual ::IPurchaseEventing& getPurchaseEventing();

    virtual ::IResourceLoadEventing& getResourceLoadEventing();

    virtual void fireEventScreenChanged(uint const&, std::string const&, std::unordered_map<std::string, std::string> const&);

    virtual void fireEventImGuiScreenChanged(std::string const&, std::unordered_map<std::string, std::string> const&);

    virtual void sendCrashTelemetryNow(std::shared_ptr<Bedrock::SessionInfo>);

    virtual void addCrashTelemetryToBatch(std::shared_ptr<Bedrock::SessionInfo>);

    virtual void sendBatchedCrashTelemetry();

    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const&);

    virtual void fireScreenLoadTimeUpdateEvent(uint const&, std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&);

    virtual void fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const&);

    virtual void fireEventReceivedUniqueWebSessionId(std::string const&);

    virtual void fireEventReceivedUniqueLauncherSessionId(std::string const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftEventing(::Core::Path const&, ::MinecraftEventingDependencies&&);

    MCNAPI void _fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        bool,
        ::StructureTelemetryClientData const*
    );

    MCNAPI void _generateWorldSessionId();

    MCNAPI void _getOrCreateRealmsTelemetry(::brstd::function_ref<void(IRealmsTelemetry&)>);

    MCNAPI void _sendTelemetryHeartbeat(char const*);

    MCNAPI void fireEventPlayerMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void OnActorSetMainHand(::Actor const&, ::ItemInstance const&, ::ItemInstance const&);

    MCNAPI static void _addSkinType(::Social::Events::Event&, bool);

    MCNAPI static void fireEventAgentCreated(::Player&);

    MCNAPI static void fireEventAwardAchievement(::Player*, ::MinecraftEventing::AchievementIds);

    MCNAPI static void fireEventAwardAchievementNoXBLTelemetry(::Player*, ::MinecraftEventing::AchievementIds);

    MCNAPI static void
    fireEventBarrelBlockUsed(::Player*, std::string const&, ::MinecraftEventing::POIBlockInteractionType);

    MCNAPI static void fireEventBehaviorErrored(::Player*, std::string const&);

    MCNAPI static void fireEventBehaviorFailed(::Player*, std::string const&);

    MCNAPI static void fireEventBellBlockUsed(::Player*, std::string const&);

    MCNAPI static void fireEventBlockBroken(::Player*, ::Block const&, ::MinecraftEventing::BlockPlacementMethod, int);

    MCNAPI static void fireEventBlockFound(::Player*, ::BlockPos const&);

    MCNAPI static void fireEventBlockPlaced(::Player*, ::Block const&, bool);

    MCNAPI static void fireEventBookCopied(::Player*, ::ItemInstance const&);

    MCNAPI static void fireEventBookEdited(::Player*, ::ItemDescriptor const&, uint);

    MCNAPI static void fireEventBookExported(::Player*, int, int);

    MCNAPI static void fireEventBookImageImported(::Player*);

    MCNAPI static void fireEventBossKilled(::Player*, int, long, int);

    MCNAPI static void
    fireEventCampfireBlockUsed(::Player*, std::string const&, ::MinecraftEventing::POIBlockInteractionType);

    MCNAPI static void fireEventCaravanChanged(::Mob&, int);

    MCNAPI static void fireEventCartographyBlockUsed(::Player*, std::string const&, ::MapOutputType);

    MCNAPI static void
    fireEventCauldronBlockUsed(::Player*, std::string const&, ::MinecraftEventing::POIBlockInteractionType);

    MCNAPI static void fireEventCauldronUsed(::Player*, short, uint, short);

    MCNAPI static void
    fireEventCommandBlockEdited(::Player*, ::BaseCommandBlock const&, bool, ::CommandBlockMode, bool, bool);

    MCNAPI static void
    fireEventComposterBlockUsed(::Player*, std::string const&, ::MinecraftEventing::POIBlockInteractionType);

    MCNAPI static void fireEventCraftingSessionStart(::Player*, uint);

    MCNAPI static void fireEventCustomContentRegistered(::Player*, int);

    MCNAPI static void fireEventDecoratedPotCrafted(::Player*, std::array<std::string, 4> const&);

    MCNAPI static void fireEventEndOfDay(::Player*, ::Level&);

    MCNAPI static void
    fireEventEntityInteracted(::Player const*, int, ::MinecraftEventing::InteractionType, int, uchar, ::Actor const*);

    MCNAPI static void fireEventGameTypeChanged(::Player*, ::GameType, ::GameType);

    MCNAPI static void
    fireEventGrindstoneBlockUsed(::Player*, std::string const&, ::MinecraftEventing::POIBlockInteractionType);

    MCNAPI static void fireEventItemAcquired(::Player*, ::ItemDescriptor const&, uint, ::ItemAcquisitionMethod);

    MCNAPI static void
    fireEventItemCrafted(::Player*, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool);

    MCNAPI static void fireEventItemDropped(::Player*, ::ItemDescriptor const&);

    MCNAPI static void fireEventItemEquipped(::Player*, ::ItemInstance const&, int);

    MCNAPI static void
    fireEventItemInteracted(::Player*, ::ItemInstance const&, ::MinecraftEventing::ItemInteractMethod);

    MCNAPI static void fireEventItemNamed(::Player*, ::ItemDescriptor const&);

    MCNAPI static void fireEventItemSmelted(::Player*, ::ItemDescriptor const&, ::ItemDescriptor const&);

    MCNAPI static void fireEventItemUsed(::Player*, ::ItemDescriptor const&, ::ItemUseMethod);

    MCNAPI static void fireEventJukeboxUsed(::Player*, ::ItemDescriptor const&, ::BiomeIdType const);

    MCNAPI static void
    fireEventLecternBlockUsed(::Player*, std::string const&, ::MinecraftEventing::POIBlockInteractionType);

    MCNAPI static void fireEventMobDied(::Mob&, int);

    MCNAPI static void fireEventMobEffectChanged(::Mob&, ::MobEffectInstance const&, ::MinecraftEventing::ChangeType);

    MCNAPI static void fireEventMobKilled(::Player*, ::Actor*, ::Mob&, uint, std::string const&, int);

    MCNAPI static void fireEventMobTeleportedToOwner(::Mob&);

    MCNAPI static void fireEventMultiplayerRoundEnd(::Player*, int);

    MCNAPI static void fireEventMultiplayerRoundStart(::Player*, ::Level&);

    MCNAPI static void fireEventPOIBlockUsed(::Player*, std::string const&, ::MinecraftEventing::PoiEventBlockType);

    MCNAPI static void fireEventPiglinBarter(::Player*, std::string const&, bool);

    MCNAPI static void fireEventPlayerDied(::Player*, int, int, int, bool);

    MCNAPI static void fireEventPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);

    MCNAPI static void fireEventPlayerSaved(::Player*);

    MCNAPI static void fireEventPlayerTeleported(::Player*, float, ::MinecraftEventing::TeleportationCause, int);

    MCNAPI static void fireEventPlayerTransform(::Player&);

    MCNAPI static void fireEventPortalUsed(::Player*, ::DimensionType, ::DimensionType);

    MCNAPI static void fireEventPotionBrewed(::Player*, ::ItemDescriptor const&, uint);

    MCNAPI static void fireEventSignedBookOpened(::Player*, bool);

    MCNAPI static void fireEventSlashCommandExecuted(::Player*, std::string const&, int, int, std::string const&);

    MCNAPI static void fireEventTargetBlockHit(::Player*, int const);

    MCNAPI static void fireEventTradeCompleted(
        ::Player*,
        ::Actor*,
        ::ItemDescriptor const&,
        ::ItemDescriptor const&,
        ::ItemInstance const&,
        int
    );

    MCNAPI static void fireEventTrimApplied(::Player*, ::ArmorTrim const&);

    MCNAPI static void fireEventWaxOnWaxOff(::Player*, int const);

    MCNAPI static void fireEventWolfArmorDamageValueChanged(::Actor&, ::ItemDescriptor const&, int, int);

    MCNAPI static void fireEventWorldUnloaded(::Player*, ::LevelData const&, uint);

    MCNAPI static void fireInviteStatusSent(::Player*, std::vector<std::string>);

    MCNAPI static void fireRaidEvent(::Player*, int const, int const, bool const);

    MCNAPI static void onActorSpawned(::Actor const&, std::optional<std::string>, ::Actor*);

    MCNAPI static void onMobDied(::Mob const&, std::string const&);

    MCNAPI static void onVehicleEntered(::Player&, ::Actor&);

    MCNAPI static void onVehicleExited(::Player&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<Social::Events::AchievementEventing>& mAchievementEventing();

    MCNAPI static std::map<std::string, int>& mCachedUUIDs();

    MCNAPI static ::Social::Events::MobTelemetry& mMobTelemetry();

    MCNAPI static std::unordered_map<uint, Social::Events::PlayerTelemetry>& mPlayerTelemetry();

    MCNAPI static ::Social::Events::ScreenFlow& mScreenFlow();

    MCNAPI static std::mutex& sHeartbeatMutex();

    MCNAPI static std::mutex& sMutex();

    MCNAPI static std::mutex& sPlayerTelemetryMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&, ::MinecraftEventingDependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::Bedrock::NonOwnerPointer<AppPlatform> const&);

    MCNAPI void $initDeviceAndSessionIds();

    MCNAPI void $shutdown();

    MCNAPI std::string const& $getPlayerSessionId();

    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        $getWorldSessionIdGenerationTimestamp() const;

    MCNAPI bool $getShouldHaveAchievementsEnabled();

    MCNAPI void $setShouldHaveAchievementsEnabled(bool);

    MCNAPI bool $getAchievementsAlwaysEnabled();

    MCNAPI uint $getPrimaryLocalUserId() const;

    MCNAPI void $forceSendEvents();

    MCNAPI ::Social::Events::EventManager& $getEventManager() const;

    MCNAPI void $updatePrimaryLocalUserId(uint const&);

    MCNAPI std::string $getUserUID(::Social::IdentityType, std::string const&) const;

    MCNAPI void $registerSecondaryUserCommonProperties(uint const&, std::string const&) const;

    MCNAPI void $unregisterSecondaryUserCommonProperties(uint const&) const;

    MCNAPI void $updateIsLegacyPlayer(bool) const;

    MCNAPI void $updateIsTrial(bool) const;

    MCNAPI void $updateEditionType() const;

    MCNAPI void $updateClientId() const;

    MCNAPI void $registerOptionsObserver(
        ::brstd::function_ref<
            Bedrock::PubSub::Subscription(std::function<void(bool)>) const,
            Bedrock::PubSub::Subscription(std::function<void(bool)>)>
    );

    MCNAPI void $addListener(std::unique_ptr<Social::Events::IEventListener>);

    MCNAPI void $clearListeners();

    MCNAPI ::Json::Value $propertiesAsJsonValue() const;

    MCNAPI void $fireEvent(
        std::string const&,
        std::vector<Social::Events::Property> const&,
        std::vector<Social::Events::Measurement> const&,
        bool
    );

    MCNAPI void
    $fireEventBlockTypeRegistryChecksumMismatch(std::string const&, ulong const&, ulong const&, std::string const&);

    MCNAPI void $fireEventOnSuccessfulClientLogin(::Level const*);

    MCNAPI void $fireEventStartClient(std::string const&, bool);

    MCNAPI void $fireEventStartWorld(::NetworkType, std::string const&, ::Social::MultiplayerServiceIdentifier const);

    MCNAPI void $fireEventPlayerJoinWorld(
        uint const&,
        ::SubClientId const,
        bool,
        std::optional<bool>,
        ::IConnectionEventing::PlayerJoinWorldAttemptState const,
        int,
        ::Connection::DisconnectFailReason,
        ::Json::Value const&,
        ::TransportLayer,
        ::NetworkType,
        ::Social::MultiplayerState,
        bool,
        bool,
        ::Social::MultiplayerServiceIdentifier,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        bool,
        bool,
        ::Connection::ReconnectionType,
        bool,
        ulong,
        ::Social::GameConnectionInfo const&
    );

    MCNAPI void
    $fireEventClientLastPackets(uint const&, ::SubClientId const, int, ::Json::Value const&, ::Json::Value const&);

    MCNAPI void $fireEventSignalServiceConnect(
        ::SignalServiceConnectStage,
        bool,
        ::Json::Value const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void $fireEventSignalMessagePerformance(std::string const&, ::MessagePerformance const&);

    MCNAPI void $fireEventOnClientDisconnect(
        ::NetworkIdentifier const&,
        ::SubClientId,
        bool,
        ::Connection::DisconnectFailReason,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void $fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason,
        ::NetworkIdentifier const&,
        ::SubClientId,
        std::string const&,
        ulong,
        std::string const&
    );

    MCNAPI void $fireEventOnServerAsyncJoinTaskVerdict(
        ::nonstd::expected<AsyncJoinAllow, AsyncJoinDeny> const&,
        ::SubClientId const,
        uint
    );

    MCNAPI void $fireEventNPLNLifecycle(int, ::Social::MultiplayerState, ::Social::ServiceState);

    MCNAPI void $fireEventNPLNRpcFailure(
        int,
        int,
        ::Social::MultiplayerState,
        ::Social::ServiceState,
        std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>
    );

    MCNAPI void $fireEventHttpClientError(std::string const&);

    MCNAPI void $fireGlobalResourcePackCrashRecovery(::PackInstance&, ::mce::UUID, int);

    MCNAPI void $fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome,
        uint,
        double,
        std::string const&,
        std::string const&
    );

    MCNAPI void $fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&);

    MCNAPI void $fireTextToSpeechToggled(bool, bool);

    MCNAPI void
    $fireEventAppInitFileOpenStats(::Core::Profile::FileCounters const&, ::Core::Profile::FileCounters const&);

    MCNAPI void $fireEventStartupPerformance(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
    );

    MCNAPI void
        $fireEventOnAppStart(::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>);

    MCNAPI void $fireEventOnAppSuspend(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>,
        ::IMinecraftEventing::SuspendTriggersDisconnect,
        bool,
        bool
    );

    MCNAPI void $fireEventOnAppResume(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>,
        std::optional<long>
    );

    MCNAPI void
        $fireEventOnDeviceLost(::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>);

    MCNAPI void $fireEventHardwareInfo();

    MCNAPI void $fireEventDeviceLost();

    MCNAPI void $fireEventRenderingSizeChanged();

    MCNAPI void $fireEventDiskStatus(::DiskStatus, ::Core::LevelStorageState, ulong);

    MCNAPI void $fireEventStorageAreaFull(std::string const&, std::vector<Bedrock::DirectoryEntry> const&);

    MCNAPI void $fireEventOptionsUpdated(
        bool,
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
    );

    MCNAPI void $fireEventChatSettingsUpdated(::Player const*, std::vector<Social::Events::Property> const&) const;

    MCNAPI void $fireEventPerformanceMetrics(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>,
        ::ProfilerLiteTelemetry const&,
        bool,
        int
    );

    MCNAPI void $fireEventPerformanceContext(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>,
        ::PerfContextTrackerReport const&,
        bool,
        int
    );

    MCNAPI void $fireEventProfilerMetadata(::Bedrock::Profiling::Orchestrator::ProfilerMetadataParams const&);

    MCNAPI void $fireEventProfilerCapture(::Bedrock::Profiling::Orchestrator::ProfilerCaptureParams const&);

    MCNAPI void $fireTextureStreamingPerf(::dragon::texturestreaming::TextureStreamingPerformanceTelemetryData const&);

    MCNAPI void $fireEventDevSlashCommandExecuted(std::string const&, std::string const&);

    MCNAPI void
    $fireCommandParseTableTelemetry(bool const, std::vector<IMinecraftEventing::CommandParseTableEntry> const&) const;

    MCNAPI void $fireEventPlayerTravelled(::Player*, float, int);

    MCNAPI void $fireEventVideoPlayed(std::string const&, std::string const&);

    MCNAPI void $fireEventRespondedToAcceptContent(::PacksInfoData const&, bool, bool);

    MCNAPI void $fireEventWorldLoadTimes(std::string const&, std::vector<std::pair<std::string, float>> const);

    MCNAPI void $fireCDNDownloadEvent(
        std::string const&,
        std::string const&,
        std::string const&,
        ::IMinecraftEventing::CDNDownloadResult const&,
        ::IMinecraftEventing::CDNDownloadEventOrigin const&,
        float const&
    );

    MCNAPI void $fireEventSignInToIdentity(
        ::IMinecraftEventing::SignInAccountType,
        ::Social::IdentitySignInTrigger,
        std::string const&,
        bool,
        ::IMinecraftEventing::SignInStage,
        ::Social::SignInResult,
        int,
        ::Social::PlayerIDs,
        std::string const&
    );

    MCNAPI void $fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType,
        ::Social::IdentitySignInTrigger,
        std::string const&,
        std::string const&
    );

    MCNAPI void $fireEventAppPaused();

    MCNAPI void $fireEventAppUnpaused();

    MCNAPI void $fireEventAppSurfaceCreated();

    MCNAPI void $fireEventAppSurfaceDestroyed();

    MCNAPI void $fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const&);

    MCNAPI void $fireEventPopupClosed(std::string const&) const;

    MCNAPI void $fireEventWorldImported(long, ulong);

    MCNAPI void $fireEventWorldImportedResult(::FileArchiverOutcome);

    MCNAPI void $fireCurrentInputUpdated(uint, ::InputMode);

    MCNAPI void $fireEventTreatmentPackApplied(::PackManifest const&);

    MCNAPI void $fireEventPackPlayed(::PackInstance const&, uint);

    MCNAPI void $fireEventTreatmentPackDownloadFailed(std::string, std::string, std::string, std::string);

    MCNAPI void $fireEventTreatmentPackDownloaded(std::string, std::string, std::string, std::string);

    MCNAPI void $fireEventTreatmentPackRemoved(std::string);

    MCNAPI void
    $fireEventPackDeleted(std::string_view, std::string const&, ::PackType, ::PackOrigin, std::string const&, long);

    MCNAPI void $fireEventContentLogsInWorldSession(std::string const&, uint, uint);

    MCNAPI void $fireEventEntitlementCacheLoadTimeout();

    MCNAPI void $fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow);

    MCNAPI void $fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult
    );

    MCNAPI void $fireEventCompoundCreatorCreated(int, int);

    MCNAPI void $fireEventElementConstructorUsed(int, int, ::IMinecraftEventing::ElementConstructorUseType);

    MCNAPI void $fireEventEntitySpawned(::Player*, int, uint);

    MCNAPI void $fireEventReducerBlockEntered(::ItemDescriptor const&);

    MCNAPI void $fireEventRespawn(::Player&, int);

    MCNAPI void $fireEventServerRespawnSearchTime(::Player&, ::PlayerRespawnTelemetryData const&);

    MCNAPI void $firePackSettingsEvent(::PackSettings const&, ::PackManifest const&, std::string);

    MCNAPI void $removeTestBuildIdTag();

    MCNAPI void $removeTestTelemetryTag();

    MCNAPI void $setTestBuildIdTag(char const*);

    MCNAPI void $setTestTelemetryTag(char const*);

    MCNAPI void $stopDebugEventLoggingForAllListeners();

    MCNAPI void $tick();

    MCNAPI void
    $fireEventMultiplayerClientConnectionStateChanged(std::string const&, uint, uint, uint, std::string const&);

    MCNAPI void $fireEventPacketViolationDetected(
        ulong,
        std::string,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::NetworkIdentifier const&,
        uint,
        ::SubClientId,
        ::SubClientId,
        uint
    );

    MCNAPI void $fireEventServerReceivedValidPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId);

    MCNAPI void $fireEventClientSentOrReceivedPacket(
        ::NetworkIdentifier const&,
        ::MinecraftPacketIds,
        ::SubClientId,
        std::string,
        bool
    );

    MCNAPI void $fireEventJoinCanceled(::LoadingState);

    MCNAPI void $fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType,
        int,
        std::set<IMinecraftEventing::IgnoredNotificationSource>
    );

    MCNAPI void $fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction,
        ::IMinecraftEventing::ClubsEngagementTargetType,
        char const*,
        long const,
        std::string const&
    );

    MCNAPI void $fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const,
        long const,
        std::string const&,
        int
    );

    MCNAPI void $fireEventEntitlementListInfo(std::vector<ContentIdentity>&, bool);

    MCNAPI void $fireEventStorage(int, std::string const&);

    MCNAPI void $fireEventDlcStorageFull(std::string const&, ulong, ulong, ulong, ulong);

    MCNAPI void $fireEventTotalDlcSizes(ulong, ulong);

    MCNAPI void $fireEventPlatformStorePurchaseFailure(std::string const&, std::string const&);

    MCNAPI void $fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventTreatmentsCleared();

    MCNAPI void $fireEventTreatmentsSet(std::vector<std::string> const&, std::string const&);

    MCNAPI void $updateAppliedTreatmentPacks(std::vector<std::string> const&);

    MCNAPI void $fireEventProgressionsSet(std::vector<std::string> const&);

    MCNAPI void $fireEventPackImportTimeout(std::string const&);

    MCNAPI void $fireEventFatalClientPackError(::FatalClientPackErrorType, ::gsl::span<const std::string>);

    MCNAPI void $fireEventPackActivationError(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool
    );

    MCNAPI void
    $fireEventStoreErrorPage(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void
    $setServerIdsforClient(std::string const&, std::string const&, ::Social::Events::ServerTelemetryData const&);

    MCNAPI void $removeServerIdsForClient();

    MCNAPI void $setConnectionCommonProperties(uint, std::string const&, ::NetworkType);

    MCNAPI void $removeConnectionCommonProperties(uint);

    MCNAPI void $trySetExperienceIdentifiers(std::string const&, std::string const&);

    MCNAPI void $removeExperienceIdentifiers();

    MCNAPI std::string $getExperienceId() const;

    MCNAPI std::string $getExperienceSessionId() const;

    MCNAPI void $fireEventSearchCatalogRequest(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
    );

    MCNAPI void $fireEventStoreSessionResponse(std::string const&, int const, int const, bool const);

    MCNAPI void $fireEventStoreDiscoveryRequestResponse(int const, int const, bool const);

    MCNAPI void $fireEventStoreInventoryRefreshRequestResponse(int const, int const, bool const);

    MCNAPI void $fireEventInventoryVersionRefreshRequestResponse(int const, int const, bool const);

    MCNAPI void $fireEventServerDrivenLayoutPageLoaded(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>,
        std::string,
        int,
        int,
        int,
        int,
        int
    );

    MCNAPI void $fireEventServerDrivenLayoutImagesLoaded(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>,
        std::string,
        ::ImageTelemetryInfo const&
    );

    MCNAPI void $fireEventLockedItemGiven();

    MCNAPI void $fireEventPlayerBounced(::Player*, ::Block const&, int);

    MCNAPI void $fireEventSetValidForAchievements(::Player*, bool);

    MCNAPI void $fireEventAchievementReceived(std::string const&, std::string const&, std::string const&);

    MCNAPI void $updatePlayerUndergroundStatus(::Player*, bool const);

    MCNAPI void $fireEventPlayerAttemptingExploit(::Player*, ::IMinecraftEventing::ExploitType);

    MCNAPI void $fireEventWorldLoaded(
        ::Player*,
        ::brstd::function_ref<
            void(Social::Events::EventManager&, Social::Events::Event&) const,
            void(Social::Events::EventManager&, Social::Events::Event&)>
    );

    MCNAPI void
    $fireEventMarkLevelForSync(std::string const&, long, long, ::IMinecraftEventing::MarkLevelForSyncReason);

    MCNAPI void $fireMinecraftVersionLaunched(bool);

    MCNAPI void $fireMinecraftVersionInviteAccepted(bool, ulong);

    MCNAPI void $fireInviteStatusReceived(std::string);

    MCNAPI void $fireInviteStatusSentImpl(uint, std::vector<std::string>);

    MCNAPI void $fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState,
        std::optional<uint>,
        std::optional<ulong>
    );

    MCNAPI void $fireContentDecryptionFailure(std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireWorldConversionAttemptEvent(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
    );

    MCNAPI void $fireWorldConversionInitiatedEvent(std::string const&);

    MCNAPI void $fireWorldUpgradedToCnCPart2(
        bool,
        std::string const&,
        ::Experiments const&,
        std::string const&,
        ::LevelSeed64,
        float
    );

    MCNAPI void $fireEventAssertFailed(std::string const&, std::string const&);

    MCNAPI void $fireEventCrashSystemFailedToInit();

    MCNAPI void $fireChatUsedEvent(uint, bool);

    MCNAPI void $fireEventJoinByCode(std::string const&);

    MCNAPI void $fireEventBlockPlacedByCommand(::Block const&, int);

    MCNAPI void $fireEventServerPlayerJoinedGame(::NetworkIdentifier const&, ::SubClientId, std::string const&);

    MCNAPI void $fireEventScriptPluginDiscovery(::ScriptPluginResult const&, bool);

    MCNAPI void $fireEventScriptPluginRun(
        ::ScriptPluginResult const&,
        std::chrono::duration<long long, std::ratio<1, 1000000>>,
        bool
    );

    MCNAPI void $fireEventScriptDebuggerListen(bool, bool);

    MCNAPI void $fireEventScriptDebuggerConnect(bool, bool, int);

    MCNAPI void $fireEditorEventToolActivated(std::string const&);

    MCNAPI void $fireEditorUndo(std::string const&);

    MCNAPI void $fireEditorRedo(std::string const&);

    MCNAPI void $fireEditorScriptAction(std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEditorTutorialEvent(
        std::string_view,
        std::optional<std::string> const&,
        std::string const&,
        std::optional<std::string> const&
    );

    MCNAPI void $fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization,
        ::buffer_span<std::pair<std::string_view, std::string_view>>
    );

    MCNAPI void $fireClassroomSettingUpdated(::ClassroomSetting, ::SettingsScreenMode);

    MCNAPI void $fireEventNpcPropertiesUpdated(::Actor&, bool);

    MCNAPI void $fireEventBoardTextUpdated(::ChalkboardBlockActor&);

    MCNAPI void $fireEventCameraUsed(bool);

    MCNAPI void $fireEventPortfolioExported(int, int);

    MCNAPI void $fireQuickPlayEvent();

    MCNAPI void $firePermissionsSetEvent(
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const,
        ::PlayerPermissionLevel const,
        ::CommandPermissionLevel const
    );

    MCNAPI void $fireExternalUriLaunched(std::string const&) const;

    MCNAPI void $fireUserGeneratedUriLaunched(::UserGeneratedUriSource) const;

    MCNAPI void $fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource,
        ::Util::ResourceUri::ValidationStatus,
        std::string const&
    ) const;

    MCNAPI void $fireEventEmptyLibraryCategoryError(std::string const&) const;

    MCNAPI void
    $fireCodeBuilderCachePerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;

    MCNAPI void $fireCodeBuilderLoadPerformance(
        std::string const&,
        ulong,
        ulong,
        std::chrono::duration<long long, std::ratio<1, 1000>>
    ) const;

    MCNAPI void
    $fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;

    MCNAPI void $fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireCourseButtonPressed(std::string const&, std::string const&);

    MCNAPI void $fireLessonActionTaken(
        std::string const&,
        std::string const&,
        std::string const&,
        ::IMinecraftEventing::EducationLessonAction,
        int
    );

    MCNAPI void $fireLessonProgressEvent(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        int
    );

    MCNAPI void $fireShareButtonPressed(std::string const&, ::EduShareUriType, ::EduShareMethodType, bool);

    MCNAPI void $fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const) const;

    MCNAPI void
    $fireInAppCodeBuilderActivated(::OpenCodeMethod, std::string const&, std::string const&, std::string const&) const;

    MCNAPI void $fireInAppCodeBuilderDismissed(std::string const&) const;

    MCNAPI void $fireCodeCommandButtonPressed();

    MCNAPI void $fireIDESelected(std::string const&) const;

    MCNAPI void $fireEventEduResources() const;

    MCNAPI void $fireEventEduiOSPurchaseTransaction(::TransactionStatus const&) const;

    MCNAPI void $fireEventCodeBuilderClosed() const;

    MCNAPI void
    $fireEventCodeBuilderLog(::Webview::TelemetryCommonProperties const&, std::string const&, std::string&) const;

    MCNAPI void $fireEventCodeBuilderScoreChanged(std::string const&, int const) const;

    MCNAPI void $fireEventCodeBuilderRuntimeAction(std::string const&) const;

    MCNAPI void $fireEventEduServiceStatus(
        std::string const&,
        std::string const&,
        int,
        ::buffer_span<std::pair<std::string_view, std::string_view>>
    ) const;

    MCNAPI void $fireEventWebviewDownload(std::string const&, ::WebviewDownloadInfo const&) const;

    MCNAPI void $fireEduServiceRequestFailed(
        std::string const&,
        std::string const&,
        std::string const&,
        ::buffer_span<std::pair<std::string_view, std::string_view>>
    ) const;

    MCNAPI void $fireEventButtonPressed(std::string const&, std::unordered_map<std::string, std::string> const&) const;

    MCNAPI void $fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&) const;

    MCNAPI void $fireEventOptionsChanged(std::string const&, std::unordered_map<std::string, int> const&) const;

    MCNAPI void $fireEventOptionsChangedAlt(
        std::string const&,
        std::unordered_map<std::string, Social::Events::OptionChange> const&
    ) const;

    MCNAPI void $fireEventTagButtonPressed(std::string const&, bool) const;

    MCNAPI void $fireEventLevelDataOverride(std::string_view) const;

    MCNAPI void $fireEventEduContentVerificationFailed() const;

    MCNAPI void $fireEventLibrarySearch(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
    ) const;

    MCNAPI void
    $fireEventLibrarySearchItemSelected(int const, int const, std::string const&, int const, int const) const;

    MCNAPI void $fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType, double) const;

    MCNAPI void $fireEventWorldExported(long, ulong);

    MCNAPI void $fireEventControlRemappedByPlayer(std::string const&, ::RawInputType, int) const;

    MCNAPI void $fireEventDifficultySet(::SharedTypes::Legacy::Difficulty, ::SharedTypes::Legacy::Difficulty);

    MCNAPI void $fireEventGameRulesUpdated(float, float, std::string const&);

    MCNAPI void $fireEventGameRulesUpdated(int, int, std::string const&);

    MCNAPI void $fireEventGameRulesUpdated(bool, bool, std::string const&);

    MCNAPI void $fireEventDefaultGameTypeChanged(::GameType, ::GameType);

    MCNAPI void $fireEventNewContentCheckCompleted(std::string const&, bool);

    MCNAPI void $fireEventEncyclopediaTopicChanged(std::string const&, ::InputMode);

    MCNAPI void $fireEventHowToPlayTopicChanged(std::string const&, ::InputMode);

    MCNAPI void $fireEventAndroidHelpRequest();

    MCNAPI void $fireEventWorldFilesListed(ulong, ulong, ulong, ulong);

    MCNAPI void $fireEventLabTableCreated(int, int, int);

    MCNAPI void $fireEventPlayerMessageSay(std::string const&, std::string const&);

    MCNAPI void $fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventPlayerMessageChat(std::string const&, std::string const&);

    MCNAPI void $fireEventPlayerMessageMe(std::string const&, std::string const&);

    MCNAPI void $fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventPlayerDamaged(::Player*, ::SharedTypes::Legacy::ActorDamageCause);

    MCNAPI void $fireEventPlayerKicked(std::string const&, std::string const&);

    MCNAPI void $fireEventPlayerBanned(std::string const&);

    MCNAPI void $fireEventRealmShared(std::string const&, ::IMinecraftEventing::ShareMode const&, long const&);

    MCNAPI void $fireEventRealmMemberlistCleared(long const&, int const&);

    MCNAPI void $fireEventRealmUrlGenerated(std::string const&, long const&);

    MCNAPI void $fireEventStructureExport(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>,
        ::IMinecraftEventing::ExportOutcome,
        ::IMinecraftEventing::ExportStage
    ) const;

    MCNAPI void $fireEventContentShared(std::string const&, std::string const&, ::IMinecraftEventing::ShareMode const&);

    MCNAPI void $fireEventStorageReport(std::string const&);

    MCNAPI void $fireEventStackLoaded(::StackStats const&, ::gsl::span<const PackInstance>);

    MCNAPI void $fireEventUnknownBlockReceived(::NewBlockID const&, ushort);

    MCNAPI void $fireEventSignInEdu(
        std::string const&,
        ::edu::Role,
        ::Identity::EduSignInStage,
        std::string const&,
        std::string const&,
        std::vector<std::pair<std::string, std::string>> const&
    );

    MCNAPI void
    $fireEventSignOutEdu(std::string const&, ::edu::Role, std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventSwitchAccountEdu(std::string const&, ::edu::Role, std::string const&);

    MCNAPI void $fireEventEduDemoConversion(::edu::Role, ::LastClickedSource);

    MCNAPI void $fireEventPopupFiredEdu(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::ActiveDirectoryAction const
    );

    MCNAPI void
    $fireEventPlayIntegrityCheck(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const,
        ::EduCloud::CloudItemType const,
        std::string const&,
        ulong const,
        std::optional<std::string> const&
    );

    MCNAPI void $fireEventCloudMyWorldsSummary(int const, int const, int const, int const, int const);

    MCNAPI void $fireEventCloudOperationEndedEdu(
        ::EduCloudUtils::Operation const,
        ::EduCloud::CloudItemType const,
        std::string const&,
        std::chrono::duration<long long, std::ratio<1, 1000>> const,
        uint const,
        ulong const,
        std::optional<std::string> const&,
        std::optional<std::string> const&,
        std::optional<std::string> const&,
        std::optional<std::string> const&
    );

    MCNAPI void $fireEventCloudConflictCheckEdu(std::string const&, ::EduCloud::ConflictResolutionStatus const);

    MCNAPI void $fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventPurchaseGameResult(int);

    MCNAPI void $fireEventTrialDeviceIdCorrelation(long, std::string const&, long, std::string const&);

    MCNAPI void $fireEventDeviceIdManagerFailOnIdentityGained();

    MCNAPI void $fireEventPushNotificationReceived(::PushNotificationMessage const&);

    MCNAPI void $fireEventPushNotificationOpened(std::string const&, std::string const&);

    MCNAPI void $firePerfTestEvent(
        std::string const&,
        std::string const&,
        std::string const&,
        uint,
        uint,
        std::string const&,
        std::vector<std::pair<std::string, float>> const&
    );

    MCNAPI void $fireEventLicenseCheck(bool, ::ExtraLicenseData&);

    MCNAPI void $fireQueryOfferResult(std::string const&, int, bool);

    MCNAPI void $fireEventQueryPurchasesResult(std::string const&, std::string const&, int, bool);

    MCNAPI void $fireEventWorldGenerated(std::string const&, ::LevelSettings const&, bool);

    MCNAPI void $fireEventCopyWorldEducationEnabled();

    MCNAPI void
    $fireEventBundleSubOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&);

    MCNAPI void $fireEventStoreOfferClicked(std::string const, std::string const&);

    MCNAPI void $fireEventStoreOfferClicked(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
    );

    MCNAPI void $fireEventPersonaOfferClicked(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
    );

    MCNAPI void
        $fireEventStoreSearch(::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>);

    MCNAPI void $fireEventSearchItemSelected(
        int const,
        int const,
        std::string const&,
        int const,
        int const,
        int const,
        std::string const&
    );

    MCNAPI void $fireEventUserListUpdated(std::string const&, std::string const&, std::string const&, bool);

    MCNAPI void $fireEventCreatorFollowedUnfollowed(std::string const&, std::string const&, bool);

    MCNAPI void $fireEventUgcAcquisitionStateChanged(
        std::string const&,
        ulong,
        double,
        bool,
        int,
        bool,
        int,
        std::string const&,
        std::string const&,
        int,
        int,
        bool
    );

    MCNAPI void $fireEventRealmsGeneralCall(std::string const&, ::Bedrock::Http::Status);

    MCNAPI void $fireEventRealmsRealmSpecificCall(std::string const&, long, ::Bedrock::Http::Status);

    MCNAPI void $fireEventRealmDownload(std::string const&, std::string const&, int const, int const, int const);

    MCNAPI void $fireEventRealmBackupDownloadFailed(
        int const,
        std::string const&,
        long const,
        long const,
        ::gsl::span<const std::string>
    );

    MCNAPI void
    $fireEventRealmUpload(std::string const&, std::string const&, int const, int const, int const, bool const);

    MCNAPI void $fireEventRealmsPackUpload(
        int const,
        int const,
        std::string const&,
        std::string const&,
        ::PackType,
        std::string const&,
        std::string const&,
        bool const,
        bool const,
        ::PackOrigin,
        int const,
        ulong const
    );

    MCNAPI void $fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow);

    MCNAPI void $fireRealmConnectionEventRealmAPIResponse(::IMinecraftEventing::RealmConnectionFlow, int);

    MCNAPI std::string $getSessionId();

    MCNAPI void $fireEventChunkLoaded(::LevelChunk&);

    MCNAPI void $fireEventChunkUnloaded(::LevelChunk&);

    MCNAPI void $fireEventChunkChanged(::LevelChunk&);

    MCNAPI void $fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<Level>);

    MCNAPI void $fireEventLevelDestruct();

    MCNAPI void $flagEventDeepLink();

    MCNAPI void $flagEventPlayerGameTypeDefault(bool);

    MCNAPI void $fileEventCloudWorldPullFailed(std::string const&, std::string const&, bool);

    MCNAPI void $fireEventLevelDatLoadFailed(std::string const&, std::string const&, bool);

    MCNAPI void $fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const&,
        std::string const&,
        std::optional<bool>
    );

    MCNAPI void $fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool);

    MCNAPI void $fireEventServerShutdownDueToError(std::string const&);

    MCNAPI void $fireEventServerInitializationFailed(std::string const&, bool, bool);

    MCNAPI void $fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const&,
        ::DBStorageFolderWatcher const&,
        ::DBStorageFolderWatcherSnapshotKind
    );

    MCNAPI void
    $fireEventLevelDBPerformanceData(::LevelStorageEventingContext const&, ::DBStoragePerformanceTelemetryData const&);

    MCNAPI void $fireEventDBReadFail(::LevelStorageEventingContext const&, std::string const&);

    MCNAPI void $fireEventSidebarNavigation(
        uint const&,
        std::string const&,
        std::string const&,
        int const,
        bool const,
        bool const,
        bool const
    );

    MCNAPI void $fireEventSidebarVerboseToggled(uint const&, std::string const&, std::string const&, bool const);

    MCNAPI void $fireEventPersonaUserLoadedActive(::persona::ProfileType const, std::string const&, bool);

    MCNAPI void $fireEventPersonaItemPreviewed(
        ::persona::ProfileType const,
        std::string const&,
        std::string const&,
        uint,
        uint,
        ::IMinecraftEventing::PromotionType,
        bool,
        std::string const&,
        std::string const&,
        double,
        ::StoreEventData::StoreType
    );

    MCNAPI void $fireEventPersonaAvatarUpdated(
        ::persona::ProfileType const,
        std::vector<std::string> const&,
        std::vector<bool> const&,
        std::vector<bool> const&,
        bool,
        bool,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::vector<std::string> const&,
        std::vector<std::string> const&
    );

    MCNAPI void $fireEventPersonaSkinChanged(::persona::ProfileType const, std::string const&, bool);

    MCNAPI void $fireEventPersonaAvatarsListed(std::vector<persona::ProfileType> const&);

    MCNAPI void $fireEventPersonaEmotePlayed(std::string const&, bool, int);

    MCNAPI void $fireEventDefaultCastSelected(int, ::mce::UUID, std::string const&);

    MCNAPI void $fireEventPersonaInitalizationEvent(uint, std::string const&, std::string const&);

    MCNAPI void $fireEventPersonaGeneralError(std::string const&, uint);

    MCNAPI void $fireEventPersonaLoadingPieces(uint, double);

    MCNAPI void $fireEventPersonaPiecePackEviction(uint, uint, uint, uint, bool, double);

    MCNAPI void
    $fireEventPersonaCreationFailed(std::string_view, std::string_view, bool, bool, std::string_view, std::string_view);

    MCNAPI void $fireEventPersonaCategoryInformation(std::string const&);

    MCNAPI void $fireEventDisplayLoggedError(std::string const&, std::string const&, std::string const&);

    MCNAPI void
    $fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        ::StructureTelemetryClientData const*
    );

    MCNAPI void $fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        ::StructureTelemetryClientData const*
    );

    MCNAPI void $fireEventOreUIError(uint const&, std::string const&);

    MCNAPI void $fireEventOreUIScreenPerformance(
        uint const&,
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
    );

    MCNAPI void $fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool const);

    MCNAPI void $fireEventOnboardingWorldCreationUsage(bool, bool, bool);

    MCNAPI void $fireEventDeviceAccountSuccess(bool, std::string const&);

    MCNAPI void $fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage,
        ::IMinecraftEventing::DeviceAccountFailurePhase,
        uint,
        std::string const&
    );

    MCNAPI std::shared_ptr<void*> $requestEventDeferment();

    MCNAPI ::gsl::not_null<Bedrock::CrashTelemetryProcessor*> $getCrashTelemetryProcessor();

    MCNAPI void $fireEventLevelChunkPerformanceData(bool);

    MCNAPI void $fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const&);

    MCNAPI void $fireEventActorValueValidationFailed(std::string const&, char const*);

    MCNAPI void $fireDBStorageError(::LevelStorageEventingContext const&, std::string const&);

    MCNAPI void $fireServerStarted(
        ::Social::Events::ServerTelemetryData const&,
        std::unordered_map<std::string, std::string> const&
    );

    MCNAPI void $fireServerShutdown();

    MCNAPI void $fireSafetyServiceTextProcessEvent(
        std::string const&,
        ::TextProcessingEventOrigin,
        ushort,
        std::string const&,
        bool,
        double,
        char,
        char,
        ::Json::Value const&,
        bool,
        bool
    );

    MCNAPI void $fireBannedSkinVerificationEvent(uint const&, std::string const&, bool, int const, std::string const&);

    MCNAPI void $fireEventPlayerReportSent(bool, std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventOneDSPlayerReportPayload(std::string const&, std::string const&);

    MCNAPI void $fireEventSafetyHTTPRequest(std::string const&, std::string const&, int const);

    MCNAPI void $fireEventProfanityFilter(bool, bool, bool);

    MCNAPI void $fireEventChatFloodingActionTaken(std::string const&, ::Safety::ChatFloodingAction, std::string const&);

    MCNAPI void $fireEventTextProcessorStartupFailed(std::string const&, int, int);

    MCNAPI void $firePlayerAccountMetadata(
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        ::Social::PermissionCheckResult,
        bool,
        bool
    );

    MCNAPI void $fireEventBlockUser(std::string const&, bool, bool);

    MCNAPI void $fireEventMuteUser(std::string const&, bool, bool);

    MCNAPI void $fireStorageMigrationEvent(
        bool,
        ::Bedrock::StorageMigration::StorageMigrationType,
        int,
        int,
        double,
        double,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::string const&,
        std::string const&
    );

    MCNAPI void $fireEventConnectedStorageResult(
        ::ConnectedStorageEventType,
        bool,
        uint,
        std::optional<uint>,
        std::string const&,
        std::string const&,
        long,
        std::optional<uint>,
        std::optional<uint>,
        std::optional<uint>
    );

    MCNAPI void $fireEventConnectedStorageError(char const*, std::string const&, long);

    MCNAPI void
    $fireEventUwpToGdkMigrationComplete(::Bedrock::DeviceIdContext const&, std::string const&, std::string_view);

    MCNAPI void $fireEventOSKErrorEncountered(std::string_view);

    MCNAPI void $fireNetworkChangedEvent(std::string const&);

    MCNAPI void $fireEventMessageServiceImpression(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool const,
        std::string const&
    );

    MCNAPI void $fireEventMessageReceived(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool const,
        std::string const&
    );

    MCNAPI void $fireEventPartyPlayFabError(std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventPartyButtonPressed(std::string const&, std::string const&);

    MCNAPI void $fireEventPartyTravelToastExpired(std::string const&, std::string const&);

    MCNAPI void $fireEventGoogleAccountHoldWarning(bool);

    MCNAPI void $fireDelayedEventReportOfflineAction(std::string const&);

    MCNAPI void $fireEventFeedbackSubmitted(std::string const&, std::string const&, bool, bool);

    MCNAPI void
    $fireEventTrackDeeplinks(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventUriActivation(std::string const&, std::string const&);

    MCNAPI void $firePlayerUnexpectedFallDamage(float const, bool, float const);

    MCNAPI void $fireEventActorMovementCorrectionDivergence(::ActorType, std::vector<float> const&);

    MCNAPI void $fireEventDedicatedServerDiscoveryResponse(int const, int const);

    MCNAPI void $fireEventInGamePause(bool);

    MCNAPI void $fireEventGameTip(int, int, int, ::InputMode);

    MCNAPI void $fireEventAddedFriend(std::string const&, ::IMinecraftEventing::AddedFriendLocation, bool);

    MCNAPI void $fireEventInboxSummary(::Social::Events::InboxSummaryData const&);

    MCNAPI void $fireEventTrialStatusFailed(int);

    MCNAPI void $fireEventSaveDataExpansion(ulong, ulong, ulong);

    MCNAPI void $fireEventProfileButtonPressed(std::string const&) const;

    MCNAPI void $fireEventWorldCopy(ulong, ulong, ::LevelSeed64);

    MCNAPI void $fireEventWriteBudgetLow(
        ulong,
        float,
        float,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        bool,
        std::string const&
    );

    MCNAPI void $fireEventWriteBudgetReplenished(
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        ulong,
        std::optional<ulong>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        bool,
        std::string const&
    );

    MCNAPI void $fireEventLargeFileWriteStall(
        ulong,
        std::vector<std::string> const&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::string const&,
        ulong,
        bool,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        int,
        ulong,
        std::vector<std::string> const&
    );

    MCNAPI void $fireEventLowMemoryDetected(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>,
        ::LowMemoryReport const&
    );

    MCNAPI void
    $fireEventReceivedApplicationExitInfo(std::string const&, int, int, int, long, long, std::string const&, bool);

    MCNAPI void $fireEventImmersiveReaderStatus(::Bedrock::Http::Status const);

    MCNAPI void $fireEventPacketSerializationMismatch(::MinecraftPacketIds, std::string_view, std::string_view);

    MCNAPI void $fireEventPUVLoad(std::string const&, ::PuvLoadData::TelemetryEventData&&);

    MCNAPI void $fireEventRemoteDesktop(bool);

    MCNAPI void $fireEventResourceProcessingPerf(::ResourceProcessingPerfData const&);

    MCNAPI void $fireEventOnlineAudioStreamEnded(::OnlineAudioStreamEnded const&);

    MCNAPI void $fireEventDimensionTransfer(::DimensionTransferTelemetryData const&);

    MCNAPI void
    $fireEventMarketplaceImpressions(std::string const&, std::string const&, ::Social::Events::PageDisplayRecord&);

    MCNAPI ::IPurchaseEventing& $getPurchaseEventing();

    MCNAPI ::IResourceLoadEventing& $getResourceLoadEventing();

    MCNAPI void
    $fireEventScreenChanged(uint const&, std::string const&, std::unordered_map<std::string, std::string> const&);

    MCNAPI void $fireEventImGuiScreenChanged(std::string const&, std::unordered_map<std::string, std::string> const&);

    MCNAPI void $sendCrashTelemetryNow(std::shared_ptr<Bedrock::SessionInfo>);

    MCNAPI void $addCrashTelemetryToBatch(std::shared_ptr<Bedrock::SessionInfo>);

    MCNAPI void $sendBatchedCrashTelemetry();

    MCNAPI void $sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const&);

    MCNAPI void $fireScreenLoadTimeUpdateEvent(
        uint const&,
        std::string const&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::string const&
    );

    MCNAPI void $fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const&);

    MCNAPI void $fireEventReceivedUniqueWebSessionId(std::string const&);

    MCNAPI void $fireEventReceivedUniqueLauncherSessionId(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
