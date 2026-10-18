#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/EnableResult.h"
#include "mc/client/social/IXboxLiveMultiplayerService.h"
#include "mc/client/social/InviteHandleCheck.h"
#include "mc/client/social/JoinGameStatus.h"
#include "mc/client/social/MultiplayerGameInfo.h"
#include "mc/client/social/MultiplayerService.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Level;
class NetworkIdentifier;
class RateLimiter;
struct XalUser;
namespace Json { class Value; }
namespace Social { class GameConnectionInfo; }
namespace Social { class User; }
namespace Social { class XalApiWrapper; }
namespace Social { struct RealmWorldPublisherData; }
namespace Social { struct ResolvedExperienceInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class MultiplayerXBL : public ::Social::MultiplayerService,
                       public ::Social::IXboxLiveMultiplayerService,
                       public ::std::enable_shared_from_this<Social::MultiplayerXBL> {
#else // @header-generator platform
class MultiplayerXBL {
#endif // @header-generator platform
public:
    // MultiplayerXBL inner types declare
    // clang-format off
    struct MultiplayerXBLSharedObjects;
    // clang-format on

    // MultiplayerXBL inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct MultiplayerXBLSharedObjects {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 40, std::mutex>                 mInviteHandleIdMutex;
        ::ll::TypedStorage<4, 4, ::Social::InviteHandleCheck> mHandleCheckResult;
        ::ll::TypedStorage<8, 24, std::string>                mInviteHandleId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::MultiplayerXBL::MultiplayerXBLSharedObjects>> mMultiplayerSharedObjects;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmChangedSubscription;
    ::ll::TypedStorage<8, 24, std::string> mPreviousClubId;
    ::ll::TypedStorage<1, 1, bool> mIsCheckingXBL;
    ::ll::TypedStorage<1, 1, bool> mLostMPSDConnection;
    ::ll::TypedStorage<8, 24, std::vector<Social::MultiplayerGameInfo>> mNewList;
    ::ll::UntypedStorage<4, 48> mNewListMutex;
    ::ll::UntypedStorage<8, 112> mLocalUser;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 16> mQueryMPSDLimiter;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MultiplayerXBL();

    virtual bool isLoggedIn() const;

    virtual bool isServiceAvailable() const;

    virtual bool isServiceAllowed() const;

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

    virtual std::shared_ptr<Social::IXboxLiveMultiplayerService> getXboxLiveInterface();

    virtual ::RelationshipStatus mayChatWith(std::string const&) const;

    virtual std::string const& getErrorMessage(::Social::JoinGameStatus) const;

    virtual void _initialize();

    virtual void _enable(std::function<void (Social::EnableResult)>);

    virtual void _disable(std::function<void (bool)>);

    virtual void _advertiseGame();

    virtual void _joinGame(std::string const&);

    virtual void _leaveSession();

    virtual bool _shouldAddGameToGameList(::Social::MultiplayerGameInfo const&) const;

    virtual std::string const _getPrimaryUserNickname() const;

    virtual std::string const _getPrimaryUserId() const;

    virtual void _setLobbyProperties();

    virtual std::chrono::duration<long long, std::ratio<1, 1>> const _getGameListRefreshInterval() const;

    virtual void _getAllActiveSessions(bool);

    virtual void _tickMultiplayerManager(bool);

    virtual void _removePrimaryUserFromSession();

    virtual void _createSession();

    virtual void _updateLobby();

    virtual bool _isMutedPlayer(std::string const&) const;

    virtual bool _isBlockedPlayer(std::string const&) const;

    virtual ::RelationshipStatus _hasChatPrivileges(std::string const&) const;

    virtual ::Social::GamePublishSetting _getGamePublishSettingFromLevel(::Level const&) const;

    virtual bool _getShouldBroadcastFromLevel(::Level const&) const;

    virtual void _connectNonHostSession();

    virtual std::optional<const Social::GameConnectionInfo> getExternalServerData() const;

    virtual std::optional<Social::ResolvedExperienceInfo> getConnectedExperienceInfo() const;

    virtual void updateConnectedExperienceInfo(::Social::ResolvedExperienceInfo const&);

    virtual bool isPlayerOnline(std::string const&) const;

    virtual std::vector<std::string> getPlayerXuidsInLobby() const;

    virtual bool hasID(std::string const&) const;

    virtual std::string getXBLInfo() const;

    virtual void onExitLevel(::Social::User&);

    virtual ::Bedrock::Threading::Async<std::string> getCurrentSessionHandleId();

    virtual ::Social::MultiplayerGameInfo const& getCurrentGameInfo() const;

    virtual void resumeServicesSessionAndHost();

    virtual void updateRichPresence(::Social::User&, ::GameType);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isLoggedIn() const;

    MCNAPI bool $isServiceAvailable() const;

    MCNAPI bool $isServiceAllowed() const;

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

    MCNAPI std::shared_ptr<Social::IXboxLiveMultiplayerService> $getXboxLiveInterface();

    MCNAPI ::RelationshipStatus $mayChatWith(std::string const&) const;

    MCNAPI std::string const& $getErrorMessage(::Social::JoinGameStatus) const;

    MCNAPI void $_initialize();

    MCNAPI void $_enable(std::function<void(Social::EnableResult)>);

    MCNAPI void $_disable(std::function<void(bool)>);

    MCNAPI void $_advertiseGame();

    MCNAPI void $_joinGame(std::string const&);

    MCNAPI void $_leaveSession();

    MCNAPI bool $_shouldAddGameToGameList(::Social::MultiplayerGameInfo const&) const;

    MCNAPI std::string const $_getPrimaryUserNickname() const;

    MCNAPI std::string const $_getPrimaryUserId() const;

    MCNAPI void $_setLobbyProperties();

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> const $_getGameListRefreshInterval() const;

    MCNAPI void $_getAllActiveSessions(bool);

    MCNAPI void $_tickMultiplayerManager(bool);

    MCNAPI void $_removePrimaryUserFromSession();

    MCNAPI void $_createSession();

    MCNAPI void $_updateLobby();

    MCNAPI bool $_isMutedPlayer(std::string const&) const;

    MCNAPI bool $_isBlockedPlayer(std::string const&) const;

    MCNAPI ::RelationshipStatus $_hasChatPrivileges(std::string const&) const;

    MCNAPI ::Social::GamePublishSetting $_getGamePublishSettingFromLevel(::Level const&) const;

    MCNAPI bool $_getShouldBroadcastFromLevel(::Level const&) const;

    MCNAPI void $_connectNonHostSession();

    MCNAPI std::optional<const Social::GameConnectionInfo> $getExternalServerData() const;

    MCNAPI std::optional<Social::ResolvedExperienceInfo> $getConnectedExperienceInfo() const;

    MCNAPI void $updateConnectedExperienceInfo(::Social::ResolvedExperienceInfo const&);

    MCNAPI bool $isPlayerOnline(std::string const&) const;

    MCNAPI std::vector<std::string> $getPlayerXuidsInLobby() const;

    MCNAPI bool $hasID(std::string const&) const;

    MCNAPI std::string $getXBLInfo() const;

    MCNAPI void $onExitLevel(::Social::User&);

    MCNAPI ::Bedrock::Threading::Async<std::string> $getCurrentSessionHandleId();

    MCNAPI ::Social::MultiplayerGameInfo const& $getCurrentGameInfo() const;

    MCNAPI void $resumeServicesSessionAndHost();

    MCNAPI void $updateRichPresence(::Social::User&, ::GameType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct MultiplayerXBLSharedObjects {};
#endif // @header-generator platform
};

} // namespace Social
