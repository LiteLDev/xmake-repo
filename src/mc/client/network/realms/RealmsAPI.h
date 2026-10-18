#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/Realms__IEntitlementApi.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/IContentApi.h"
#include "mc/client/network/realms/IInvitesApi.h"
#include "mc/client/network/realms/ISubscriptionApi.h"
#include "mc/client/network/realms/IWorldApi.h"
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/network/EditorConnectionJoinIntent.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
class OptionRegistry;
class PlayfabBeaconClient;
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Response; }
namespace Invites { struct Invite; }
namespace Invites { struct InviteId; }
namespace Json { class Value; }
namespace Realms { class GenericRequestServiceHandler; }
namespace Realms { class WorldCache; }
namespace Realms { struct AdminLog; }
namespace Realms { struct ConfigInfo; }
namespace Realms { struct Content; }
namespace Realms { struct EntitlementInfo; }
namespace Realms { struct InviteLink; }
namespace Realms { struct Player; }
namespace Realms { struct PlayerRoleWithActionsList; }
namespace Realms { struct RealmId; }
namespace Realms { struct ServerRegion; }
namespace Realms { struct ServerSettings; }
namespace Realms { struct Session; }
namespace Realms { struct StoriesSettings; }
namespace Realms { struct SubscriptionInfo; }
namespace Realms { struct World; }
namespace Realms { struct WorldBackupList; }
namespace Realms::Stories { class RealmEvent; }
namespace Social { class GameConnectionInfo; }
namespace Social { class User; }
// clang-format on

class RealmsAPI : public ::Realms::IContentApi,
                  public ::std::enable_shared_from_this<RealmsAPI>,
                  public ::Realms::IEntitlementApi,
                  public ::Realms::ISubscriptionApi,
                  public ::Realms::IWorldApi,
                  public ::Realms::IInvitesApi {
#else // @header-generator platform
class RealmsAPI {
#endif // @header-generator platform
public:
    // RealmsAPI inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Compatibility : int {
        Compatible         = 0,
        CompatibleShowInfo = 1,
        Outdated           = 2,
        AlphaEnded         = 3,
        UserNotAllowed     = 4,
        Forbidden          = 5,
        Banned             = 6,
        Suspended          = 7,
        Other              = 8,
    };
#else // @header-generator platform
    enum class Compatibility : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum InviteAction : uint {
        Add    = 0,
        Remove = 1,
        Op     = 2,
        DeOp   = 3,
    };
#else // @header-generator platform
    enum class InviteAction : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class JoinStatus : int {
        Fail       = 0,
        Unassigned = 1,
        Success    = 2,
    };

    using GenericStatus = ::Realms::GenericStatus;

    using JoinFlowSuccessCallback = std::function<void(const Social::GameConnectionInfo&, bool)>;

    using JoinFlowFailCallback =
        std::function<void(Realms::GenericStatus, RealmsAPI::JoinStatus, Realms::FailureReason)>;

    using JoinFlowRetryCallback = std::function<void(int)>;

    using Notification = std::function<void()>;

    using FailureReason = ::Realms::FailureReason;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mFeatureFlagsFetched;
    ::ll::TypedStorage<4, 20, ::RetryDelay> mFeatureFlagRetry;
    ::ll::TypedStorage<1, 1, bool> mInitialized;
    ::ll::TypedStorage<4, 4, int> mSlotIndex;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::GenericRequestServiceHandler>> mGenericRequestServiceClient;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFeatureNames;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus> mCompatibilityStatus;
    ::ll::TypedStorage<4, 4, ::RealmsAPI::Compatibility> mCompatibility;
    ::ll::TypedStorage<1, 1, bool> mCompatibilityCheckCompleted;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStatusUpdateTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<std::function<void ()>>>> mExecutionQueue;
    ::ll::TypedStorage<8, 24, std::string> mRealmsEndpoint;
    ::ll::TypedStorage<8, 24, std::string> mRealmsV2Endpoint;
    ::ll::TypedStorage<8, 24, std::string> mRelyingParty;
    ::ll::TypedStorage<8, 16, std::weak_ptr<OptionRegistry>> mWeakOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsFeatureFlagOverrideEnabledSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsFeatureFlagOverrideSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsOptionSubscription;
    ::ll::UntypedStorage<8, 48> _broadcastConnectionEventRealmsRequest;
    ::ll::UntypedStorage<8, 48> _broadcastConnectionEventRealmsResponse;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::WorldCache>> mWorldCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::WorldCache>> mUnpairedParentWorldCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayfabBeaconClient>> mPlayfabBeaconClient;
    ::ll::TypedStorage<1, 1, bool> mRealmsTrialAvailable;
    ::ll::TypedStorage<1, 1, bool> mRealmsTrialAvailabilityFetched;
    ::ll::TypedStorage<4, 40, std::mutex> mXBLSignInMutex;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTreatmentsMonitorSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPrimaryUserSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPrimaryUserSignOutSubscription;
    ::ll::UntypedStorage<8, 88> mOnWorldInfoSet;
    ::ll::UntypedStorage<8, 88> onFeatureNamesUpdate;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsAPI();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsAPI();

    virtual void applyContentOnRealm(::Realms::RealmId const, std::vector<Realms::Content> const&, std::function<void (Realms::GenericStatus)>);

    virtual void fetchAppliedPacks(::Realms::RealmId, std::function<void (Realms::GenericStatus, std::vector<Realms::Content>)>);

    virtual void checkForExistingPack(std::string const&, std::string const&, std::function<void (Realms::GenericStatus, bool)>);

    virtual void initializeWorld(::Realms::RealmId, std::string const&, std::string const&, std::function<void (Realms::GenericStatus, Realms::FailureReason)>);

    virtual void openWorld(::Realms::RealmId, std::function<void (Realms::GenericStatus)>, std::function<void (int)>);

    virtual void closeWorld(::Realms::RealmId, std::function<void (Realms::GenericStatus)>, std::function<void (int)>);

    virtual void resetWorld(::Realms::RealmId, std::function<void (Realms::GenericStatus)>, std::function<void (int)>);

    virtual ::Bedrock::Threading::Async<std::tuple<Realms::GenericStatus, Realms::EntitlementInfo>> getRealmEntitlement(::Realms::RealmId);

    virtual void getPendingInviteCount(std::function<void (Realms::GenericStatus, int)>);

    virtual void getPendingInviteCountFriendsOnly(std::function<void (Realms::GenericStatus, int)>, std::vector<std::string> const&);

    virtual void listInvites(std::function<void (Realms::GenericStatus, std::vector<Invites::Invite>)>, bool);

    virtual void getSubscriptionDetails(::Realms::RealmId, std::function<void (Realms::GenericStatus, Realms::SubscriptionInfo)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsAPI(
        std::weak_ptr<Realms::GenericRequestServiceHandler>,
        std::string const&,
        std::string const&,
        std::string const&,
        std::weak_ptr<FlightingService>
    );

    MCNAPI void _fetchWorldsWithEndPoint(
        std::string const&,
        std::function<void(Realms::GenericStatus, std::vector<Realms::World>)>,
        bool
    );

    MCNAPI void _getRealmEvents(
        ::Realms::RealmId const&,
        bool,
        std::function<void(Realms::GenericStatus, std::vector<Realms::Stories::RealmEvent>)>,
        int,
        long
    );

    MCNAPI void _refreshFeatureFlagGameOptions();

    MCNAPI void _sendJoinWorldRequest(
        ::Realms::RealmId,
        std::shared_ptr<const std::map<std::string, ulong>>,
        std::function<void(const Social::GameConnectionInfo&, bool)>,
        std::function<void(Realms::GenericStatus, RealmsAPI::JoinStatus, Realms::FailureReason)>,
        std::function<void(int)>,
        ::IMinecraftEventing::RealmConnectionFlow,
        std::function<void(IMinecraftEventing::RealmConnectionFlow, Bedrock::Http::StatusCode)>,
        ::EditorConnectionJoinIntent
    );

    MCNAPI void _sendRequest(
        std::string const&,
        std::optional<Realms::RealmId>,
        ::Bedrock::Http::Method const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::Bedrock::Http::RequestPriority,
        std::function<void(Bedrock::Http::Response&)>
    );

    MCNAPI void _sendRequestV2(
        std::string const&,
        std::optional<Realms::RealmId>,
        ::Bedrock::Http::Method const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::Bedrock::Http::RequestPriority,
        std::function<void(Bedrock::Http::Response&)>
    );

    MCNAPI void _updateFeatureFlags();

    MCNAPI void acceptInvite(::Invites::InviteId, std::function<void(Realms::GenericStatus, Realms::FailureReason)>);

    MCNAPI void
    acceptLink(std::string const&, std::function<void(Realms::GenericStatus, Realms::FailureReason, Realms::World)>);

    MCNAPI void activateNewPreviewRealm(::Realms::RealmId, std::function<void(Realms::GenericStatus, Realms::RealmId)>);

    MCNAPI void addToBlocklist(
        ::Realms::RealmId,
        std::string const&,
        std::string const&,
        std::function<void(Realms::GenericStatus)>
    );

    MCNAPI void
    createInviteLink(::Realms::RealmId, long const, std::function<void(Realms::GenericStatus, Realms::InviteLink)>);

    MCNAPI void deleteBackup(
        ::Realms::RealmId const&,
        int const,
        std::string const&,
        std::function<void(Realms::GenericStatus, std::string)>
    );

    MCNAPI void deleteInvite(::Invites::InviteId, std::function<void(Realms::GenericStatus)>);

    MCNAPI void deleteInviteLink(std::string const&, std::function<void(Realms::GenericStatus)>);

    MCNAPI void deleteRealm(::Realms::RealmId, std::function<void(Realms::GenericStatus)>);

    MCNAPI void deleteStory(::Realms::RealmId, std::string const&);

    MCNAPI void
    fetchActiveWorldCurrentSize(::Realms::RealmId const, int, std::function<void(Realms::GenericStatus, long)>);

    MCNAPI void
    fetchAdminLogs(std::string const&, std::function<void(Realms::GenericStatus, std::vector<Realms::AdminLog>)>);

    MCNAPI void fetchRealmsServerSettings(
        ::Realms::RealmId,
        std::function<void(Realms::GenericStatus, Realms::ServerSettings)>
    );

    MCNAPI void fetchUnpairedParentWorlds(std::function<void(Realms::GenericStatus, std::vector<Realms::World>)>, bool);

    MCNAPI void
    fetchWorldBackupsList(::Realms::RealmId, int, std::function<void(Realms::GenericStatus, Realms::WorldBackupList)>);

    MCNAPI void fetchWorlds(std::function<void(Realms::GenericStatus, std::vector<Realms::World>)>, bool);

    MCNAPI std::vector<std::string> getAllEnabledFeatures() const;

    MCNAPI void getAllInviteLinks(
        ::Realms::RealmId,
        std::function<void(Realms::GenericStatus, std::vector<Realms::InviteLink>)>
    );

    MCNAPI void getAllRealmRolesAndActionsForUser(
        std::string const&,
        std::function<void(Realms::GenericStatus, std::vector<Realms::PlayerRoleWithActionsList>)>
    );

    MCNAPI void getBlocklist(::Realms::RealmId, std::function<void(Realms::GenericStatus, std::vector<std::string>)>);

    MCNAPI bool getCachedRealmsTrialAvailable() const;

    MCNAPI std::string getCommerceV2PlatformFeatureName() const;

    MCNAPI void getOnlinePlayers(std::function<void(Realms::GenericStatus, std::vector<Realms::World>)>);

    MCNAPI void getPreferredRegions(std::function<void(Realms::GenericStatus, std::vector<Realms::ServerRegion>)>);

    MCNAPI void getPublishedRealmEvents(
        ::Realms::RealmId const,
        std::function<void(Realms::GenericStatus, std::vector<Realms::Stories::RealmEvent>)>,
        int,
        long
    );

    MCNAPI void
        getRealmsConfigDetails(::Realms::RealmId, std::function<void(Realms::GenericStatus, Realms::ConfigInfo)>);

    MCNAPI void getRealmsWorldRolesAndActions(
        ::Realms::RealmId const,
        std::function<void(Realms::GenericStatus, std::vector<Realms::PlayerRoleWithActionsList>)>
    );

    MCNAPI void
    getStoriesSettings(std::string const&, std::function<void(Realms::GenericStatus, Realms::StoriesSettings)>);

    MCNAPI std::shared_ptr<Realms::WorldCache> getUnpairedParentWorldCache();

    MCNAPI void getUserMemberOfWorldCount(std::function<void(Realms::GenericStatus, bool)>);

    MCNAPI void getWorld(::Realms::RealmId, bool, std::function<void(Realms::GenericStatus, Realms::World)>);

    MCNAPI std::shared_ptr<Realms::WorldCache> getWorldCache();

    MCNAPI void getWorldFromLink(
        std::string const&,
        std::function<void(Realms::GenericStatus, const Json::Value&&, Realms::World)>
    );

    MCNAPI void
        getWorldMembers(::Realms::RealmId, std::function<void(Realms::GenericStatus, std::vector<Realms::Player>)>);

    MCNAPI void
        getWorldSessions(::Realms::RealmId, std::function<void(Realms::GenericStatus, std::vector<Realms::Session>)>);

    MCNAPI void initialize();

    MCNAPI void initializeRealmsUserEventHandler(std::function<std::shared_ptr<Social::User>()>);

    MCNAPI void initiateWorldDownload(
        std::string const&,
        int,
        std::string const&,
        std::function<void(Realms::GenericStatus, std::string, std::string, ulong)>
    );

    MCNAPI void initiateWorldUpload(
        std::string const&,
        int,
        bool,
        std::function<void(Realms::GenericStatus, std::string, std::string)>
    );

    MCNAPI bool isFeatureOn(std::string const&) const;

    MCNAPI bool isInitialized() const;

    MCNAPI void isValidClubsName(std::string, std::function<void(Realms::GenericStatus, Realms::FailureReason)>);

    MCNAPI bool isValidRealmName(std::string);

    MCNAPI void joinWorld(
        ::Realms::RealmId,
        std::function<void(const Social::GameConnectionInfo&, bool)>,
        std::function<void(Realms::GenericStatus, RealmsAPI::JoinStatus, Realms::FailureReason)>,
        std::function<void(int)>,
        ::IMinecraftEventing::RealmConnectionFlow,
        std::function<void(IMinecraftEventing::RealmConnectionFlow)>,
        std::function<void(IMinecraftEventing::RealmConnectionFlow, Bedrock::Http::StatusCode)>,
        ::EditorConnectionJoinIntent
    );

    MCNAPI void leaveWorld(::Realms::RealmId, std::function<void(Realms::GenericStatus)>);

    MCNAPI ::Bedrock::PubSub::Subscription
        registerOnFeatureNamesUpdateListener(std::function<void(const std::vector<std::string>&)>);

    MCNAPI ::Bedrock::PubSub::Subscription registerOnWorldInfoSetListener(std::function<void(Realms::World)>);

    MCNAPI void rejectInvite(::Invites::InviteId, std::function<void(Realms::GenericStatus)>);

    MCNAPI void removeFromBlocklist(::Realms::RealmId, std::string const&, std::function<void(Realms::GenericStatus)>);

    MCNAPI void
    restoreBackup(::Realms::RealmId, int, std::string const&, std::function<void(Realms::GenericStatus, std::string)>);

    MCNAPI void saveAutoBackup(
        ::Realms::RealmId const&,
        int,
        std::string const&,
        std::string const&,
        std::vector<std::string> const&,
        std::function<void(Realms::GenericStatus, std::string)>
    );

    MCNAPI void saveBackup(
        ::Realms::RealmId const&,
        int const,
        std::string const&,
        std::vector<std::string>,
        std::function<void(Realms::GenericStatus, std::string)>
    );

    MCNAPI void
    setActiveSlot(::Realms::RealmId, int, std::function<void(Realms::GenericStatus, Realms::FailureReason)>);

    MCNAPI void setCachedRealmsTrialToUnavailable();

    MCNAPI void setDefaultPermissions(
        ::Realms::RealmId,
        ::PlayerPermissionLevel const&,
        std::function<void(Realms::GenericStatus)>
    );

    MCNAPI void setOptions(std::weak_ptr<OptionRegistry>);

    MCNAPI void setPlayfabBeaconClient(std::shared_ptr<PlayfabBeaconClient>);

    MCNAPI void setRealmsServerMaxPlayers(::Realms::RealmId, int, std::function<void(Realms::GenericStatus)>);

    MCNAPI void
        setRealmsServerMode(::Realms::RealmId, ::Realms::RealmsServerMode, std::function<void(Realms::GenericStatus)>);

    MCNAPI void setRealmsServerRenderDistance(::Realms::RealmId, int, std::function<void(Realms::GenericStatus)>);

    MCNAPI void setRealmsServerSimDistance(::Realms::RealmId, int, std::function<void(Realms::GenericStatus)>);

    MCNAPI void
    setStoriesSettings(std::string const&, ::Realms::StoriesSettings, std::function<void(Realms::GenericStatus)>);

    MCNAPI void setTexturePacksRequired(
        ::Realms::RealmId,
        bool const&,
        std::function<void(Realms::GenericStatus, Realms::FailureReason)>
    );

    MCNAPI void setUserPermission(
        ::Realms::RealmId,
        std::string const&,
        ::PlayerPermissionLevel const&,
        std::function<void(Realms::GenericStatus)>
    );

    MCNAPI void setUserRealmsRole(
        ::Realms::RealmId,
        std::string const&,
        ::Realms::PlayerRole,
        std::function<void(Realms::GenericStatus)>
    );

    MCNAPI void setWorldInfo(
        ::Realms::World,
        int const,
        bool const,
        std::function<void(Realms::GenericStatus, Realms::FailureReason)>
    );

    MCNAPI void update(bool);

    MCNAPI void updateAllowList(
        ::Realms::RealmId,
        std::string const&,
        std::map<std::string, RealmsAPI::InviteAction>,
        std::function<void(Realms::GenericStatus, Realms::World)>
    );

    MCNAPI void updateInviteLink(
        ::Realms::RealmId,
        ::Realms::InviteLink,
        std::function<void(Realms::GenericStatus, Realms::InviteLink)>
    );

    MCNAPI void
    updateRealmsConfig(::Realms::RealmId, std::string const&, std::function<void(Realms::GenericStatus, std::string)>);

    MCNAPI void updateTrialAvailable(std::function<void(Realms::GenericStatus)>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getCommerceV2PlatformFeatureName(::BuildPlatform);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::weak_ptr<Realms::GenericRequestServiceHandler>,
        std::string const&,
        std::string const&,
        std::string const&,
        std::weak_ptr<FlightingService>
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
    MCNAPI void $applyContentOnRealm(
        ::Realms::RealmId const,
        std::vector<Realms::Content> const&,
        std::function<void(Realms::GenericStatus)>
    );

    MCNAPI void
        $fetchAppliedPacks(::Realms::RealmId, std::function<void(Realms::GenericStatus, std::vector<Realms::Content>)>);

    MCNAPI void
    $checkForExistingPack(std::string const&, std::string const&, std::function<void(Realms::GenericStatus, bool)>);

    MCNAPI void $initializeWorld(
        ::Realms::RealmId,
        std::string const&,
        std::string const&,
        std::function<void(Realms::GenericStatus, Realms::FailureReason)>
    );

    MCNAPI void $openWorld(::Realms::RealmId, std::function<void(Realms::GenericStatus)>, std::function<void(int)>);

    MCNAPI void $closeWorld(::Realms::RealmId, std::function<void(Realms::GenericStatus)>, std::function<void(int)>);

    MCNAPI void $resetWorld(::Realms::RealmId, std::function<void(Realms::GenericStatus)>, std::function<void(int)>);

    MCNAPI ::Bedrock::Threading::Async<std::tuple<Realms::GenericStatus, Realms::EntitlementInfo>>
        $getRealmEntitlement(::Realms::RealmId);

    MCNAPI void $getPendingInviteCount(std::function<void(Realms::GenericStatus, int)>);

    MCNAPI void
    $getPendingInviteCountFriendsOnly(std::function<void(Realms::GenericStatus, int)>, std::vector<std::string> const&);

    MCNAPI void $listInvites(std::function<void(Realms::GenericStatus, std::vector<Invites::Invite>)>, bool);

    MCNAPI void $getSubscriptionDetails(
        ::Realms::RealmId,
        std::function<void(Realms::GenericStatus, Realms::SubscriptionInfo)>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class JoinStatus : int {};
#endif // @header-generator platform
};
