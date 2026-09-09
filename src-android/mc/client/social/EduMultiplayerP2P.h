#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/social/EnableResult.h"
#include "mc/client/social/IEDUDiscoveryService.h"
#include "mc/client/social/JoinGameStatus.h"
#include "mc/client/social/MultiplayerService.h"
#include "mc/client/social/edu_discovery/Availability.h"
#include "mc/client/social/edu_discovery/ServerStatus.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/network/services/signaling/player_messaging/NetworkID.h"
#include "mc/options/EducationServicesEnvironment.h"

// auto generated forward declare list
// clang-format off
class Level;
class Stopwatch;
struct DiscoveryConfig;
struct EDUConfigData;
namespace Bedrock::Http { class Response; }
namespace Core { class SingleThreadedLock; }
namespace EDUDiscovery { class DiscoveryObserver; }
namespace EDUDiscovery { struct ConnectionInfo; }
namespace EDUDiscovery { struct Dialog; }
namespace EDUDiscovery { struct JoinCode; }
namespace EDUDiscovery { struct JoinRequest; }
namespace EDUDiscovery { struct JoinServerQueryState; }
namespace EDUDiscovery { struct ListServersResponse; }
namespace EDUDiscovery { struct QueryContextInfo; }
namespace EDUDiscovery { struct ServerDetails; }
namespace EDUDiscovery { struct ServerID; }
namespace EDUDiscovery { struct ServerInvalidationDetails; }
namespace EDUDiscovery { template<typename T0> class QueryContext; }
namespace Social { class MultiplayerGameInfo; }
namespace Social { struct Nonce; }
namespace edu::auth { struct CredentialsAcquired; }
namespace edu::auth { struct CredentialsRefreshSuccess; }
// clang-format on

namespace Social {

class EduMultiplayerP2P : public ::Social::MultiplayerService,
                          public ::IEDUDiscoveryService,
                          public ::edu::auth::CredentialsObserver {
public:
    // EduMultiplayerP2P inner types declare
    // clang-format off
    struct Credentials;
    // clang-format on

    // EduMultiplayerP2P inner types define
    enum class ContextRequirement : int {
        None             = 0,
        ValidAccessToken = 1,
        ObeyRetryAfter   = 2,
    };

    struct Credentials {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> accessToken;
        ::ll::TypedStorage<1, 1, ::edu::Role>  role;
        ::ll::TypedStorage<1, 1, bool>         expired;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<EDUDiscovery::JoinCode>> mCode;
    ::ll::UntypedStorage<8, 32> mDiscoverySubject;
    ::ll::TypedStorage<8, 24, std::optional<PlayerMessaging::NetworkID>> mCachedPlayerMessagingId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EDUDiscovery::ServerID>> mServer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Stopwatch>> mStopwatch;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EDUDiscovery::ServerDetails>> mLastJoinedServer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DiscoveryConfig>> mConfig;
    ::ll::TypedStorage<8, 24, std::string> mCachedEndpoint;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<std::function<void (Social::EduMultiplayerP2P&)>>>> mMainThreadQueue;
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::ServerStatus> mStatus;
    ::ll::TypedStorage<4, 4, int> mLastMaxPlayerCount;
    ::ll::TypedStorage<4, 4, int> mConsecutiveFailedHeartbeats;
    ::ll::UntypedStorage<8, 48> mGetCurrentTime;
    ::ll::TypedStorage<8, 32, ::Social::EduMultiplayerP2P::Credentials> mCredentials;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 48, std::deque<std::unique_ptr<EDUDiscovery::Dialog>>> mPendingDialogs;
    ::ll::TypedStorage<8, 8, long> mBlockedUntilTime;
    ::ll::TypedStorage<1, 1, bool> mIsInMultiplayerSession;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EduMultiplayerP2P();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EduMultiplayerP2P();

    virtual bool isServiceAvailable() const;

    virtual bool isServiceAllowed() const;

    virtual std::string const& getErrorMessage(::Social::JoinGameStatus) const;

    virtual void _initialize();

    virtual void _enable(std::function<void (Social::EnableResult)>);

    virtual void _disable(std::function<void (bool)>);

    virtual void _joinGame(std::string const&);

    virtual void _leaveSession();

    virtual bool _shouldAddGameToGameList(::Social::MultiplayerGameInfo const&) const;

    virtual std::string const _getPrimaryUserNickname() const;

    virtual std::string const _getPrimaryUserId() const;

    virtual void _setLobbyProperties();

    virtual void _getAllActiveSessions(bool);

    virtual void _tickMultiplayerManager(bool);

    virtual void _createSession();

    virtual ::Social::GamePublishSetting _getGamePublishSettingFromLevel(::Level const&) const;

    virtual bool _getShouldBroadcastFromLevel(::Level const&) const;

    virtual std::optional<Social::Nonce> _getNonce() const;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsExpired> const&);

    virtual void onNotify(::EDUConfigData const&);

    virtual void onNotify(::edu::auth::CredentialsRefreshSuccess const&);

    virtual void onNotify(::edu::auth::CredentialsAcquired const&);

    virtual std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::ListServersResponse>> listServers(std::function<void (const EDUDiscovery::ListServersResponse&)>);

    virtual void joinServer(std::string const&, std::string const&);

    virtual std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::JoinServerQueryState>> joinServer(::EDUDiscovery::JoinRequest const&, std::function<void (const EDUDiscovery::JoinServerQueryState&)>);

    virtual bool hasValidCredentials() const;

    virtual std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::Availability>> checkServiceAvailability(std::function<void (EDUDiscovery::Availability)>);

    virtual ::EDUDiscovery::ServerStatus getServerStatus();

    virtual void requestNewJoinCode();

    virtual void addDiscoveryObserver(::EDUDiscovery::DiscoveryObserver&);

    virtual ::EDUDiscovery::JoinCode const* getJoinCode() const;

    virtual int getJoinCodeLength() const;

    virtual std::unique_ptr<EDUDiscovery::Dialog> getNextDialog();

    virtual ::EDUDiscovery::ConnectionInfo getConnectionInfo() const;

    virtual bool isInMultiplayerSession() const;

    virtual bool isInMultiplayerSessionState() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduMultiplayerP2P(::EducationServicesEnvironment, std::function<int()>);

    MCNAPI void _enqueueDialog(std::optional<EDUDiscovery::Dialog>);

    MCNAPI void _onServerInvalidated(::EDUDiscovery::ServerInvalidationDetails const&);

    MCNAPI void _requestDehost(::EDUDiscovery::ServerID, int);

    MCNAPI void _requestHost(bool);

    MCNAPI void _requestServiceAvailability(
        std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::Availability>>,
        std::function<void(EDUDiscovery::Availability)>,
        int
    );

    MCNAPI void _requestUpdate(::EDUDiscovery::ServerDetails, int);

    MCNAPI void _trackCanceledRequest(::EDUDiscovery::QueryContextInfo const&);

    MCNAPI void _trackCompletedRequest(::EDUDiscovery::QueryContextInfo const&);

    MCNAPI void _trackFailedRequest(::EDUDiscovery::QueryContextInfo const&);

    MCNAPI void _trackRequestCommon(::EDUDiscovery::QueryContextInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EducationServicesEnvironment, std::function<int()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isServiceAvailable() const;

    MCNAPI bool $isServiceAllowed() const;

    MCNAPI std::string const& $getErrorMessage(::Social::JoinGameStatus) const;

    MCNAPI void $_initialize();

    MCNAPI void $_enable(std::function<void(Social::EnableResult)>);

    MCNAPI void $_disable(std::function<void(bool)>);

    MCNAPI void $_joinGame(std::string const&);

    MCNAPI void $_leaveSession();

    MCNAPI bool $_shouldAddGameToGameList(::Social::MultiplayerGameInfo const&) const;

    MCNAPI std::string const $_getPrimaryUserNickname() const;

    MCNAPI std::string const $_getPrimaryUserId() const;

    MCNAPI void $_setLobbyProperties();

    MCNAPI void $_getAllActiveSessions(bool);

    MCNAPI void $_tickMultiplayerManager(bool);

    MCNAPI void $_createSession();

    MCNAPI ::Social::GamePublishSetting $_getGamePublishSettingFromLevel(::Level const&) const;

    MCNAPI bool $_getShouldBroadcastFromLevel(::Level const&) const;

    MCNAPI std::optional<Social::Nonce> $_getNonce() const;

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsExpired> const&);

    MCNAPI void $onNotify(::EDUConfigData const&);

    MCNAPI void $onNotify(::edu::auth::CredentialsRefreshSuccess const&);

    MCNAPI void $onNotify(::edu::auth::CredentialsAcquired const&);

    MCNAPI std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::ListServersResponse>>
           $listServers(std::function<void(const EDUDiscovery::ListServersResponse&)>);

    MCNAPI void $joinServer(std::string const&, std::string const&);

    MCNAPI std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::JoinServerQueryState>>
    $joinServer(::EDUDiscovery::JoinRequest const&, std::function<void(const EDUDiscovery::JoinServerQueryState&)>);

    MCNAPI bool $hasValidCredentials() const;

    MCNAPI std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::Availability>>
           $checkServiceAvailability(std::function<void(EDUDiscovery::Availability)>);

    MCNAPI ::EDUDiscovery::ServerStatus $getServerStatus();

    MCNAPI void $requestNewJoinCode();

    MCNAPI void $addDiscoveryObserver(::EDUDiscovery::DiscoveryObserver&);

    MCNAPI ::EDUDiscovery::JoinCode const* $getJoinCode() const;

    MCNAPI int $getJoinCodeLength() const;

    MCNAPI std::unique_ptr<EDUDiscovery::Dialog> $getNextDialog();

    MCNAPI ::EDUDiscovery::ConnectionInfo $getConnectionInfo() const;

    MCNAPI bool $isInMultiplayerSession() const;

    MCNAPI bool $isInMultiplayerSessionState() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
