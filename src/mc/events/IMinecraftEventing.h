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
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/RawInputType.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/events/ConnectedStorageEventType.h"
#include "mc/events/EduControlPanelUpdateType.h"
#include "mc/events/FatalClientPackErrorType.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IExternalSessionTelemetry.h"
#include "mc/events/IMinecraftEventingProvider.h"
#include "mc/events/IPackTelemetry.h"
#include "mc/events/IScreenChangedEventing.h"
#include "mc/events/IUIEventTelemetry.h"
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
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/server/safety/ChatFloodingAction.h"
#include "mc/util/ValidationStatus.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/level/FileArchiverOutcome.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AppPlatform;
class Block;
class ChalkboardBlockActor;
class ContentIdentity;
class DBStorageFolderWatcher;
class Experiments;
class ItemDescriptor;
class Level;
class LevelChunk;
class LevelSeed64;
class LevelSettings;
class MessagePerformance;
class NetworkIdentifier;
class PackInstance;
class PackManifest;
class PackSettings;
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
struct AsyncJoinAllow;
struct AsyncJoinDeny;
struct ChunkRecyclerTelemetryOutput;
struct DBStoragePerformanceTelemetryData;
struct DimensionTransferTelemetryData;
#if defined(LL_PLAT_A) // @header-generator platform
struct ExtraLicenseData;
#else // @header-generator platform
#endif // @header-generator platform
struct ImageTelemetryInfo;
struct LevelStorageEventingContext;
struct LowMemoryReport;
struct NewBlockID;
struct OnlineAudioStreamEnded;
struct PacksInfoData;
struct ProfilerLiteTelemetry;
struct ResourceProcessingPerfData;
struct SplitScreenUpdatedEventData;
struct StackStats;
struct WebviewDownloadInfo;
namespace Bedrock { class CrashTelemetryProcessor; }
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DirectoryEntry; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::Profiling::Orchestrator { struct ProfilerCaptureParams; }
namespace Bedrock::Profiling::Orchestrator { struct ProfilerMetadataParams; }
namespace Bedrock::PubSub { class Subscription; }
namespace Core::Profile { struct FileCounters; }
namespace Json { class Value; }
namespace PuvLoadData { struct TelemetryEventData; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlayerIDs; }
namespace Social::Events { class Event; }
namespace Social::Events { class EventManager; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class OptionChange; }
namespace Social::Events { class Property; }
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
class PushNotificationMessage;
struct ExtraLicenseData;
namespace Social::Events { struct InboxSummaryData; }
namespace Social::Events { struct PageDisplayRecord; }
#endif // @header-generator platform
// clang-format on

class IMinecraftEventing : public ::Bedrock::EnableNonOwnerReferences,
                           public ::IPackTelemetry,
                           public ::IScreenChangedEventing,
                           public ::IConnectionEventing,
                           public ::IUIEventTelemetry,
                           public ::IExternalSessionTelemetry,
                           public ::IMinecraftEventingProvider {
public:
    // IMinecraftEventing inner types declare
    // clang-format off
    struct CommandParseTableEntry;
    // clang-format on

    // IMinecraftEventing inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SuspendTriggersDisconnect : int {
        Yes = 0,
        No  = 1,
#else // @header-generator platform
    enum class AddedFriendLocation : int {
        AddFriendsRecommendedFriends = 0,
        AddFriendsRecentlyPlayedWith = 1,
        AddFriendsFollowers          = 2,
        AddFriendsSearch             = 3,
        ProfileMain                  = 4,
        JsonUI                       = 5,
        ProfileFriendsList           = 6,
        ProfileFollowersList         = 7,
        SocialDrawerOpenParty        = 8,
        SocialDrawerFriendRequests   = 9,
    };

    enum class AuthenticationOutcome : int {
        Success         = 0,
        Failed          = 1,
        AccountRequired = 2,
    };

    enum class CDNDownloadEventOrigin : int {
        Manifest                  = 0,
        SystemServicePacks        = 1,
        WorldResourcePackDownload = 2,
#endif // @header-generator platform
    };

    enum class CDNDownloadResult : int {
        Success            = 0,
        Failure            = 1,
        Timeout            = 2,
        AddedToPackRepo    = 3,
        NotFoundInPackRepo = 4,
        NotOnStack         = 5,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class CDNDownloadEventOrigin : int {
        Manifest                  = 0,
        SystemServicePacks        = 1,
        WorldResourcePackDownload = 2,
#else // @header-generator platform
    enum class ChunkCacheResultType : int {
        SuccessFromCache   = 0,
        SuccessFromNetwork = 1,
        Failure            = 2,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class SignInAccountType : int {
        Unknown          = 0,
        PlayFab_Device   = 1,
        XboxLive         = 2,
        PSN              = 3,
        PlayFab_XboxLive = 4,
        PlayFab_PSN      = 5,
        PlayFab_NSA      = 6,
        GooglePlayGames  = 7,
#else // @header-generator platform
    enum class ClubsEngagementAction : int {
        Like    = 0,
        Unlike  = 1,
        Post    = 2,
        Delete  = 3,
        Report  = 4,
        Comment = 5,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class SignInStage : int {
        Unknown               = 0,
        Starting              = 1,
        Failed                = 2,
        Canceled              = 3,
        Succeeded             = 4,
        Succeeded_New_Account = 5,
        Failed_Create         = 6,
#else // @header-generator platform
    enum class ClubsEngagementTargetType : int {
        Unknown       = 0,
        ImageFeedPost = 1,
        TextFeedPost  = 2,
        Comment       = 3,
        RealmEvent    = 4,
        Gamertag      = 5,
    };

    enum class ClubsFeedScreenSource : int {
        PlayScreen  = 0,
        PauseScreen = 1,
        SlotsScreen = 2,
    };

    enum class DayOneExperienceState : int {
        Started                    = 0,
        CompletedWithoutWorlds     = 1,
        CompletedWithImportSkipped = 2,
        CompletedWithImport        = 3,
    };

    enum class DeviceAccountFailurePhase : int {
        Unknown                 = 0,
        SignIn                  = 1,
        LoadCredentials         = 2,
        TitleKey                = 3,
        StoreVerify             = 4,
        PlayFabCreateConfigured = 5,
        PlayFabCreate           = 6,
    };

    enum class EducationLessonAction : int {
        Start    = 0,
        Continue = 1,
        Restart  = 2,
        Host     = 3,
        Join     = 4,
        Finish   = 5,
    };

    enum class ElementConstructorUseType : int {
        Created = 0,
        Entered = 1,
    };

    enum class ExploitType : int {
        DropItem                   = 0,
        ExcessiveChatMessageLength = 1,
        SoundPacket                = 2,
    };

    enum class ExportOutcome : int {
        Failed  = 0,
        Success = 1,
    };

    enum class ExportStage : int {
        Initiated = 0,
        Completed = 1,
    };

    enum class FileTransmissionDirection : int {
        Download = 0,
        Upload   = 1,
    };

    enum class FileTransmissionState : int {
        Failed    = 0,
        Started   = 1,
        Completed = 2,
        Resumed   = 3,
        Canceled  = -1,
    };

    enum class FileTransmissionType : int {
        RealmFile         = 1,
        Dlc               = 2,
        Remix3DDeprecated = 3,
        DlcUpdateAuto     = 4,
        DlcUpdateUser     = 5,
    };

    enum class IgnoredNotificationSource : int {
        OwnRealm     = 0,
        FriendsRealm = 1,
        Count        = 2,
    };

    enum class IgnoredNotificationsType : int {
        UnreadPost   = 0,
        RealmsInvite = 1,
        Count        = 2,
    };

    enum class LessonCompleteDialogEntryPoint : int {
        EduPauseMenu  = 0,
        LessonCommand = 1,
    };

    enum class MarkLevelForSyncReason : int {
        DoesntExist        = 0,
        LocalOutOfDate     = 1,
        ManifestInBadState = 2,
        FirstSyncBlob      = 3,
    };

    enum class MultiplayerSessionUpdateTrigger : int {
        None         = -1,
        PlayerJoined = 0,
        PlayerLeft   = 1,
    };

    enum class PetDeathContext : int {
        DiedOfOtherCause = 0,
        PlayerMurdered   = 1,
        OwnerMurdered    = 2,
        MobMurdered      = 3,
    };

    enum class ProfileError : int {
        None                              = 0,
        UserNotFound                      = 1,
        NoInternet                        = 2,
        NotAllowedToViewProfilesAdult     = 3,
        NotAllowedToViewProfilesChild     = 4,
        NotLoggedInWithMSA                = 5,
        LoggedInWithMSAButPlatformProfile = 6,
    };

    enum class PromotionType : int {
        Featured = 0,
        Default  = 1,
        None     = 2,
    };

    enum class PurchaseStage : int {
        Unknown     = 0,
        Store       = 1,
        Marketplace = 2,
#endif // @header-generator platform
    };

    enum class RealmConnectionFlow : int {
        PlayScreen             = 0,
        SettingsScreen         = 1,
        InviteLink             = 2,
        AllowList              = 3,
        Marketplace            = 4,
        CreateScreen           = 5,
        SlotsScreen            = 6,
        ConnectToRealmLink     = 7,
        EditWorld              = 8,
        TimelineRequiredScreen = 9,
        RealmsPurchase         = 10,
        PartyTravel            = 11,
    };

    enum class RealmConnectionLambda : int {
        CompletedCallback                 = 0,
        RetryCallback                     = 1,
        ProgressScreenTickCallback        = 2,
        ProgressScreenOnCancelCallback    = 3,
        GameServerConnectProgressCallback = 4,
    };

    enum class RealmConnectionResult : int {
        Success                       = 0,
        SuccessWithWarning            = 1,
        FailWithUnnassignedDevVersion = 2,
        Fail                          = 3,
        Retry                         = 4,
        CancelByUser                  = 5,
        InvalidCallback               = 6,
        Unknown                       = 7,
        TimedOut                      = 8,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ElementConstructorUseType : int {
        Created = 0,
        Entered = 1,
    };

    enum class IgnoredNotificationsType : int {
        UnreadPost   = 0,
        RealmsInvite = 1,
        Count        = 2,
    };

    enum class ClubsEngagementAction : int {
        Like    = 0,
        Unlike  = 1,
        Post    = 2,
        Delete  = 3,
        Report  = 4,
        Comment = 5,
    };

    enum class ClubsEngagementTargetType : int {
        Unknown       = 0,
        ImageFeedPost = 1,
        TextFeedPost  = 2,
        Comment       = 3,
        RealmEvent    = 4,
        Gamertag      = 5,
    };

    enum class ClubsFeedScreenSource : int {
        PlayScreen  = 0,
        PauseScreen = 1,
        SlotsScreen = 2,
    };

    enum class ExploitType : int {
        DropItem                   = 0,
        ExcessiveChatMessageLength = 1,
        SoundPacket                = 2,
    };

    enum class MarkLevelForSyncReason : int {
        DoesntExist        = 0,
        LocalOutOfDate     = 1,
        ManifestInBadState = 2,
        FirstSyncBlob      = 3,
    };

    enum class DayOneExperienceState : int {
        Started                    = 0,
        CompletedWithoutWorlds     = 1,
        CompletedWithImportSkipped = 2,
        CompletedWithImport        = 3,
    };

    enum class WorldClassroomCustomization : int {
        ResourceUri = 0,
    };

    enum class EducationLessonAction : int {
        Start    = 0,
        Continue = 1,
        Restart  = 2,
        Host     = 3,
        Join     = 4,
        Finish   = 5,
    };

    enum class LessonCompleteDialogEntryPoint : int {
        EduPauseMenu  = 0,
        LessonCommand = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class ShareMode : int {
        Share = 1,
        Copy  = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ExportOutcome : int {
        Failed  = 0,
        Success = 1,
#else // @header-generator platform
    enum class SignInAccountType : int {
        Unknown         = 0,
        PlayFabDevice   = 1,
        XboxLive        = 2,
        Psn             = 3,
        PlayFabXboxLive = 4,
        PlayFabPsn      = 5,
        PlayFabNsa      = 6,
        GooglePlayGames = 7,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ExportStage : int {
        Initiated = 0,
        Completed = 1,
    };

    enum class PromotionType : int {
        Featured = 0,
        Default  = 1,
        None     = 2,
#else // @header-generator platform
    enum class SignInStage : int {
        Unknown             = 0,
        Starting            = 1,
        Failed              = 2,
        Canceled            = 3,
        Succeeded           = 4,
        SucceededNewAccount = 5,
        FailedCreate        = 6,
#endif // @header-generator platform
    };

    enum class StructureBlockActionType : int {
        Unknown     = -1,
        Save        = 0,
        Load        = 1,
        Export      = 2,
        Export3D    = 3,
        LeaveScreen = 4,
        Import      = 5,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class DeviceAccountFailurePhase : int {
        Unknown                  = 0,
        SignIn                   = 1,
        LoadCredentials          = 2,
        TitleKey                 = 3,
        StoreVerify              = 4,
        PlayFabCreate_Configured = 5,
        PlayFabCreate            = 6,
#else // @header-generator platform
    enum class SuspendTriggersDisconnect : int {
        Yes = 0,
        No  = 1,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class AddedFriendLocation : int {
        AddFriends_RecommendedFriends = 0,
        AddFriends_RecentlyPlayedWith = 1,
        AddFriends_Followers          = 2,
        AddFriends_Search             = 3,
        Profile_Main                  = 4,
        JsonUI                        = 5,
        Profile_FriendsList           = 6,
        Profile_FollowersList         = 7,
        SocialDrawer_OpenParty        = 8,
        SocialDrawer_FriendRequests   = 9,
    };

    enum class PetDeathContext : int {
        DiedOfOtherCause = 0,
        PlayerMurdered   = 1,
        OwnerMurdered    = 2,
        MobMurdered      = 3,
    };

    enum class IgnoredNotificationSource : int {
        OwnRealm     = 0,
        FriendsRealm = 1,
        Count        = 2,
#else // @header-generator platform
    enum class WorldClassroomCustomization : int {
        ResourceUri = 0,
#endif // @header-generator platform
    };

    struct CommandParseTableEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, uint> version;
        ::ll::TypedStorage<8, 8, long> buildTimeMs;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnkf81146;
        ::ll::UntypedStorage<8, 8> mUnk92e4f2;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        CommandParseTableEntry& operator=(CommandParseTableEntry const&);
        CommandParseTableEntry(CommandParseTableEntry const&);
        CommandParseTableEntry();
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using RegisterOptionsObserver = ::brstd::function_ref<
        Bedrock::PubSub::Subscription(std::function<void(bool)>) const,
        Bedrock::PubSub::Subscription(std::function<void(bool)>)>;

    using EventWriter = ::brstd::function_ref<void(Social::Events::Event&) const, void(Social::Events::Event&)>;

    using CommandParseTableDetails = std::vector<IMinecraftEventing::CommandParseTableEntry>;

    using TestBuildIdType = char const*;
#else // @header-generator platform
    using CommandParseTableDetails = ::std::vector<::IMinecraftEventing::CommandParseTableEntry>;
#endif // @header-generator platform

    using EventAndManagerWriter = ::brstd::function_ref<
#if defined(LL_PLAT_A) // @header-generator platform
        void(Social::Events::EventManager&, Social::Events::Event&) const,
        void(Social::Events::EventManager&, Social::Events::Event&)>;
#else // @header-generator platform
        void(::Social::Events::EventManager&, ::Social::Events::Event&) const,
        void(::Social::Events::EventManager&, ::Social::Events::Event&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SignInErrorDetails = std::vector<std::pair<std::string, std::string>>;
#else // @header-generator platform
    using EventWriter = ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)>;

    using OptionsObserver = ::std::function<void(bool)>;

    using RegisterOptionsObserver = ::brstd::function_ref<
        ::Bedrock::PubSub::Subscription(::std::function<void(bool)>) const,
        ::Bedrock::PubSub::Subscription(::std::function<void(bool)>)>;

    using SignInErrorDetails = ::std::vector<::std::pair<::std::string, ::std::string>>;

    using TestBuildIdType = char const*;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IMinecraftEventing();
#else // @header-generator platform
    virtual ~IMinecraftEventing() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(::Bedrock::NonOwnerPointer<AppPlatform> const&) = 0;
#else // @header-generator platform
    virtual void init(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform) = 0;
#endif // @header-generator platform

    virtual void initDeviceAndSessionIds() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual void initEditorEventListener() = 0;

#endif // @header-generator platform
    virtual void shutdown() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getPlayerSessionId() = 0;
#else // @header-generator platform
    virtual ::std::string const& getPlayerSessionId() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> getWorldSessionIdGenerationTimestamp() const = 0;
#else // @header-generator platform
    virtual ::std::chrono::steady_clock::time_point getWorldSessionIdGenerationTimestamp() const = 0;
#endif // @header-generator platform

    virtual bool getShouldHaveAchievementsEnabled() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setShouldHaveAchievementsEnabled(bool) = 0;
#else // @header-generator platform
    virtual void setShouldHaveAchievementsEnabled(bool value) = 0;
#endif // @header-generator platform

    virtual bool getAchievementsAlwaysEnabled() = 0;

    virtual uint getPrimaryLocalUserId() const = 0;

    virtual void forceSendEvents() = 0;

    virtual ::Social::Events::EventManager& getEventManager() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePrimaryLocalUserId(uint const&) = 0;
#else // @header-generator platform
    virtual void updatePrimaryLocalUserId(uint const& userId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getUserUID(::Social::IdentityType, std::string const&) const = 0;
#else // @header-generator platform
    virtual ::std::string getUserUID(::Social::IdentityType type, ::std::string const& primaryId) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerSecondaryUserCommonProperties(uint const&, std::string const&) const = 0;
#else // @header-generator platform
    virtual void registerSecondaryUserCommonProperties(uint const& userId, ::std::string const& uid) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unregisterSecondaryUserCommonProperties(uint const&) const = 0;
#else // @header-generator platform
    virtual void unregisterSecondaryUserCommonProperties(uint const& userId) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateIsLegacyPlayer(bool) const = 0;
#else // @header-generator platform
    virtual void updateIsLegacyPlayer(bool isLegacyPlayer) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateIsTrial(bool) const = 0;
#else // @header-generator platform
    virtual void updateIsTrial(bool isTrial) const = 0;
#endif // @header-generator platform

    virtual void updateEditionType() const = 0;

    virtual void updateClientId() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerOptionsObserver(::brstd::function_ref<Bedrock::PubSub::Subscription (std::function<void (bool)>) const, Bedrock::PubSub::Subscription (std::function<void (bool)>)>) = 0;
#else // @header-generator platform
    virtual void registerOptionsObserver(
        ::brstd::function_ref<
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>) const,
            ::Bedrock::PubSub::Subscription(::std::function<void(bool)>)> registerObserver
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addListener(std::unique_ptr<Social::Events::IEventListener>) = 0;
#else // @header-generator platform
    virtual void addListener(::std::unique_ptr<::Social::Events::IEventListener> listener) = 0;
#endif // @header-generator platform

    virtual void clearListeners() = 0;

    virtual ::Json::Value propertiesAsJsonValue() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEvent(std::string const&, std::vector<Social::Events::Property> const&, std::vector<Social::Events::Measurement> const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBlockTypeRegistryChecksumMismatch(std::string const&, ulong const&, ulong const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const& reason,
        uint64 const&        serverBlockChecksum,
        uint64 const&        clientBlockChecksum,
        ::std::string const& serverVersion
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnSuccessfulClientLogin(::Level const*) = 0;
#else // @header-generator platform
    virtual void fireEventOnSuccessfulClientLogin(::Level const* level) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStartClient(std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventStartClient(::std::string const& ipAddress, bool isTextToSpeechEnabled) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStartWorld(::NetworkType, std::string const&, ::Social::MultiplayerServiceIdentifier const) = 0;
#else // @header-generator platform
    virtual void fireEventStartWorld(
        ::NetworkType                                networkType,
        ::std::string const&                         ipAddress,
        ::Social::MultiplayerServiceIdentifier const friendWorldType
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerJoinWorld(uint const&, ::SubClientId const, bool, std::optional<bool>, ::IConnectionEventing::PlayerJoinWorldAttemptState const, int, ::Connection::DisconnectFailReason, ::Json::Value const&, ::TransportLayer, ::NetworkType, ::Social::MultiplayerState, bool, bool, ::Social::MultiplayerServiceIdentifier, std::string const&, std::string const&, std::string const&, std::string const&, bool, bool, bool, ::Connection::ReconnectionType, bool, ulong, ::Social::GameConnectionInfo const&) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventClientLastPackets(uint const&, ::SubClientId const, int, ::Json::Value const&, ::Json::Value const&) = 0;
#else // @header-generator platform
    virtual void fireEventClientLastPackets(
        uint const&          userId,
        ::SubClientId const  subId,
        int                  correlationId,
        ::Json::Value const& lastSentPackets,
        ::Json::Value const& lastReceivedPackets
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignalServiceConnect(::SignalServiceConnectStage, bool, ::Json::Value const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventSignalServiceConnect(
        ::SignalServiceConnectStage stage,
        bool                        bIsSigningInAsHost,
        ::Json::Value const&        stageProperties,
        ::std::string const&        signinId,
        ::std::string const&        correlationId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignalMessagePerformance(std::string const&, ::MessagePerformance const&) = 0;
#else // @header-generator platform
    virtual void fireEventSignalMessagePerformance(
        ::std::string const&        signinId,
        ::MessagePerformance const& messagePerformanceEvent
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnClientDisconnect(::NetworkIdentifier const&, ::SubClientId, bool, ::Connection::DisconnectFailReason, std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventOnClientDisconnect(
        ::NetworkIdentifier const&         id,
        ::SubClientId                      subId,
        bool                               isNetworked,
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               titleMessage,
        ::std::string const&               errorMessage,
        ::std::string const&               codeword
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnServerDisconnect(::Connection::DisconnectFailReason, ::NetworkIdentifier const&, ::SubClientId, std::string const&, ulong, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventOnServerDisconnect(
        ::Connection::DisconnectFailReason reason,
        ::NetworkIdentifier const&         id,
        ::SubClientId                      subId,
        ::std::string const&               reasonContext,
        uint64                             clientCount,
        ::std::string const&               firstTimeStamp
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnServerAsyncJoinTaskVerdict(::nonstd::expected<AsyncJoinAllow, AsyncJoinDeny> const&, ::SubClientId const, uint) = 0;
#else // @header-generator platform
    virtual void fireEventOnServerAsyncJoinTaskVerdict(
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> const& joinVerdict,
        ::SubClientId const                                          subId,
        uint                                                         verdictQueueLength
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventNPLNLifecycle(int, ::Social::MultiplayerState, ::Social::ServiceState) = 0;
#else // @header-generator platform
    virtual void fireEventNPLNLifecycle(
        int                        eventType,
        ::Social::MultiplayerState multiplayerState,
        ::Social::ServiceState     serviceState
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventNPLNRpcFailure(int, int, ::Social::MultiplayerState, ::Social::ServiceState, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>) = 0;
#else // @header-generator platform
    virtual void fireEventNPLNRpcFailure(
        int                                     rpcType,
        int                                     statusCode,
        ::Social::MultiplayerState              multiplayerState,
        ::Social::ServiceState                  serviceState,
        ::std::optional<::std::chrono::seconds> requiredDelay
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventHttpClientError(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventHttpClientError(::std::string const& error) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireGlobalResourcePackCrashRecovery(::PackInstance&, ::mce::UUID, int) = 0;
#else // @header-generator platform
    virtual void
    fireGlobalResourcePackCrashRecovery(::PackInstance& packInstance, ::mce::UUID recoveryID, int order) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireServerConnectionEvent(::IConnectionEventing::ServerConnectionOutcome, uint, double, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName,
        ::std::string const&                           worldId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireServerConnectionAttemptEvent(
        ::std::string const& creatorName,
        bool                 isTransfer,
        ::std::string const& serverAddress
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireTextToSpeechToggled(bool, bool) = 0;
#else // @header-generator platform
    virtual void fireTextToSpeechToggled(bool uiTTS, bool chatTTS) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAppInitFileOpenStats(::Core::Profile::FileCounters const&, ::Core::Profile::FileCounters const&) = 0;
#else // @header-generator platform
    virtual void fireEventAppInitFileOpenStats(
        ::Core::Profile::FileCounters const& openForRead,
        ::Core::Profile::FileCounters const& openForWrite
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStartupPerformance(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventStartupPerformance(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnAppStart(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventOnAppStart(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnAppSuspend(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::IMinecraftEventing::SuspendTriggersDisconnect, bool, bool) = 0;
#else // @header-generator platform
    virtual void fireEventOnAppSuspend(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::SuspendTriggersDisconnect                                             triggersDisconnect,
        bool reconnectOnResumeEnabled,
        bool forceDisableEvents
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnAppResume(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, std::optional<long>) = 0;
#else // @header-generator platform
    virtual void fireEventOnAppResume(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::optional<int64> sessionAuthValidUntil
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnDeviceLost(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventOnDeviceLost(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

    virtual void fireEventHardwareInfo() = 0;

    virtual void fireEventDeviceLost() = 0;

    virtual void fireEventRenderingSizeChanged() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDiskStatus(::DiskStatus, ::Core::LevelStorageState, ulong) = 0;
#else // @header-generator platform
    virtual void fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStorageAreaFull(std::string const&, std::vector<Bedrock::DirectoryEntry> const&) = 0;
#else // @header-generator platform
    virtual void fireEventStorageAreaFull(
        ::std::string const&                            areaPath,
        ::std::vector<::Bedrock::DirectoryEntry> const& diskSizeData
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOptionsUpdated(bool, ::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventOptionsUpdated(
        bool                                                                                        onStartup,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChatSettingsUpdated(::Player const*, std::vector<Social::Events::Property> const&) const = 0;
#else // @header-generator platform
    virtual void fireEventChatSettingsUpdated(
        ::Player const*                                  player,
        ::std::vector<::Social::Events::Property> const& properties
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPerformanceMetrics(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::ProfilerLiteTelemetry const&, bool, int) = 0;
#else // @header-generator platform
    virtual void fireEventPerformanceMetrics(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::ProfilerLiteTelemetry const&                                                              profileTelemetry,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPerformanceContext(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::PerfContextTrackerReport const&, bool, int) = 0;
#else // @header-generator platform
    virtual void fireEventPerformanceContext(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::PerfContextTrackerReport const&                                                           perfContextReport,
        bool                                                                                        IsEcoFrameThrottled,
        int                                                                                         fpsThrottle
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProfilerMetadata(::Bedrock::Profiling::Orchestrator::ProfilerMetadataParams const&) = 0;
#else // @header-generator platform
    virtual void
    fireEventProfilerMetadata(::Bedrock::Profiling::Orchestrator::ProfilerMetadataParams const& params) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProfilerCapture(::Bedrock::Profiling::Orchestrator::ProfilerCaptureParams const&) = 0;
#else // @header-generator platform
    virtual void fireEventProfilerCapture(::Bedrock::Profiling::Orchestrator::ProfilerCaptureParams const& params) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireTextureStreamingPerf(::dragon::texturestreaming::TextureStreamingPerformanceTelemetryData const&) = 0;
#else // @header-generator platform
    virtual void
    fireTextureStreamingPerf(::dragon::texturestreaming::TextureStreamingPerformanceTelemetryData const& perfData) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDevSlashCommandExecuted(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventDevSlashCommandExecuted(::std::string const& commandName, ::std::string const& command) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCommandParseTableTelemetry(bool const, std::vector<IMinecraftEventing::CommandParseTableEntry> const&) const = 0;
#else // @header-generator platform
    virtual void fireCommandParseTableTelemetry(
        bool const                                                         isServer,
        ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerTravelled(::Player*, float, int) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerTravelled(::Player* player, float metersTravelledSinceLastEvent, int newBiome) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventVideoPlayed(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventVideoPlayed(::std::string const& productId, ::std::string const& videoUrl) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRespondedToAcceptContent(::PacksInfoData const&, bool, bool) = 0;
#else // @header-generator platform
    virtual void fireEventRespondedToAcceptContent(
        ::PacksInfoData const& data,
        bool                   accepted,
        bool                   downloadOptionalResourcePacks
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldLoadTimes(std::string const&, std::vector<std::pair<std::string, float>> const) = 0;
#else // @header-generator platform
    virtual void fireEventWorldLoadTimes(
        ::std::string const&                                   calledFromScreen,
        ::std::vector<::std::pair<::std::string, float>> const progressHandlerLoadTimes
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCDNDownloadEvent(std::string const&, std::string const&, std::string const&, ::IMinecraftEventing::CDNDownloadResult const&, ::IMinecraftEventing::CDNDownloadEventOrigin const&, float const&) = 0;
#else // @header-generator platform
    virtual void fireCDNDownloadEvent(
        ::std::string const&                                packId,
        ::std::string const&                                versionNumber,
        ::std::string const&                                hostUrl,
        ::IMinecraftEventing::CDNDownloadResult const&      downloadResult,
        ::IMinecraftEventing::CDNDownloadEventOrigin const& origin,
        float const&                                        elapsedTime
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignInToIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, std::string const&, bool, ::IMinecraftEventing::SignInStage, ::Social::SignInResult, int, ::Social::PlayerIDs, std::string const&) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignOutOfIdentity(::IMinecraftEventing::SignInAccountType, ::Social::IdentitySignInTrigger, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    accountId,
        ::std::string const&                    errorCode
    ) = 0;
#endif // @header-generator platform

    virtual void fireEventAppPaused() = 0;

    virtual void fireEventAppUnpaused() = 0;

    virtual void fireEventAppSurfaceCreated() = 0;

    virtual void fireEventAppSurfaceDestroyed() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const&) = 0;
#else // @header-generator platform
    virtual void fireEventSplitScreenUpdated(::SplitScreenUpdatedEventData const& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPopupClosed(std::string const&) const = 0;
#else // @header-generator platform
    virtual void fireEventPopupClosed(::std::string const& popupName) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldImported(long, ulong) = 0;
#else // @header-generator platform
    virtual void fireEventWorldImported(int64 worldSeed, uint64 worldSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldImportedResult(::FileArchiverOutcome) = 0;
#else // @header-generator platform
    virtual void fireEventWorldImportedResult(::FileArchiverOutcome importResult) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCurrentInputUpdated(uint, ::InputMode) = 0;
#else // @header-generator platform
    virtual void fireCurrentInputUpdated(uint userId, ::InputMode inputMode) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentPackApplied(::PackManifest const&) = 0;
#else // @header-generator platform
    virtual void fireEventTreatmentPackApplied(::PackManifest const& manifest) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPackPlayed(::PackInstance const&, uint) = 0;
#else // @header-generator platform
    virtual void fireEventPackPlayed(::PackInstance const& packInstance, uint priority) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentPackDownloadFailed(std::string, std::string, std::string, std::string) = 0;
#else // @header-generator platform
    virtual void fireEventTreatmentPackDownloadFailed(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentPackDownloaded(std::string, std::string, std::string, std::string) = 0;
#else // @header-generator platform
    virtual void fireEventTreatmentPackDownloaded(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentPackRemoved(std::string) = 0;
#else // @header-generator platform
    virtual void fireEventTreatmentPackRemoved(::std::string packId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPackDeleted(std::string_view, std::string const&, ::PackType, ::PackOrigin, std::string const&, long) = 0;
#else // @header-generator platform
    virtual void fireEventPackDeleted(
        ::std::string_view   reason,
        ::std::string const& packId,
        ::PackType           packType,
        ::PackOrigin         packLocation,
        ::std::string const& packOptimizationVersion,
        int64                freedBytes
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventContentLogsInWorldSession(std::string const&, uint, uint) = 0;
#else // @header-generator platform
    virtual void
    fireEventContentLogsInWorldSession(::std::string const& logArea, uint errorCount, uint warningCount) = 0;
#endif // @header-generator platform

    virtual void fireEventEntitlementCacheLoadTimeout() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow) = 0;
#else // @header-generator platform
    virtual void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireRealmConnectionEventGenericLambdaCalled(::IMinecraftEventing::RealmConnectionFlow, ::IMinecraftEventing::RealmConnectionLambda, ::IMinecraftEventing::RealmConnectionResult) = 0;
#else // @header-generator platform
    virtual void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCompoundCreatorCreated(int, int) = 0;
#else // @header-generator platform
    virtual void fireEventCompoundCreatorCreated(int compoundId, int count) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventElementConstructorUsed(int, int, ::IMinecraftEventing::ElementConstructorUseType) = 0;
#else // @header-generator platform
    virtual void fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEntitySpawned(::Player*, int, uint) = 0;
#else // @header-generator platform
    virtual void fireEventEntitySpawned(::Player* player, int mobType, uint spawnMethod) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventReducerBlockEntered(::ItemDescriptor const&) = 0;
#else // @header-generator platform
    virtual void fireEventReducerBlockEntered(::ItemDescriptor const& item) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRespawn(::Player&, int) = 0;
#else // @header-generator platform
    virtual void fireEventRespawn(::Player& player, int dimID) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerRespawnSearchTime(::Player&, ::PlayerRespawnTelemetryData const&) = 0;
#else // @header-generator platform
    virtual void fireEventServerRespawnSearchTime(::Player& player, ::PlayerRespawnTelemetryData const& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePackSettingsEvent(::PackSettings const&, ::PackManifest const&, std::string) = 0;
#else // @header-generator platform
    virtual void firePackSettingsEvent(
        ::PackSettings const& packSettings,
        ::PackManifest const& manifest,
        ::std::string         serializedPackSettings
    ) = 0;
#endif // @header-generator platform

    virtual void removeTestBuildIdTag() = 0;

    virtual void removeTestTelemetryTag() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTestBuildIdTag(char const*) = 0;
#else // @header-generator platform
    virtual void setTestBuildIdTag(char const* id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTestTelemetryTag(char const*) = 0;
#else // @header-generator platform
    virtual void setTestTelemetryTag(char const* name) = 0;
#endif // @header-generator platform

    virtual void stopDebugEventLoggingForAllListeners() = 0;

    virtual void tick() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMultiplayerClientConnectionStateChanged(std::string const&, uint, uint, uint, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventMultiplayerClientConnectionStateChanged(
        ::std::string const& connectionType,
        uint                 fromState,
        uint                 toState,
        uint                 port,
        ::std::string const& status
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPacketViolationDetected(ulong, std::string, ::PacketViolationResponse, ::MinecraftPacketIds, ::NetworkIdentifier const&, uint, ::SubClientId, ::SubClientId, uint) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerReceivedValidPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId) = 0;
#else // @header-generator platform
    virtual void fireEventServerReceivedValidPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventClientSentOrReceivedPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, std::string, bool) = 0;
#else // @header-generator platform
    virtual void fireEventClientSentOrReceivedPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              clientSubId,
        ::std::string              correlationId,
        bool                       isOutgoing
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventJoinCanceled(::LoadingState) = 0;
#else // @header-generator platform
    virtual void fireEventJoinCanceled(::LoadingState currentState) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireIgnoredNotificationsEvent(::IMinecraftEventing::IgnoredNotificationsType, int, std::set<IMinecraftEventing::IgnoredNotificationSource>) = 0;
#else // @header-generator platform
    virtual void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireClubsEngagementEvent(::IMinecraftEventing::ClubsEngagementAction, ::IMinecraftEventing::ClubsEngagementTargetType, char const*, long const, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        int64 const                                     realmId,
        ::std::string const&                            clubId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireClubsOpenFeedScreenEvent(::IMinecraftEventing::ClubsFeedScreenSource const, long const, std::string const&, int) = 0;
#else // @header-generator platform
    virtual void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const source,
        int64 const                                       realmId,
        ::std::string const&                              clubId,
        int                                               unreadPosts
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEntitlementListInfo(std::vector<ContentIdentity>&, bool) = 0;
#else // @header-generator platform
    virtual void
    fireEventEntitlementListInfo(::std::vector<::ContentIdentity>& entitlementContentIds, bool isLegacyList) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStorage(int, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventStorage(int state, ::std::string const& extra) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDlcStorageFull(std::string const&, ulong, ulong, ulong, ulong) = 0;
#else // @header-generator platform
    virtual void fireEventDlcStorageFull(
        ::std::string const& productId,
        uint64               dlcSize,
        uint64               onDiskScratchSpace,
        uint64               scratchSpace,
        uint64               premiumSpace
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTotalDlcSizes(ulong, ulong) = 0;
#else // @header-generator platform
    virtual void fireEventTotalDlcSizes(uint64 resourceSize, uint64 worldTemplateSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlatformStorePurchaseFailure(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void
    fireEventPlatformStorePurchaseFailure(::std::string const& productId, ::std::string const& errorMessage) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPurchaseFailureDetails(
        int                  httpCode,
        ::std::string const& errorMessage,
        ::std::string const& productId,
        ::std::string const& transactionId
    ) = 0;
#endif // @header-generator platform

    virtual void fireEventTreatmentsCleared() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTreatmentsSet(std::vector<std::string> const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void
    fireEventTreatmentsSet(::std::vector<::std::string> const& treatments, ::std::string const& treatmentContext) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateAppliedTreatmentPacks(std::vector<std::string> const&) = 0;
#else // @header-generator platform
    virtual void updateAppliedTreatmentPacks(::std::vector<::std::string> const& treatmentTags) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProgressionsSet(std::vector<std::string> const&) = 0;
#else // @header-generator platform
    virtual void fireEventProgressionsSet(::std::vector<::std::string> const& progressions) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPackImportTimeout(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPackImportTimeout(::std::string const& productId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventFatalClientPackError(::FatalClientPackErrorType, ::gsl::span<const std::string>) = 0;
#else // @header-generator platform
    virtual void
    fireEventFatalClientPackError(::FatalClientPackErrorType errorType, ::gsl::span<::std::string const> packIds) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPackActivationError(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventPackActivationError(
        ::std::string const& errorType,
        ::std::string const& errorDetail,
        ::std::string const& packAction,
        ::std::string const& packId,
        ::std::string const& contentType,
        bool                 isFatal
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreErrorPage(std::string const&, std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventStoreErrorPage(
        ::std::string const& errorCode,
        ::std::string const& pageId,
        ::std::string const& discoveryServiceTitleId,
        ::std::string const& playFabTitleId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setServerIdsforClient(std::string const&, std::string const&, ::Social::Events::ServerTelemetryData const&) = 0;
#else // @header-generator platform
    virtual void setServerIdsforClient(
        ::std::string const&                         multiplayerCorrelationId,
        ::std::string const&                         serverVersion,
        ::Social::Events::ServerTelemetryData const& serverTelemetryData
    ) = 0;
#endif // @header-generator platform

    virtual void removeServerIdsForClient() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setConnectionCommonProperties(uint, std::string const&, ::NetworkType) = 0;
#else // @header-generator platform
    virtual void
    setConnectionCommonProperties(uint userId, ::std::string const& connectionGUID, ::NetworkType networkType) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeConnectionCommonProperties(uint) = 0;
#else // @header-generator platform
    virtual void removeConnectionCommonProperties(uint userId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void trySetExperienceIdentifiers(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void
    trySetExperienceIdentifiers(::std::string const& experienceId, ::std::string const& existingSessionId) = 0;
#endif // @header-generator platform

    virtual void removeExperienceIdentifiers() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getExperienceId() const = 0;
#else // @header-generator platform
    virtual ::std::string getExperienceId() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getExperienceSessionId() const = 0;
#else // @header-generator platform
    virtual ::std::string getExperienceSessionId() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSearchCatalogRequest(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventSearchCatalogRequest(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreSessionResponse(std::string const&, int const, int const, bool const) = 0;
#else // @header-generator platform
    virtual void fireEventStoreSessionResponse(
        ::std::string const& responseType,
        int const            status,
        int const            retryCount,
        bool const           asyncServicesManager
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreDiscoveryRequestResponse(int const, int const, bool const) = 0;
#else // @header-generator platform
    virtual void fireEventStoreDiscoveryRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreInventoryRefreshRequestResponse(int const, int const, bool const) = 0;
#else // @header-generator platform
    virtual void fireEventStoreInventoryRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventInventoryVersionRefreshRequestResponse(int const, int const, bool const) = 0;
#else // @header-generator platform
    virtual void fireEventInventoryVersionRefreshRequestResponse(
        int const  status,
        int const  retryAttempt,
        bool const asyncServicesManager
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerDrivenLayoutPageLoaded(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, std::string, int, int, int, int, int) = 0;
#else // @header-generator platform
    virtual void fireEventServerDrivenLayoutPageLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        int                                                                                         requestSize,
        int                                                                                         responseSize,
        int                                                                                         rowCount,
        int                                                                                         itemCount,
        int                                                                                         imageCount
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerDrivenLayoutImagesLoaded(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, std::string, ::ImageTelemetryInfo const&) = 0;
#else // @header-generator platform
    virtual void fireEventServerDrivenLayoutImagesLoaded(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::std::string                                                                               pageID,
        ::ImageTelemetryInfo const&                                                                 imageTelemetryInfo
    ) = 0;
#endif // @header-generator platform

    virtual void fireEventLockedItemGiven() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerBounced(::Player*, ::Block const&, int) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerBounced(::Player* player, ::Block const& block, int bounceHeight) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSetValidForAchievements(::Player*, bool) = 0;
#else // @header-generator platform
    virtual void fireEventSetValidForAchievements(::Player* player, bool currentlyValidForAchievements) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAchievementReceived(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventAchievementReceived(
        ::std::string const& title,
        ::std::string const& description,
        ::std::string const& achievementId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePlayerUndergroundStatus(::Player*, bool);
#else // @header-generator platform
    virtual void updatePlayerUndergroundStatus(::Player* player, bool isUnderground);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerAttemptingExploit(::Player*, ::IMinecraftEventing::ExploitType) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerAttemptingExploit(::Player* player, ::IMinecraftEventing::ExploitType exploitType) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldLoaded(::Player*, ::brstd::function_ref<void (Social::Events::EventManager&, Social::Events::Event&) const, void (Social::Events::EventManager&, Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventWorldLoaded(
        ::Player* player,
        ::brstd::function_ref<
            void(::Social::Events::EventManager&, ::Social::Events::Event&) const,
            void(::Social::Events::EventManager&, ::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMarkLevelForSync(std::string const&, long, long, ::IMinecraftEventing::MarkLevelForSyncReason) = 0;
#else // @header-generator platform
    virtual void fireEventMarkLevelForSync(
        ::std::string const&                         levelId,
        int64                                        local,
        int64                                        remote,
        ::IMinecraftEventing::MarkLevelForSyncReason reason
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireMinecraftVersionLaunched(bool) = 0;
#else // @header-generator platform
    virtual void fireMinecraftVersionLaunched(bool launchedLegacy) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireMinecraftVersionInviteAccepted(bool, ulong) = 0;
#else // @header-generator platform
    virtual void fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireInviteStatusReceived(std::string) = 0;
#else // @header-generator platform
    virtual void fireInviteStatusReceived(::std::string id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireInviteStatusSentImpl(uint, std::vector<std::string>) = 0;
#else // @header-generator platform
    virtual void fireInviteStatusSentImpl(uint userId, ::std::vector<::std::string> invitationIds) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireDayOneExperienceStateChanged(::IMinecraftEventing::DayOneExperienceState, std::optional<uint>, std::optional<ulong>) = 0;
#else // @header-generator platform
    virtual void fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        ::std::optional<uint>                       importedWorldIndex,
        ::std::optional<uint64>                     importedWorldTimestamp
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireContentDecryptionFailure(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireContentDecryptionFailure(
        ::std::string const& failedContentIds,
        ::std::string const& contentKey,
        ::std::string const& failurePoint
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWorldConversionAttemptEvent(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireWorldConversionAttemptEvent(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWorldConversionInitiatedEvent(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireWorldConversionInitiatedEvent(::std::string const& converterVersion) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWorldUpgradedToCnCPart2(bool, std::string const&, ::Experiments const&, std::string const&, ::LevelSeed64, float) = 0;
#else // @header-generator platform
    virtual void fireWorldUpgradedToCnCPart2(
        bool                 willUpgrade,
        ::std::string const& baseGameVersion,
        ::Experiments const& experiments,
        ::std::string const& lastOpenedVersion,
        ::LevelSeed64        worldSeed,
        float                worldSizeMB
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAssertFailed(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventAssertFailed(::std::string const& assertBucket, ::std::string const& message) = 0;
#endif // @header-generator platform

    virtual void fireEventCrashSystemFailedToInit() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireChatUsedEvent(uint, bool) = 0;
#else // @header-generator platform
    virtual void fireChatUsedEvent(uint chatLength, bool isSlashCommand) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventJoinByCode(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventJoinByCode(::std::string const&) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBlockPlacedByCommand(::Block const&, int) = 0;
#else // @header-generator platform
    virtual void fireEventBlockPlacedByCommand(::Block const& placedBlock, int numberOfBlocksPlaced) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerPlayerJoinedGame(::NetworkIdentifier const&, ::SubClientId, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventServerPlayerJoinedGame(
        ::NetworkIdentifier const& id,
        ::SubClientId              subId,
        ::std::string const&       firstConnectionTime
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const& pluginResult, bool client) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScriptPluginRun(::ScriptPluginResult const&, std::chrono::duration<long long, std::ratio<1, 1000000>>, bool) = 0;
#else // @header-generator platform
    virtual void fireEventScriptPluginRun(
        ::ScriptPluginResult const& pluginResult,
        ::std::chrono::microseconds runDuration,
        bool                        client
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScriptDebuggerListen(bool, bool) = 0;
#else // @header-generator platform
    virtual void fireEventScriptDebuggerListen(bool client, bool autoAttach) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScriptDebuggerConnect(bool, bool, int) = 0;
#else // @header-generator platform
    virtual void fireEventScriptDebuggerConnect(bool client, bool autoAttach, int retries) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorEventToolActivated(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEditorEventToolActivated(::std::string const& toolName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorUndo(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEditorUndo(::std::string const& transactionName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorRedo(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEditorRedo(::std::string const& transactionName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorScriptAction(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEditorScriptAction(
        ::std::string const& scriptSource,
        ::std::string const& actionName,
        ::std::string const& actionMetadata
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEditorTutorialEvent(std::string_view, std::optional<std::string> const&, std::string const&, std::optional<std::string> const&) = 0;
#else // @header-generator platform
    virtual void fireEditorTutorialEvent(
        ::std::string_view                    type,
        ::std::optional<::std::string> const& state,
        ::std::string const&                  currentStage,
        ::std::optional<::std::string> const& previousStage
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldLoadedClassroomCustomization(::IMinecraftEventing::WorldClassroomCustomization, ::buffer_span<std::pair<std::string_view, std::string_view>>) = 0;
#else // @header-generator platform
    virtual void fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                  customization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireClassroomSettingUpdated(::ClassroomSetting, ::SettingsScreenMode) = 0;
#else // @header-generator platform
    virtual void fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventNpcPropertiesUpdated(::Actor&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventNpcPropertiesUpdated(::Actor& npcOwner, bool isEditorWorldbuilder) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor&) = 0;
#else // @header-generator platform
    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor& board) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCameraUsed(bool) = 0;
#else // @header-generator platform
    virtual void fireEventCameraUsed(bool isSelfie) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPortfolioExported(int, int) = 0;
#else // @header-generator platform
    virtual void fireEventPortfolioExported(int imageCount, int captionedCount) = 0;
#endif // @header-generator platform

    virtual void fireQuickPlayEvent() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePermissionsSetEvent(::PlayerPermissionLevel const, ::CommandPermissionLevel const, ::PlayerPermissionLevel const, ::CommandPermissionLevel const) = 0;
#else // @header-generator platform
    virtual void firePermissionsSetEvent(
        ::PlayerPermissionLevel const  prevPlayerPermissionLevel,
        ::CommandPermissionLevel const prevCommandPermissionLevel,
        ::PlayerPermissionLevel const  playerPermissionLevel,
        ::CommandPermissionLevel const commandPermissionLevel
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireExternalUriLaunched(std::string const&) const = 0;
#else // @header-generator platform
    virtual void fireExternalUriLaunched(::std::string const& uri) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource) const = 0;
#else // @header-generator platform
    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireUserGeneratedUriLaunchFailed(::UserGeneratedUriSource, ::Util::ResourceUri::ValidationStatus, std::string const&) const = 0;
#else // @header-generator platform
    virtual void fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        ::std::string const&                  additionalData
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEmptyLibraryCategoryError(std::string const&) const = 0;
#else // @header-generator platform
    virtual void fireEventEmptyLibraryCategoryError(::std::string const& categoryTitle) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderCachePerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const = 0;
#else // @header-generator platform
    virtual void
    fireCodeBuilderCachePerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderLoadPerformance(std::string const&, ulong, ulong, std::chrono::duration<long long, std::ratio<1, 1000>>) const = 0;
#else // @header-generator platform
    virtual void fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const = 0;
#else // @header-generator platform
    virtual void
    fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireLibraryButtonPressed(
        ::std::string const& productId,
        ::std::string const& worldName,
        ::std::string const& buttonAction
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCourseButtonPressed(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireCourseButtonPressed(::std::string const& courseTitle, ::std::string const& courseId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireLessonActionTaken(std::string const&, std::string const&, std::string const&, ::IMinecraftEventing::EducationLessonAction, int) = 0;
#else // @header-generator platform
    virtual void fireLessonActionTaken(
        ::std::string const&                        lessonTitle,
        ::std::string const&                        lessonId,
        ::std::string const&                        courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireLessonProgressEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, int) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireShareButtonPressed(std::string const&, ::EduShareUriType, ::EduShareMethodType, bool) = 0;
#else // @header-generator platform
    virtual void fireShareButtonPressed(
        ::std::string const& location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const) const = 0;
#else // @header-generator platform
    virtual void
    fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const entryPoint) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireInAppCodeBuilderActivated(::OpenCodeMethod, std::string const&, std::string const&, std::string const&) const = 0;
#else // @header-generator platform
    virtual void fireInAppCodeBuilderActivated(
        ::OpenCodeMethod     method,
        ::std::string const& ideName,
        ::std::string const& educationCreatorID,
        ::std::string const& educationCreatorWorldID
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireInAppCodeBuilderDismissed(std::string const&) const = 0;
#else // @header-generator platform
    virtual void fireInAppCodeBuilderDismissed(::std::string const& ideName) const = 0;
#endif // @header-generator platform

    virtual void fireCodeCommandButtonPressed() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireIDESelected(std::string const&) const = 0;
#else // @header-generator platform
    virtual void fireIDESelected(::std::string const& name) const = 0;
#endif // @header-generator platform

    virtual void fireEventEduResources() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const&) const = 0;
#else // @header-generator platform
    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const = 0;
#endif // @header-generator platform

    virtual void fireEventCodeBuilderClosed() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCodeBuilderLog(::Webview::TelemetryCommonProperties const&, std::string const&, std::string&) const = 0;
#else // @header-generator platform
    virtual void fireEventCodeBuilderLog(
        ::Webview::TelemetryCommonProperties const& properties,
        ::std::string const&                        message,
        ::std::string&                              level
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCodeBuilderScoreChanged(std::string const&, int const) const = 0;
#else // @header-generator platform
    virtual void fireEventCodeBuilderScoreChanged(::std::string const& objective, int const score) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCodeBuilderRuntimeAction(std::string const&) const = 0;
#else // @header-generator platform
    virtual void fireEventCodeBuilderRuntimeAction(::std::string const& action) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEduServiceStatus(std::string const&, std::string const&, int, ::buffer_span<std::pair<std::string_view, std::string_view>>) const = 0;
#else // @header-generator platform
    virtual void fireEventEduServiceStatus(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        int                                                                durationMS,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWebviewDownload(std::string const&, ::WebviewDownloadInfo const&) const = 0;
#else // @header-generator platform
    virtual void
    fireEventWebviewDownload(::std::string const& downloadState, ::WebviewDownloadInfo const& downloadInfo) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEduServiceRequestFailed(std::string const&, std::string const&, std::string const&, ::buffer_span<std::pair<std::string_view, std::string_view>>) const = 0;
#else // @header-generator platform
    virtual void fireEduServiceRequestFailed(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        ::std::string const&                                               error,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventButtonPressed(std::string const&, std::unordered_map<std::string, std::string> const&) const = 0;
#else // @header-generator platform
    virtual void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&) const = 0;
#else // @header-generator platform
    virtual void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOptionsChanged(std::string const&, std::unordered_map<std::string, int> const&) const = 0;
#else // @header-generator platform
    virtual void fireEventOptionsChanged(
        ::std::string const&                            optionGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOptionsChangedAlt(std::string const&, std::unordered_map<std::string, Social::Events::OptionChange> const&) const = 0;
#else // @header-generator platform
    virtual void fireEventOptionsChangedAlt(
        ::std::string const&                                                       optionGroup,
        ::std::unordered_map<::std::string, ::Social::Events::OptionChange> const& changes
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTagButtonPressed(std::string const&, bool) const = 0;
#else // @header-generator platform
    virtual void fireEventTagButtonPressed(::std::string const& tag, bool showMore) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLevelDataOverride(std::string_view) const = 0;
#else // @header-generator platform
    virtual void fireEventLevelDataOverride(::std::string_view valueName) const = 0;
#endif // @header-generator platform

    virtual void fireEventEduContentVerificationFailed() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLibrarySearch(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) const = 0;
#else // @header-generator platform
    virtual void fireEventLibrarySearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLibrarySearchItemSelected(int const, int const, std::string const&, int const, int const) const = 0;
#else // @header-generator platform
    virtual void fireEventLibrarySearchItemSelected(
        int const            sessionId,
        int const            correlationId,
        ::std::string const& productId,
        int const            row,
        int const            column
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType, double) const = 0;
#else // @header-generator platform
    virtual void
    fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldExported(long, ulong) = 0;
#else // @header-generator platform
    virtual void fireEventWorldExported(int64 worldSeed, uint64 worldSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventControlRemappedByPlayer(std::string const&, ::RawInputType, int) const = 0;
#else // @header-generator platform
    virtual void
    fireEventControlRemappedByPlayer(::std::string const& actionName, ::RawInputType inputType, int keyCode) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDifficultySet(::SharedTypes::Legacy::Difficulty, ::SharedTypes::Legacy::Difficulty) = 0;
#else // @header-generator platform
    virtual void fireEventDifficultySet(
        ::SharedTypes::Legacy::Difficulty oldDifficulty,
        ::SharedTypes::Legacy::Difficulty newDifficulty
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGameRulesUpdated(float, float, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGameRulesUpdated(int, int, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventGameRulesUpdated(int oldValue, int newValue, ::std::string const& gameRuleName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGameRulesUpdated(bool, bool, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDefaultGameTypeChanged(::GameType, ::GameType) = 0;
#else // @header-generator platform
    virtual void fireEventDefaultGameTypeChanged(::GameType oldGameType, ::GameType newGameType) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventNewContentCheckCompleted(std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventNewContentCheckCompleted(::std::string const& newContentPrefix, bool hasNewStoreContent) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEncyclopediaTopicChanged(std::string const&, ::InputMode) = 0;
#else // @header-generator platform
    virtual void fireEventEncyclopediaTopicChanged(::std::string const& topicName, ::InputMode inputMode) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventHowToPlayTopicChanged(std::string const&, ::InputMode) = 0;
#else // @header-generator platform
    virtual void fireEventHowToPlayTopicChanged(::std::string const& topicName, ::InputMode inputMode) = 0;
#endif // @header-generator platform

    virtual void fireEventAndroidHelpRequest() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldFilesListed(ulong, ulong, ulong, ulong) = 0;
#else // @header-generator platform
    virtual void
    fireEventWorldFilesListed(uint64 numLevels, uint64 totalSizeMB, uint64 largestLevelMB, uint64 smallestLevelMB) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLabTableCreated(int, int, int) = 0;
#else // @header-generator platform
    virtual void fireEventLabTableCreated(int reactionId, int productId, int productAux) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageSay(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerMessageSay(::std::string const& fromName, ::std::string const& message) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerMessageTell(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageChat(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerMessageChat(::std::string const& fromName, ::std::string const& message) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageMe(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerMessageMe(::std::string const& fromName, ::std::string const& message) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerMessageTitle(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerDamaged(::Player*, ::SharedTypes::Legacy::ActorDamageCause) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerDamaged(::Player* player, ::SharedTypes::Legacy::ActorDamageCause damageCause) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerKicked(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerKicked(::std::string const& sessionType, ::std::string const& kickedPlayer) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerBanned(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerBanned(::std::string const& bannedPlayer) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmShared(std::string const&, ::IMinecraftEventing::ShareMode const&, long const&) = 0;
#else // @header-generator platform
    virtual void fireEventRealmShared(
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode,
        int64 const&                           worldId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmMemberlistCleared(long const&, int const&) = 0;
#else // @header-generator platform
    virtual void fireEventRealmMemberlistCleared(int64 const& worldId, int const& numberOfUsersRemoved) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmUrlGenerated(std::string const&, long const&) = 0;
#else // @header-generator platform
    virtual void fireEventRealmUrlGenerated(::std::string const& url, int64 const& worldId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStructureExport(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::IMinecraftEventing::ExportOutcome, ::IMinecraftEventing::ExportStage) const = 0;
#else // @header-generator platform
    virtual void fireEventStructureExport(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::IMinecraftEventing::ExportOutcome                                                         outcome,
        ::IMinecraftEventing::ExportStage                                                           stage
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventContentShared(std::string const&, std::string const&, ::IMinecraftEventing::ShareMode const&) = 0;
#else // @header-generator platform
    virtual void fireEventContentShared(
        ::std::string const&                   productId,
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStorageReport(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventStorageReport(::std::string const& report) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStackLoaded(::StackStats const&, ::gsl::span<const PackInstance>) = 0;
#else // @header-generator platform
    virtual void fireEventStackLoaded(::StackStats const& stats, ::gsl::span<::PackInstance const> packInstances) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUnknownBlockReceived(::NewBlockID const&, ushort) = 0;
#else // @header-generator platform
    virtual void fireEventUnknownBlockReceived(::NewBlockID const& blockId, ushort data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignInEdu(std::string const&, ::edu::Role, ::Identity::EduSignInStage, std::string const&, std::string const&, std::vector<std::pair<std::string, std::string>> const&) = 0;
#else // @header-generator platform
    virtual void fireEventSignInEdu(
        ::std::string const&                                            mutsUserId,
        ::edu::Role                                                     role,
        ::Identity::EduSignInStage                                      stage,
        ::std::string const&                                            tenantType,
        ::std::string const&                                            error,
        ::std::vector<::std::pair<::std::string, ::std::string>> const& details
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignOutEdu(std::string const&, ::edu::Role, std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventSignOutEdu(
        ::std::string const& mutsUserId,
        ::edu::Role          role,
        ::std::string const& tenantType,
        ::std::string const& action,
        ::std::string const& error
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSwitchAccountEdu(std::string const&, ::edu::Role, std::string const&) = 0;
#else // @header-generator platform
    virtual void
    fireEventSwitchAccountEdu(::std::string const& mutsUserId, ::edu::Role role, ::std::string const& tenantType) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource) = 0;
#else // @header-generator platform
    virtual void fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPopupFiredEdu(std::string const&, std::string const&, std::string const&, std::string const&, ::ActiveDirectoryAction const) = 0;
#else // @header-generator platform
    virtual void fireEventPopupFiredEdu(
        ::std::string const&          mutsUserId,
        ::std::string const&          dialogType,
        ::std::string const&          experienceId,
        ::std::string const&          title,
        ::ActiveDirectoryAction const postAction
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayIntegrityCheck(std::string const&, std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPlayIntegrityCheck(
        ::std::string const& result,
        ::std::string const& appRecognitionVerdict,
        ::std::string const& deviceIntegrity,
        ::std::string const& appLicensingVerdict
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCloudOperationStartedEdu(::EduCloudUtils::Operation const, ::EduCloud::CloudItemType const, std::string const&, ulong const, std::optional<std::string> const&) = 0;
#else // @header-generator platform
    virtual void fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::EduCloud::CloudItemType const       cloudItemType,
        ::std::string const&                  cloudCorrelationId,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCloudMyWorldsSummary(int const, int const, int const, int const, int const) = 0;
#else // @header-generator platform
    virtual void fireEventCloudMyWorldsSummary(
        int const totalWorldsCount,
        int const placeholderCount,
        int const needsUploadCount,
        int const ctagMismatchCount,
        int const conflictCount
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCloudOperationEndedEdu(::EduCloudUtils::Operation const, ::EduCloud::CloudItemType const, std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>> const, uint const, ulong const, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&, std::optional<std::string> const&) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCloudConflictCheckEdu(std::string const&, ::EduCloud::ConflictResolutionStatus const) = 0;
#else // @header-generator platform
    virtual void fireEventCloudConflictCheckEdu(
        ::std::string const&                       cloudCorrelationId,
        ::EduCloud::ConflictResolutionStatus const conflictStatus
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPurchaseGameAttempt(
        ::std::string const& storeId,
        ::std::string const& activeTab,
        ::std::string const& productId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPurchaseGameResult(int) = 0;
#else // @header-generator platform
    virtual void fireEventPurchaseGameResult(int purchaseResult) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTrialDeviceIdCorrelation(long, std::string const&, long, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventTrialDeviceIdCorrelation(
        int64                myTime,
        ::std::string const& theirId,
        int64                theirTime,
        ::std::string const& theirLastSessionId
    ) = 0;
#endif // @header-generator platform

    virtual void fireEventDeviceIdManagerFailOnIdentityGained() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const&) = 0;
#else // @header-generator platform
    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const& msg) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPushNotificationOpened(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPushNotificationOpened(::std::string const& threadId, ::std::string const& deepLink) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePerfTestEvent(std::string const&, std::string const&, std::string const&, uint, uint, std::string const&, std::vector<std::pair<std::string, float>> const&) = 0;
#else // @header-generator platform
    virtual void firePerfTestEvent(
        ::std::string const&                                    testArtifact,
        ::std::string const&                                    modelName,
        ::std::string const&                                    renderSize,
        uint                                                    renderDistance,
        uint                                                    simDistance,
        ::std::string const&                                    memorySize,
        ::std::vector<::std::pair<::std::string, float>> const& testArtifactData
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLicenseCheck(bool, ::ExtraLicenseData&) = 0;
#else // @header-generator platform
    virtual void fireEventLicenseCheck(bool isLicensed, ::ExtraLicenseData& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireQueryOfferResult(std::string const&, int, bool) = 0;
#else // @header-generator platform
    virtual void fireQueryOfferResult(::std::string const& storeID, int NumberOfOffers, bool QuerySucceeded) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventQueryPurchasesResult(std::string const&, std::string const&, int, bool) = 0;
#else // @header-generator platform
    virtual void fireEventQueryPurchasesResult(
        ::std::string const& storeID,
        ::std::string const& priorPurchaseIds,
        int                  NumberOfPurchases,
        bool                 QuerySucceeded
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldGenerated(std::string const&, ::LevelSettings const&, bool) = 0;
#else // @header-generator platform
    virtual void
    fireEventWorldGenerated(::std::string const& levelId, ::LevelSettings const& levelSettings, bool fromTemplate) = 0;
#endif // @header-generator platform

    virtual void fireEventCopyWorldEducationEnabled() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBundleSubOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventBundleSubOfferClicked(
        int                  offerIndex,
        int                  bundleSubOfferCount,
        ::std::string const& telemetryId,
        ::std::string const& productId,
        bool                 isOnSale,
        ::std::string const& timeRemainingOnSale
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreOfferClicked(std::string const, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventStoreOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreOfferClicked(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventStoreOfferClicked(::std::string const telemetryId, ::std::string const& productId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaOfferClicked(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaOfferClicked(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventStoreSearch(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventStoreSearch(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSearchItemSelected(int const, int const, std::string const&, int const, int const, int const, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventSearchItemSelected(
        int const            correlationId,
        int const            sessionId,
        ::std::string const& productId,
        int const            row,
        int const            column,
        int const            currentPage,
        ::std::string const& searchType
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUserListUpdated(std::string const&, std::string const&, std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventCreatorFollowedUnfollowed(std::string const&, std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventCreatorFollowedUnfollowed(
        ::std::string const& creatorId,
        ::std::string const& operation,
        bool                 success
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUgcAcquisitionStateChanged(std::string const&, ulong, double, bool, int, bool, int, std::string const&, std::string const&, int, int, bool) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmsGeneralCall(std::string const&, ::Bedrock::Http::Status) = 0;
#else // @header-generator platform
    virtual void fireEventRealmsGeneralCall(::std::string const& callName, ::Bedrock::Http::Status returnCode) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmsRealmSpecificCall(std::string const&, long, ::Bedrock::Http::Status) = 0;
#else // @header-generator platform
    virtual void fireEventRealmsRealmSpecificCall(
        ::std::string const&    callName,
        int64                   realmId,
        ::Bedrock::Http::Status returnCode
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmDownload(std::string const&, std::string const&, int const, int const, int const) = 0;
#else // @header-generator platform
    virtual void fireEventRealmDownload(
        ::std::string const& correlationId,
        ::std::string const& downloadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmBackupDownloadFailed(int const, std::string const&, long const, long const, ::gsl::span<const std::string>) = 0;
#else // @header-generator platform
    virtual void fireEventRealmBackupDownloadFailed(
        int const                        realmId,
        ::std::string const&             reason,
        int64 const                      worldSizeBytes,
        int64 const                      availableStorageBytes,
        ::gsl::span<::std::string const> packIds
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmUpload(std::string const&, std::string const&, int const, int const, int const, bool const) = 0;
#else // @header-generator platform
    virtual void fireEventRealmUpload(
        ::std::string const& correlationId,
        ::std::string const& uploadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB,
        bool const           isPack
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmsPackUpload(int const, int const, std::string const&, std::string const&, ::PackType, std::string const&, std::string const&, bool const, bool const, ::PackOrigin, int const, ulong const) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow) = 0;
#else // @header-generator platform
    virtual void
    fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireRealmConnectionEventRealmAPIResponse(::IMinecraftEventing::RealmConnectionFlow, int) = 0;
#else // @header-generator platform
    virtual void fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getSessionId() = 0;
#else // @header-generator platform
    virtual ::std::string getSessionId() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChunkLoaded(::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void fireEventChunkLoaded(::LevelChunk& chunk) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChunkUnloaded(::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void fireEventChunkUnloaded(::LevelChunk& chunk) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChunkChanged(::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void fireEventChunkChanged(::LevelChunk& chunk) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<Level>) = 0;
#else // @header-generator platform
    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::Level> level) = 0;
#endif // @header-generator platform

    virtual void fireEventLevelDestruct() = 0;

    virtual void flagEventDeepLink() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flagEventPlayerGameTypeDefault(bool) = 0;
#else // @header-generator platform
    virtual void flagEventPlayerGameTypeDefault(bool isDefault) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fileEventCloudWorldPullFailed(std::string const&, std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void fileEventCloudWorldPullFailed(
        ::std::string const& reason,
        ::std::string const& worldID,
        bool                 localLevelDatUsed
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLevelDatLoadFailed(std::string const&, std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void
    fireEventLevelDatLoadFailed(::std::string const& reason, ::std::string const& worldID, bool isFatal) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldCorruptionCausedWorldShutdown(::LevelStorageEventingContext const&, std::string const&, std::optional<bool>) = 0;
#else // @header-generator platform
    virtual void fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const& context,
        ::std::string const&                 reason,
        ::std::optional<bool>                isOutOfDiskSpace
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventClientLeftGameDueToUnrecoverableError(::std::string const& reason, bool isServer) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerShutdownDueToError(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventServerShutdownDueToError(::std::string const& reason) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventServerInitializationFailed(std::string const&, bool, bool) = 0;
#else // @header-generator platform
    virtual void fireEventServerInitializationFailed(
        ::std::string const& failReason,
        bool                 serverLevelExists,
        bool                 serverNetworkHandlerValid
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDBStorageSizeSnapshot(::LevelStorageEventingContext const&, ::DBStorageFolderWatcher const&, ::DBStorageFolderWatcherSnapshotKind) = 0;
#else // @header-generator platform
    virtual void fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const& context,
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLevelDBPerformanceData(::LevelStorageEventingContext const&, ::DBStoragePerformanceTelemetryData const&) = 0;
#else // @header-generator platform
    virtual void fireEventLevelDBPerformanceData(
        ::LevelStorageEventingContext const&       context,
        ::DBStoragePerformanceTelemetryData const& perfData
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDBReadFail(::LevelStorageEventingContext const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventDBReadFail(::LevelStorageEventingContext const& context, ::std::string const& reason) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSidebarNavigation(uint const&, std::string const&, std::string const&, int const, bool const, bool const, bool const) = 0;
#else // @header-generator platform
    virtual void fireEventSidebarNavigation(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& telemetryId,
        int const            depthLevel,
        bool const           isSelected,
        bool const           areChildrenVisible,
        bool const           hasChildren
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSidebarVerboseToggled(uint const&, std::string const&, std::string const&, bool const) = 0;
#else // @header-generator platform
    virtual void fireEventSidebarVerboseToggled(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& verboseNavigationType,
        bool const           verboseState
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaUserLoadedActive(::persona::ProfileType const, std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaUserLoadedActive(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         personaUsesClassicSkin
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaItemPreviewed(::persona::ProfileType const, std::string const&, std::string const&, uint, uint, ::IMinecraftEventing::PromotionType, bool, std::string const&, std::string const&, double, ::StoreEventData::StoreType) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaAvatarUpdated(::persona::ProfileType const, std::vector<std::string> const&, std::vector<bool> const&, std::vector<bool> const&, bool, bool, std::string const&, std::string const&, std::string const&, bool, std::vector<std::string> const&, std::vector<std::string> const&) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaSkinChanged(::persona::ProfileType const, std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaSkinChanged(
        ::persona::ProfileType const personaProfile,
        ::std::string const&         classicSkinId,
        bool                         isClassicSkinUsed
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaAvatarsListed(std::vector<persona::ProfileType> const&) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaAvatarsListed(::std::vector<::persona::ProfileType> const& profileTypesUsed) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaEmotePlayed(std::string const&, bool, int) = 0;
#else // @header-generator platform
    virtual void
    fireEventPersonaEmotePlayed(::std::string const& emoteProductId, bool isEmoteEndedEarly, int emoteSlotId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDefaultCastSelected(int, ::mce::UUID, std::string const&) = 0;
#else // @header-generator platform
    virtual void
    fireEventDefaultCastSelected(int previewIndex, ::mce::UUID appearanceId, ::std::string const& appearanceName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaInitalizationEvent(uint, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaInitalizationEvent(
        uint                 secondsToCompletion,
        ::std::string const& status,
        ::std::string const& user
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaGeneralError(std::string const&, uint) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaGeneralError(::std::string const& personaErrorName, uint duplicateErrorsFired) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaLoadingPieces(uint, double) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaPiecePackEviction(uint, uint, uint, uint, bool, double) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaPiecePackEviction(
        uint   cacheSizeBeforeEviction,
        uint   evictedCount,
        uint   failedCount,
        uint   protectedCount,
        bool   evictionLimitedByBatch,
        double passDurationInSeconds
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaCreationFailed(std::string_view, std::string_view, bool, bool, std::string_view, std::string_view) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaCreationFailed(
        ::std::string_view errorName,
        ::std::string_view pieceId,
        bool               missingTop,
        bool               missingBottom,
        ::std::string_view repositoryPieceType,
        ::std::string_view appearancePieceType
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPersonaCategoryInformation(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPersonaCategoryInformation(::std::string const& categoryInformation) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDisplayLoggedError(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventDisplayLoggedError(
        ::std::string const& errorMessageTemplate,
        ::std::string const& errorMessage,
        ::std::string const& errorParameters
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const& worldPath,
        ::std::string const& levelId,
        ::std::string const& deletionCandidate
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireStructureBlockAction(::IMinecraftEventing::StructureBlockActionType, ::StructureEditorData const&, ::StructureTelemetryClientData const*) = 0;
#else // @header-generator platform
    virtual void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireStructureBlockRedstoneActivated(::IMinecraftEventing::StructureBlockActionType, ::StructureEditorData const&, ::StructureTelemetryClientData const*) = 0;
#else // @header-generator platform
    virtual void fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOreUIError(uint const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventOreUIError(uint const& userId, ::std::string const& errorType) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOreUIScreenPerformance(uint const&, ::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>) = 0;
#else // @header-generator platform
    virtual void fireEventOreUIScreenPerformance(
        uint const&                                                                                 userId,
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool const) = 0;
#else // @header-generator platform
    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool const           isOwner
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnboardingWorldCreationUsage(bool, bool, bool) = 0;
#else // @header-generator platform
    virtual void fireEventOnboardingWorldCreationUsage(
        bool onboardingWorldCreationUsed,
        bool hasWorlds,
        bool hasOnlyBaseGamePacks
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDeviceAccountSuccess(bool, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventDeviceAccountSuccess(bool isNewAccount, ::std::string const& accountID) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDeviceAccountFailure(::IMinecraftEventing::SignInStage, ::IMinecraftEventing::DeviceAccountFailurePhase, uint, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        ::std::string const&                            accountID
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<void*> requestEventDeferment() = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<void*> requestEventDeferment() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor() = 0;
#else // @header-generator platform
    virtual ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLevelChunkPerformanceData(bool) = 0;
#else // @header-generator platform
    virtual void fireEventLevelChunkPerformanceData(bool isClientSide) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const&) = 0;
#else // @header-generator platform
    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const& output) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventActorValueValidationFailed(std::string const&, char const*) = 0;
#else // @header-generator platform
    virtual void fireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireDBStorageError(::LevelStorageEventingContext const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireDBStorageError(::LevelStorageEventingContext const& context, ::std::string const& errorType) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireServerStarted(::Social::Events::ServerTelemetryData const&, std::unordered_map<std::string, std::string> const&) = 0;
#else // @header-generator platform
    virtual void fireServerStarted(
        ::Social::Events::ServerTelemetryData const&              serverTelemetryData,
        ::std::unordered_map<::std::string, ::std::string> const& propertiesChanged
    ) = 0;
#endif // @header-generator platform

    virtual void fireServerShutdown() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireSafetyServiceTextProcessEvent(std::string const&, ::TextProcessingEventOrigin, ushort, std::string const&, bool, double, char, char, ::Json::Value const&, bool, bool) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireBannedSkinVerificationEvent(uint const&, std::string const&, bool, int const, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireBannedSkinVerificationEvent(
        uint const&          userId,
        ::std::string const& skinData,
        bool                 wasApproved,
        int const            eventCode,
        ::std::string const& message
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPlayerReportSent(bool, std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPlayerReportSent(
        bool                 successfulReportSent,
        ::std::string const& failureSource,
        ::std::string const& failureReason,
        ::std::string const& reportID
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOneDSPlayerReportPayload(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void
    fireEventOneDSPlayerReportPayload(::std::string const& reportPayloadJson, ::std::string const& reportID) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSafetyHTTPRequest(std::string const&, std::string const&, int const) = 0;
#else // @header-generator platform
    virtual void
    fireEventSafetyHTTPRequest(::std::string const& method, ::std::string const& url, int const responseCode) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProfanityFilter(bool, bool, bool) = 0;
#else // @header-generator platform
    virtual void fireEventProfanityFilter(bool localFilter, bool remoteFilter, bool playerFilter) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventChatFloodingActionTaken(std::string const&, ::Safety::ChatFloodingAction, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventChatFloodingActionTaken(
        ::std::string const&         authorXuid,
        ::Safety::ChatFloodingAction action,
        ::std::string const&         message
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTextProcessorStartupFailed(std::string const&, int, int) = 0;
#else // @header-generator platform
    virtual void fireEventTextProcessorStartupFailed(::std::string const& stage, int retryCount, int maxRetryCount) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePlayerAccountMetadata(::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, ::Social::PermissionCheckResult, bool, bool) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventBlockUser(std::string const&, bool, bool) = 0;
#else // @header-generator platform
    virtual void fireEventBlockUser(::std::string const& xuid, bool isSuccess, bool isBlocked) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMuteUser(std::string const&, bool, bool) = 0;
#else // @header-generator platform
    virtual void fireEventMuteUser(::std::string const& xuid, bool isSuccess, bool isMuted) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireStorageMigrationEvent(bool, ::Bedrock::StorageMigration::StorageMigrationType, int, int, double, double, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&, std::string const&) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventConnectedStorageResult(::ConnectedStorageEventType, bool, uint, std::optional<uint>, std::string const&, std::string const&, long, std::optional<uint>, std::optional<uint>, std::optional<uint>) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventConnectedStorageError(char const*, std::string const&, long) = 0;
#else // @header-generator platform
    virtual void
    fireEventConnectedStorageError(char const* message, ::std::string const& levelId, int64 quotaRemaining) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUwpToGdkMigrationComplete(::Bedrock::DeviceIdContext const&, std::string const&, std::string_view) = 0;
#else // @header-generator platform
    virtual void fireEventUwpToGdkMigrationComplete(
        ::Bedrock::DeviceIdContext const& deviceIdContext,
        ::std::string const&              gdkDeviceId,
        ::std::string_view                migrationErrors
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOSKErrorEncountered(std::string_view) = 0;
#else // @header-generator platform
    virtual void fireEventOSKErrorEncountered(::std::string_view failureReason) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireNetworkChangedEvent(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireNetworkChangedEvent(::std::string const& networkConnectionType) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMessageServiceImpression(std::string const&, std::string const&, std::string const&, std::string const&, bool const, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventMessageServiceImpression(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl,
        ::std::string const& instanceId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMessageReceived(std::string const&, std::string const&, std::string const&, std::string const&, bool const, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventMessageReceived(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl,
        ::std::string const& instanceId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPartyPlayFabError(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPartyPlayFabError(
        ::std::string const& functionName,
        ::std::string const& errorMessage,
        ::std::string const& partyId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPartyButtonPressed(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPartyButtonPressed(::std::string const& buttonName, ::std::string const& partyId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPartyTravelToastExpired(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventPartyTravelToastExpired(::std::string const& travelMode, ::std::string const& partyId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGoogleAccountHoldWarning(bool) = 0;
#else // @header-generator platform
    virtual void fireEventGoogleAccountHoldWarning(bool navigatedToSubscription) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireDelayedEventReportOfflineAction(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireDelayedEventReportOfflineAction(::std::string const& offlineAction) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventFeedbackSubmitted(std::string const&, std::string const&, bool, bool) = 0;
#else // @header-generator platform
    virtual void fireEventFeedbackSubmitted(
        ::std::string const& feedbackType,
        ::std::string const& identifier,
        bool                 safetyCheckSuccessful,
        bool                 isValidText
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTrackDeeplinks(std::string const&, std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventTrackDeeplinks(
        ::std::string const& deeplinkDestination,
        ::std::string const& deeplinkSource,
        ::std::string const& educationReferrerId,
        ::std::string const& educationReferrerType
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventUriActivation(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void
    fireEventUriActivation(::std::string const& activationIdentifier, ::std::string const& activationParameters) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void firePlayerUnexpectedFallDamage(float const, bool, float const) = 0;
#else // @header-generator platform
    virtual void
    firePlayerUnexpectedFallDamage(float const fallDistance, bool isVehicle, float const divergenceAmount) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventActorMovementCorrectionDivergence(::ActorType, std::vector<float> const&) = 0;
#else // @header-generator platform
    virtual void
    fireEventActorMovementCorrectionDivergence(::ActorType actorType, ::std::vector<float> const& divergences) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDedicatedServerDiscoveryResponse(int const, int const) = 0;
#else // @header-generator platform
    virtual void fireEventDedicatedServerDiscoveryResponse(int const status, int const retryAttempt) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventInGamePause(bool) = 0;
#else // @header-generator platform
    virtual void fireEventInGamePause(bool pauseStatus) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventGameTip(int, int, int, ::InputMode) = 0;
#else // @header-generator platform
    virtual void fireEventGameTip(int gameTipId, int gameTipEventType, int gameTipTestGroup, ::InputMode inputMode) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventAddedFriend(std::string const&, ::IMinecraftEventing::AddedFriendLocation, bool) = 0;
#else // @header-generator platform
    virtual void fireEventAddedFriend(
        ::std::string const&                      addedXuid,
        ::IMinecraftEventing::AddedFriendLocation location,
        bool                                      success
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const&) = 0;
#else // @header-generator platform
    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventTrialStatusFailed(int) = 0;
#else // @header-generator platform
    virtual void fireEventTrialStatusFailed(int errorCode) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSaveDataExpansion(ulong, ulong, ulong) = 0;
#else // @header-generator platform
    virtual void
    fireEventSaveDataExpansion(uint64 preExpansionSize, uint64 postExpansionSize, uint64 levelUsedSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventProfileButtonPressed(std::string const&) const = 0;
#else // @header-generator platform
    virtual void fireEventProfileButtonPressed(::std::string const& entryPoint) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWorldCopy(ulong, ulong, ::LevelSeed64) = 0;
#else // @header-generator platform
    virtual void fireEventWorldCopy(uint64 worldSize, uint64 filesSum, ::LevelSeed64 worldSeed) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWriteBudgetLow(ulong, float, float, std::chrono::duration<long long, std::ratio<1, 1000000000>>, bool, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventWriteBudgetLow(
        uint64                     remainingWriteBudget,
        float                      writeRateMBPerMin,
        float                      writeCountPerMin,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventWriteBudgetReplenished(std::chrono::duration<long long, std::ratio<1, 1000000000>>, ulong, std::optional<ulong>, std::chrono::duration<long long, std::ratio<1, 1000000000>>, bool, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds throttledTime,
        uint64                     lowestWriteBudget,
        ::std::optional<uint64>    lowestSystemThrottlingPerSec,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLargeFileWriteStall(ulong, std::vector<std::string> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&, ulong, bool, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::chrono::duration<long long, std::ratio<1, 1000000000>>, int, ulong, std::vector<std::string> const&) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventLowMemoryDetected(::brstd::function_ref<void (Social::Events::Event&) const, void (Social::Events::Event&)>, ::LowMemoryReport const&) = 0;
#else // @header-generator platform
    virtual void fireEventLowMemoryDetected(
        ::brstd::function_ref<void(::Social::Events::Event&) const, void(::Social::Events::Event&)> writer,
        ::LowMemoryReport const&                                                                    report
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventReceivedApplicationExitInfo(std::string const&, int, int, int, long, long, std::string const&, bool) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const) = 0;
#else // @header-generator platform
    virtual void fireEventImmersiveReaderStatus(::Bedrock::Http::Status const status) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPacketSerializationMismatch(::MinecraftPacketIds, std::string_view, std::string_view) = 0;
#else // @header-generator platform
    virtual void fireEventPacketSerializationMismatch(
        ::MinecraftPacketIds packetId,
        ::std::string_view   legacyStream,
        ::std::string_view   cerealStream
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventPUVLoad(std::string const&, ::PuvLoadData::TelemetryEventData&&) = 0;
#else // @header-generator platform
    virtual void
    fireEventPUVLoad(::std::string const& resourceCategory, ::PuvLoadData::TelemetryEventData&& loadData) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventRemoteDesktop(bool) = 0;
#else // @header-generator platform
    virtual void fireEventRemoteDesktop(bool isRemoteDesktop) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventResourceProcessingPerf(::ResourceProcessingPerfData const&) = 0;
#else // @header-generator platform
    virtual void fireEventResourceProcessingPerf(::ResourceProcessingPerfData const& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnlineAudioStreamEnded(::OnlineAudioStreamEnded const&) = 0;
#else // @header-generator platform
    virtual void fireEventOnlineAudioStreamEnded(::OnlineAudioStreamEnded const& telemetry) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventDimensionTransfer(::DimensionTransferTelemetryData const&) = 0;
#else // @header-generator platform
    virtual void fireEventDimensionTransfer(::DimensionTransferTelemetryData const& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventMarketplaceImpressions(std::string const&, std::string const&, ::Social::Events::PageDisplayRecord&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void fireEventMarketplaceImpressions(
        ::std::string const&                 destinationQuery,
        ::std::string const&                 destinationPage,
        ::Social::Events::PageDisplayRecord& data
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updatePlayerUndergroundStatus(::Player*, bool);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $updatePlayerUndergroundStatus(::Player* player, bool isUnderground);
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
