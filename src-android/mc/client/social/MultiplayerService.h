#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/EnableResult.h"
#include "mc/client/social/InviteHandleCheck.h"
#include "mc/client/social/JoinGameStatus.h"
#include "mc/client/social/MultiplayerGameInfo.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/MultiplayerState.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/ServiceState.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/GameConnectionInfo.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class ClientOrServerNetworkSystemRef;
class DisconnectionRequestHandler;
class ILevel;
class IMinecraftEventing;
class Level;
class RemoteConnector;
class ServerNetworkSystem;
namespace NetherNet { struct NetworkID; }
namespace PlayerMessaging { struct NetworkID; }
namespace Social { class IUserManager; }
namespace Social { class IXboxLiveMultiplayerService; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class PresenceManager; }
namespace Social { class User; }
namespace Social { struct Nonce; }
namespace Social { struct OnlineId; }
namespace Social { struct PlatformUserProfileData; }
namespace mce { class UUID; }
// clang-format on

namespace Social {

class MultiplayerService {
public:
    // MultiplayerService inner types declare
    // clang-format off
    struct ConnectionStates;
    // clang-format on

    // MultiplayerService inner types define
    struct ConnectionStates {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Social::MultiplayerState> multiplayer;
        ::ll::TypedStorage<4, 4, ::Social::ServiceState>     service;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 544, ::Social::MultiplayerGameInfo> mCurrentGame;
    ::ll::TypedStorage<8, 8, ::Level*> mLevel;
    ::ll::TypedStorage<1, 1, bool> mNeedRoundStartEvent;
    ::ll::TypedStorage<4, 4, std::atomic<Social::GamePublishSetting>> mPublishSetting;
    ::ll::UntypedStorage<8, 24> mPresenceManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing*> mEventing;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeOfStateStart;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeOfLevelEntered;
    ::ll::UntypedStorage<8, 24> mDisconnectionRequestHandler;
    ::ll::UntypedStorage<8, 24> mServiceManager;
    ::ll::UntypedStorage<8, 24> mNetwork;
    ::ll::UntypedStorage<8, 616> mExecutionQueue;
    ::ll::UntypedStorage<4, 48> mConnectionStatesBox;
    ::ll::UntypedStorage<8, 24> mUserManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::function<void (std::string)>>> mDisplaySystemMessage;
    ::ll::UntypedStorage<8, 64> mCurrentServersBox;
    ::ll::UntypedStorage<8, 64> mJoinCallback;
    ::ll::TypedStorage<1, 1, bool> mNeedToAdvertise;
    ::ll::TypedStorage<4, 4, int> mNeedToAdvertiseInNumFrames;
    ::ll::TypedStorage<1, 1, bool> mIsInitialized;
    ::ll::TypedStorage<1, 1, bool> mWasSessionCreated;
    ::ll::TypedStorage<1, 1, bool const> mEnabledAtStart;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeOfLastGameListRefresh;
    ::ll::UntypedStorage<4, 8> mServiceId;
    ::ll::UntypedStorage<1, 24> mIconPath;
    ::ll::TypedStorage<8, 24, std::vector<Social::GameConnectionInfo>> mSupportedConnections;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MultiplayerService();

    virtual void startFinalizing();

    virtual void login(bool const);

    virtual void logoff();

    virtual void onPrimaryUserConnectComplete(::Social::UserPlatformConnectionResult, bool);

    virtual bool isLoggedIn() const;

    virtual bool isServiceAvailable() const = 0;

    virtual bool isServiceAllowed() const = 0;

    virtual void getFriendProfiles(std::function<void (std::vector<Social::PlatformUserProfileData>&)>, bool const);

    virtual void getPlatformProfile(std::string const&, std::function<void (Social::PlatformUserProfileData&)>, bool);

    virtual void getPlatformProfiles(std::vector<std::string> const&, std::function<void (std::vector<Social::PlatformUserProfileData>&&)>, bool);

    virtual void onPrimaryUserEnterLevel(::Social::User&, ::Level&);

    virtual bool isInSession() const;

    virtual void setInviteHandle(std::string const&, bool const);

    virtual void clearInviteHandle();

    virtual ::Social::InviteHandleCheck checkIsInviteForCurrentGame();

    virtual ::Bedrock::Threading::Async<Social::InviteHandleCheck> checkIsInviteHandleForCurrentGameAsync(std::string const&);

    virtual bool needToHandleInvite() const;

    virtual bool isInviteEnabled() const;

    virtual void invitePlayers(std::vector<std::string> const&);

    virtual std::string const getInviteHandle() const;

    virtual uint getMaxInvitablePlayers() const;

    virtual int getCurrentGameMaxPlayerCount() const;

    virtual std::shared_ptr<Social::IXboxLiveMultiplayerService> getXboxLiveInterface();

    virtual ::RelationshipStatus mayChatWith(std::string const&) const;

    virtual std::string const& getErrorMessage(::Social::JoinGameStatus) const;

    virtual void _initialize() = 0;

    virtual void _enable(std::function<void (Social::EnableResult)>) = 0;

    virtual void _disable(std::function<void (bool)>) = 0;

    virtual void _advertiseGame();

    virtual void _joinGame(std::string const&) = 0;

    virtual bool _canJoin();

    virtual void _leaveSession() = 0;

    virtual bool _shouldAddGameToGameList(::Social::MultiplayerGameInfo const&) const;

    virtual std::string const _getPrimaryUserNickname() const;

    virtual std::string const _getPrimaryUserId() const = 0;

    virtual void _onMultiplayerStateChange(::Social::MultiplayerState, ::Social::MultiplayerState);

    virtual void _setLobbyProperties() = 0;

    virtual bool _buildGameListIfNeeded(bool);

    virtual void _buildGameList(bool);

    virtual std::chrono::duration<long long, std::ratio<1, 1>> const _getGameListRefreshInterval() const;

    virtual void _getAllActiveSessions(bool) = 0;

    virtual void _tickMultiplayerManager(bool) = 0;

    virtual void _removePrimaryUserFromSession();

    virtual void _createSession() = 0;

    virtual void _updateLobby();

    virtual bool _isMutedPlayer(std::string const&) const;

    virtual bool _isBlockedPlayer(std::string const&) const;

    virtual ::RelationshipStatus _hasChatPrivileges(std::string const&) const;

    virtual ::Social::GamePublishSetting _getGamePublishSettingFromLevel(::Level const&) const;

    virtual bool _getShouldBroadcastFromLevel(::Level const&) const;

    virtual void _onMaxPlayerCountUpdated(int const);

    virtual void _onJoinGameCancelled();

    virtual std::optional<Social::Nonce> _getNonce() const;

    virtual void _connectNonHostSession();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiplayerService(::Social::MultiplayerServiceIdentifier, ::Core::Path const, bool);

    MCNAPI void _changeMultiplayerState(::Social::MultiplayerState, std::string const&, int const, std::string const&);

    MCNAPI void _clearCurrentList();

    MCNAPI ::NetherNet::NetworkID _getNetherNetId() const;

    MCNAPI void _notifyInvalidPlayerJoinedLobby(::mce::UUID const&, std::string const&);

    MCNAPI void _onJoinComplete(::Social::JoinGameStatus);

    MCNAPI void _setCurrentListFromNew(std::vector<Social::MultiplayerGameInfo> const&);

    MCNAPI void cancelJoinGame(std::string const&);

    MCNAPI void createSession();

    MCNAPI void disable(std::function<void(bool)>);

    MCNAPI void enable(std::function<void(Social::EnableResult)>);

    MCNAPI std::vector<Social::MultiplayerGameInfo> getGameList();

    MCNAPI ::Bedrock::NonOwnerPointer<RemoteConnector> getRemoteConnector() const;

    MCNAPI void onAllClientsExitedLevel(uint);

    MCNAPI void setGameHostInfo(::ILevel const&, int const, bool const, bool const);

    MCNAPI void tick(bool, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::MultiplayerServiceIdentifier, ::Core::Path const, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $startFinalizing();

    MCNAPI void $login(bool const);

    MCNAPI void $logoff();

    MCNAPI void $onPrimaryUserConnectComplete(::Social::UserPlatformConnectionResult, bool);

    MCNAPI bool $isLoggedIn() const;

    MCNAPI void $getFriendProfiles(std::function<void(std::vector<Social::PlatformUserProfileData>&)>, bool const);

    MCNAPI void $getPlatformProfile(std::string const&, std::function<void(Social::PlatformUserProfileData&)>, bool);

    MCNAPI void $getPlatformProfiles(
        std::vector<std::string> const&,
        std::function<void(std::vector<Social::PlatformUserProfileData>&&)>,
        bool
    );

    MCNAPI void $onPrimaryUserEnterLevel(::Social::User&, ::Level&);

    MCNAPI bool $isInSession() const;

    MCNAPI void $setInviteHandle(std::string const&, bool const);

    MCNAPI void $clearInviteHandle();

    MCNAPI ::Social::InviteHandleCheck $checkIsInviteForCurrentGame();

    MCNAPI ::Bedrock::Threading::Async<Social::InviteHandleCheck>
    $checkIsInviteHandleForCurrentGameAsync(std::string const&);

    MCNAPI bool $needToHandleInvite() const;

    MCNAPI bool $isInviteEnabled() const;

    MCNAPI void $invitePlayers(std::vector<std::string> const&);

    MCNAPI std::string const $getInviteHandle() const;

    MCNAPI uint $getMaxInvitablePlayers() const;

    MCNAPI int $getCurrentGameMaxPlayerCount() const;

    MCNAPI std::shared_ptr<Social::IXboxLiveMultiplayerService> $getXboxLiveInterface();

    MCNAPI ::RelationshipStatus $mayChatWith(std::string const&) const;

    MCNAPI std::string const& $getErrorMessage(::Social::JoinGameStatus) const;

    MCNAPI void $_advertiseGame();

    MCNAPI bool $_canJoin();

    MCNAPI bool $_shouldAddGameToGameList(::Social::MultiplayerGameInfo const&) const;

    MCNAPI std::string const $_getPrimaryUserNickname() const;

    MCNAPI void $_onMultiplayerStateChange(::Social::MultiplayerState, ::Social::MultiplayerState);

    MCNAPI bool $_buildGameListIfNeeded(bool);

    MCNAPI void $_buildGameList(bool);

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> const $_getGameListRefreshInterval() const;

    MCNAPI void $_removePrimaryUserFromSession();

    MCNAPI void $_updateLobby();

    MCNAPI bool $_isMutedPlayer(std::string const&) const;

    MCNAPI bool $_isBlockedPlayer(std::string const&) const;

    MCNAPI ::RelationshipStatus $_hasChatPrivileges(std::string const&) const;

    MCNAPI ::Social::GamePublishSetting $_getGamePublishSettingFromLevel(::Level const&) const;

    MCNAPI bool $_getShouldBroadcastFromLevel(::Level const&) const;

    MCNAPI void $_onMaxPlayerCountUpdated(int const);

    MCNAPI void $_onJoinGameCancelled();

    MCNAPI std::optional<Social::Nonce> $_getNonce() const;

    MCNAPI void $_connectNonHostSession();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
