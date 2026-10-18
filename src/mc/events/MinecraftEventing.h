#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/Connection__ReconnectionType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/client/store/iap/PurchasePath.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/connection/ReconnectionType.h"
#endif // @header-generator platform
#include "mc/network/services/signaling/SignalServiceConnectStage.h"
#include "mc/platform/brstd/function_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class IPurchaseEventing;
class IRealmsTelemetry;
class IResourceLoadEventing;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class PushNotificationMessage;
#else // @header-generator platform
#endif // @header-generator platform
class ScriptPluginResult;
class StructureEditorData;
class StructureTelemetryClientData;
class TaskGroup;
class TelemetryInfo;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
#if defined(LL_PLAT_A) // @header-generator platform
struct BehaviorPackContents;
#else // @header-generator platform
#endif // @header-generator platform
struct BiomeIdType;
struct ChunkRecyclerTelemetryOutput;
struct DBStoragePerformanceTelemetryData;
struct DimensionTransferTelemetryData;
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
struct ExtraLicenseData;
#else // @header-generator platform
#endif // @header-generator platform
struct ImageTelemetryInfo;
struct LevelStorageEventingContext;
struct LowMemoryReport;
struct MinecraftEventingDependencies;
struct NewBlockID;
struct OnlineAudioStreamEnded;
struct PacksInfoData;
struct ProfilerLiteTelemetry;
#if defined(LL_PLAT_A) // @header-generator platform
struct ResourcePackContents;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Identity { struct EduDSTelemetryIdentifier; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Social::Events { struct InboxSummaryData; }
namespace Social::Events { struct PageDisplayRecord; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Social::Events { struct ServerTelemetryData; }
namespace Webview { struct TelemetryCommonProperties; }
namespace dragon::texturestreaming { struct TextureStreamingPerformanceTelemetryData; }
namespace mce { class UUID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IPurchaseEventing;
class IRealmsTelemetry;
class IResourceLoadEventing;
class PushNotificationMessage;
struct ExtraLicenseData;
namespace Social::Events { struct InboxSummaryData; }
namespace Social::Events { struct PageDisplayRecord; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class AccountType : int {
        Xbl   = 1,
        Guest = 2,
        Other = 3,
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class BlockPlacementMethod : int {
        Entity  = 0,
        Command = 1,
    };

    enum class ChangeType : int {
        Unknown = 0,
        Added   = 1,
        Removed = 2,
        Updated = 3,
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

#endif // @header-generator platform
    enum class ItemInteractMethod : int {
        Use   = 0,
        Place = 1,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class AccountType : int {
        Xbl   = 1,
        Guest = 2,
        Other = 3,
#else // @header-generator platform
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

    enum class PoiEventType : int {
        BlockUsageAttempt = 0,
        BlockUsed         = 1,
    };

    enum class TeleportationCause : int {
        Unknown                 = 0,
        Projectile              = 1,
        ChorusFruit             = 2,
        Command                 = 3,
        Behavior                = 4,
        TeleportationCauseCount = 5,
#endif // @header-generator platform
    };

    struct RealmsTelemetryBox {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<IRealmsTelemetry>> mTelemetry;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnka099be;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        RealmsTelemetryBox& operator=(RealmsTelemetryBox const&);
        RealmsTelemetryBox(RealmsTelemetryBox const&);
        RealmsTelemetryBox();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TelemetryInfo>>                      mTelemetryInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Social::Events::TelemetryHeartbeat>> mHeartbeat;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::AppPlatform>>              mAppPlatform;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mAssertTelemetrySubscription;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                      mSettingsDir;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mPlayerSessionID;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mAppSessionID;
    ::ll::TypedStorage<1, 1, bool>                                                    mShouldHaveAchievementsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mAchievementsAlwaysEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mAchivementsAlwaysOptionSubscription;
    ::ll::TypedStorage<8, 8, double>                                           mLastScreenTimestamp;
    ::ll::TypedStorage<8, 8, double>                                           mLastImGuiScreenTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                             mFlagPlayerGameTypeDefault;
    ::ll::TypedStorage<1, 1, bool>                                             mFlagDeepLink;
    ::ll::TypedStorage<4, 4, int>                                              mNumTimesDeviceLost;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, double>>              mPlayerLastDamagedTimestamp;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>          mWorldSessionIdGenerationTimestamp;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::IMinecraftEventing>> mServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PacketObserver>>              mPacketObserver;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::IPacketObserver>>    mPacketObserverRegistrationToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkRecyclerTelemetryData>>  mChunkRecyclerTelemetryData;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::ChunkRecyclerTelemetryData>>
        mChunkRecyclerTelemetryDataRegistrationToken;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::Bedrock::WorldRecoveryTelemetryHandler>>
        mWorldRecoveryRegistrationToken;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::MinecraftEventingDependencies>>> mDeps;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                      mTaskGroup;
    ::ll::TypedStorage<
        8,
        88,
        ::Bedrock::Threading::BasicLockbox<::MinecraftEventing::RealmsTelemetryBox, ::Bedrock::Threading::Mutex>>
        mRealmsTelemetry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftEventing();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MinecraftEventing();
#else // @header-generator platform
    virtual ~MinecraftEventing() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(::Bedrock::NonOwnerPointer<AppPlatform> const&);
#else // @header-generator platform
    virtual ::IPurchaseEventing& getPurchaseEventing() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initDeviceAndSessionIds();
#else // @header-generator platform
    virtual ::IResourceLoadEventing& getResourceLoadEventing() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void shutdown();
#else // @header-generator platform
    virtual void init(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getPlayerSessionId();
#else // @header-generator platform
    virtual void initDeviceAndSessionIds() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> getWorldSessionIdGenerationTimestamp() const;
#else // @header-generator platform
    virtual void initEditorEventListener() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getShouldHaveAchievementsEnabled();
#else // @header-generator platform
    virtual void shutdown() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setShouldHaveAchievementsEnabled(bool);
#else // @header-generator platform
    virtual void updatePrimaryLocalUserId(uint const& userId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getAchievementsAlwaysEnabled();
#else // @header-generator platform
    virtual ::std::string getUserUID(::Social::IdentityType type, ::std::string const& primaryId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getPrimaryLocalUserId() const;
#else // @header-generator platform
    virtual void registerSecondaryUserCommonProperties(uint const& userId, ::std::string const& uid) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forceSendEvents();
#else // @header-generator platform
    virtual void unregisterSecondaryUserCommonProperties(uint const& userId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Social::Events::EventManager& getEventManager() const;
#else // @header-generator platform
    virtual void updateIsLegacyPlayer(bool isLegacyPlayer) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePrimaryLocalUserId(uint const&);
#else // @header-generator platform
    virtual void updateIsTrial(bool isTrial) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getUserUID(::Social::IdentityType, std::string const&) const;
#else // @header-generator platform
    virtual void updateEditionType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerSecondaryUserCommonProperties(uint const&, std::string const&) const;
#else // @header-generator platform
    virtual void updateClientId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unregisterSecondaryUserCommonProperties(uint const&) const;
#else // @header-generator platform
    virtual void addListener(::std::unique_ptr<::Social::Events::IEventListener> listener) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateIsLegacyPlayer(bool) const;
#else // @header-generator platform
    virtual void clearListeners() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateIsTrial(bool) const;
#else // @header-generator platform
    virtual void registerOptionsObserver(
        ::brstd::function_ref<
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>) const,
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>)> registerObserver
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateEditionType() const;
#else // @header-generator platform
    virtual void setTestBuildIdTag(char const* id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateClientId() const;
#else // @header-generator platform
    virtual void removeTestBuildIdTag() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerOptionsObserver(::brstd::function_ref<Bedrock::PubSub::Subscription (std::function<void (bool)>) const, Bedrock::PubSub::Subscription (std::function<void (bool)>)>);
#else // @header-generator platform
    virtual void setTestTelemetryTag(char const* name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addListener(std::unique_ptr<Social::Events::IEventListener>);
#else // @header-generator platform
    virtual void removeTestTelemetryTag() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearListeners();
#else // @header-generator platform
    virtual void stopDebugEventLoggingForAllListeners() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value propertiesAsJsonValue() const;
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEvent(std::string const&, std::vector<Social::Events::Property> const&, std::vector<Social::Events::Measurement> const&, bool);
#else // @header-generator platform
    virtual void forceSendEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBlockTypeRegistryChecksumMismatch(std::string const&, ulong const&, ulong const&, std::string const&);
#else // @header-generator platform
    virtual ::std::string getSessionId() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnSuccessfulClientLogin(::Level const*);
#else // @header-generator platform
    virtual ::std::string const& getPlayerSessionId() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStartClient(std::string const&, bool);
#else // @header-generator platform
    virtual ::std::chrono::steady_clock::time_point getWorldSessionIdGenerationTimestamp() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStartWorld(::NetworkType, std::string const&, ::Social::MultiplayerServiceIdentifier const);
#else // @header-generator platform
    virtual void fireEventDefaultGameTypeChanged(::GameType oldGameType, ::GameType newGameType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerJoinWorld(uint const&, ::SubClientId const, bool, std::optional<bool>, ::IConnectionEventing::PlayerJoinWorldAttemptState const, int, ::Connection::DisconnectFailReason, ::Json::Value const&, ::TransportLayer, ::NetworkType, ::Social::MultiplayerState, bool, bool, ::Social::MultiplayerServiceIdentifier, std::string const&, std::string const&, std::string const&, std::string const&, bool, bool, bool, ::Connection::ReconnectionType, bool, ulong, ::Social::GameConnectionInfo const&);
#else // @header-generator platform
    virtual void fireEventWorldLoaded(
        ::Player* player,
        ::brstd::function_ref<
            void(::Social::Events::EventManager&, ::Social::Events::Event&) const,
            void(::Social::Events::EventManager&, ::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventClientLastPackets(uint const&, ::SubClientId const, int, ::Json::Value const&, ::Json::Value const&);
#else // @header-generator platform
    virtual void fireEventMarkLevelForSync(
        ::std::string const&                         levelId,
        int64                                        local,
        int64                                        remote,
        ::IMinecraftEventing::MarkLevelForSyncReason reason
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignalServiceConnect(::SignalServiceConnectStage, bool, ::Json::Value const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventLockedItemGiven() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignalMessagePerformance(std::string const&, ::MessagePerformance const&);
#else // @header-generator platform
    virtual void fireEventWorldLoadTimes(
        ::std::string const&                                   calledFromScreen,
        ::std::vector<::std::pair<::std::string, float>> const progressHandlerLoadTimes
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnClientDisconnect(::NetworkIdentifier const&, ::SubClientId, bool, ::Connection::DisconnectFailReason, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventBlockPlacedByCommand(::Block const& placedBlock, int numberOfBlocksPlaced) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnServerDisconnect(::Connection::DisconnectFailReason, ::NetworkIdentifier const&, ::SubClientId, std::string const&, ulong, std::string const&);
#else // @header-generator platform
    virtual void fireEventEntitySpawned(::Player* player, int mobType, uint spawnMethod) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnServerAsyncJoinTaskVerdict(::nonstd::expected<AsyncJoinAllow, AsyncJoinDeny> const&, ::SubClientId const, uint);
#else // @header-generator platform
    virtual void
    fireEventDevSlashCommandExecuted(::std::string const& commandName, ::std::string const& command) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventNPLNLifecycle(int, ::Social::MultiplayerState, ::Social::ServiceState);
#else // @header-generator platform
    virtual void fireCommandParseTableTelemetry(
        bool const                                                         isServer,
        ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventNPLNRpcFailure(int, int, ::Social::MultiplayerState, ::Social::ServiceState, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>);
#else // @header-generator platform
    virtual void
    fireEventPlayerTravelled(::Player* player, float metersTravelledSinceLastEvent, int newBiome) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventHttpClientError(std::string const&);
#else // @header-generator platform
    virtual void fireEventPlayerBounced(::Player* player, ::Block const& block, int bounceHeight) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireGlobalResourcePackCrashRecovery(::PackInstance&, ::mce::UUID, int);
#else // @header-generator platform
    virtual void
    fireEventPlayerDamaged(::Player* player, ::SharedTypes::Legacy::ActorDamageCause damageCause) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireServerConnectionEvent(::IConnectionEventing::ServerConnectionOutcome, uint, double, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventSetValidForAchievements(::Player* player, bool currentlyValidForAchievements) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&);
#else // @header-generator platform
    virtual void fireEventAchievementReceived(
        ::std::string const& title,
        ::std::string const& description,
        ::std::string const& achievementId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireTextToSpeechToggled(bool, bool);
#else // @header-generator platform
    virtual void updatePlayerUndergroundStatus(::Player* player, bool const isUnderground) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAppInitFileOpenStats(::Core::Profile::FileCounters const&, ::Core::Profile::FileCounters const&);
#else // @header-generator platform
    virtual void
    fireEventPlayerAttemptingExploit(::Player* player, ::IMinecraftEventing::ExploitType exploitType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStartupPerformance(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventWorldGenerated(
        ::std::string const&   levelId,
        ::LevelSettings const& levelSettings,
        bool                   fromTemplate
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnAppStart(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventMultiplayerClientConnectionStateChanged(
        ::std::string const& connectionType,
        uint                 fromState,
        uint                 toState,
        uint                 port,
        ::std::string const& status
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnAppSuspend(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::IMinecraftEventing::SuspendTriggersDisconnect, bool, bool);
#else // @header-generator platform
    virtual void fireEventPacketViolationDetected(
        uint64                     readResult,
        ::std::string              readResultContext,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::NetworkIdentifier const& netId,
        uint                       numViolations,
        ::SubClientId              clientSubId,
        ::SubClientId              senderSubId,
        uint                       packetStreamLength
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnAppResume(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, std::optional<long>);
#else // @header-generator platform
    virtual void fireEventServerReceivedValidPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnDeviceLost(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventClientSentOrReceivedPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId,
        ::std::string              correlationId,
        bool                       isOutgoing
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventHardwareInfo();
#else // @header-generator platform
    virtual void fireEventJoinCanceled(::LoadingState currentState) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDeviceLost();
#else // @header-generator platform
    virtual void fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRenderingSizeChanged();
#else // @header-generator platform
    virtual void fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const& reason,
        uint64 const&        serverBlockChecksum,
        uint64 const&        clientBlockChecksum,
        ::std::string const& serverVersion
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDiskStatus(::DiskStatus, ::Core::LevelStorageState, ulong);
#else // @header-generator platform
    virtual void fireEventOnSuccessfulClientLogin(::Level const* level) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStorageAreaFull(std::string const&, std::vector<Bedrock::DirectoryEntry> const&);
#else // @header-generator platform
    virtual void fireEventStartWorld(
        ::NetworkType                                networkType,
        ::std::string const&                         ipAddress,
        ::Social::MultiplayerServiceIdentifier const friendWorldType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOptionsUpdated(bool, ::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventPlayerJoinWorld(
        uint const&                                              userId,
        ::SubClientId const                                      subId,
        bool                                                     isLocalServer,
        ::std::optional<bool>                                    isUsingTURN,
        ::IConnectionEventing::PlayerJoinWorldAttemptState const JoinState,
        int                                                      attemptId,
        ::Connection::DisconnectFailReason                       failReason,
        ::Json::Value const&                                     failDebugInfo,
        ::TransportLayer                                         transportLayer,
        ::NetworkType                                            networkTypeOverride,
        ::Social::MultiplayerState                               multiplayerState,
        bool                                                     isConnectedToApplicationLayer,
        bool                                                     isFilteringProfanity,
        ::Social::MultiplayerServiceIdentifier                   multiplayerServiceIdentifier,
        ::std::string const&                                     titleMessage,
        ::std::string const&                                     errorMessage,
        ::std::string const&                                     codeword,
        ::std::string const&                                     partyId,
        bool                                                     isPartyLeader,
        bool                                                     isPartyDestination,
        bool                                                     isServerTransfer,
        ::Connection::ReconnectionType                           reconnectionType,
        bool                                                     isDueToSuspend,
        uint64                                                   connectionDurationMs,
        ::Social::GameConnectionInfo const&                      connectionInfo
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChatSettingsUpdated(::Player const*, std::vector<Social::Events::Property> const&) const;
#else // @header-generator platform
    virtual void fireEventClientLastPackets(
        uint const&          userId,
        ::SubClientId const  subId,
        int                  correlationId,
        ::Json::Value const& lastSentPackets,
        ::Json::Value const& lastReceivedPackets
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPerformanceMetrics(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::ProfilerLiteTelemetry const&, bool, int);
#else // @header-generator platform
    virtual void fireEventSignalServiceConnect(
        ::SignalServiceConnectStage stage,
        bool                        bIsSigningInAsHost,
        ::Json::Value const&        stageProperties,
        ::std::string const&        signinId,
        ::std::string const&        correlationId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPerformanceContext(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::PerfContextTrackerReport const&, bool, int);
#else // @header-generator platform
    virtual void fireEventSignalMessagePerformance(
        ::std::string const&        signinId,
        ::MessagePerformance const& messagePerformanceEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProfilerMetadata(::Bedrock::Profiling::Orchestrator::ProfilerMetadataParams const&);
#else // @header-generator platform
    virtual void fireEventOnClientDisconnect(
        ::NetworkIdentifier const&         id,
        ::SubClientId                      subId,
        bool                               isNetworked,
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               titleMessage,
        ::std::string const&               errorMessage,
        ::std::string const&               codeword
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProfilerCapture(::Bedrock::Profiling::Orchestrator::ProfilerCaptureParams const&);
#else // @header-generator platform
    virtual void fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason reason,
        ::NetworkIdentifier const&         id,
        ::SubClientId                      subId,
        ::std::string const&               reasonContext,
        uint64                             clientCount,
        ::std::string const&               firstTimeStamp
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireTextureStreamingPerf(::dragon::texturestreaming::TextureStreamingPerformanceTelemetryData const&);
#else // @header-generator platform
    virtual void fireEventOnServerAsyncJoinTaskVerdict(
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> const& joinVerdict,
        ::SubClientId const                                          subId,
        uint                                                         verdictQueueLength
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDevSlashCommandExecuted(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventHttpClientError(::std::string const& error) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCommandParseTableTelemetry(bool const, std::vector<IMinecraftEventing::CommandParseTableEntry> const&) const;
#else // @header-generator platform
    virtual void fireEventNPLNLifecycle(
        int                        eventType,
        ::Social::MultiplayerState multiplayerState,
        ::Social::ServiceState     serviceState
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerTravelled(::Player*, float, int);
#else // @header-generator platform
    virtual void fireEventNPLNRpcFailure(
        int                                     rpcType,
        int                                     statusCode,
        ::Social::MultiplayerState              multiplayerState,
        ::Social::ServiceState                  serviceState,
        ::std::optional<::std::chrono::seconds> requiredDelay
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventVideoPlayed(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventSignInToIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    signInSource,
        bool                                    signInUIShown,
        ::IMinecraftEventing::SignInStage       stage,
        ::Social::SignInResult                  result,
        int                                     retryCount,
        ::Social::PlayerIDs                     ids,
        ::std::string const&                    errorCode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRespondedToAcceptContent(::PacksInfoData const&, bool, bool);
#else // @header-generator platform
    virtual void fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    accountId,
        ::std::string const&                    errorCode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldLoadTimes(std::string const&, std::vector<std::pair<std::string, float>> const);
#else // @header-generator platform
    virtual void fireEventSignInEdu(
        ::std::string const&                                            mutsUserId,
        ::edu::Role                                                     role,
        ::Identity::EduSignInStage                                      stage,
        ::std::string const&                                            tenantType,
        ::std::string const&                                            error,
        ::std::vector<::std::pair<::std::string, ::std::string>> const& details
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCDNDownloadEvent(std::string const&, std::string const&, std::string const&, ::IMinecraftEventing::CDNDownloadResult const&, ::IMinecraftEventing::CDNDownloadEventOrigin const&, float const&);
#else // @header-generator platform
    virtual void fireEventSignOutEdu(
        ::std::string const& mutsUserId,
        ::edu::Role          role,
        ::std::string const& tenantType,
        ::std::string const& action,
        ::std::string const& error
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignInToIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, std::string const&, bool, ::IMinecraftEventing::SignInStage, ::Social::SignInResult, int, ::Social::PlayerIDs, std::string const&);
#else // @header-generator platform
    virtual void fireEventSwitchAccountEdu(
        ::std::string const& mutsUserId,
        ::edu::Role          role,
        ::std::string const& tenantType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignOutOfIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAppPaused();
#else // @header-generator platform
    virtual void fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAppUnpaused();
#else // @header-generator platform
    virtual void fireEventCloudOperationEndedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        ::std::chrono::milliseconds const     elapsedTime,
        uint const                            status,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId,
        ::std::optional<::std::string> const& errorCode,
        ::std::optional<::std::string> const& errorMessage,
        ::std::optional<::std::string> const& error
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAppSurfaceCreated();
#else // @header-generator platform
    virtual void fireEventCloudMyWorldsSummary(
        int const totalWorldsCount,
        int const placeholderCount,
        int const needsUploadCount,
        int const ctagMismatchCount,
        int const conflictCount
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAppSurfaceDestroyed();
#else // @header-generator platform
    virtual void fireEventCloudConflictCheckEdu(
        ::std::string const&                       cloudCorrelationId,
        ::EduCloud::ConflictResolutionStatus const conflictStatus
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const&);
#else // @header-generator platform
    virtual void fireEventPopupFiredEdu(
        ::std::string const&          mutsUserId,
        ::std::string const&          dialogType,
        ::std::string const&          experienceId,
        ::std::string const&          title,
        ::ActiveDirectoryAction const postAction
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPopupClosed(std::string const&) const;
#else // @header-generator platform
    virtual void fireEventPlayIntegrityCheck(
        ::std::string const& result,
        ::std::string const& appRecognitionVerdict,
        ::std::string const& deviceIntegrity,
        ::std::string const& appLicensingVerdict
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldImported(long, ulong);
#else // @header-generator platform
    virtual void fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName,
        ::std::string const&                           worldId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldImportedResult(::FileArchiverOutcome);
#else // @header-generator platform
    virtual void fireServerConnectionAttemptEvent(
        ::std::string const& creatorName,
        bool                 isTransfer,
        ::std::string const& serverAddress
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCurrentInputUpdated(uint, ::InputMode);
#else // @header-generator platform
    virtual void fireEventServerPlayerJoinedGame(
        ::NetworkIdentifier const& id,
        ::SubClientId              subId,
        ::std::string const&       firstConnectionTime
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentPackApplied(::PackManifest const&);
#else // @header-generator platform
    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const& pluginResult, bool client) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPackPlayed(::PackInstance const&, uint);
#else // @header-generator platform
    virtual void fireEventScriptPluginRun(
        ::ScriptPluginResult const& pluginResult,
        ::std::chrono::microseconds runDuration,
        bool                        client
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentPackDownloadFailed(std::string, std::string, std::string, std::string);
#else // @header-generator platform
    virtual void fireEventScriptDebuggerListen(bool client, bool autoAttach) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentPackDownloaded(std::string, std::string, std::string, std::string);
#else // @header-generator platform
    virtual void fireEventScriptDebuggerConnect(bool client, bool autoAttach, int retries) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentPackRemoved(std::string);
#else // @header-generator platform
    virtual void fireEditorEventToolActivated(::std::string const& toolName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPackDeleted(std::string_view, std::string const&, ::PackType, ::PackOrigin, std::string const&, long);
#else // @header-generator platform
    virtual void fireEditorUndo(::std::string const& transactionName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventContentLogsInWorldSession(std::string const&, uint, uint);
#else // @header-generator platform
    virtual void fireEditorRedo(::std::string const& transactionName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEntitlementCacheLoadTimeout();
#else // @header-generator platform
    virtual void fireEditorScriptAction(
        ::std::string const& scriptSource,
        ::std::string const& actionName,
        ::std::string const& actionMetadata
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow);
#else // @header-generator platform
    virtual void fireEditorTutorialEvent(
        ::std::string_view                    type,
        ::std::optional<::std::string> const& state,
        ::std::string const&                  currentStage,
        ::std::optional<::std::string> const& previousStage
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireRealmConnectionEventGenericLambdaCalled(::IMinecraftEventing::RealmConnectionFlow, ::IMinecraftEventing::RealmConnectionLambda, ::IMinecraftEventing::RealmConnectionResult);
#else // @header-generator platform
    virtual void fireEventStartClient(::std::string const& ipAddress, bool isTextToSpeechEnabled) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCompoundCreatorCreated(int, int);
#else // @header-generator platform
    virtual void fireEventHardwareInfo() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventElementConstructorUsed(int, int, ::IMinecraftEventing::ElementConstructorUseType);
#else // @header-generator platform
    virtual void fireEventDeviceLost() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEntitySpawned(::Player*, int, uint);
#else // @header-generator platform
    virtual void fireEventRenderingSizeChanged() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventReducerBlockEntered(::ItemDescriptor const&);
#else // @header-generator platform
    virtual void
    fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRespawn(::Player&, int);
#else // @header-generator platform
    virtual void fireEventStorageAreaFull(
        ::std::string const&                            areaPath,
        ::std::vector<::Bedrock::DirectoryEntry> const& diskSizeData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerRespawnSearchTime(::Player&, ::PlayerRespawnTelemetryData const&);
#else // @header-generator platform
    virtual void fireEventAppPaused() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePackSettingsEvent(::PackSettings const&, ::PackManifest const&, std::string);
#else // @header-generator platform
    virtual void fireEventAppUnpaused() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeTestBuildIdTag();
#else // @header-generator platform
    virtual void fireEventAppSurfaceCreated() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeTestTelemetryTag();
#else // @header-generator platform
    virtual void fireEventAppSurfaceDestroyed() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTestBuildIdTag(char const*);
#else // @header-generator platform
    virtual void fireEventPurchaseGameAttempt(
        ::std::string const& storeId,
        ::std::string const& activeTab,
        ::std::string const& productId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTestTelemetryTag(char const*);
#else // @header-generator platform
    virtual void fireEventPurchaseGameResult(int purchaseResult) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopDebugEventLoggingForAllListeners();
#else // @header-generator platform
    virtual void fireEventTrialDeviceIdCorrelation(
        int64                myTime,
        ::std::string const& theirId,
        int64                theirTime,
        ::std::string const& theirLastSessionId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual void fireEventDeviceIdManagerFailOnIdentityGained() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMultiplayerClientConnectionStateChanged(std::string const&, uint, uint, uint, std::string const&);
#else // @header-generator platform
    virtual void fireEventDlcStorageFull(
        ::std::string const& productId,
        uint64               dlcSize,
        uint64               onDiskScratchSpace,
        uint64               scratchSpace,
        uint64               premiumSpace
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPacketViolationDetected(ulong, std::string, ::PacketViolationResponse, ::MinecraftPacketIds, ::NetworkIdentifier const&, uint, ::SubClientId, ::SubClientId, uint);
#else // @header-generator platform
    virtual void fireEventTotalDlcSizes(uint64 resourceSize, uint64 worldTemplateSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerReceivedValidPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId);
#else // @header-generator platform
    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const& msg) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventClientSentOrReceivedPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, std::string, bool);
#else // @header-generator platform
    virtual void
    fireEventPushNotificationOpened(::std::string const& threadId, ::std::string const& deepLink) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventJoinCanceled(::LoadingState);
#else // @header-generator platform
    virtual void firePerfTestEvent(
        ::std::string const&                                    testArtifact,
        ::std::string const&                                    modelName,
        ::std::string const&                                    renderSize,
        uint                                                    renderDistance,
        uint                                                    simDistance,
        ::std::string const&                                    memorySize,
        ::std::vector<::std::pair<::std::string, float>> const& testArtifactData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireIgnoredNotificationsEvent(::IMinecraftEventing::IgnoredNotificationsType, int, std::set<IMinecraftEventing::IgnoredNotificationSource>);
#else // @header-generator platform
    virtual void fireEventLicenseCheck(bool isLicensed, ::ExtraLicenseData& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireClubsEngagementEvent(::IMinecraftEventing::ClubsEngagementAction, ::IMinecraftEventing::ClubsEngagementTargetType, char const*, long const, std::string const&);
#else // @header-generator platform
    virtual void
    fireQueryOfferResult(::std::string const& storeID, int NumberOfOffers, bool QuerySucceeded) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireClubsOpenFeedScreenEvent(::IMinecraftEventing::ClubsFeedScreenSource const, long const, std::string const&, int);
#else // @header-generator platform
    virtual void fireEventQueryPurchasesResult(
        ::std::string const& storeID,
        ::std::string const& priorPurchaseIds,
        int                  NumberOfPurchases,
        bool                 QuerySucceeded
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEntitlementListInfo(std::vector<ContentIdentity>&, bool);
#else // @header-generator platform
    virtual void fireEventPurchaseFailureDetails(
        int                  httpCode,
        ::std::string const& errorMessage,
        ::std::string const& productId,
        ::std::string const& transactionId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStorage(int, std::string const&);
#else // @header-generator platform
    virtual void fireEventPlatformStorePurchaseFailure(
        ::std::string const& productId,
        ::std::string const& errorMessage
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDlcStorageFull(std::string const&, ulong, ulong, ulong, ulong);
#else // @header-generator platform
    virtual void fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        ::std::string const&                            accountID
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTotalDlcSizes(ulong, ulong);
#else // @header-generator platform
    virtual void fireEventDeviceAccountSuccess(bool isNewAccount, ::std::string const& accountID) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlatformStorePurchaseFailure(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventEntitlementListInfo(
        ::std::vector<::ContentIdentity>& entitlementContentIds,
        bool                              isLegacyList
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventVideoPlayed(::std::string const& productId, ::std::string const& videoUrl) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentsCleared();
#else // @header-generator platform
    virtual void fireEventBundleSubOfferClicked(
        int                  offerIndex,
        int                  bundleSubOfferCount,
        ::std::string const& telemetryId,
        ::std::string const& productId,
        bool                 isOnSale,
        ::std::string const& timeRemainingOnSale
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentsSet(std::vector<std::string> const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventStoreOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateAppliedTreatmentPacks(std::vector<std::string> const&);
#else // @header-generator platform
    virtual void
    fireEventStoreOfferClicked(::std::string const telemetryId, ::std::string const& productId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProgressionsSet(std::vector<std::string> const&);
#else // @header-generator platform
    virtual void fireEventPersonaOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPackImportTimeout(std::string const&);
#else // @header-generator platform
    virtual void fireEventStoreSearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventFatalClientPackError(::FatalClientPackErrorType, ::gsl::span<const std::string>);
#else // @header-generator platform
    virtual void fireEventSearchItemSelected(
        int const            correlationId,
        int const            sessionId,
        ::std::string const& productId,
        int const            row,
        int const            column,
        int const            currentPage,
        ::std::string const& searchType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPackActivationError(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, bool);
#else // @header-generator platform
    virtual void fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreErrorPage(std::string const&, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventCreatorFollowedUnfollowed(
        ::std::string const& creatorId,
        ::std::string const& operation,
        bool                 success
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setServerIdsforClient(std::string const&, std::string const&, ::Social::Events::ServerTelemetryData const&);
#else // @header-generator platform
    virtual void fireEventUgcAcquisitionStateChanged(
        ::std::string const& ugcProductId,
        uint64               downloadSize,
        double               elapsedTime,
        bool                 isUpdate,
        int                  retries,
        bool                 silent,
        int                  numContentTrackers,
        ::std::string const& result,
        ::std::string const& resultDetails,
        int                  httpStatus,
        int                  errorCode,
        bool                 optimizedPack
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeServerIdsForClient();
#else // @header-generator platform
    virtual void fireEventSearchCatalogRequest(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setConnectionCommonProperties(uint, std::string const&, ::NetworkType);
#else // @header-generator platform
    virtual void fireEventStoreSessionResponse(
        ::std::string const& responseType,
        int const            status,
        int const            retryCount,
        bool const           asyncServicesManager
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeConnectionCommonProperties(uint);
#else // @header-generator platform
    virtual void fireEventStoreDiscoveryRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void trySetExperienceIdentifiers(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventStoreInventoryRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeExperienceIdentifiers();
#else // @header-generator platform
    virtual void fireEventInventoryVersionRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getExperienceId() const;
#else // @header-generator platform
    virtual void fireEventServerDrivenLayoutPageLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        int                                                                                         requestSize,
        int                                                                                         responseSize,
        int                                                                                         rowCount,
        int                                                                                         itemCount,
        int                                                                                         imageCount
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getExperienceSessionId() const;
#else // @header-generator platform
    virtual void fireEventServerDrivenLayoutImagesLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        ::ImageTelemetryInfo const&                                                                 imageTelemetryInfo
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSearchCatalogRequest(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventTreatmentsSet(
        ::std::vector<::std::string> const& treatments,
        ::std::string const&                treatmentContext
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreSessionResponse(std::string const&, int const, int const, bool const);
#else // @header-generator platform
    virtual void updateAppliedTreatmentPacks(::std::vector<::std::string> const& treatmentTags) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreDiscoveryRequestResponse(int const, int const, bool const);
#else // @header-generator platform
    virtual void fireEventProgressionsSet(::std::vector<::std::string> const& progressions) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreInventoryRefreshRequestResponse(int const, int const, bool const);
#else // @header-generator platform
    virtual void fireEventTreatmentsCleared() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventInventoryVersionRefreshRequestResponse(int const, int const, bool const);
#else // @header-generator platform
    virtual void fireEventPackImportTimeout(::std::string const& productId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerDrivenLayoutPageLoaded(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, std::string, int, int, int, int, int);
#else // @header-generator platform
    virtual void fireEventFatalClientPackError(
        ::FatalClientPackErrorType       errorType,
        ::gsl::span<::std::string const> packIds
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerDrivenLayoutImagesLoaded(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, std::string, ::ImageTelemetryInfo const&);
#else // @header-generator platform
    virtual void fireEventPackActivationError(
        ::std::string const& errorType,
        ::std::string const& errorDetail,
        ::std::string const& packAction,
        ::std::string const& packId,
        ::std::string const& contentType,
        bool                 isFatal
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLockedItemGiven();
#else // @header-generator platform
    virtual void fireEventStoreErrorPage(
        ::std::string const& errorCode,
        ::std::string const& pageId,
        ::std::string const& discoveryServiceTitleId,
        ::std::string const& playFabTitleId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerBounced(::Player*, ::Block const&, int);
#else // @header-generator platform
    virtual void setServerIdsforClient(
        ::std::string const&                         multiplayerCorrelationId,
        ::std::string const&                         serverVersion,
        ::Social::Events::ServerTelemetryData const& serverTelemetryData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSetValidForAchievements(::Player*, bool);
#else // @header-generator platform
    virtual void removeServerIdsForClient() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAchievementReceived(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void setConnectionCommonProperties(
        uint                 userId,
        ::std::string const& connectionGUID,
        ::NetworkType        networkType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePlayerUndergroundStatus(::Player*, bool const);
#else // @header-generator platform
    virtual void removeConnectionCommonProperties(uint userId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerAttemptingExploit(::Player*, ::IMinecraftEventing::ExploitType);
#else // @header-generator platform
    virtual void
    trySetExperienceIdentifiers(::std::string const& experienceId, ::std::string const& existingSessionId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldLoaded(::Player*, ::brstd::function_ref<void (Social::Events::EventManager&, Social::Events::Event&) const, void (Social::Events::EventManager&, Social::Events::Event&)>);
#else // @header-generator platform
    virtual void removeExperienceIdentifiers() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMarkLevelForSync(std::string const&, long, long, ::IMinecraftEventing::MarkLevelForSyncReason);
#else // @header-generator platform
    virtual ::std::string getExperienceId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireMinecraftVersionLaunched(bool);
#else // @header-generator platform
    virtual ::std::string getExperienceSessionId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireMinecraftVersionInviteAccepted(bool, ulong);
#else // @header-generator platform
    virtual void fireEventOptionsUpdated(
        bool                                                                                        onStartup,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireInviteStatusReceived(std::string);
#else // @header-generator platform
    virtual void fireEventChatSettingsUpdated(
        ::Player const*                                  player,
        ::std::vector<::Social::Events::Property> const& properties
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireInviteStatusSentImpl(uint, std::vector<std::string>);
#else // @header-generator platform
    virtual void
    fireEventControlRemappedByPlayer(::std::string const& actionName, ::RawInputType inputType, int keyCode) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireDayOneExperienceStateChanged(::IMinecraftEventing::DayOneExperienceState, std::optional<uint>, std::optional<ulong>);
#else // @header-generator platform
    virtual void fireEventDifficultySet(
        ::SharedTypes::Legacy::Difficulty oldDifficulty,
        ::SharedTypes::Legacy::Difficulty newDifficulty
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireContentDecryptionFailure(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void
    fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWorldConversionAttemptEvent(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventGameRulesUpdated(int oldValue, int newValue, ::std::string const& gameRuleName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWorldConversionInitiatedEvent(std::string const&);
#else // @header-generator platform
    virtual void
    fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWorldUpgradedToCnCPart2(bool, std::string const&, ::Experiments const&, std::string const&, ::LevelSeed64, float);
#else // @header-generator platform
    virtual void fireCurrentInputUpdated(uint userId, ::InputMode inputMode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAssertFailed(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCrashSystemFailedToInit();
#else // @header-generator platform
    virtual void fireEventPerformanceMetrics(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::ProfilerLiteTelemetry const&                                                              profileTelemetry,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireChatUsedEvent(uint, bool);
#else // @header-generator platform
    virtual void fireEventPerformanceContext(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::PerfContextTrackerReport const&                                                           perfContextReport,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventJoinByCode(std::string const&);
#else // @header-generator platform
    virtual void
    fireEventProfilerMetadata(::Bedrock::Profiling::Orchestrator::ProfilerMetadataParams const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBlockPlacedByCommand(::Block const&, int);
#else // @header-generator platform
    virtual void
    fireEventProfilerCapture(::Bedrock::Profiling::Orchestrator::ProfilerCaptureParams const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerPlayerJoinedGame(::NetworkIdentifier const&, ::SubClientId, std::string const&);
#else // @header-generator platform
    virtual void fireTextureStreamingPerf(
        ::dragon::texturestreaming::TextureStreamingPerformanceTelemetryData const& perfData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const&, bool);
#else // @header-generator platform
    virtual void fireEventScreenChanged(
        uint const&                                               userId,
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScriptPluginRun(::ScriptPluginResult const&, std::chrono::duration<long long, std::ratio<1, 1000000>>, bool);
#else // @header-generator platform
    virtual void fireEventImGuiScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScriptDebuggerListen(bool, bool);
#else // @header-generator platform
    virtual void fireEventPopupClosed(::std::string const& popupName) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScriptDebuggerConnect(bool, bool, int);
#else // @header-generator platform
    virtual void
    fireEventNewContentCheckCompleted(::std::string const& newContentPrefix, bool hasNewStoreContent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorEventToolActivated(std::string const&);
#else // @header-generator platform
    virtual void fireEventEncyclopediaTopicChanged(::std::string const& topicName, ::InputMode inputMode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorUndo(std::string const&);
#else // @header-generator platform
    virtual void fireEventHowToPlayTopicChanged(::std::string const& topicName, ::InputMode inputMode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorRedo(std::string const&);
#else // @header-generator platform
    virtual void fireEventAndroidHelpRequest() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorScriptAction(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventWorldFilesListed(
        uint64 numLevels,
        uint64 totalSizeMB,
        uint64 largestLevelMB,
        uint64 smallestLevelMB
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorTutorialEvent(std::string_view, std::optional<std::string> const&, std::string const&, std::optional<std::string> const&);
#else // @header-generator platform
    virtual void fireEventStorage(int state, ::std::string const& extra) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldLoadedClassroomCustomization(::IMinecraftEventing::WorldClassroomCustomization, ::buffer_span<std::pair<std::string_view, std::string_view>>);
#else // @header-generator platform
    virtual void fireEventStorageReport(::std::string const& report) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireClassroomSettingUpdated(::ClassroomSetting, ::SettingsScreenMode);
#else // @header-generator platform
    virtual void fireEventPlayerMessageSay(::std::string const& fromName, ::std::string const& message) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventNpcPropertiesUpdated(::Actor&, bool);
#else // @header-generator platform
    virtual void fireEventPlayerMessageTell(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor&);
#else // @header-generator platform
    virtual void fireEventPlayerMessageChat(::std::string const& fromName, ::std::string const& message) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCameraUsed(bool);
#else // @header-generator platform
    virtual void fireEventPlayerMessageMe(::std::string const& fromName, ::std::string const& message) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPortfolioExported(int, int);
#else // @header-generator platform
    virtual void fireEventPlayerMessageTitle(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireQuickPlayEvent();
#else // @header-generator platform
    virtual void
    fireEventPlayerKicked(::std::string const& sessionType, ::std::string const& kickedPlayer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePermissionsSetEvent(::PlayerPermissionLevel const, ::CommandPermissionLevel const, ::PlayerPermissionLevel const, ::CommandPermissionLevel const);
#else // @header-generator platform
    virtual void fireEventPlayerBanned(::std::string const& bannedPlayer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireExternalUriLaunched(std::string const&) const;
#else // @header-generator platform
    virtual void fireEventChunkLoaded(::LevelChunk& chunk) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource) const;
#else // @header-generator platform
    virtual void fireEventChunkUnloaded(::LevelChunk& chunk) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireUserGeneratedUriLaunchFailed(::UserGeneratedUriSource, ::Util::ResourceUri::ValidationStatus, std::string const&) const;
#else // @header-generator platform
    virtual void fireEventChunkChanged(::LevelChunk& chunk) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEmptyLibraryCategoryError(std::string const&) const;
#else // @header-generator platform
    virtual void fireEventPackPlayed(::PackInstance const& packInstance, uint priority) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderCachePerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
#else // @header-generator platform
    virtual void fireEventRespondedToAcceptContent(
        ::PacksInfoData const& data,
        bool                   accepted,
        bool                   downloadOptionalResourcePacks
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderLoadPerformance(std::string const&, ulong, ulong, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
#else // @header-generator platform
    virtual void
    fireEventStackLoaded(::StackStats const& stats, ::gsl::span<::PackInstance const> packInstances) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
#else // @header-generator platform
    virtual void firePackSettingsEvent(
        ::PackSettings const& packSettings,
        ::PackManifest const& manifest,
        ::std::string         serializedPackSettings
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventTreatmentPackApplied(::PackManifest const& manifest) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCourseButtonPressed(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventTreatmentPackDownloadFailed(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireLessonActionTaken(std::string const&, std::string const&, std::string const&, ::IMinecraftEventing::EducationLessonAction, int);
#else // @header-generator platform
    virtual void fireEventTreatmentPackDownloaded(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireLessonProgressEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, int);
#else // @header-generator platform
    virtual void fireEventTreatmentPackRemoved(::std::string packId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireShareButtonPressed(std::string const&, ::EduShareUriType, ::EduShareMethodType, bool);
#else // @header-generator platform
    virtual void fireEventPackDeleted(
        ::std::string_view   reason,
        ::std::string const& packId,
        ::PackType           packType,
        ::PackOrigin         packLocation,
        ::std::string const& packOptimizationVersion,
        int64                freedBytes
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const) const;
#else // @header-generator platform
    virtual void fireCDNDownloadEvent(
        ::std::string const&                                packId,
        ::std::string const&                                versionNumber,
        ::std::string const&                                hostUrl,
        ::IMinecraftEventing::CDNDownloadResult const&      downloadResult,
        ::IMinecraftEventing::CDNDownloadEventOrigin const& origin,
        float const&                                        elapsedTime
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireInAppCodeBuilderActivated(::OpenCodeMethod, std::string const&, std::string const&, std::string const&) const;
#else // @header-generator platform
    virtual void
    fireEventContentLogsInWorldSession(::std::string const& logArea, uint errorCount, uint warningCount) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireInAppCodeBuilderDismissed(std::string const&) const;
#else // @header-generator platform
    virtual void fireEventEntitlementCacheLoadTimeout() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeCommandButtonPressed();
#else // @header-generator platform
    virtual void fireTextToSpeechToggled(bool uiTTS, bool chatTTS) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireIDESelected(std::string const&) const;
#else // @header-generator platform
    virtual void fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                  customization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEduResources() const;
#else // @header-generator platform
    virtual void
    fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const&) const;
#else // @header-generator platform
    virtual void fireEventNpcPropertiesUpdated(::Actor& npcOwner, bool isEditorWorldbuilder) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCodeBuilderClosed() const;
#else // @header-generator platform
    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor& board) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCodeBuilderLog(::Webview::TelemetryCommonProperties const&, std::string const&, std::string&) const;
#else // @header-generator platform
    virtual void fireEventCameraUsed(bool isSelfie) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCodeBuilderScoreChanged(std::string const&, int const) const;
#else // @header-generator platform
    virtual void fireEventPortfolioExported(int imageCount, int captionedCount) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCodeBuilderRuntimeAction(std::string const&) const;
#else // @header-generator platform
    virtual void fireQuickPlayEvent() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEduServiceStatus(std::string const&, std::string const&, int, ::buffer_span<std::pair<std::string_view, std::string_view>>) const;
#else // @header-generator platform
    virtual void firePermissionsSetEvent(
        ::PlayerPermissionLevel const  prevPlayerPermissionLevel,
        ::CommandPermissionLevel const prevCommandPermissionLevel,
        ::PlayerPermissionLevel const  playerPermissionLevel,
        ::CommandPermissionLevel const commandPermissionLevel
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWebviewDownload(std::string const&, ::WebviewDownloadInfo const&) const;
#else // @header-generator platform
    virtual void fireExternalUriLaunched(::std::string const& uri) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEduServiceRequestFailed(std::string const&, std::string const&, std::string const&, ::buffer_span<std::pair<std::string_view, std::string_view>>) const;
#else // @header-generator platform
    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventButtonPressed(std::string const&, std::unordered_map<std::string, std::string> const&) const;
#else // @header-generator platform
    virtual void fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        ::std::string const&                  additionalData
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&) const;
#else // @header-generator platform
    virtual void fireEventEmptyLibraryCategoryError(::std::string const& categoryTitle) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOptionsChanged(std::string const&, std::unordered_map<std::string, int> const&) const;
#else // @header-generator platform
    virtual void
    fireCodeBuilderCachePerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOptionsChangedAlt(std::string const&, std::unordered_map<std::string, Social::Events::OptionChange> const&) const;
#else // @header-generator platform
    virtual void fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTagButtonPressed(std::string const&, bool) const;
#else // @header-generator platform
    virtual void
    fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLevelDataOverride(std::string_view) const;
#else // @header-generator platform
    virtual void fireLibraryButtonPressed(
        ::std::string const& productId,
        ::std::string const& worldName,
        ::std::string const& buttonAction
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEduContentVerificationFailed() const;
#else // @header-generator platform
    virtual void fireCourseButtonPressed(::std::string const& courseTitle, ::std::string const& courseId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLibrarySearch(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) const;
#else // @header-generator platform
    virtual void fireLessonActionTaken(
        ::std::string const&                        lessonTitle,
        ::std::string const&                        lessonId,
        ::std::string const&                        courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLibrarySearchItemSelected(int const, int const, std::string const&, int const, int const) const;
#else // @header-generator platform
    virtual void fireLessonProgressEvent(
        ::std::string const& lessonTitle,
        ::std::string const& lessonId,
        ::std::string const& courseId,
        ::std::string const& activityId,
        ::std::string const& action,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID,
        int                  score
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType, double) const;
#else // @header-generator platform
    virtual void fireShareButtonPressed(
        ::std::string const& location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldExported(long, ulong);
#else // @header-generator platform
    virtual void
    fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const entryPoint) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventControlRemappedByPlayer(std::string const&, ::RawInputType, int) const;
#else // @header-generator platform
    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDifficultySet(::SharedTypes::Legacy::Difficulty, ::SharedTypes::Legacy::Difficulty);
#else // @header-generator platform
    virtual void fireInAppCodeBuilderActivated(
        ::OpenCodeMethod     method,
        ::std::string const& ideName,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGameRulesUpdated(float, float, std::string const&);
#else // @header-generator platform
    virtual void fireInAppCodeBuilderDismissed(::std::string const& ideName) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGameRulesUpdated(int, int, std::string const&);
#else // @header-generator platform
    virtual void fireCodeCommandButtonPressed() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGameRulesUpdated(bool, bool, std::string const&);
#else // @header-generator platform
    virtual void fireIDESelected(::std::string const& name) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDefaultGameTypeChanged(::GameType, ::GameType);
#else // @header-generator platform
    virtual void fireEventEduResources() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventNewContentCheckCompleted(std::string const&, bool);
#else // @header-generator platform
    virtual void fireEventCodeBuilderClosed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEncyclopediaTopicChanged(std::string const&, ::InputMode);
#else // @header-generator platform
    virtual void fireEventCodeBuilderLog(
        ::Webview::TelemetryCommonProperties const& properties,
        ::std::string const&                        message,
        ::std::string&                              level
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventHowToPlayTopicChanged(std::string const&, ::InputMode);
#else // @header-generator platform
    virtual void fireEventCodeBuilderScoreChanged(::std::string const& objective, int const score) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAndroidHelpRequest();
#else // @header-generator platform
    virtual void fireEventEduServiceStatus(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        int                                                                durationMS,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldFilesListed(ulong, ulong, ulong, ulong);
#else // @header-generator platform
    virtual void fireEventCodeBuilderRuntimeAction(::std::string const& action) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLabTableCreated(int, int, int);
#else // @header-generator platform
    virtual void
    fireEventWebviewDownload(::std::string const& downloadState, ::WebviewDownloadInfo const& downloadInfo) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageSay(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEduServiceRequestFailed(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        ::std::string const&                                               error,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageChat(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventOptionsChanged(
        ::std::string const&                            optionGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageMe(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventOptionsChangedAlt(
        ::std::string const&                                                       optionGroup,
        ::std::unordered_map<::std::string, ::Social::Events::OptionChange> const& changes
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerDamaged(::Player*, ::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
    virtual void fireEventTagButtonPressed(::std::string const& tag, bool showMore) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerKicked(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventLevelDataOverride(::std::string_view valueName) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerBanned(std::string const&);
#else // @header-generator platform
    virtual void fireEventEduContentVerificationFailed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmShared(std::string const&, ::IMinecraftEventing::ShareMode const&, long const&);
#else // @header-generator platform
    virtual void fireEventLibrarySearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmMemberlistCleared(long const&, int const&);
#else // @header-generator platform
    virtual void fireEventLibrarySearchItemSelected(
        int const            sessionId,
        int const            correlationId,
        ::std::string const& productId,
        int const            row,
        int const            column
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmUrlGenerated(std::string const&, long const&);
#else // @header-generator platform
    virtual void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStructureExport(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::IMinecraftEventing::ExportOutcome, ::IMinecraftEventing::ExportStage) const;
#else // @header-generator platform
    virtual void fireEventWorldExported(int64 worldSeed, uint64 worldSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventContentShared(std::string const&, std::string const&, ::IMinecraftEventing::ShareMode const&);
#else // @header-generator platform
    virtual void fireEventWorldImported(int64 worldSeed, uint64 worldSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStorageReport(std::string const&);
#else // @header-generator platform
    virtual void fireEventWorldImportedResult(::FileArchiverOutcome importResult) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStackLoaded(::StackStats const&, ::gsl::span<const PackInstance>);
#else // @header-generator platform
    virtual void
    fireGlobalResourcePackCrashRecovery(::PackInstance& packInstance, ::mce::UUID recoveryID, int order) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUnknownBlockReceived(::NewBlockID const&, ushort);
#else // @header-generator platform
    virtual void fireEventRealmShared(
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode,
        int64 const&                           worldId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignInEdu(std::string const&, ::edu::Role, ::Identity::EduSignInStage, std::string const&, std::string const&, std::vector<std::pair<std::string, std::string>> const&);
#else // @header-generator platform
    virtual void fireEventRealmMemberlistCleared(int64 const& worldId, int const& numberOfUsersRemoved) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignOutEdu(std::string const&, ::edu::Role, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventRealmUrlGenerated(::std::string const& url, int64 const& worldId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSwitchAccountEdu(std::string const&, ::edu::Role, std::string const&);
#else // @header-generator platform
    virtual void fireEventStructureExport(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::ExportOutcome                                                         outcome,
        ::IMinecraftEventing::ExportStage                                                           stage
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource);
#else // @header-generator platform
    virtual void fireEventContentShared(
        ::std::string const&                   productId,
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPopupFiredEdu(std::string const&, std::string const&, std::string const&, std::string const&, ::ActiveDirectoryAction const);
#else // @header-generator platform
    virtual void fireMinecraftVersionLaunched(bool launchedLegacy) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayIntegrityCheck(std::string const&, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCloudOperationStartedEdu(::EduCloudUtils::Operation const, ::EduCloud::CloudItemType const, std::string const&, ulong const, std::optional<std::string> const&);
#else // @header-generator platform
    virtual void fireInviteStatusReceived(::std::string id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCloudMyWorldsSummary(int const, int const, int const, int const, int const);
#else // @header-generator platform
    virtual void fireInviteStatusSentImpl(uint userId, ::std::vector<::std::string> invitationIds) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCloudOperationEndedEdu(::EduCloudUtils::Operation const, ::EduCloud::CloudItemType const, std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>> const, uint const, ulong const, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&);
#else // @header-generator platform
    virtual void fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        ::std::optional<uint>                       importedWorldIndex,
        ::std::optional<uint64>                     importedWorldTimestamp
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCloudConflictCheckEdu(std::string const&, ::EduCloud::ConflictResolutionStatus const);
#else // @header-generator platform
    virtual void fireContentDecryptionFailure(
        ::std::string const& failedContentIds,
        ::std::string const& contentKey,
        ::std::string const& failurePoint
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireWorldConversionAttemptEvent(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPurchaseGameResult(int);
#else // @header-generator platform
    virtual void fireWorldConversionInitiatedEvent(::std::string const& converterVersion) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTrialDeviceIdCorrelation(long, std::string const&, long, std::string const&);
#else // @header-generator platform
    virtual void fireWorldUpgradedToCnCPart2(
        bool                 willUpgrade,
        ::std::string const& baseGameVersion,
        ::Experiments const& experiments,
        ::std::string const& lastOpenedVersion,
        ::LevelSeed64        worldSeed,
        float                worldSizeMB
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDeviceIdManagerFailOnIdentityGained();
#else // @header-generator platform
    virtual void fireEventAssertFailed(::std::string const& assertBucket, ::std::string const& message) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const&);
#else // @header-generator platform
    virtual void fireEventCrashSystemFailedToInit() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPushNotificationOpened(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireChatUsedEvent(uint chatLength, bool isSlashCommand) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePerfTestEvent(std::string const&, std::string const&, std::string const&, uint, uint, std::string const&, std::vector<std::pair<std::string, float>> const&);
#else // @header-generator platform
    virtual void fireEventJoinByCode(::std::string const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLicenseCheck(bool, ::ExtraLicenseData&);
#else // @header-generator platform
    virtual void fireEventAppInitFileOpenStats(
        ::Core::Profile::FileCounters const& openForRead,
        ::Core::Profile::FileCounters const& openForWrite
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireQueryOfferResult(std::string const&, int, bool);
#else // @header-generator platform
    virtual void fireEventStartupPerformance(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventQueryPurchasesResult(std::string const&, std::string const&, int, bool);
#else // @header-generator platform
    virtual void fireEventOnAppStart(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldGenerated(std::string const&, ::LevelSettings const&, bool);
#else // @header-generator platform
    virtual void fireEventOnAppSuspend(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::SuspendTriggersDisconnect                                             triggersDisconnect,
        bool reconnectOnResumeEnabled,
        bool forceDisableEvents
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCopyWorldEducationEnabled();
#else // @header-generator platform
    virtual void fireEventOnAppResume(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::optional<int64> sessionAuthValidUntil
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBundleSubOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&);
#else // @header-generator platform
    virtual void fireEventOnDeviceLost(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreOfferClicked(std::string const, std::string const&);
#else // @header-generator platform
    virtual void
    fireEventRealmsGeneralCall(::std::string const& callName, ::Bedrock::Http::Status returnCode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreOfferClicked(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventRealmsRealmSpecificCall(
        ::std::string const&    callName,
        int64                   realmId,
        ::Bedrock::Http::Status returnCode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaOfferClicked(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventRealmDownload(
        ::std::string const& correlationId,
        ::std::string const& downloadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreSearch(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventRealmBackupDownloadFailed(
        int const                        realmId,
        ::std::string const&             reason,
        int64 const                      worldSizeBytes,
        int64 const                      availableStorageBytes,
        ::gsl::span<::std::string const> packIds
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSearchItemSelected(int const, int const, std::string const&, int const, int const, int const, std::string const&);
#else // @header-generator platform
    virtual void fireEventRealmUpload(
        ::std::string const& correlationId,
        ::std::string const& uploadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB,
        bool const           isPack
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUserListUpdated(std::string const&, std::string const&, std::string const&, bool);
#else // @header-generator platform
    virtual void fireEventRealmsPackUpload(
        int const            realmId,
        int const            slotIndex,
        ::std::string const& packId,
        ::std::string const& packVersion,
        ::PackType           packType,
        ::std::string const& packClassification,
        ::std::string const& packOptimizationVersion,
        bool const           hasContentIdentity,
        bool const           isPremium,
        ::PackOrigin         packOrigin,
        int const            stackPosition,
        uint64 const         packSizeBytes
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCreatorFollowedUnfollowed(std::string const&, std::string const&, bool);
#else // @header-generator platform
    virtual void
    fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUgcAcquisitionStateChanged(std::string const&, ulong, double, bool, int, bool, int, std::string const&, std::string const&, int, int, bool);
#else // @header-generator platform
    virtual void
    fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmsGeneralCall(std::string const&, ::Bedrock::Http::Status);
#else // @header-generator platform
    virtual void fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmsRealmSpecificCall(std::string const&, long, ::Bedrock::Http::Status);
#else // @header-generator platform
    virtual void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmDownload(std::string const&, std::string const&, int const, int const, int const);
#else // @header-generator platform
    virtual void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmBackupDownloadFailed(int const, std::string const&, long const, long const, ::gsl::span<const std::string>);
#else // @header-generator platform
    virtual void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const source,
        int64 const                                       realmId,
        ::std::string const&                              clubId,
        int                                               unreadPosts
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmUpload(std::string const&, std::string const&, int const, int const, int const, bool const);
#else // @header-generator platform
    virtual void fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        int64 const                                     realmId,
        ::std::string const&                            clubId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmsPackUpload(int const, int const, std::string const&, std::string const&, ::PackType, std::string const&, std::string const&, bool const, bool const, ::PackOrigin, int const, ulong const);
#else // @header-generator platform
    virtual void fireEventCopyWorldEducationEnabled() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow);
#else // @header-generator platform
    virtual void fireEventRespawn(::Player& player, int dimID) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireRealmConnectionEventRealmAPIResponse(::IMinecraftEventing::RealmConnectionFlow, int);
#else // @header-generator platform
    virtual void
    fireEventServerRespawnSearchTime(::Player& player, ::PlayerRespawnTelemetryData const& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getSessionId();
#else // @header-generator platform
    virtual void fireEventUnknownBlockReceived(::NewBlockID const& blockId, ushort data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChunkLoaded(::LevelChunk&);
#else // @header-generator platform
    virtual void fireEventCompoundCreatorCreated(int compoundId, int count) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChunkUnloaded(::LevelChunk&);
#else // @header-generator platform
    virtual void fireEventLabTableCreated(int reactionId, int productId, int productAux) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChunkChanged(::LevelChunk&);
#else // @header-generator platform
    virtual void fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<Level>);
#else // @header-generator platform
    virtual void fireEventReducerBlockEntered(::ItemDescriptor const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLevelDestruct();
#else // @header-generator platform
    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::Level> level) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flagEventDeepLink();
#else // @header-generator platform
    virtual void fireEventLevelDestruct() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flagEventPlayerGameTypeDefault(bool);
#else // @header-generator platform
    virtual void flagEventDeepLink() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fileEventCloudWorldPullFailed(std::string const&, std::string const&, bool);
#else // @header-generator platform
    virtual void flagEventPlayerGameTypeDefault(bool isDefault) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLevelDatLoadFailed(std::string const&, std::string const&, bool);
#else // @header-generator platform
    virtual void fileEventCloudWorldPullFailed(
        ::std::string const& reason,
        ::std::string const& worldID,
        bool                 localLevelDatUsed
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldCorruptionCausedWorldShutdown(::LevelStorageEventingContext const&, std::string const&, std::optional<bool>);
#else // @header-generator platform
    virtual void
    fireEventLevelDatLoadFailed(::std::string const& reason, ::std::string const& worldID, bool isFatal) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool);
#else // @header-generator platform
    virtual void fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const& context,
        ::std::string const&                 reason,
        ::std::optional<bool>                isOutOfDiskSpace
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerShutdownDueToError(std::string const&);
#else // @header-generator platform
    virtual void
    fireEventClientLeftGameDueToUnrecoverableError(::std::string const& reason, bool isServer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerInitializationFailed(std::string const&, bool, bool);
#else // @header-generator platform
    virtual void fireEventServerShutdownDueToError(::std::string const& reason) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDBStorageSizeSnapshot(::LevelStorageEventingContext const&, ::DBStorageFolderWatcher const&, ::DBStorageFolderWatcherSnapshotKind);
#else // @header-generator platform
    virtual void fireEventServerInitializationFailed(
        ::std::string const& failReason,
        bool                 serverLevelExists,
        bool                 serverNetworkHandlerValid
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLevelDBPerformanceData(::LevelStorageEventingContext const&, ::DBStoragePerformanceTelemetryData const&);
#else // @header-generator platform
    virtual void fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const& context,
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDBReadFail(::LevelStorageEventingContext const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventLevelDBPerformanceData(
        ::LevelStorageEventingContext const&       context,
        ::DBStoragePerformanceTelemetryData const& perfData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSidebarNavigation(uint const&, std::string const&, std::string const&, int const, bool const, bool const, bool const);
#else // @header-generator platform
    virtual void
    fireEventDBReadFail(::LevelStorageEventingContext const& context, ::std::string const& reason) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSidebarVerboseToggled(uint const&, std::string const&, std::string const&, bool const);
#else // @header-generator platform
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const& worldPath,
        ::std::string const& levelId,
        ::std::string const& deletionCandidate
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaUserLoadedActive(::persona::ProfileType const, std::string const&, bool);
#else // @header-generator platform
    virtual void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaItemPreviewed(::persona::ProfileType const, std::string const&, std::string const&, uint, uint, ::IMinecraftEventing::PromotionType, bool, std::string const&, std::string const&, double, ::StoreEventData::StoreType);
#else // @header-generator platform
    virtual void fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaAvatarUpdated(::persona::ProfileType const, std::vector<std::string> const&, std::vector<bool> const&, std::vector<bool> const&, bool, bool, std::string const&, std::string const&, std::string const&, bool, std::vector<std::string> const&, std::vector<std::string> const&);
#else // @header-generator platform
    virtual void fireEventSidebarNavigation(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& telemetryId,
        int const            depthLevel,
        bool const           isSelected,
        bool const           areChildrenVisible,
        bool const           hasChildren
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaSkinChanged(::persona::ProfileType const, std::string const&, bool);
#else // @header-generator platform
    virtual void fireEventSidebarVerboseToggled(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& verboseNavigationType,
        bool const           verboseState
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaAvatarsListed(std::vector<persona::ProfileType> const&);
#else // @header-generator platform
    virtual void fireEventPersonaUserLoadedActive(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         personaUsesClassicSkin
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaEmotePlayed(std::string const&, bool, int);
#else // @header-generator platform
    virtual void fireEventPersonaItemPreviewed(
        ::persona::ProfileType const        personaProfile,
        ::std::string const&                itemOfferId,
        ::std::string const&                productId,
        uint                                row,
        uint                                column,
        ::IMinecraftEventing::PromotionType promotionType,
        bool                                isOwned,
        ::std::string const&                creatorId,
        ::std::string const&                creatorName,
        double                              secondsToLoadContent,
        ::StoreEventData::StoreType         storeType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDefaultCastSelected(int, ::mce::UUID, std::string const&);
#else // @header-generator platform
    virtual void fireEventPersonaAvatarUpdated(
        ::persona::ProfileType const        personaProfile,
        ::std::vector<::std::string> const& newAppearancePieceIds,
        ::std::vector<bool> const&          newPieces,
        ::std::vector<bool> const&          tintedPieces,
        bool                                isNewPersona,
        bool                                isBeingDeleted,
        ::std::string const&                bodySize,
        ::std::string const&                armSize,
        ::std::string const&                classicSkinId,
        bool                                usesClassicSkin,
        ::std::vector<::std::string> const& emotesPieceIds,
        ::std::vector<::std::string> const& emoteSlotNumbers
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaInitalizationEvent(uint, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventPersonaSkinChanged(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         isClassicSkinUsed
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaGeneralError(std::string const&, uint);
#else // @header-generator platform
    virtual void
    fireEventPersonaAvatarsListed(::std::vector<::persona::ProfileType> const& profileTypesUsed) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaLoadingPieces(uint, double);
#else // @header-generator platform
    virtual void fireEventPersonaEmotePlayed(
        ::std::string const& emoteProductId,
        bool                 isEmoteEndedEarly,
        int                  emoteSlotId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaPiecePackEviction(uint, uint, uint, uint, bool, double);
#else // @header-generator platform
    virtual void fireEventDefaultCastSelected(
        int                  previewIndex,
        ::mce::UUID          appearanceId,
        ::std::string const& appearanceName
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaCreationFailed(std::string_view, std::string_view, bool, bool, std::string_view, std::string_view);
#else // @header-generator platform
    virtual void fireEventPersonaInitalizationEvent(
        uint                 secondsToCompletion,
        ::std::string const& status,
        ::std::string const& user
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaCategoryInformation(std::string const&);
#else // @header-generator platform
    virtual void
    fireEventPersonaGeneralError(::std::string const& personaErrorName, uint duplicateErrorsFired) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDisplayLoggedError(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventPersonaPiecePackEviction(
        uint   cacheSizeBeforeEviction,
        uint   evictedCount,
        uint   failedCount,
        uint   protectedCount,
        bool   evictionLimitedByBatch,
        double passDurationInSeconds
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireStructureBlockAction(::IMinecraftEventing::StructureBlockActionType, ::StructureEditorData const&, ::StructureTelemetryClientData const*);
#else // @header-generator platform
    virtual void fireEventPersonaCreationFailed(
        ::std::string_view errorName,
        ::std::string_view pieceId,
        bool               missingTop,
        bool               missingBottom,
        ::std::string_view repositoryPieceType,
        ::std::string_view appearancePieceType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireStructureBlockRedstoneActivated(::IMinecraftEventing::StructureBlockActionType, ::StructureEditorData const&, ::StructureTelemetryClientData const*);
#else // @header-generator platform
    virtual void fireEventPersonaCategoryInformation(::std::string const& categoryInformation) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOreUIError(uint const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventDisplayLoggedError(
        ::std::string const& errorMessageTemplate,
        ::std::string const& errorMessage,
        ::std::string const& errorParameters
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOreUIScreenPerformance(uint const&, ::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>);
#else // @header-generator platform
    virtual void fireEventOreUIError(uint const& userId, ::std::string const& errorType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool const);
#else // @header-generator platform
    virtual void fireEventOreUIScreenPerformance(
        uint const&                                                                                 userId,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnboardingWorldCreationUsage(bool, bool, bool);
#else // @header-generator platform
    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool const           isOwner
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDeviceAccountSuccess(bool, std::string const&);
#else // @header-generator platform
    virtual void fireEventOnboardingWorldCreationUsage(
        bool onboardingWorldCreationUsed,
        bool hasWorlds,
        bool hasOnlyBaseGamePacks
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDeviceAccountFailure(::IMinecraftEventing::SignInStage, ::IMinecraftEventing::DeviceAccountFailurePhase, uint, std::string const&);
#else // @header-generator platform
    virtual ::std::shared_ptr<void*> requestEventDeferment() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<void*> requestEventDeferment();
#else // @header-generator platform
    virtual ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor();
#else // @header-generator platform
    virtual void sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo> session) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLevelChunkPerformanceData(bool);
#else // @header-generator platform
    virtual void addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo> session) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const&);
#else // @header-generator platform
    virtual void sendBatchedCrashTelemetry() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventActorValueValidationFailed(std::string const&, char const*);
#else // @header-generator platform
    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const& status) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireDBStorageError(::LevelStorageEventingContext const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventLevelChunkPerformanceData(bool isClientSide) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireServerStarted(::Social::Events::ServerTelemetryData const&, std::unordered_map<std::string, std::string> const&);
#else // @header-generator platform
    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const& output) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireServerShutdown();
#else // @header-generator platform
    virtual void
    fireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireSafetyServiceTextProcessEvent(std::string const&, ::TextProcessingEventOrigin, ushort, std::string const&, bool, double, char, char, ::Json::Value const&, bool, bool);
#else // @header-generator platform
    virtual void fireScreenLoadTimeUpdateEvent(
        uint const&                userId,
        ::std::string const&       screenName,
        ::std::chrono::nanoseconds duration,
        ::std::string const&       loadInstanceId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireBannedSkinVerificationEvent(uint const&, std::string const&, bool, int const, std::string const&);
#else // @header-generator platform
    virtual void
    fireDBStorageError(::LevelStorageEventingContext const& context, ::std::string const& errorType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerReportSent(bool, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireStorageMigrationEvent(
        bool                                              isSuccessful,
        ::Bedrock::StorageMigration::StorageMigrationType migrationType,
        int                                               numFilesMigrated,
        int                                               numFilesTotal,
        double                                            migratedMB,
        double                                            totalMB,
        ::std::chrono::nanoseconds                        duration,
        ::std::string const&                              failureReason,
        ::std::string const&                              failureFolder
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOneDSPlayerReportPayload(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventConnectedStorageResult(
        ::ConnectedStorageEventType eventType,
        bool                        succeeded,
        uint                        durationMs,
        ::std::optional<uint>       chunksSent,
        ::std::string const&        errorMessage,
        ::std::string const&        levelId,
        int64                       quotaRemaining,
        ::std::optional<uint>       filesToAddCount,
        ::std::optional<uint>       filesToDeleteCount,
        ::std::optional<uint>       HACK_oldFilesToDeleteCount
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSafetyHTTPRequest(std::string const&, std::string const&, int const);
#else // @header-generator platform
    virtual void fireEventConnectedStorageError(
        char const*          message,
        ::std::string const& levelId,
        int64                quotaRemaining
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProfanityFilter(bool, bool, bool);
#else // @header-generator platform
    virtual void fireServerStarted(
        ::Social::Events::ServerTelemetryData const&              serverTelemetryData,
        ::std::unordered_map<::std::string, ::std::string> const& propertiesChanged
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChatFloodingActionTaken(std::string const&, ::Safety::ChatFloodingAction, std::string const&);
#else // @header-generator platform
    virtual void fireServerShutdown() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTextProcessorStartupFailed(std::string const&, int, int);
#else // @header-generator platform
    virtual void fireSafetyServiceTextProcessEvent(
        ::std::string const&        authorId,
        ::TextProcessingEventOrigin eventOrigin,
        ushort                      responseCode,
        ::std::string const&        message,
        bool                        wasFlagged,
        double                      responseTime,
        char                        risk,
        char                        trustLevel,
        ::Json::Value const&        events,
        bool                        isProcessorOffline,
        bool                        isCachedResponse
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePlayerAccountMetadata(::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, bool, bool);
#else // @header-generator platform
    virtual void fireBannedSkinVerificationEvent(
        uint const&          userId,
        ::std::string const& skinData,
        bool                 wasApproved,
        int const            eventCode,
        ::std::string const& message
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBlockUser(std::string const&, bool, bool);
#else // @header-generator platform
    virtual void fireEventPlayerReportSent(
        bool                 successfulReportSent,
        ::std::string const& failureSource,
        ::std::string const& failureReason,
        ::std::string const& reportID
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMuteUser(std::string const&, bool, bool);
#else // @header-generator platform
    virtual void fireEventOneDSPlayerReportPayload(
        ::std::string const& reportPayloadJson,
        ::std::string const& reportID
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireStorageMigrationEvent(bool, ::Bedrock::StorageMigration::StorageMigrationType, int, int, double, double, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void firePlayerAccountMetadata(
        ::Social::PermissionCheckResult multiPlayerAllowed,
        ::Social::PermissionCheckResult chatAllowed,
        ::Social::PermissionCheckResult addFriendAllowed,
        ::Social::PermissionCheckResult ugcAllowed,
        ::Social::PermissionCheckResult clubsAllowed,
        ::Social::PermissionCheckResult viewProfilesAllowed,
        bool                            isChildAccount,
        bool                            isGuest
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventConnectedStorageResult(::ConnectedStorageEventType, bool, uint, std::optional<uint>, std::string const&, std::string const&, long, std::optional<uint>, std::optional<uint>, std::optional<uint>);
#else // @header-generator platform
    virtual void fireEventSafetyHTTPRequest(
        ::std::string const& method,
        ::std::string const& url,
        int const            responseCode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventConnectedStorageError(char const*, std::string const&, long);
#else // @header-generator platform
    virtual void fireEventProfanityFilter(bool localFilter, bool remoteFilter, bool playerFilter) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUwpToGdkMigrationComplete(::Bedrock::DeviceIdContext const&, std::string const&, std::string_view);
#else // @header-generator platform
    virtual void fireEventChatFloodingActionTaken(
        ::std::string const&         authorXuid,
        ::Safety::ChatFloodingAction action,
        ::std::string const&         message
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOSKErrorEncountered(std::string_view);
#else // @header-generator platform
    virtual void
    fireEventTextProcessorStartupFailed(::std::string const& stage, int retryCount, int maxRetryCount) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireNetworkChangedEvent(std::string const&);
#else // @header-generator platform
    virtual void fireEventBlockUser(::std::string const& xuid, bool isSuccess, bool isBlocked) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMessageServiceImpression(std::string const&, std::string const&, std::string const&, std::string const&, bool const, std::string const&);
#else // @header-generator platform
    virtual void fireEventMuteUser(::std::string const& xuid, bool isSuccess, bool isMuted) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMessageReceived(std::string const&, std::string const&, std::string const&, std::string const&, bool const, std::string const&);
#else // @header-generator platform
    virtual void fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPartyPlayFabError(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual ::Json::Value propertiesAsJsonValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPartyButtonPressed(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventUwpToGdkMigrationComplete(
        ::Bedrock::DeviceIdContext const& deviceIdContext,
        ::std::string const&              gdkDeviceId,
        ::std::string_view                migrationErrors
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPartyTravelToastExpired(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventOSKErrorEncountered(::std::string_view failureReason) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGoogleAccountHoldWarning(bool);
#else // @header-generator platform
    virtual void fireNetworkChangedEvent(::std::string const& networkConnectionType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireDelayedEventReportOfflineAction(std::string const&);
#else // @header-generator platform
    virtual void fireEventMessageServiceImpression(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl,
        ::std::string const& instanceId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventFeedbackSubmitted(std::string const&, std::string const&, bool, bool);
#else // @header-generator platform
    virtual void fireEventMessageReceived(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl,
        ::std::string const& instanceId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTrackDeeplinks(std::string const&, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void fireEventPartyPlayFabError(
        ::std::string const& functionName,
        ::std::string const& errorMessage,
        ::std::string const& partyId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUriActivation(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void
    fireEventPartyButtonPressed(::std::string const& buttonName, ::std::string const& partyId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePlayerUnexpectedFallDamage(float const, bool, float const);
#else // @header-generator platform
    virtual void
    fireEventPartyTravelToastExpired(::std::string const& travelMode, ::std::string const& partyId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventActorMovementCorrectionDivergence(::ActorType, std::vector<float> const&);
#else // @header-generator platform
    virtual void fireEventGoogleAccountHoldWarning(bool navigatedToSubscription) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDedicatedServerDiscoveryResponse(int const, int const);
#else // @header-generator platform
    virtual void fireDelayedEventReportOfflineAction(::std::string const& offlineAction) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventInGamePause(bool);
#else // @header-generator platform
    virtual void fireEventFeedbackSubmitted(
        ::std::string const& feedbackType,
        ::std::string const& identifier,
        bool                 safetyCheckSuccessful,
        bool                 isValidText
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGameTip(int, int, int, ::InputMode);
#else // @header-generator platform
    virtual void fireEventTrackDeeplinks(
        ::std::string const& deeplinkDestination,
        ::std::string const& deeplinkSource,
        ::std::string const& educationReferrerId,
        ::std::string const& educationReferrerType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAddedFriend(std::string const&, ::IMinecraftEventing::AddedFriendLocation, bool);
#else // @header-generator platform
    virtual void fireEventUriActivation(
        ::std::string const& activationIdentifier,
        ::std::string const& activationParameters
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const&);
#else // @header-generator platform
    virtual void fireEventReceivedUniqueWebSessionId(::std::string const& webSessionId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTrialStatusFailed(int);
#else // @header-generator platform
    virtual void fireEventReceivedUniqueLauncherSessionId(::std::string const& launcherSessionId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSaveDataExpansion(ulong, ulong, ulong);
#else // @header-generator platform
    virtual void
    firePlayerUnexpectedFallDamage(float const fallDistance, bool isVehicle, float const divergenceAmount) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProfileButtonPressed(std::string const&) const;
#else // @header-generator platform
    virtual void fireEventActorMovementCorrectionDivergence(
        ::ActorType                 actorType,
        ::std::vector<float> const& divergences
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldCopy(ulong, ulong, ::LevelSeed64);
#else // @header-generator platform
    virtual void fireEventDedicatedServerDiscoveryResponse(int const status, int const retryAttempt) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWriteBudgetLow(ulong, float, float, std::chrono::duration<long long, std::ratio<1, 1000000000>>, bool, std::string const&);
#else // @header-generator platform
    virtual void fireEventInGamePause(bool pauseStatus) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWriteBudgetReplenished(std::chrono::duration<long long, std::ratio<1, 1000000000>>, ulong, std::optional<ulong>, std::chrono::duration<long long, std::ratio<1, 1000000000>>, bool, std::string const&);
#else // @header-generator platform
    virtual void
    fireEventGameTip(int gameTipId, int gameTipEventType, int gameTipTestGroup, ::InputMode inputMode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLargeFileWriteStall(ulong, std::vector<std::string> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&, ulong, bool, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::chrono::duration<long long, std::ratio<1, 1000000000>>, int, ulong, std::vector<std::string> const&);
#else // @header-generator platform
    virtual void fireEventAddedFriend(
        ::std::string const&                      addedXuid,
        ::IMinecraftEventing::AddedFriendLocation location,
        bool                                      success
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLowMemoryDetected(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::LowMemoryReport const&);
#else // @header-generator platform
    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventReceivedApplicationExitInfo(std::string const&, int, int, int, long, long, std::string const&, bool);
#else // @header-generator platform
    virtual void fireEventTrialStatusFailed(int errorCode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const);
#else // @header-generator platform
    virtual void
    fireEventSaveDataExpansion(uint64 preExpansionSize, uint64 postExpansionSize, uint64 levelUsedSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPacketSerializationMismatch(::MinecraftPacketIds, std::string_view, std::string_view);
#else // @header-generator platform
    virtual void fireEventProfileButtonPressed(::std::string const& entryPoint) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPUVLoad(std::string const&, ::PuvLoadData::TelemetryEventData&&);
#else // @header-generator platform
    virtual void fireEventWorldCopy(uint64 worldSize, uint64 filesSum, ::LevelSeed64 worldSeed) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRemoteDesktop(bool);
#else // @header-generator platform
    virtual void fireEventWriteBudgetLow(
        uint64                     remainingWriteBudget,
        float                      writeRateMBPerMin,
        float                      writeCountPerMin,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventResourceProcessingPerf(::ResourceProcessingPerfData const&);
#else // @header-generator platform
    virtual void fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds throttledTime,
        uint64                     lowestWriteBudget,
        ::std::optional<uint64>    lowestSystemThrottlingPerSec,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnlineAudioStreamEnded(::OnlineAudioStreamEnded const&);
#else // @header-generator platform
    virtual void fireEventLargeFileWriteStall(
        uint64                              totalWriteSizeBytes,
        ::std::vector<::std::string> const& largestFileNames,
        ::std::chrono::nanoseconds          estimatedTotalWriteTime,
        ::std::chrono::nanoseconds          estimatedTotalWaitTime,
        ::std::string const&                originatingSystem,
        uint64                              budgetBytesAtStartOfOperation,
        bool                                operationWasCancelled,
        ::std::chrono::nanoseconds          totalWriteTime,
        ::std::chrono::nanoseconds          totalWaitTime,
        int                                 numberOfFilesWritten,
        uint64                              budgetBytesAtEndOfOperation,
        ::std::vector<::std::string> const& associatedContentIDs
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDimensionTransfer(::DimensionTransferTelemetryData const&);
#else // @header-generator platform
    virtual void fireEventLowMemoryDetected(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::LowMemoryReport const&                                                                    report
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMarketplaceImpressions(std::string const&, std::string const&, ::Social::Events::PageDisplayRecord&);
#else // @header-generator platform
    virtual void fireEventReceivedApplicationExitInfo(
        ::std::string const& description,
        int                  reasonCode,
        int                  exitCode,
        int                  importanceCode,
        int64                residentSetSize,
        int64                proportionalSetSize,
        ::std::string const& sessionId,
        bool                 deviceSupportsReasonLowMem
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IPurchaseEventing& getPurchaseEventing();
#else // @header-generator platform
    virtual void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const status) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IResourceLoadEventing& getResourceLoadEventing();
#else // @header-generator platform
    virtual void fireEventPacketSerializationMismatch(
        ::MinecraftPacketIds packetId,
        ::std::string_view   legacyStream,
        ::std::string_view   cerealStream
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScreenChanged(uint const&, std::string const&, std::unordered_map<std::string, std::string> const&);
#else // @header-generator platform
    virtual void
    fireEventPUVLoad(::std::string const& resourceCategory, ::PuvLoadData::TelemetryEventData&& loadData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventImGuiScreenChanged(std::string const&, std::unordered_map<std::string, std::string> const&);
#else // @header-generator platform
    virtual void fireEventRemoteDesktop(bool isRemoteDesktop) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendCrashTelemetryNow(std::shared_ptr<Bedrock::SessionInfo>);
#else // @header-generator platform
    virtual void fireEventResourceProcessingPerf(::ResourceProcessingPerfData const& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addCrashTelemetryToBatch(std::shared_ptr<Bedrock::SessionInfo>);
#else // @header-generator platform
    virtual void fireEventOnlineAudioStreamEnded(::OnlineAudioStreamEnded const& telemetry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendBatchedCrashTelemetry();
#else // @header-generator platform
    virtual void fireEventDimensionTransfer(::DimensionTransferTelemetryData const& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const&);
#else // @header-generator platform
    virtual void fireEventMarketplaceImpressions(
        ::std::string const&                 destinationQuery,
        ::std::string const&                 destinationPage,
        ::Social::Events::PageDisplayRecord& data
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireScreenLoadTimeUpdateEvent(uint const&, std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&);
#else // @header-generator platform
    virtual ::Social::Events::EventManager& getEventManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const&);
#else // @header-generator platform
    virtual uint getPrimaryLocalUserId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventReceivedUniqueWebSessionId(std::string const&);
#else // @header-generator platform
    virtual bool getShouldHaveAchievementsEnabled() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventReceivedUniqueLauncherSessionId(std::string const&);
    // clang-format on
#else // @header-generator platform
    virtual void setShouldHaveAchievementsEnabled(bool value) /*override*/;

    virtual bool getAchievementsAlwaysEnabled() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MinecraftEventing(::Core::Path const&, ::MinecraftEventingDependencies&&);
#else // @header-generator platform
    MCAPI MinecraftEventing(::Core::Path const& logFileDir, ::MinecraftEventingDependencies&& deps);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        bool,
        ::StructureTelemetryClientData const*
#else // @header-generator platform
    MCAPI void _fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        bool                                           redstoneActivated,
        ::StructureTelemetryClientData const*          telemetryClientData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _generateWorldSessionId();
#else // @header-generator platform
    MCAPI void _generateWorldSessionId();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _getOrCreateRealmsTelemetry(::brstd::function_ref<void(IRealmsTelemetry&)>);
#else // @header-generator platform
    MCAPI void _getOrCreateRealmsTelemetry(::brstd::function_ref<void(::IRealmsTelemetry&)> visitor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendTelemetryHeartbeat(char const*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _init(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireEventPlayerMessage(std::string const&, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void _sendTelemetryHeartbeat(char const* trigger);

#ifdef LL_PLAT_S
    MCAPI void fireEventMobTelemetry(::Social::Events::MobTelemetry& mobTelemetry);
#endif

    MCAPI void fireEventPlayerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    );

#ifdef LL_PLAT_S
    MCAPI void initForDedicatedServer(
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                          appPlatform,
        bool                                                                      eventRecordingEnabled,
        ::brstd::move_only_function<::Identity::EduDSTelemetryIdentifier() const> getEduDSTelemetryIdentifier
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void OnActorSetMainHand(::Actor const&, ::ItemInstance const&, ::ItemInstance const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void fireEventAgentCreated(::Player& player);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _addSkinType(::Social::Events::Event&, bool);
#else // @header-generator platform
    MCAPI static void fireEventAwardAchievement(::Player* player, ::MinecraftEventing::AchievementIds achievementId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fireEventAgentCreated(::Player&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void
    fireEventAwardAchievementNoXBLTelemetry(::Player* player, ::MinecraftEventing::AchievementIds achievementId);

    MCAPI static void fireEventBarrelBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fireEventAwardAchievement(::Player*, ::MinecraftEventing::AchievementIds);
#else // @header-generator platform
    MCAPI static void fireEventBehaviorErrored(::Player* player, ::std::string const& errorMessage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fireEventAwardAchievementNoXBLTelemetry(::Player*, ::MinecraftEventing::AchievementIds);
#else // @header-generator platform
    MCAPI static void fireEventBehaviorFailed(::Player* player, ::std::string const& failureMessage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    fireEventBarrelBlockUsed(::Player*, std::string const&, ::MinecraftEventing::POIBlockInteractionType);
#else // @header-generator platform
    MCAPI static void fireEventBellBlockUsed(::Player* player, ::std::string const& itemUsed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static void fireEventBlockBroken(
        ::Player*                                 player,
        ::Block const&                            destroyedBlock,
        ::MinecraftEventing::BlockPlacementMethod method,
        int                                       variantData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fireEventTrimApplied(::Player*, ::ArmorTrim const&);
#else // @header-generator platform
    MCAPI static void fireEventBlockFound(::Player* player, ::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fireEventWaxOnWaxOff(::Player*, int const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void fireEventBlockPlaced(::Player* player, ::Block const& placedBlock, bool underWater);

    MCAPI static void fireEventBookCopied(::Player* player, ::ItemInstance const& book);

    MCAPI static void fireEventBookEdited(::Player* player, ::ItemDescriptor const& item, uint pageCount);

    MCAPI static void fireEventBookExported(::Player* player, int textPageCount, int photoPageCount);

    MCAPI static void fireEventBookImageImported(::Player* player);

    MCAPI static void fireEventBossKilled(::Player* player, int partySize, int64 bossUniqueId, int bossType);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fireEventWolfArmorDamageValueChanged(::Actor&, ::ItemDescriptor const&, int, int);
#else // @header-generator platform
    MCAPI static void fireEventCampfireBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fireEventWorldUnloaded(::Player*, ::LevelData const&, uint);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void fireEventCaravanChanged(::Mob& mob, int caravanSize);

    MCAPI static void
    fireEventCartographyBlockUsed(::Player* player, ::std::string const& itemUsed, ::MapOutputType mapOutputType);

    MCAPI static void fireEventCauldronBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventCauldronUsed(::Player* player, short contentsType, uint contentsColor, short fillLevel);

    MCAPI static void fireEventCommandBlockEdited(
        ::Player*                 player,
        ::BaseCommandBlock const& commandBlock,
        bool                      isMinecart,
        ::CommandBlockMode        mode,
        bool                      isConditionalMode,
        bool                      isRedstoneMode
    );

    MCAPI static void fireEventComposterBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventCraftingSessionStart(::Player* player, uint craftingType);

    MCAPI static void fireEventCustomContentRegistered(::Player* player, int customBlockCount);

    MCAPI static void fireEventDecoratedPotCrafted(::Player* player, ::std::array<::std::string, 4> const& sides);

    MCAPI static void fireEventEndOfDay(::Player* player, ::Level& level);

    MCAPI static void fireEventEntityInteracted(
        ::Player const*                      player,
        int                                  legacyInteractedEntityType,
        ::MinecraftEventing::InteractionType interactionType,
        int                                  interactedEntityVariant,
        uchar                                interactedEntityColor,
        ::Actor const*                       interactedEntity
    );

    MCAPI static void fireEventGameTypeChanged(::Player* player, ::GameType oldGameType, ::GameType newGameType);

    MCAPI static void fireEventGrindstoneBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventItemAcquired(
        ::Player*               player,
        ::ItemDescriptor const& itemDescriptor,
        uint                    amountAcquired,
        ::ItemAcquisitionMethod itemAcquisitionMethod
    );

    MCAPI static void fireEventItemCrafted(
        ::Player*             player,
        ::ItemInstance const& item,
        bool                  recipeBook,
        bool                  hadSearchString,
        bool                  craftedAutomatically,
        int                   startingTabId,
        int                   endingTabId,
        int                   numTabsChanged,
        bool                  filterOn,
        bool                  recipeBookShown
    );

    MCAPI static void fireEventItemDropped(::Player* player, ::ItemDescriptor const& item);

    MCAPI static void fireEventItemEquipped(::Player* player, ::ItemInstance const& item, int slot);

    MCAPI static void fireEventItemInteracted(
        ::Player*                               player,
        ::ItemInstance const&                   item,
        ::MinecraftEventing::ItemInteractMethod method
    );

    MCAPI static void fireEventItemNamed(::Player* player, ::ItemDescriptor const& item);

    MCAPI static void
    fireEventItemSmelted(::Player* player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fireInviteStatusSent(::Player*, std::vector<std::string>);
#else // @header-generator platform
    MCAPI static void fireEventItemUsed(::Player* player, ::ItemDescriptor const& item, ::ItemUseMethod useMethod);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fireRaidEvent(::Player*, int const, int const, bool const);
#else // @header-generator platform
    MCAPI static void fireEventJukeboxUsed(::Player* player, ::ItemDescriptor const& disc, ::BiomeIdType biome);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void onActorSpawned(::Actor const&, std::optional<std::string>, ::Actor*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void fireEventLecternBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void onMobDied(::Mob const&, std::string const&);
#else // @header-generator platform
    MCAPI static void fireEventMobDied(::Mob& mob, int causeOfDeath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void onVehicleEntered(::Player&, ::Actor&);
#else // @header-generator platform
    MCAPI static void fireEventMobEffectChanged(
        ::Mob&                          mob,
        ::MobEffectInstance const&      effectInstance,
        ::MinecraftEventing::ChangeType change
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void onVehicleExited(::Player&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void fireEventMobKilled(
        ::Player*            player,
        ::Actor*             entKiller,
        ::Mob&               mobKilled,
        uint                 method,
        ::std::string const& traderName,
        int                  traderTier
    );
#endif

    MCAPI static void fireEventMobTeleportedToOwner(::Mob& mob);

#ifdef LL_PLAT_C
    MCAPI static void fireEventMultiplayerRoundEnd(::Player* player, int exitStatus);

    MCAPI static void fireEventMultiplayerRoundStart(::Player* player, ::Level& level);

    MCAPI static void fireEventPOIBlockUsed(
        ::Player*                              player,
        ::std::string const&                   itemUsed,
        ::MinecraftEventing::PoiEventBlockType blockType
    );

    MCAPI static void
    fireEventPiglinBarter(::Player* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer);

    MCAPI static void fireEventPlayerDied(::Player* player, int killerId, int killerVariant, int reason, bool inRaid);

    MCAPI static void
    fireEventPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    MCAPI static void fireEventPlayerSaved(::Player* player);
#endif

    MCAPI static void fireEventPlayerTeleported(
        ::Player*                               player,
        float                                   metersTravelled,
        ::MinecraftEventing::TeleportationCause cause,
        int                                     sourceType
    );

    MCAPI static void fireEventPlayerTransform(::Player& player);

#ifdef LL_PLAT_C
    MCAPI static void fireEventPortalUsed(::Player* player, ::DimensionType dimToId, ::DimensionType dimFromId);

    MCAPI static void fireEventPotionBrewed(::Player* player, ::ItemDescriptor const& item, uint itemCount);

    MCAPI static void fireEventSignedBookOpened(::Player* player, bool isAuthor);
#endif

    MCAPI static void fireEventSlashCommandExecuted(
        ::Player*            player,
        ::std::string const& commandName,
        int                  successCount,
        int                  errorCount,
        ::std::string const& errorList
    );

#ifdef LL_PLAT_C
    MCAPI static void fireEventTargetBlockHit(::Player* player, int redstoneLevel);

    MCAPI static void fireEventTradeCompleted(
        ::Player*               player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    );

    MCAPI static void fireEventTrimApplied(::Player* player, ::ArmorTrim const& armorTrim);

    MCAPI static void fireEventWaxOnWaxOff(::Player* player, int blockID);
#endif

    MCAPI static void fireEventWolfArmorDamageValueChanged(
        ::Actor&                owner,
        ::ItemDescriptor const& item,
        int                     oldDamageValue,
        int                     newDamageValue
    );

#ifdef LL_PLAT_C
    MCAPI static void fireEventWorldUnloaded(::Player* player, ::LevelData const& levelData, uint unloadReason);

    MCAPI static void fireInviteStatusSent(::Player* player, ::std::vector<::std::string> invitationIds);

    MCAPI static void fireRaidEvent(::Player* player, int currentwave, int totalWaves, bool success);
#endif

    MCAPI static void onActorSpawned(::Actor const& actor, ::std::optional<::std::string> customInit, ::Actor* spawner);

    MCAPI static void onMobDied(::Mob const& mob, ::std::string const& cause);

    MCAPI static void onVehicleEntered(::Player& player, ::Actor& vehicle);

    MCAPI static void onVehicleExited(::Player& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<Social::Events::AchievementEventing>& mAchievementEventing();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::Social::Events::AchievementEventing>& mAchievementEventing();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::map<std::string, int>& mCachedUUIDs();
#else // @header-generator platform
    MCAPI static ::std::map<::std::string, int>& mCachedUUIDs();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Social::Events::MobTelemetry& mMobTelemetry();
#else // @header-generator platform
    MCAPI static ::Social::Events::MobTelemetry& mMobTelemetry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<uint, Social::Events::PlayerTelemetry>& mPlayerTelemetry();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<uint, ::Social::Events::PlayerTelemetry>& mPlayerTelemetry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Social::Events::ScreenFlow& mScreenFlow();
#else // @header-generator platform
    MCAPI static ::Social::Events::ScreenFlow& mScreenFlow();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& sHeartbeatMutex();
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::Mutex& sHeartbeatMutex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& sMutex();
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::Mutex& sMutex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& sPlayerTelemetryMutex();
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::Mutex& sPlayerTelemetryMutex();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::Path const&, ::MinecraftEventingDependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Core::Path const& logFileDir, ::MinecraftEventingDependencies&& deps);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $init(::Bedrock::NonOwnerPointer<AppPlatform> const&);
#else // @header-generator platform
    MCAPI ::IPurchaseEventing& $getPurchaseEventing();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initDeviceAndSessionIds();
#else // @header-generator platform
    MCAPI ::IResourceLoadEventing& $getResourceLoadEventing();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $shutdown();
#else // @header-generator platform
    MCAPI void $init(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getPlayerSessionId();
#else // @header-generator platform
    MCAPI void $initDeviceAndSessionIds();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        $getWorldSessionIdGenerationTimestamp() const;
#else // @header-generator platform
    MCAPI void $initEditorEventListener();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getShouldHaveAchievementsEnabled();
#else // @header-generator platform
    MCAPI void $shutdown();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setShouldHaveAchievementsEnabled(bool);
#else // @header-generator platform
    MCAPI void $updatePrimaryLocalUserId(uint const& userId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getAchievementsAlwaysEnabled();
#else // @header-generator platform
    MCAPI ::std::string $getUserUID(::Social::IdentityType type, ::std::string const& primaryId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getPrimaryLocalUserId() const;
#else // @header-generator platform
    MCAPI void $registerSecondaryUserCommonProperties(uint const& userId, ::std::string const& uid) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forceSendEvents();
#else // @header-generator platform
    MCAPI void $unregisterSecondaryUserCommonProperties(uint const& userId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Social::Events::EventManager& $getEventManager() const;
#else // @header-generator platform
    MCAPI void $updateIsLegacyPlayer(bool isLegacyPlayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updatePrimaryLocalUserId(uint const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $updateIsTrial(bool isTrial) const;
#else // LL_PLAT_C
    MCAPI void $updateIsTrial(bool isTrial) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getUserUID(::Social::IdentityType, std::string const&) const;
#else // @header-generator platform
    MCAPI void $updateEditionType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerSecondaryUserCommonProperties(uint const&, std::string const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $updateClientId() const;
#else // LL_PLAT_C
    MCAPI void $updateClientId() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $unregisterSecondaryUserCommonProperties(uint const&) const;
#else // @header-generator platform
    MCAPI void $addListener(::std::unique_ptr<::Social::Events::IEventListener> listener);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateIsLegacyPlayer(bool) const;
#else // @header-generator platform
    MCAPI void $clearListeners();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateIsTrial(bool) const;

    MCNAPI void $updateEditionType() const;

    MCNAPI void $updateClientId() const;

    MCNAPI void $registerOptionsObserver(
#else // @header-generator platform
    MCAPI void $registerOptionsObserver(
#endif // @header-generator platform
        ::brstd::function_ref<
#if defined(LL_PLAT_A) // @header-generator platform
            Bedrock::PubSub::Subscription(std::function<void(bool)>) const,
            Bedrock::PubSub::Subscription(std::function<void(bool)>)>
#else // @header-generator platform
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>) const,
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>)> registerObserver
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addListener(std::unique_ptr<Social::Events::IEventListener>);
#else // @header-generator platform
    MCAPI void $setTestBuildIdTag(char const* id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearListeners();
#else // @header-generator platform
    MCAPI void $removeTestBuildIdTag();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Json::Value $propertiesAsJsonValue() const;
#else // @header-generator platform
    MCAPI void $setTestTelemetryTag(char const* name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEvent(
        std::string const&,
        std::vector<Social::Events::Property> const&,
        std::vector<Social::Events::Measurement> const&,
        bool
#else // @header-generator platform
    MCAPI void $removeTestTelemetryTag();

    MCAPI void $stopDebugEventLoggingForAllListeners();

    MCAPI void $tick();

    MCAPI void $forceSendEvents();

    MCAPI ::std::string $getSessionId();

    MCFOLD ::std::string const& $getPlayerSessionId();

    MCAPI ::std::chrono::steady_clock::time_point $getWorldSessionIdGenerationTimestamp() const;

    MCAPI void $fireEventDefaultGameTypeChanged(::GameType oldGameType, ::GameType newGameType);

    MCAPI void $fireEventWorldLoaded(
        ::Player* player,
        ::brstd::function_ref<
            void(::Social::Events::EventManager&, ::Social::Events::Event&) const,
            void(::Social::Events::EventManager&, ::Social::Events::Event&)> writer
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventMarkLevelForSync(
        ::std::string const&                         levelId,
        int64                                        local,
        int64                                        remote,
        ::IMinecraftEventing::MarkLevelForSyncReason reason
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $fireEventClientLastPackets(uint const&, ::SubClientId const, int, ::Json::Value const&, ::Json::Value const&);
#else // @header-generator platform
    MCAPI void $fireEventLockedItemGiven();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventSignalServiceConnect(
        ::SignalServiceConnectStage,
        bool,
        ::Json::Value const&,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI void $fireEventWorldLoadTimes(
        ::std::string const&                                   calledFromScreen,
        ::std::vector<::std::pair<::std::string, float>> const progressHandlerLoadTimes
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventSignalMessagePerformance(std::string const&, ::MessagePerformance const&);
#else // @header-generator platform
    MCAPI void $fireEventBlockPlacedByCommand(::Block const& placedBlock, int numberOfBlocksPlaced);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventOnClientDisconnect(
        ::NetworkIdentifier const&,
        ::SubClientId,
        bool,
        ::Connection::DisconnectFailReason,
        std::string const&,
        std::string const&,
        std::string const&
    );
#else // @header-generator platform
    MCAPI void $fireEventEntitySpawned(::Player* player, int mobType, uint spawnMethod);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason,
        ::NetworkIdentifier const&,
        ::SubClientId,
        std::string const&,
        ulong,
        std::string const&
    );
#else // @header-generator platform
    MCFOLD void $fireEventDevSlashCommandExecuted(::std::string const& commandName, ::std::string const& command);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireCommandParseTableTelemetry(
        bool const                                                         isServer,
        ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventEmptyLibraryCategoryError(std::string const&) const;
#else // @header-generator platform
    MCAPI void $fireEventPlayerTravelled(::Player* player, float metersTravelledSinceLastEvent, int newBiome);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $fireCodeBuilderCachePerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
#else // @header-generator platform
    MCAPI void $fireEventPlayerBounced(::Player* player, ::Block const& block, int bounceHeight);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireCodeBuilderLoadPerformance(
        std::string const&,
        ulong,
        ulong,
        std::chrono::duration<long long, std::ratio<1, 1000>>
    ) const;
#else // @header-generator platform
    MCAPI void $fireEventPlayerDamaged(::Player* player, ::SharedTypes::Legacy::ActorDamageCause damageCause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
#else // @header-generator platform
    MCAPI void $fireEventSetValidForAchievements(::Player* player, bool currentlyValidForAchievements);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireCourseButtonPressed(std::string const&, std::string const&);

    MCNAPI void $fireLessonActionTaken(
        std::string const&,
        std::string const&,
        std::string const&,
        ::IMinecraftEventing::EducationLessonAction,
        int
#else // @header-generator platform
    MCAPI void $fireEventAchievementReceived(
        ::std::string const& title,
        ::std::string const& description,
        ::std::string const& achievementId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireLessonProgressEvent(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        int
#else // @header-generator platform
    MCAPI void $updatePlayerUndergroundStatus(::Player* player, bool const isUnderground);

    MCAPI void $fireEventPlayerAttemptingExploit(::Player* player, ::IMinecraftEventing::ExploitType exploitType);

    MCAPI void
    $fireEventWorldGenerated(::std::string const& levelId, ::LevelSettings const& levelSettings, bool fromTemplate);

    MCAPI void $fireEventMultiplayerClientConnectionStateChanged(
        ::std::string const& connectionType,
        uint                 fromState,
        uint                 toState,
        uint                 port,
        ::std::string const& status
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventPacketViolationDetected(
        uint64                     readResult,
        ::std::string              readResultContext,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::NetworkIdentifier const& netId,
        uint                       numViolations,
        ::SubClientId              clientSubId,
        ::SubClientId              senderSubId,
        uint                       packetStreamLength
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventServerReceivedValidPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $fireEventPlayIntegrityCheck(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void $fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const,
        ::EduCloud::CloudItemType const,
        std::string const&,
        ulong const,
        std::optional<std::string> const&
#else // @header-generator platform
    MCAPI void $fireEventClientSentOrReceivedPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId,
        ::std::string              correlationId,
        bool                       isOutgoing
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventCloudMyWorldsSummary(int const, int const, int const, int const, int const);
#else // @header-generator platform
    MCAPI void $fireEventJoinCanceled(::LoadingState currentState);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const& reason,
        uint64 const&        serverBlockChecksum,
        uint64 const&        clientBlockChecksum,
        ::std::string const& serverVersion
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventLicenseCheck(bool, ::ExtraLicenseData&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $fireEventOnSuccessfulClientLogin(::Level const* level);
#else // LL_PLAT_C
    MCAPI void $fireEventOnSuccessfulClientLogin(::Level const* level);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireQueryOfferResult(std::string const&, int, bool);

    MCNAPI void $fireEventQueryPurchasesResult(std::string const&, std::string const&, int, bool);

    MCNAPI void $fireEventWorldGenerated(std::string const&, ::LevelSettings const&, bool);

    MCNAPI void $fireEventCopyWorldEducationEnabled();

    MCNAPI void
    $fireEventBundleSubOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&);

    MCNAPI void $fireEventStoreOfferClicked(std::string const, std::string const&);

    MCNAPI void $fireEventStoreOfferClicked(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
#else // @header-generator platform
    MCAPI void $fireEventStartWorld(
        ::NetworkType                                networkType,
        ::std::string const&                         ipAddress,
        ::Social::MultiplayerServiceIdentifier const friendWorldType
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventPersonaOfferClicked(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $fireEventPlayerJoinWorld(
        uint const&                                              userId,
        ::SubClientId const                                      subId,
        bool                                                     isLocalServer,
        ::std::optional<bool>                                    isUsingTURN,
        ::IConnectionEventing::PlayerJoinWorldAttemptState const JoinState,
        int                                                      attemptId,
        ::Connection::DisconnectFailReason                       failReason,
        ::Json::Value const&                                     failDebugInfo,
        ::TransportLayer                                         transportLayer,
        ::NetworkType                                            networkTypeOverride,
        ::Social::MultiplayerState                               multiplayerState,
        bool                                                     isConnectedToApplicationLayer,
        bool                                                     isFilteringProfanity,
        ::Social::MultiplayerServiceIdentifier                   multiplayerServiceIdentifier,
        ::std::string const&                                     titleMessage,
        ::std::string const&                                     errorMessage,
        ::std::string const&                                     codeword,
        ::std::string const&                                     partyId,
        bool                                                     isPartyLeader,
        bool                                                     isPartyDestination,
        bool                                                     isServerTransfer,
        ::Connection::ReconnectionType                           reconnectionType,
        bool                                                     isDueToSuspend,
        uint64                                                   connectionDurationMs,
        ::Social::GameConnectionInfo const&                      connectionInfo
    );
#else // LL_PLAT_C
    MCAPI void $fireEventPlayerJoinWorld(
        uint const&                                              userId,
        ::SubClientId const                                      subId,
        bool                                                     isLocalServer,
        ::std::optional<bool>                                    isUsingTURN,
        ::IConnectionEventing::PlayerJoinWorldAttemptState const JoinState,
        int                                                      attemptId,
        ::Connection::DisconnectFailReason                       failReason,
        ::Json::Value const&                                     failDebugInfo,
        ::TransportLayer                                         transportLayer,
        ::NetworkType                                            networkTypeOverride,
        ::Social::MultiplayerState                               multiplayerState,
        bool                                                     isConnectedToApplicationLayer,
        bool                                                     isFilteringProfanity,
        ::Social::MultiplayerServiceIdentifier                   multiplayerServiceIdentifier,
        ::std::string const&                                     titleMessage,
        ::std::string const&                                     errorMessage,
        ::std::string const&                                     codeword,
        ::std::string const&                                     partyId,
        bool                                                     isPartyLeader,
        bool                                                     isPartyDestination,
        bool                                                     isServerTransfer,
        ::Connection::ReconnectionType                           reconnectionType,
        bool                                                     isDueToSuspend,
        uint64                                                   connectionDurationMs,
        ::Social::GameConnectionInfo const&                      connectionInfo
    );
#endif

    MCAPI void $fireEventClientLastPackets(
        uint const&          userId,
        ::SubClientId const  subId,
        int                  correlationId,
        ::Json::Value const& lastSentPackets,
        ::Json::Value const& lastReceivedPackets
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventSignalServiceConnect(
        ::SignalServiceConnectStage stage,
        bool                        bIsSigningInAsHost,
        ::Json::Value const&        stageProperties,
        ::std::string const&        signinId,
        ::std::string const&        correlationId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventSignalMessagePerformance(
        ::std::string const&        signinId,
        ::MessagePerformance const& messagePerformanceEvent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventRealmsGeneralCall(std::string const&, ::Bedrock::Http::Status);

    MCNAPI void $fireEventRealmsRealmSpecificCall(std::string const&, long, ::Bedrock::Http::Status);

    MCNAPI void $fireEventRealmDownload(std::string const&, std::string const&, int const, int const, int const);

    MCNAPI void $fireEventRealmBackupDownloadFailed(
        int const,
        std::string const&,
        long const,
        long const,
        ::gsl::span<const std::string>
#else // @header-generator platform
    MCAPI void $fireEventOnClientDisconnect(
        ::NetworkIdentifier const&         id,
        ::SubClientId                      subId,
        bool                               isNetworked,
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               titleMessage,
        ::std::string const&               errorMessage,
        ::std::string const&               codeword
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason reason,
        ::NetworkIdentifier const&         id,
        ::SubClientId                      subId,
        ::std::string const&               reasonContext,
        uint64                             clientCount,
        ::std::string const&               firstTimeStamp
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventOnServerAsyncJoinTaskVerdict(
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> const& joinVerdict,
        ::SubClientId const                                          subId,
        uint                                                         verdictQueueLength
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool);
#else // @header-generator platform
    MCAPI void $fireEventHttpClientError(::std::string const& error);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventServerShutdownDueToError(std::string const&);

    MCNAPI void $fireEventServerInitializationFailed(std::string const&, bool, bool);

    MCNAPI void $fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const&,
        ::DBStorageFolderWatcher const&,
        ::DBStorageFolderWatcherSnapshotKind
#else // @header-generator platform
    MCAPI void $fireEventNPLNLifecycle(
        int                        eventType,
        ::Social::MultiplayerState multiplayerState,
        ::Social::ServiceState     serviceState
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventNPLNRpcFailure(
        int                                     rpcType,
        int                                     statusCode,
        ::Social::MultiplayerState              multiplayerState,
        ::Social::ServiceState                  serviceState,
        ::std::optional<::std::chrono::seconds> requiredDelay
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventSignInToIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    signInSource,
        bool                                    signInUIShown,
        ::IMinecraftEventing::SignInStage       stage,
        ::Social::SignInResult                  result,
        int                                     retryCount,
        ::Social::PlayerIDs                     ids,
        ::std::string const&                    errorCode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    accountId,
        ::std::string const&                    errorCode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventSignInEdu(
        ::std::string const&                                            mutsUserId,
        ::edu::Role                                                     role,
        ::Identity::EduSignInStage                                      stage,
        ::std::string const&                                            tenantType,
        ::std::string const&                                            error,
        ::std::vector<::std::pair<::std::string, ::std::string>> const& details
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType,
        ::StructureEditorData const&,
        ::StructureTelemetryClientData const*
#else // @header-generator platform
    MCAPI void $fireEventSignOutEdu(
        ::std::string const& mutsUserId,
        ::edu::Role          role,
        ::std::string const& tenantType,
        ::std::string const& action,
        ::std::string const& error
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventOreUIError(uint const&, std::string const&);
#else // @header-generator platform
    MCAPI void
    $fireEventSwitchAccountEdu(::std::string const& mutsUserId, ::edu::Role role, ::std::string const& tenantType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventOreUIScreenPerformance(
        uint const&,
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>
#else // @header-generator platform
    MCAPI void $fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource);

    MCAPI void $fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool const);

    MCNAPI void $fireEventOnboardingWorldCreationUsage(bool, bool, bool);

    MCNAPI void $fireEventDeviceAccountSuccess(bool, std::string const&);

    MCNAPI void $fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage,
        ::IMinecraftEventing::DeviceAccountFailurePhase,
        uint,
        std::string const&
#else // @header-generator platform
    MCAPI void $fireEventCloudOperationEndedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        ::std::chrono::milliseconds const     elapsedTime,
        uint const                            status,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId,
        ::std::optional<::std::string> const& errorCode,
        ::std::optional<::std::string> const& errorMessage,
        ::std::optional<::std::string> const& error
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<void*> $requestEventDeferment();

    MCNAPI ::gsl::not_null<Bedrock::CrashTelemetryProcessor*> $getCrashTelemetryProcessor();

    MCNAPI void $fireEventLevelChunkPerformanceData(bool);

    MCNAPI void $fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const&);

    MCNAPI void $fireEventActorValueValidationFailed(std::string const&, char const*);

    MCNAPI void $fireDBStorageError(::LevelStorageEventingContext const&, std::string const&);

    MCNAPI void $fireServerStarted(
        ::Social::Events::ServerTelemetryData const&,
        std::unordered_map<std::string, std::string> const&
#else // @header-generator platform
    MCAPI void $fireEventCloudMyWorldsSummary(
        int const totalWorldsCount,
        int const placeholderCount,
        int const needsUploadCount,
        int const ctagMismatchCount,
        int const conflictCount
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventCloudConflictCheckEdu(
        ::std::string const&                       cloudCorrelationId,
        ::EduCloud::ConflictResolutionStatus const conflictStatus
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventPopupFiredEdu(
        ::std::string const&          mutsUserId,
        ::std::string const&          dialogType,
        ::std::string const&          experienceId,
        ::std::string const&          title,
        ::ActiveDirectoryAction const postAction
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventPlayIntegrityCheck(
        ::std::string const& result,
        ::std::string const& appRecognitionVerdict,
        ::std::string const& deviceIntegrity,
        ::std::string const& appLicensingVerdict
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName,
        ::std::string const&                           worldId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireServerConnectionAttemptEvent(
        ::std::string const& creatorName,
        bool                 isTransfer,
        ::std::string const& serverAddress
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventMessageReceived(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool const,
        std::string const&
#else // @header-generator platform
    MCAPI void $fireEventServerPlayerJoinedGame(
        ::NetworkIdentifier const& id,
        ::SubClientId              subId,
        ::std::string const&       firstConnectionTime
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventPartyPlayFabError(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void $fireEventScriptPluginDiscovery(::ScriptPluginResult const& pluginResult, bool client);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventScriptPluginRun(
        ::ScriptPluginResult const& pluginResult,
        ::std::chrono::microseconds runDuration,
        bool                        client
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventWriteBudgetReplenished(
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        ulong,
        std::optional<ulong>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        bool,
        std::string const&
#else // @header-generator platform
    MCAPI void $fireEventScriptDebuggerListen(bool client, bool autoAttach);

    MCAPI void $fireEventScriptDebuggerConnect(bool client, bool autoAttach, int retries);

    MCAPI void $fireEditorEventToolActivated(::std::string const& toolName);

    MCAPI void $fireEditorUndo(::std::string const& transactionName);

    MCAPI void $fireEditorRedo(::std::string const& transactionName);

    MCAPI void $fireEditorScriptAction(
        ::std::string const& scriptSource,
        ::std::string const& actionName,
        ::std::string const& actionMetadata
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEditorTutorialEvent(
        ::std::string_view                    type,
        ::std::optional<::std::string> const& state,
        ::std::string const&                  currentStage,
        ::std::optional<::std::string> const& previousStage
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventLowMemoryDetected(
        ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>,
        ::LowMemoryReport const&
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $fireEventStartClient(::std::string const& ipAddress, bool isTextToSpeechEnabled);
#else // LL_PLAT_C
    MCAPI void $fireEventStartClient(::std::string const& ipAddress, bool isTextToSpeechEnabled);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $fireEventHardwareInfo();
#else // LL_PLAT_C
    MCAPI void $fireEventHardwareInfo();
#endif

#ifdef LL_PLAT_S
    MCFOLD void $fireEventDeviceLost();
#else // LL_PLAT_C
    MCAPI void $fireEventDeviceLost();
#endif

    MCAPI void $fireEventRenderingSizeChanged();

    MCAPI void $fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace);

    MCAPI void $fireEventStorageAreaFull(
        ::std::string const&                            areaPath,
        ::std::vector<::Bedrock::DirectoryEntry> const& diskSizeData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $fireEventReceivedApplicationExitInfo(std::string const&, int, int, int, long, long, std::string const&, bool);
#else // @header-generator platform
    MCAPI void $fireEventAppPaused();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventImmersiveReaderStatus(::Bedrock::Http::Status const);
#else // @header-generator platform
    MCAPI void $fireEventAppUnpaused();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventPacketSerializationMismatch(::MinecraftPacketIds, std::string_view, std::string_view);
#else // @header-generator platform
    MCAPI void $fireEventAppSurfaceCreated();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventPUVLoad(std::string const&, ::PuvLoadData::TelemetryEventData&&);
#else // @header-generator platform
    MCAPI void $fireEventAppSurfaceDestroyed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $fireEventPurchaseGameAttempt(
        ::std::string const& storeId,
        ::std::string const& activeTab,
        ::std::string const& productId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const&);
#else // @header-generator platform
    MCAPI void $fireEventPurchaseGameResult(int purchaseResult);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventReceivedUniqueWebSessionId(std::string const&);
#else // @header-generator platform
    MCAPI void $fireEventTrialDeviceIdCorrelation(
        int64                myTime,
        ::std::string const& theirId,
        int64                theirTime,
        ::std::string const& theirLastSessionId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireEventReceivedUniqueLauncherSessionId(std::string const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $fireEventDeviceIdManagerFailOnIdentityGained();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void $fireEventDlcStorageFull(
        ::std::string const& productId,
        uint64               dlcSize,
        uint64               onDiskScratchSpace,
        uint64               scratchSpace,
        uint64               premiumSpace
    );

    MCAPI void $fireEventTotalDlcSizes(uint64 resourceSize, uint64 worldTemplateSize);

    MCAPI void $fireEventPushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI void $fireEventPushNotificationOpened(::std::string const& threadId, ::std::string const& deepLink);

    MCFOLD void $firePerfTestEvent(
        ::std::string const&                                    testArtifact,
        ::std::string const&                                    modelName,
        ::std::string const&                                    renderSize,
        uint                                                    renderDistance,
        uint                                                    simDistance,
        ::std::string const&                                    memorySize,
        ::std::vector<::std::pair<::std::string, float>> const& testArtifactData
    );

    MCAPI void $fireEventLicenseCheck(bool isLicensed, ::ExtraLicenseData& data);

    MCAPI void $fireQueryOfferResult(::std::string const& storeID, int NumberOfOffers, bool QuerySucceeded);

    MCAPI void $fireEventQueryPurchasesResult(
        ::std::string const& storeID,
        ::std::string const& priorPurchaseIds,
        int                  NumberOfPurchases,
        bool                 QuerySucceeded
    );

#ifdef LL_PLAT_S
    MCFOLD void $fireEventPurchaseFailureDetails(
        int                  httpCode,
        ::std::string const& errorMessage,
        ::std::string const& productId,
        ::std::string const& transactionId
    );
#else // LL_PLAT_C
    MCAPI void $fireEventPurchaseFailureDetails(
        int                  httpCode,
        ::std::string const& errorMessage,
        ::std::string const& productId,
        ::std::string const& transactionId
    );
#endif

    MCAPI void
    $fireEventPlatformStorePurchaseFailure(::std::string const& productId, ::std::string const& errorMessage);

#ifdef LL_PLAT_S
    MCFOLD void $fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        ::std::string const&                            accountID
    );
#else // LL_PLAT_C
    MCAPI void $fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        ::std::string const&                            accountID
    );
#endif

    MCAPI void $fireEventDeviceAccountSuccess(bool isNewAccount, ::std::string const& accountID);

    MCAPI void
    $fireEventEntitlementListInfo(::std::vector<::ContentIdentity>& entitlementContentIds, bool isLegacyList);

    MCAPI void $fireEventVideoPlayed(::std::string const& productId, ::std::string const& videoUrl);

    MCAPI void $fireEventBundleSubOfferClicked(
        int                  offerIndex,
        int                  bundleSubOfferCount,
        ::std::string const& telemetryId,
        ::std::string const& productId,
        bool                 isOnSale,
        ::std::string const& timeRemainingOnSale
    );

    MCAPI void $fireEventStoreOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventStoreOfferClicked(::std::string const telemetryId, ::std::string const& productId);

    MCAPI void $fireEventPersonaOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventStoreSearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

#ifdef LL_PLAT_S
    MCFOLD void $fireEventSearchItemSelected(
        int const            correlationId,
        int const            sessionId,
        ::std::string const& productId,
        int const            row,
        int const            column,
        int const            currentPage,
        ::std::string const& searchType
    );
#else // LL_PLAT_C
    MCAPI void $fireEventSearchItemSelected(
        int const            correlationId,
        int const            sessionId,
        ::std::string const& productId,
        int const            row,
        int const            column,
        int const            currentPage,
        ::std::string const& searchType
    );
#endif

    MCAPI void $fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    );

    MCAPI void
    $fireEventCreatorFollowedUnfollowed(::std::string const& creatorId, ::std::string const& operation, bool success);

    MCAPI void $fireEventUgcAcquisitionStateChanged(
        ::std::string const& ugcProductId,
        uint64               downloadSize,
        double               elapsedTime,
        bool                 isUpdate,
        int                  retries,
        bool                 silent,
        int                  numContentTrackers,
        ::std::string const& result,
        ::std::string const& resultDetails,
        int                  httpStatus,
        int                  errorCode,
        bool                 optimizedPack
    );

    MCAPI void $fireEventSearchCatalogRequest(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventStoreSessionResponse(
        ::std::string const& responseType,
        int const            status,
        int const            retryCount,
        bool const           asyncServicesManager
    );

    MCAPI void
    $fireEventStoreDiscoveryRequestResponse(int const status, int const retryAttempt, bool const asyncServicesManager);

    MCAPI void $fireEventStoreInventoryRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    );

    MCAPI void $fireEventInventoryVersionRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    );

    MCAPI void $fireEventServerDrivenLayoutPageLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        int                                                                                         requestSize,
        int                                                                                         responseSize,
        int                                                                                         rowCount,
        int                                                                                         itemCount,
        int                                                                                         imageCount
    );

    MCAPI void $fireEventServerDrivenLayoutImagesLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        ::ImageTelemetryInfo const&                                                                 imageTelemetryInfo
    );

    MCAPI void
    $fireEventTreatmentsSet(::std::vector<::std::string> const& treatments, ::std::string const& treatmentContext);

    MCAPI void $updateAppliedTreatmentPacks(::std::vector<::std::string> const& treatmentTags);

    MCAPI void $fireEventProgressionsSet(::std::vector<::std::string> const& progressions);

    MCAPI void $fireEventTreatmentsCleared();

    MCAPI void $fireEventPackImportTimeout(::std::string const& productId);

    MCAPI void
    $fireEventFatalClientPackError(::FatalClientPackErrorType errorType, ::gsl::span<::std::string const> packIds);

    MCAPI void $fireEventPackActivationError(
        ::std::string const& errorType,
        ::std::string const& errorDetail,
        ::std::string const& packAction,
        ::std::string const& packId,
        ::std::string const& contentType,
        bool                 isFatal
    );

    MCAPI void $fireEventStoreErrorPage(
        ::std::string const& errorCode,
        ::std::string const& pageId,
        ::std::string const& discoveryServiceTitleId,
        ::std::string const& playFabTitleId
    );

    MCAPI void $setServerIdsforClient(
        ::std::string const&                         multiplayerCorrelationId,
        ::std::string const&                         serverVersion,
        ::Social::Events::ServerTelemetryData const& serverTelemetryData
    );

    MCAPI void $removeServerIdsForClient();

    MCAPI void
    $setConnectionCommonProperties(uint userId, ::std::string const& connectionGUID, ::NetworkType networkType);

    MCAPI void $removeConnectionCommonProperties(uint userId);

    MCAPI void $trySetExperienceIdentifiers(::std::string const& experienceId, ::std::string const& existingSessionId);

    MCAPI void $removeExperienceIdentifiers();

    MCAPI ::std::string $getExperienceId() const;

    MCAPI ::std::string $getExperienceSessionId() const;

    MCAPI void $fireEventOptionsUpdated(
        bool                                                                                        onStartup,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventChatSettingsUpdated(
        ::Player const*                                  player,
        ::std::vector<::Social::Events::Property> const& properties
    ) const;

    MCAPI void
    $fireEventControlRemappedByPlayer(::std::string const& actionName, ::RawInputType inputType, int keyCode) const;

#ifdef LL_PLAT_S
    MCFOLD void $fireEventDifficultySet(
        ::SharedTypes::Legacy::Difficulty oldDifficulty,
        ::SharedTypes::Legacy::Difficulty newDifficulty
    );
#else // LL_PLAT_C
    MCAPI void $fireEventDifficultySet(
        ::SharedTypes::Legacy::Difficulty oldDifficulty,
        ::SharedTypes::Legacy::Difficulty newDifficulty
    );
#endif

#ifdef LL_PLAT_S
    MCFOLD void $fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName);
#else // LL_PLAT_C
    MCAPI void $fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $fireEventGameRulesUpdated(int oldValue, int newValue, ::std::string const& gameRuleName);
#else // LL_PLAT_C
    MCAPI void $fireEventGameRulesUpdated(int oldValue, int newValue, ::std::string const& gameRuleName);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName);
#else // LL_PLAT_C
    MCAPI void $fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName);
#endif

    MCAPI void $fireCurrentInputUpdated(uint userId, ::InputMode inputMode);

    MCAPI void $fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const& data);

#ifdef LL_PLAT_S
    MCFOLD void $fireEventPerformanceMetrics(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::ProfilerLiteTelemetry const&                                                              profileTelemetry,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    );
#else // LL_PLAT_C
    MCAPI void $fireEventPerformanceMetrics(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::ProfilerLiteTelemetry const&                                                              profileTelemetry,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    );
#endif

#ifdef LL_PLAT_S
    MCFOLD void $fireEventPerformanceContext(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::PerfContextTrackerReport const&                                                           perfContextReport,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    );
#else // LL_PLAT_C
    MCAPI void $fireEventPerformanceContext(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::PerfContextTrackerReport const&                                                           perfContextReport,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    );
#endif

    MCAPI void $fireEventProfilerMetadata(::Bedrock::Profiling::Orchestrator::ProfilerMetadataParams const& params);

    MCAPI void $fireEventProfilerCapture(::Bedrock::Profiling::Orchestrator::ProfilerCaptureParams const& params);

    MCAPI void
    $fireTextureStreamingPerf(::dragon::texturestreaming::TextureStreamingPerformanceTelemetryData const& perfData);

    MCAPI void $fireEventScreenChanged(
        uint const&                                               userId,
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCFOLD void $fireEventImGuiScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCAPI void $fireEventPopupClosed(::std::string const& popupName) const;

    MCAPI void $fireEventNewContentCheckCompleted(::std::string const& newContentPrefix, bool hasNewStoreContent);

    MCAPI void $fireEventEncyclopediaTopicChanged(::std::string const& topicName, ::InputMode inputMode);

    MCAPI void $fireEventHowToPlayTopicChanged(::std::string const& topicName, ::InputMode inputMode);

    MCAPI void $fireEventAndroidHelpRequest();

#ifdef LL_PLAT_S
    MCFOLD void
    $fireEventWorldFilesListed(uint64 numLevels, uint64 totalSizeMB, uint64 largestLevelMB, uint64 smallestLevelMB);
#else // LL_PLAT_C
    MCAPI void
    $fireEventWorldFilesListed(uint64 numLevels, uint64 totalSizeMB, uint64 largestLevelMB, uint64 smallestLevelMB);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $fireEventStorage(int state, ::std::string const& extra);
#else // LL_PLAT_C
    MCAPI void $fireEventStorage(int state, ::std::string const& extra);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $fireEventStorageReport(::std::string const& report);
#else // LL_PLAT_C
    MCAPI void $fireEventStorageReport(::std::string const& report);
#endif

    MCAPI void $fireEventPlayerMessageSay(::std::string const& fromName, ::std::string const& message);

    MCAPI void $fireEventPlayerMessageTell(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    );

    MCAPI void $fireEventPlayerMessageChat(::std::string const& fromName, ::std::string const& message);

    MCAPI void $fireEventPlayerMessageMe(::std::string const& fromName, ::std::string const& message);

    MCAPI void $fireEventPlayerMessageTitle(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    );

    MCAPI void $fireEventPlayerKicked(::std::string const& sessionType, ::std::string const& kickedPlayer);

    MCAPI void $fireEventPlayerBanned(::std::string const& bannedPlayer);

    MCAPI void $fireEventChunkLoaded(::LevelChunk& chunk);

    MCAPI void $fireEventChunkUnloaded(::LevelChunk& chunk);

    MCAPI void $fireEventChunkChanged(::LevelChunk& chunk);

    MCAPI void $fireEventPackPlayed(::PackInstance const& packInstance, uint priority);

    MCAPI void
    $fireEventRespondedToAcceptContent(::PacksInfoData const& data, bool accepted, bool downloadOptionalResourcePacks);

    MCAPI void $fireEventStackLoaded(::StackStats const& stats, ::gsl::span<::PackInstance const> packInstances);

    MCAPI void $firePackSettingsEvent(
        ::PackSettings const& packSettings,
        ::PackManifest const& manifest,
        ::std::string         serializedPackSettings
    );

    MCAPI void $fireEventTreatmentPackApplied(::PackManifest const& manifest);

    MCAPI void $fireEventTreatmentPackDownloadFailed(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    );

    MCAPI void $fireEventTreatmentPackDownloaded(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    );

    MCAPI void $fireEventTreatmentPackRemoved(::std::string packId);

    MCAPI void $fireEventPackDeleted(
        ::std::string_view   reason,
        ::std::string const& packId,
        ::PackType           packType,
        ::PackOrigin         packLocation,
        ::std::string const& packOptimizationVersion,
        int64                freedBytes
    );

    MCAPI void $fireCDNDownloadEvent(
        ::std::string const&                                packId,
        ::std::string const&                                versionNumber,
        ::std::string const&                                hostUrl,
        ::IMinecraftEventing::CDNDownloadResult const&      downloadResult,
        ::IMinecraftEventing::CDNDownloadEventOrigin const& origin,
        float const&                                        elapsedTime
    );

    MCAPI void $fireEventContentLogsInWorldSession(::std::string const& logArea, uint errorCount, uint warningCount);

    MCAPI void $fireEventEntitlementCacheLoadTimeout();

    MCAPI void $fireTextToSpeechToggled(bool uiTTS, bool chatTTS);

    MCAPI void $fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                  customization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    );

    MCAPI void $fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode);

    MCAPI void $fireEventNpcPropertiesUpdated(::Actor& npcOwner, bool isEditorWorldbuilder);

    MCAPI void $fireEventBoardTextUpdated(::ChalkboardBlockActor& board);

    MCAPI void $fireEventCameraUsed(bool isSelfie);

    MCAPI void $fireEventPortfolioExported(int imageCount, int captionedCount);

    MCAPI void $fireQuickPlayEvent();

    MCAPI void $firePermissionsSetEvent(
        ::PlayerPermissionLevel const  prevPlayerPermissionLevel,
        ::CommandPermissionLevel const prevCommandPermissionLevel,
        ::PlayerPermissionLevel const  playerPermissionLevel,
        ::CommandPermissionLevel const commandPermissionLevel
    );

    MCAPI void $fireExternalUriLaunched(::std::string const& uri) const;

    MCAPI void $fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const;

    MCAPI void $fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        ::std::string const&                  additionalData
    ) const;

    MCAPI void $fireEventEmptyLibraryCategoryError(::std::string const& categoryTitle) const;

    MCAPI void
    $fireCodeBuilderCachePerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const;

    MCAPI void $fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const;

    MCAPI void
    $fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const;

    MCAPI void $fireLibraryButtonPressed(
        ::std::string const& productId,
        ::std::string const& worldName,
        ::std::string const& buttonAction
    );

    MCAPI void $fireCourseButtonPressed(::std::string const& courseTitle, ::std::string const& courseId);

    MCAPI void $fireLessonActionTaken(
        ::std::string const&                        lessonTitle,
        ::std::string const&                        lessonId,
        ::std::string const&                        courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    );

    MCAPI void $fireLessonProgressEvent(
        ::std::string const& lessonTitle,
        ::std::string const& lessonId,
        ::std::string const& courseId,
        ::std::string const& activityId,
        ::std::string const& action,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID,
        int                  score
    );

    MCAPI void $fireShareButtonPressed(
        ::std::string const& location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    );

    MCAPI void
    $fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const entryPoint) const;

    MCAPI void $fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const;

    MCAPI void $fireInAppCodeBuilderActivated(
        ::OpenCodeMethod     method,
        ::std::string const& ideName,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID
    ) const;

    MCAPI void $fireInAppCodeBuilderDismissed(::std::string const& ideName) const;

    MCAPI void $fireCodeCommandButtonPressed();

    MCAPI void $fireIDESelected(::std::string const& name) const;

    MCAPI void $fireEventEduResources() const;

    MCAPI void $fireEventCodeBuilderClosed() const;

    MCAPI void $fireEventCodeBuilderLog(
        ::Webview::TelemetryCommonProperties const& properties,
        ::std::string const&                        message,
        ::std::string&                              level
    ) const;

    MCAPI void $fireEventCodeBuilderScoreChanged(::std::string const& objective, int const score) const;

    MCAPI void $fireEventEduServiceStatus(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        int                                                                durationMS,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const;

    MCAPI void $fireEventCodeBuilderRuntimeAction(::std::string const& action) const;

    MCAPI void
    $fireEventWebviewDownload(::std::string const& downloadState, ::WebviewDownloadInfo const& downloadInfo) const;

    MCAPI void $fireEduServiceRequestFailed(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        ::std::string const&                                               error,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const;

    MCAPI void $fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const;

    MCAPI void $fireEventOptionsChanged(
        ::std::string const&                            optionGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) const;

    MCAPI void $fireEventOptionsChangedAlt(
        ::std::string const&                                                       optionGroup,
        ::std::unordered_map<::std::string, ::Social::Events::OptionChange> const& changes
    ) const;

    MCAPI void $fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const;

    MCAPI void $fireEventTagButtonPressed(::std::string const& tag, bool showMore) const;

    MCAPI void $fireEventLevelDataOverride(::std::string_view valueName) const;

    MCAPI void $fireEventEduContentVerificationFailed() const;

    MCAPI void $fireEventLibrarySearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) const;

#ifdef LL_PLAT_S
    MCFOLD void $fireEventLibrarySearchItemSelected(
        int const            sessionId,
        int const            correlationId,
        ::std::string const& productId,
        int const            row,
        int const            column
    ) const;
#else // LL_PLAT_C
    MCAPI void $fireEventLibrarySearchItemSelected(
        int const            sessionId,
        int const            correlationId,
        ::std::string const& productId,
        int const            row,
        int const            column
    ) const;
#endif

    MCAPI void $fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const;

    MCAPI void $fireEventWorldExported(int64 worldSeed, uint64 worldSize);

    MCAPI void $fireEventWorldImported(int64 worldSeed, uint64 worldSize);

    MCAPI void $fireEventWorldImportedResult(::FileArchiverOutcome importResult);

    MCAPI void $fireGlobalResourcePackCrashRecovery(::PackInstance& packInstance, ::mce::UUID recoveryID, int order);

    MCAPI void
    $fireEventRealmShared(::std::string const& url, ::IMinecraftEventing::ShareMode const& mode, int64 const& worldId);

    MCAPI void $fireEventRealmMemberlistCleared(int64 const& worldId, int const& numberOfUsersRemoved);

    MCAPI void $fireEventRealmUrlGenerated(::std::string const& url, int64 const& worldId);

    MCAPI void $fireEventStructureExport(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::ExportOutcome                                                         outcome,
        ::IMinecraftEventing::ExportStage                                                           stage
    ) const;

    MCAPI void $fireEventContentShared(
        ::std::string const&                   productId,
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode
    );

    MCAPI void $fireMinecraftVersionLaunched(bool launchedLegacy);

    MCAPI void $fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner);

    MCAPI void $fireInviteStatusReceived(::std::string id);

    MCAPI void $fireInviteStatusSentImpl(uint userId, ::std::vector<::std::string> invitationIds);

    MCAPI void $fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        ::std::optional<uint>                       importedWorldIndex,
        ::std::optional<uint64>                     importedWorldTimestamp
    );

    MCAPI void $fireContentDecryptionFailure(
        ::std::string const& failedContentIds,
        ::std::string const& contentKey,
        ::std::string const& failurePoint
    );

    MCFOLD void $fireWorldConversionAttemptEvent(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCFOLD void $fireWorldConversionInitiatedEvent(::std::string const& converterVersion);

    MCAPI void $fireWorldUpgradedToCnCPart2(
        bool                 willUpgrade,
        ::std::string const& baseGameVersion,
        ::Experiments const& experiments,
        ::std::string const& lastOpenedVersion,
        ::LevelSeed64        worldSeed,
        float                worldSizeMB
    );

    MCAPI void $fireEventAssertFailed(::std::string const& assertBucket, ::std::string const& message);

    MCAPI void $fireEventCrashSystemFailedToInit();

    MCAPI void $fireChatUsedEvent(uint chatLength, bool isSlashCommand);

    MCAPI void $fireEventJoinByCode(::std::string const&);

    MCAPI void $fireEventAppInitFileOpenStats(
        ::Core::Profile::FileCounters const& openForRead,
        ::Core::Profile::FileCounters const& openForWrite
    );

    MCAPI void $fireEventStartupPerformance(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventOnAppStart(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventOnAppSuspend(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::SuspendTriggersDisconnect                                             triggersDisconnect,
        bool reconnectOnResumeEnabled,
        bool forceDisableEvents
    );

    MCAPI void $fireEventOnAppResume(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::optional<int64> sessionAuthValidUntil
    );

    MCAPI void $fireEventOnDeviceLost(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventRealmsGeneralCall(::std::string const& callName, ::Bedrock::Http::Status returnCode);

    MCAPI void
    $fireEventRealmsRealmSpecificCall(::std::string const& callName, int64 realmId, ::Bedrock::Http::Status returnCode);

    MCAPI void $fireEventRealmDownload(
        ::std::string const& correlationId,
        ::std::string const& downloadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB
    );

    MCAPI void $fireEventRealmBackupDownloadFailed(
        int const                        realmId,
        ::std::string const&             reason,
        int64 const                      worldSizeBytes,
        int64 const                      availableStorageBytes,
        ::gsl::span<::std::string const> packIds
    );

    MCAPI void $fireEventRealmUpload(
        ::std::string const& correlationId,
        ::std::string const& uploadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB,
        bool const           isPack
    );

    MCAPI void $fireEventRealmsPackUpload(
        int const            realmId,
        int const            slotIndex,
        ::std::string const& packId,
        ::std::string const& packVersion,
        ::PackType           packType,
        ::std::string const& packClassification,
        ::std::string const& packOptimizationVersion,
        bool const           hasContentIdentity,
        bool const           isPremium,
        ::PackOrigin         packOrigin,
        int const            stackPosition,
        uint64 const         packSizeBytes
    );

    MCAPI void $fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    MCAPI void $fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    MCAPI void $fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    );

    MCAPI void $fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    );

    MCAPI void $fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    );

    MCAPI void $fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const source,
        int64 const                                       realmId,
        ::std::string const&                              clubId,
        int                                               unreadPosts
    );

    MCAPI void $fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        int64 const                                     realmId,
        ::std::string const&                            clubId
    );

    MCAPI void $fireEventCopyWorldEducationEnabled();

    MCAPI void $fireEventRespawn(::Player& player, int dimID);

    MCAPI void $fireEventServerRespawnSearchTime(::Player& player, ::PlayerRespawnTelemetryData const& data);

    MCAPI void $fireEventUnknownBlockReceived(::NewBlockID const& blockId, ushort data);

    MCAPI void $fireEventCompoundCreatorCreated(int compoundId, int count);

    MCAPI void $fireEventLabTableCreated(int reactionId, int productId, int productAux);

    MCAPI void $fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    );

    MCAPI void $fireEventReducerBlockEntered(::ItemDescriptor const& item);

    MCAPI void $fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::Level> level);

    MCAPI void $fireEventLevelDestruct();

    MCAPI void $flagEventDeepLink();

    MCAPI void $flagEventPlayerGameTypeDefault(bool isDefault);

    MCAPI void
    $fileEventCloudWorldPullFailed(::std::string const& reason, ::std::string const& worldID, bool localLevelDatUsed);

    MCAPI void $fireEventLevelDatLoadFailed(::std::string const& reason, ::std::string const& worldID, bool isFatal);

    MCAPI void $fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const& context,
        ::std::string const&                 reason,
        ::std::optional<bool>                isOutOfDiskSpace
    );

    MCAPI void $fireEventClientLeftGameDueToUnrecoverableError(::std::string const& reason, bool isServer);

    MCAPI void $fireEventServerShutdownDueToError(::std::string const& reason);

    MCAPI void $fireEventServerInitializationFailed(
        ::std::string const& failReason,
        bool                 serverLevelExists,
        bool                 serverNetworkHandlerValid
    );

#ifdef LL_PLAT_S
    MCFOLD void $fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const& context,
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    );
#else // LL_PLAT_C
    MCAPI void $fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const& context,
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    );
#endif

    MCAPI void $fireEventLevelDBPerformanceData(
        ::LevelStorageEventingContext const&       context,
        ::DBStoragePerformanceTelemetryData const& perfData
    );

    MCAPI void $fireEventDBReadFail(::LevelStorageEventingContext const& context, ::std::string const& reason);

#ifdef LL_PLAT_S
    MCFOLD void $fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const& worldPath,
        ::std::string const& levelId,
        ::std::string const& deletionCandidate
    );
#else // LL_PLAT_C
    MCAPI void $fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const& worldPath,
        ::std::string const& levelId,
        ::std::string const& deletionCandidate
    );
#endif

    MCAPI void $fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    );

    MCAPI void $fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    );

    MCAPI void $fireEventSidebarNavigation(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& telemetryId,
        int const            depthLevel,
        bool const           isSelected,
        bool const           areChildrenVisible,
        bool const           hasChildren
    );

    MCAPI void $fireEventSidebarVerboseToggled(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& verboseNavigationType,
        bool const           verboseState
    );

    MCAPI void $fireEventPersonaUserLoadedActive(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         personaUsesClassicSkin
    );

    MCAPI void $fireEventPersonaItemPreviewed(
        ::persona::ProfileType const        personaProfile,
        ::std::string const&                itemOfferId,
        ::std::string const&                productId,
        uint                                row,
        uint                                column,
        ::IMinecraftEventing::PromotionType promotionType,
        bool                                isOwned,
        ::std::string const&                creatorId,
        ::std::string const&                creatorName,
        double                              secondsToLoadContent,
        ::StoreEventData::StoreType         storeType
    );

    MCAPI void $fireEventPersonaAvatarUpdated(
        ::persona::ProfileType const        personaProfile,
        ::std::vector<::std::string> const& newAppearancePieceIds,
        ::std::vector<bool> const&          newPieces,
        ::std::vector<bool> const&          tintedPieces,
        bool                                isNewPersona,
        bool                                isBeingDeleted,
        ::std::string const&                bodySize,
        ::std::string const&                armSize,
        ::std::string const&                classicSkinId,
        bool                                usesClassicSkin,
        ::std::vector<::std::string> const& emotesPieceIds,
        ::std::vector<::std::string> const& emoteSlotNumbers
    );

    MCAPI void $fireEventPersonaSkinChanged(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         isClassicSkinUsed
    );

    MCAPI void $fireEventPersonaAvatarsListed(::std::vector<::persona::ProfileType> const& profileTypesUsed);

    MCAPI void
    $fireEventPersonaEmotePlayed(::std::string const& emoteProductId, bool isEmoteEndedEarly, int emoteSlotId);

    MCAPI void
    $fireEventDefaultCastSelected(int previewIndex, ::mce::UUID appearanceId, ::std::string const& appearanceName);

    MCAPI void $fireEventPersonaInitalizationEvent(
        uint                 secondsToCompletion,
        ::std::string const& status,
        ::std::string const& user
    );

    MCAPI void $fireEventPersonaGeneralError(::std::string const& personaErrorName, uint duplicateErrorsFired);

    MCAPI void $fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds);

    MCAPI void $fireEventPersonaPiecePackEviction(
        uint   cacheSizeBeforeEviction,
        uint   evictedCount,
        uint   failedCount,
        uint   protectedCount,
        bool   evictionLimitedByBatch,
        double passDurationInSeconds
    );

    MCAPI void $fireEventPersonaCreationFailed(
        ::std::string_view errorName,
        ::std::string_view pieceId,
        bool               missingTop,
        bool               missingBottom,
        ::std::string_view repositoryPieceType,
        ::std::string_view appearancePieceType
    );

    MCAPI void $fireEventPersonaCategoryInformation(::std::string const& categoryInformation);

    MCAPI void $fireEventDisplayLoggedError(
        ::std::string const& errorMessageTemplate,
        ::std::string const& errorMessage,
        ::std::string const& errorParameters
    );

    MCAPI void $fireEventOreUIError(uint const& userId, ::std::string const& errorType);

    MCAPI void $fireEventOreUIScreenPerformance(
        uint const&                                                                                 userId,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    );

    MCAPI void $fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool const           isOwner
    );

    MCAPI void
    $fireEventOnboardingWorldCreationUsage(bool onboardingWorldCreationUsed, bool hasWorlds, bool hasOnlyBaseGamePacks);

    MCAPI ::std::shared_ptr<void*> $requestEventDeferment();

    MCAPI ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> $getCrashTelemetryProcessor();

    MCAPI void $sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo> session);

    MCAPI void $addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo> session);

    MCAPI void $sendBatchedCrashTelemetry();

    MCAPI void $sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const& status);

    MCAPI void $fireEventLevelChunkPerformanceData(bool isClientSide);

    MCAPI void $fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const& output);

    MCAPI void $fireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller);

    MCAPI void $fireScreenLoadTimeUpdateEvent(
        uint const&                userId,
        ::std::string const&       screenName,
        ::std::chrono::nanoseconds duration,
        ::std::string const&       loadInstanceId
    );

    MCAPI void $fireDBStorageError(::LevelStorageEventingContext const& context, ::std::string const& errorType);

    MCAPI void $fireStorageMigrationEvent(
        bool                                              isSuccessful,
        ::Bedrock::StorageMigration::StorageMigrationType migrationType,
        int                                               numFilesMigrated,
        int                                               numFilesTotal,
        double                                            migratedMB,
        double                                            totalMB,
        ::std::chrono::nanoseconds                        duration,
        ::std::string const&                              failureReason,
        ::std::string const&                              failureFolder
    );

    MCAPI void $fireEventConnectedStorageResult(
        ::ConnectedStorageEventType eventType,
        bool                        succeeded,
        uint                        durationMs,
        ::std::optional<uint>       chunksSent,
        ::std::string const&        errorMessage,
        ::std::string const&        levelId,
        int64                       quotaRemaining,
        ::std::optional<uint>       filesToAddCount,
        ::std::optional<uint>       filesToDeleteCount,
        ::std::optional<uint>       HACK_oldFilesToDeleteCount
    );

    MCAPI void $fireEventConnectedStorageError(char const* message, ::std::string const& levelId, int64 quotaRemaining);

    MCAPI void $fireServerStarted(
        ::Social::Events::ServerTelemetryData const&              serverTelemetryData,
        ::std::unordered_map<::std::string, ::std::string> const& propertiesChanged
    );

    MCAPI void $fireServerShutdown();

    MCAPI void $fireSafetyServiceTextProcessEvent(
        ::std::string const&        authorId,
        ::TextProcessingEventOrigin eventOrigin,
        ushort                      responseCode,
        ::std::string const&        message,
        bool                        wasFlagged,
        double                      responseTime,
        char                        risk,
        char                        trustLevel,
        ::Json::Value const&        events,
        bool                        isProcessorOffline,
        bool                        isCachedResponse
    );

    MCAPI void $fireBannedSkinVerificationEvent(
        uint const&          userId,
        ::std::string const& skinData,
        bool                 wasApproved,
        int const            eventCode,
        ::std::string const& message
    );

    MCAPI void $fireEventPlayerReportSent(
        bool                 successfulReportSent,
        ::std::string const& failureSource,
        ::std::string const& failureReason,
        ::std::string const& reportID
    );

    MCAPI void
    $fireEventOneDSPlayerReportPayload(::std::string const& reportPayloadJson, ::std::string const& reportID);

    MCAPI void $firePlayerAccountMetadata(
        ::Social::PermissionCheckResult multiPlayerAllowed,
        ::Social::PermissionCheckResult chatAllowed,
        ::Social::PermissionCheckResult addFriendAllowed,
        ::Social::PermissionCheckResult ugcAllowed,
        ::Social::PermissionCheckResult clubsAllowed,
        ::Social::PermissionCheckResult viewProfilesAllowed,
        bool                            isChildAccount,
        bool                            isGuest
    );

    MCAPI void
    $fireEventSafetyHTTPRequest(::std::string const& method, ::std::string const& url, int const responseCode);

    MCAPI void $fireEventProfanityFilter(bool localFilter, bool remoteFilter, bool playerFilter);

    MCAPI void $fireEventChatFloodingActionTaken(
        ::std::string const&         authorXuid,
        ::Safety::ChatFloodingAction action,
        ::std::string const&         message
    );

    MCAPI void $fireEventTextProcessorStartupFailed(::std::string const& stage, int retryCount, int maxRetryCount);

    MCAPI void $fireEventBlockUser(::std::string const& xuid, bool isSuccess, bool isBlocked);

    MCAPI void $fireEventMuteUser(::std::string const& xuid, bool isSuccess, bool isMuted);

    MCAPI void $fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const& data);

    MCAPI ::Json::Value $propertiesAsJsonValue() const;

    MCAPI void $fireEventUwpToGdkMigrationComplete(
        ::Bedrock::DeviceIdContext const& deviceIdContext,
        ::std::string const&              gdkDeviceId,
        ::std::string_view                migrationErrors
    );

    MCAPI void $fireEventOSKErrorEncountered(::std::string_view failureReason);

    MCAPI void $fireNetworkChangedEvent(::std::string const& networkConnectionType);

    MCAPI void $fireEventMessageServiceImpression(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl,
        ::std::string const& instanceId
    );

    MCAPI void $fireEventMessageReceived(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl,
        ::std::string const& instanceId
    );

    MCAPI void $fireEventPartyPlayFabError(
        ::std::string const& functionName,
        ::std::string const& errorMessage,
        ::std::string const& partyId
    );

    MCAPI void $fireEventPartyButtonPressed(::std::string const& buttonName, ::std::string const& partyId);

    MCAPI void $fireEventPartyTravelToastExpired(::std::string const& travelMode, ::std::string const& partyId);

    MCAPI void $fireEventGoogleAccountHoldWarning(bool navigatedToSubscription);

    MCAPI void $fireDelayedEventReportOfflineAction(::std::string const& offlineAction);

    MCAPI void $fireEventFeedbackSubmitted(
        ::std::string const& feedbackType,
        ::std::string const& identifier,
        bool                 safetyCheckSuccessful,
        bool                 isValidText
    );

    MCAPI void $fireEventTrackDeeplinks(
        ::std::string const& deeplinkDestination,
        ::std::string const& deeplinkSource,
        ::std::string const& educationReferrerId,
        ::std::string const& educationReferrerType
    );

    MCAPI void
    $fireEventUriActivation(::std::string const& activationIdentifier, ::std::string const& activationParameters);

    MCAPI void $fireEventReceivedUniqueWebSessionId(::std::string const& webSessionId);

    MCAPI void $fireEventReceivedUniqueLauncherSessionId(::std::string const& launcherSessionId);

    MCAPI void $firePlayerUnexpectedFallDamage(float const fallDistance, bool isVehicle, float const divergenceAmount);

    MCAPI void
    $fireEventActorMovementCorrectionDivergence(::ActorType actorType, ::std::vector<float> const& divergences);

#ifdef LL_PLAT_S
    MCAPI void $fireEventDedicatedServerDiscoveryResponse(int const status, int const retryAttempt);
#else // LL_PLAT_C
    MCFOLD void $fireEventDedicatedServerDiscoveryResponse(int const status, int const retryAttempt);
#endif

    MCAPI void $fireEventInGamePause(bool pauseStatus);

    MCAPI void $fireEventGameTip(int gameTipId, int gameTipEventType, int gameTipTestGroup, ::InputMode inputMode);

    MCAPI void $fireEventAddedFriend(
        ::std::string const&                      addedXuid,
        ::IMinecraftEventing::AddedFriendLocation location,
        bool                                      success
    );

    MCAPI void $fireEventInboxSummary(::Social::Events::InboxSummaryData const& data);

    MCAPI void $fireEventTrialStatusFailed(int errorCode);

    MCAPI void $fireEventSaveDataExpansion(uint64 preExpansionSize, uint64 postExpansionSize, uint64 levelUsedSize);

    MCAPI void $fireEventProfileButtonPressed(::std::string const& entryPoint) const;

    MCAPI void $fireEventWorldCopy(uint64 worldSize, uint64 filesSum, ::LevelSeed64 worldSeed);

    MCAPI void $fireEventWriteBudgetLow(
        uint64                     remainingWriteBudget,
        float                      writeRateMBPerMin,
        float                      writeCountPerMin,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    );

    MCAPI void $fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds throttledTime,
        uint64                     lowestWriteBudget,
        ::std::optional<uint64>    lowestSystemThrottlingPerSec,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    );

    MCAPI void $fireEventLargeFileWriteStall(
        uint64                              totalWriteSizeBytes,
        ::std::vector<::std::string> const& largestFileNames,
        ::std::chrono::nanoseconds          estimatedTotalWriteTime,
        ::std::chrono::nanoseconds          estimatedTotalWaitTime,
        ::std::string const&                originatingSystem,
        uint64                              budgetBytesAtStartOfOperation,
        bool                                operationWasCancelled,
        ::std::chrono::nanoseconds          totalWriteTime,
        ::std::chrono::nanoseconds          totalWaitTime,
        int                                 numberOfFilesWritten,
        uint64                              budgetBytesAtEndOfOperation,
        ::std::vector<::std::string> const& associatedContentIDs
    );

    MCAPI void $fireEventLowMemoryDetected(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::LowMemoryReport const&                                                                    report
    );

    MCAPI void $fireEventReceivedApplicationExitInfo(
        ::std::string const& description,
        int                  reasonCode,
        int                  exitCode,
        int                  importanceCode,
        int64                residentSetSize,
        int64                proportionalSetSize,
        ::std::string const& sessionId,
        bool                 deviceSupportsReasonLowMem
    );

    MCFOLD void $fireEventImmersiveReaderStatus(::Bedrock::Http::Status const status);

    MCAPI void $fireEventPacketSerializationMismatch(
        ::MinecraftPacketIds packetId,
        ::std::string_view   legacyStream,
        ::std::string_view   cerealStream
    );

    MCAPI void $fireEventPUVLoad(::std::string const& resourceCategory, ::PuvLoadData::TelemetryEventData&& loadData);

    MCAPI void $fireEventRemoteDesktop(bool isRemoteDesktop);

    MCAPI void $fireEventResourceProcessingPerf(::ResourceProcessingPerfData const& data);

    MCAPI void $fireEventOnlineAudioStreamEnded(::OnlineAudioStreamEnded const& telemetry);

    MCAPI void $fireEventDimensionTransfer(::DimensionTransferTelemetryData const& data);

    MCAPI void $fireEventMarketplaceImpressions(
        ::std::string const&                 destinationQuery,
        ::std::string const&                 destinationPage,
        ::Social::Events::PageDisplayRecord& data
    );

    MCAPI ::Social::Events::EventManager& $getEventManager() const;

    MCAPI uint $getPrimaryLocalUserId() const;

    MCAPI bool $getShouldHaveAchievementsEnabled();

    MCAPI void $setShouldHaveAchievementsEnabled(bool value);

    MCAPI bool $getAchievementsAlwaysEnabled();


#endif // @header-generator platform
    // NOLINTEND
};
