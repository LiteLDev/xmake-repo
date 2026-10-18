#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/NonceGenerator.h"
#include "mc/client/social/EnableResult.h"
#include "mc/client/social/InviteHandleCheck.h"
#include "mc/client/social/JoinGameStatus.h"
#include "mc/client/social/MultiplayerGameInfo.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/MultiplayerServiceRegistry.h"
#include "mc/client/social/MultiplayerState.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/TransportLayer.h"
#include "mc/server/config/gathering/server_configuration/ClientStoreEntryPointConfiguration.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class DisconnectionRequestHandler;
class ILevel;
class IMinecraftEventing;
class Level;
class ServerNetworkSystem;
class SignalingService;
class SignalingServiceSignInJob;
class SignalingServiceSignInManager;
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class SingleThreadedLock; }
namespace PlayerMessaging { struct NetworkID; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class IXboxLiveMultiplayerService; }
namespace Social { class MultiplayerPlatformFactory; }
namespace Social { class MultiplayerRealmSession; }
namespace Social { class MultiplayerService; }
namespace Social { class MultiplayerServiceObserver; }
namespace Social { class PresenceManager; }
namespace Social { class User; }
namespace Social { struct Nonce; }
namespace Social { struct OnlineId; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct RealmWorldPublisherData; }
namespace Social { struct ResolvedExperienceInfo; }
namespace brstd { struct source_location; }
namespace mce { class UUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class MultiplayerServiceManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, ::Social::MultiplayerServiceRegistry> mServiceRegistry;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::IXboxLiveMultiplayerService>> mXboxLiveService;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::MultiplayerRealmSession>> mRealmSession;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mServiceGameListUpdated;
    ::ll::TypedStorage<8, 24, std::vector<Social::MultiplayerGameInfo>> mGameList;
    ::ll::TypedStorage<4, 40, std::mutex> mGameListMutex;
    ::ll::UntypedStorage<8, 32> mObserverSubject;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSignalingServiceSubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingServiceSignInJob>> mSignalServiceSigninJob;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>> mSignalServiceSigninTaskGroup;
    ::ll::UntypedStorage<8, 24> mSignalingServiceSignInManager;
    ::ll::UntypedStorage<8, 24> mDisconnectionRequestHandler;
    ::ll::TypedStorage<1, 1, bool> mIsHosting;
    ::ll::TypedStorage<8, 56, std::optional<ServerConfiguration::ClientStoreEntryPointConfiguration>> mClientStoreEntryPointConfiguration;
    ::ll::UntypedStorage<8, 88> mServiceBuildGameListPublisher;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::MultiplayerPlatformFactory>> mPlatformFactory;
    ::ll::TypedStorage<8, 24, ::Social::NonceGenerator> mClientNonces;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiplayerServiceManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiplayerServiceManager();

    MCNAPI void _buildGameList();

    MCNAPI void addObserver(::Social::MultiplayerServiceObserver&);

    MCNAPI void advertiseGame();

    MCNAPI ::RelationshipStatus canChatWithUser(std::string const&, std::string const&);

    MCNAPI void cancelJoinGame(std::string const&, ::Social::MultiplayerServiceIdentifier const);

    MCNAPI ::Social::InviteHandleCheck checkIsInviteForCurrentGame(::Social::MultiplayerServiceIdentifier);

    MCNAPI ::Bedrock::Threading::Async<Social::InviteHandleCheck>
    checkIsInviteHandleForCurrentGameAsync(::Social::MultiplayerServiceIdentifier, std::string const&);

    MCNAPI void clearInviteHandle(::Social::MultiplayerServiceIdentifier);

    MCNAPI void clearRealmToJoin();

    MCNAPI void disableService(::Social::MultiplayerServiceIdentifier const, std::function<void(bool)>);

    MCNAPI void enableService(::Social::MultiplayerServiceIdentifier const, std::function<void(Social::EnableResult)>);

    MCNAPI std::vector<Social::MultiplayerServiceIdentifier> getBroadcastingMultiplayerServiceIds(bool, bool) const;

    MCNAPI std::optional<ServerConfiguration::ClientStoreEntryPointConfiguration> const&
           getClientStoreEntryPointConfiguration() const;

    MCNAPI std::optional<Social::ResolvedExperienceInfo> getConnectedExperienceInfo() const;

    MCNAPI ::Social::MultiplayerGameInfo const& getCurrentGameInfoXBL() const;

    MCNAPI int getCurrentGameMaxPlayerCount() const;

    MCNAPI ::Bedrock::Threading::Async<std::string> getCurrentXBLSessionHandleId() const;

    MCNAPI std::string const& getErrorMessage(::Social::MultiplayerServiceIdentifier, ::Social::JoinGameStatus) const;

    MCNAPI std::optional<const Social::GameConnectionInfo> getExternalServerData() const;

    MCNAPI std::vector<Social::MultiplayerGameInfo> const& getGameList() const;

    MCNAPI std::optional<PlayerMessaging::NetworkID> getID() const;

    MCNAPI std::string getInviteHandle(::Social::MultiplayerServiceIdentifier);

    MCNAPI bool getIsWaitingForSession() const;

    MCNAPI uint getMaxInvitablePlayers(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI ::Social::MultiplayerState getMultiplayerState() const;

    MCNAPI ::Realms::World* getRealmWorld();

    MCNAPI bool getSessionIsValid(::Social::MultiplayerServiceIdentifier) const;

    MCNAPI bool getSessionWasCreated(::Social::MultiplayerServiceIdentifier) const;

    MCNAPI ::TransportLayer getTransportLayerFromServerConnectionInfo(::Social::GameConnectionInfo&);

    MCNAPI std::vector<std::string> getXuidsInXBLLobby() const;

    MCNAPI void handleInvites(std::function<void(Social::MultiplayerServiceIdentifier)>&&);

    MCNAPI void initialize(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::IMinecraftEventing&,
        std::shared_ptr<SignalingService>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<SignalingServiceSignInManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::PresenceManager>>,
        std::function<void(std::string)>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DisconnectionRequestHandler>>,
        ::ClientNetworkSystem&
    );

    MCNAPI void invitePlayers(std::vector<std::string> const&, ::Social::MultiplayerServiceIdentifier);

    MCNAPI bool isAvailable(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isConnected(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isConnecting(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isDisconnected(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isHosting() const;

    MCNAPI bool isInExperience() const;

    MCNAPI bool isInExternalServer() const;

    MCNAPI bool isInGame() const;

    MCNAPI bool isInGame(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isInRealm() const;

    MCNAPI bool isInSession() const;

    MCNAPI bool isInSession(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isInThirdPartyServer() const;

    MCNAPI bool isInviteEnabled(::Social::MultiplayerServiceIdentifier);

    MCNAPI bool isJoining() const;

    MCNAPI bool isReadyToJoin(::Social::MultiplayerServiceIdentifier) const;

    MCNAPI bool isServiceEnabled(::Social::MultiplayerServiceIdentifier const) const;

    MCNAPI bool isSignedIntoSignalingService() const;

    MCNAPI void joinGame(
        std::string const&,
        ::ClientNetworkSystem&,
        std::function<void(Social::JoinGameStatus, const Social::MultiplayerGameInfo&, bool)>,
        ::Social::MultiplayerServiceIdentifier const
    );

    MCNAPI void leaveSession();

    MCNAPI void loginToService(::Social::MultiplayerServiceIdentifier const, bool const);

    MCNAPI bool needToHandleInvite(::Social::MultiplayerServiceIdentifier) const;

    MCNAPI void onAllClientsExitedLevel(uint);

    MCNAPI void onAppResumed();

    MCNAPI void onExitLevel(::Social::User&);

    MCNAPI void onGameModeChanged(::Social::User&, ::Level&);

    MCNAPI void onPrimaryUserConnectComplete(::Social::UserPlatformConnectionResult const, bool const);

    MCNAPI void onUserEnterLevel(::Social::User&, ::Level&, std::vector<Social::MultiplayerServiceIdentifier>);

    MCNAPI void registerServiceList(
        std::vector<std::shared_ptr<Social::MultiplayerService>>&&,
        std::weak_ptr<Social::MultiplayerPlatformFactory>
    );

    MCNAPI void setClientStoreEntryPointConfiguration(
        std::optional<ServerConfiguration::ClientStoreEntryPointConfiguration> const&
    );

    MCNAPI void setGameHostInfo(::ILevel const&, int const, bool const, bool const);

    MCNAPI void setInviteHandle(std::string const&, bool const, ::Social::MultiplayerServiceIdentifier);

    MCNAPI void setIsHosting();

    MCNAPI void setNetworkSystemForAllServices(::ClientNetworkSystem&);

    MCNAPI void setNetworkSystemForAllServices(::ServerNetworkSystem&);

    MCNAPI void setRealmToJoin(::Realms::World const&);

    MCNAPI void setShouldAdvertiseGame(::Social::MultiplayerServiceIdentifier, ::Level const&, bool);

    MCNAPI ::Bedrock::Threading::Async<std::error_code>
    signAllMultiplayerServicesIntoSignalingService(::ServerNetworkSystem&);

    MCNAPI ::Bedrock::Threading::Async<std::error_code> signIntoSignalingService(::ClientNetworkSystem&, bool);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToCurrentRealmChanged(std::function<void(std::optional<Social::RealmWorldPublisherData>)>);

    MCNAPI void tick(bool);

    MCNAPI void updateConnectedExperienceInfo(::Social::ResolvedExperienceInfo const&);

    MCNAPI void updateMaxPlayerCount(int);

    MCNAPI void updateRichPresenceForXBL(::Social::User&, ::Level&);

    MCNAPI void userControlledUpdateGameList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MultiplayerServiceManager {};
#endif // @header-generator platform

} // namespace Social
