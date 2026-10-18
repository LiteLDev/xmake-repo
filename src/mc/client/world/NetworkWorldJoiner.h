#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/client/world/RealmWorldJoiner.h"
#include "mc/client/world/ServerURLResolver.h"
#include "mc/client/world/ServerWorldJoiner.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class GatheringManager;
class IAppPlatform;
class IClientInstance;
class IMinecraftEventing;
class INetworkGameConnector;
class IThirdPartyServerRepository;
class ProgressHandler;
class RealmsAPI;
class ServerLocator;
struct ExperienceJoinRequestInfo;
struct IGameServerShutdown;
struct NetworkWorldInfo;
struct PlayerJoinWorldContext;
namespace Bedrock::PubSub { class Subscription; }
namespace Network { struct ServerID; }
namespace OreUI { class Router; }
namespace Parties { class IPartyProvider; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class IUserManager; }
namespace World { class ExternalServerWorldList; }
namespace World { class FriendServerWorldList; }
namespace World { class LanServerWorldList; }
namespace World { class ThirdPartyWorldList; }
namespace World { struct RealmsJoinData; }
namespace ui { class ProgressScreenNavigation; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/client/world/RealmWorldJoiner.h"
#include "mc/client/world/ServerURLResolver.h"
#include "mc/client/world/ServerWorldJoiner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class GatheringManager;
class IAppPlatform;
class IClientInstance;
class IMinecraftEventing;
class INetworkGameConnector;
class IThirdPartyServerRepository;
class ProgressHandler;
class RealmsAPI;
class ServerLocator;
struct IGameServerShutdown;
namespace Bedrock::PubSub { class Subscription; }
namespace Network { struct ServerID; }
namespace OreUI { class Router; }
namespace Parties { class IPartyProvider; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class IUserManager; }
namespace World { class ExternalServerWorldList; }
namespace World { class FriendServerWorldList; }
namespace World { class LanServerWorldList; }
namespace World { class ThirdPartyWorldList; }
namespace World { struct RealmsJoinData; }
namespace ui { class ProgressScreenNavigation; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class NetworkWorldJoiner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 448>                                mRealmWorldJoiner;
    ::ll::UntypedStorage<8, 256>                                mServerWorldJoiner;
    ::ll::TypedStorage<8, 8, ::World::ServerURLResolver>        mServerURLResolver;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&> mExternalServerWorldList;
    ::ll::TypedStorage<8, 16, ::OreUI::Router&>                 mRouter;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldJoiner& operator=(NetworkWorldJoiner const&);
    NetworkWorldJoiner(NetworkWorldJoiner const&);
    NetworkWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkWorldJoiner(
        ::IClientInstance&,
        ::IGameServerShutdown&,
        ::INetworkGameConnector&,
        ::IMinecraftEventing&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        std::weak_ptr<RealmsAPI>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IThirdPartyServerRepository>>,
        ::ServerLocator&,
        ::World::ExternalServerWorldList&,
        ::World::FriendServerWorldList&,
        ::World::LanServerWorldList&,
        ::World::ThirdPartyWorldList&,
        bool const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GatheringManager>> const&,
        ::ui::ProgressScreenNavigation,
        ::OreUI::Router&,
        std::function<Bedrock::NonOwnerPointer<Parties::IPartyProvider>()>,
        std::function<bool(Realms::World, Realms::PlayerRoleActions)>
    );

    MCNAPI void cancelJoinRealmWorld();

    MCNAPI std::string const getRealmErrorData();

    MCNAPI std::vector<std::string> const getRealmXuidErrors();

    MCNAPI ::Bedrock::Threading::Async<World::JoinServerWorldResult>
    joinExperienceWorld(::ExperienceJoinRequestInfo const&, ::PlayerJoinWorldContext const&);

    MCNAPI void joinExternalNetworkWorld(
        std::string const&,
        std::function<void(std::deque<std::unique_ptr<ProgressHandler>>, bool)>,
        std::function<void(World::JoinServerWorldResult)>
    );

    MCNAPI void joinExternalServer(
        std::string const&,
        ushort const,
        std::string const&,
        std::function<void(World::JoinServerWorldResult)>
    );

    MCNAPI void joinFriendServerWorld(::Network::ServerID const&, std::function<void(World::JoinServerWorldResult)>);

    MCNAPI void joinLANServerWorld(
        ::Network::ServerID const&,
        std::function<void(std::unique_ptr<ProgressHandler>)>,
        std::function<void(World::JoinServerWorldResult)>
    );

    MCNAPI void joinRealmWorld(
        ::Realms::RealmId,
        ::IMinecraftEventing::RealmConnectionFlow,
        std::function<void(World::JoinRealmWorldResult)>,
        std::function<void(std::unique_ptr<ProgressHandler>, std::unique_ptr<ProgressHandler>)>,
        std::function<void(
            IMinecraftEventing::RealmConnectionResult,
            std::optional<Realms::FailureReason>,
            std::optional<World::RealmsJoinData>
        )>
    );

    MCNAPI void joinRealmWorldV2(std::string const&, ::IMinecraftEventing::RealmConnectionFlow);

    MCNAPI void joinRealmWorldWithRoute(std::string const&, ::IMinecraftEventing::RealmConnectionFlow);

    MCNAPI void joinThirdPartyServerWorld(
        std::string const&,
        std::function<void(std::deque<std::unique_ptr<ProgressHandler>>, bool)>,
        std::function<void(World::JoinServerWorldResult)>,
        std::function<void()>
    );

    MCNAPI void resetJoinRealmWarningModals();

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToJoinRealmWorldResultPublisher(std::function<void(World::JoinRealmWorldResult)>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[37]> REALM_JOIN_ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IClientInstance&,
        ::IGameServerShutdown&,
        ::INetworkGameConnector&,
        ::IMinecraftEventing&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        std::weak_ptr<RealmsAPI>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IThirdPartyServerRepository>>,
        ::ServerLocator&,
        ::World::ExternalServerWorldList&,
        ::World::FriendServerWorldList&,
        ::World::LanServerWorldList&,
        ::World::ThirdPartyWorldList&,
        bool const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GatheringManager>> const&,
        ::ui::ProgressScreenNavigation,
        ::OreUI::Router&,
        std::function<Bedrock::NonOwnerPointer<Parties::IPartyProvider>()>,
        std::function<bool(Realms::World, Realms::PlayerRoleActions)>
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class NetworkWorldJoiner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 528, ::World::RealmWorldJoiner>       mRealmWorldJoiner;
    ::ll::TypedStorage<8, 264, ::World::ServerWorldJoiner>      mServerWorldJoiner;
    ::ll::TypedStorage<8, 8, ::World::ServerURLResolver>        mServerURLResolver;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&> mExternalServerWorldList;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                  mRouter;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldJoiner& operator=(NetworkWorldJoiner const&);
    NetworkWorldJoiner(NetworkWorldJoiner const&);
    NetworkWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkWorldJoiner(
        ::IClientInstance&                                                       client,
        ::IGameServerShutdown&                                                   gameServerShutdown,
        ::INetworkGameConnector&                                                 networkGameConnector,
        ::IMinecraftEventing&                                                    minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&             userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                        appPlatform,
        ::std::weak_ptr<::RealmsAPI>                                             realmsAPI,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>             thirdPartyServerRepository,
        ::ServerLocator&                                                         serverLocator,
        ::World::ExternalServerWorldList&                                        externalServerWorldList,
        ::World::FriendServerWorldList&                                          friendServerWorldList,
        ::World::LanServerWorldList&                                             lanServerWorldList,
        ::World::ThirdPartyWorldList&                                            thirdPartyWorldList,
        bool                                                                     isEduMode,
        ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> const&                 gatheringManager,
        ::ui::ProgressScreenNavigation                                           progressScreenNavigation,
        ::OreUI::Router&                                                         router,
        ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()> getPartyProvider,
        ::std::function<bool(::Realms::World, ::Realms::PlayerRoleActions)>      canUserDoRealmRoleAction
    );

    MCFOLD ::std::string const getRealmErrorData();

    MCAPI void joinExternalNetworkWorld(
        ::std::string const&                                                            id,
        ::std::function<void(::std::deque<::std::unique_ptr<::ProgressHandler>>, bool)> onJoinServerCompleted,
        ::std::function<void(::World::JoinServerWorldResult)>                           onErrorCallback
    );

    MCAPI void joinLANServerWorld(
        ::Network::ServerID const&                                  serverId,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>)> onCompleteCallback,
        ::std::function<void(::World::JoinServerWorldResult)>       onErrorCallback
    );

    MCAPI void joinRealmWorld(
        ::Realms::RealmId                                    realmId,
        ::IMinecraftEventing::RealmConnectionFlow            fromFlow,
        ::std::function<void(::World::JoinRealmWorldResult)> onRealmResult,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, ::std::unique_ptr<::ProgressHandler>)>
            onRealmFetched,
        ::std::function<void(
            ::IMinecraftEventing::RealmConnectionResult,
            ::std::optional<::Realms::FailureReason>,
            ::std::optional<::World::RealmsJoinData>
        )>  onRealmJoined
    );

    MCAPI void
    joinRealmWorldWithRoute(::std::string const& realmIdString, ::IMinecraftEventing::RealmConnectionFlow fromFlow);

    MCAPI void joinThirdPartyServerWorld(
        ::std::string const&                                                            id,
        ::std::function<void(::std::deque<::std::unique_ptr<::ProgressHandler>>, bool)> onJoinServerCompleted,
        ::std::function<void(::World::JoinServerWorldResult)>                           onErrorCallback,
        ::std::function<void()>                                                         onJoinServerCancelled
    );

    MCAPI ::Bedrock::PubSub::Subscription subscribeToJoinRealmWorldResultPublisher(
        ::std::function<void(::World::JoinRealmWorldResult)> onJoinRealmWorldResult
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[37]> REALM_JOIN_ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                                                       client,
        ::IGameServerShutdown&                                                   gameServerShutdown,
        ::INetworkGameConnector&                                                 networkGameConnector,
        ::IMinecraftEventing&                                                    minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&             userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                        appPlatform,
        ::std::weak_ptr<::RealmsAPI>                                             realmsAPI,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>             thirdPartyServerRepository,
        ::ServerLocator&                                                         serverLocator,
        ::World::ExternalServerWorldList&                                        externalServerWorldList,
        ::World::FriendServerWorldList&                                          friendServerWorldList,
        ::World::LanServerWorldList&                                             lanServerWorldList,
        ::World::ThirdPartyWorldList&                                            thirdPartyWorldList,
        bool                                                                     isEduMode,
        ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> const&                 gatheringManager,
        ::ui::ProgressScreenNavigation                                           progressScreenNavigation,
        ::OreUI::Router&                                                         router,
        ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()> getPartyProvider,
        ::std::function<bool(::Realms::World, ::Realms::PlayerRoleActions)>      canUserDoRealmRoleAction
    );
    // NOLINTEND
};
#else // @header-generator platform
class NetworkWorldJoiner {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
