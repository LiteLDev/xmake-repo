#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GatheringManager;
class IAppPlatform;
class IClientInstance;
class IMinecraftEventing;
class INetworkGameConnector;
class IThirdPartyServerRepository;
class ProgressHandler;
class ServerLocator;
class TaskGroup;
class ThirdPartyInfo;
struct ExperienceJoinRequestInfo;
struct NetworkWorldInfo;
struct PingedCompatibleServer;
struct PlayerJoinWorldContext;
namespace Bedrock::Services::gatherings::model { struct JoinResponseData; }
namespace Network { struct ServerID; }
namespace OreUI { class Router; }
namespace Parties { class IPartyProvider; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class User; }
namespace Social { struct PermissionCheckResult; }
namespace World { class ExternalServerWorldList; }
namespace World { class FriendServerWorldList; }
namespace World { class IServerURLResolver; }
namespace World { class LanServerWorldList; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

namespace World {

class ServerWorldJoiner {
public:
    // ServerWorldJoiner inner types define
    enum class ServerType : int {
        ThirdParty       = 0,
        ExternalServer   = 1,
        ExperienceServer = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mMinecraftEventing;
    ::ll::UntypedStorage<8, 24> mUserManager;
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::UntypedStorage<8, 24> mThirdPartyServerRepository;
    ::ll::TypedStorage<8, 8, ::ServerLocator&> mServerLocator;
    ::ll::TypedStorage<8, 8, ::World::IServerURLResolver&> mServerURLResolver;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<8, 8, ::INetworkGameConnector&> mNetworkGameConnector;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&> mExternalServerWorldList;
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&> mFriendServerWorldList;
    ::ll::TypedStorage<8, 8, ::World::LanServerWorldList&> mLanServerWorldList;
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&> mThirdPartyWorldList;
    ::ll::TypedStorage<1, 1, bool> mIsEduMode;
    ::ll::UntypedStorage<8, 32> mGatheringManager;
    ::ll::UntypedStorage<8, 48> mGetPartyProvider;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&> mRouter;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mServerConnectionTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServerWorldJoiner& operator=(ServerWorldJoiner const&);
    ServerWorldJoiner(ServerWorldJoiner const&);
    ServerWorldJoiner();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerWorldJoiner(
        ::IClientInstance&,
        ::IMinecraftEventing&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IThirdPartyServerRepository>>,
        ::ServerLocator&,
        ::World::IServerURLResolver&,
        ::INetworkGameConnector&,
        ::World::ExternalServerWorldList&,
        ::World::FriendServerWorldList&,
        ::World::LanServerWorldList&,
        ::World::ThirdPartyWorldList&,
        bool const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GatheringManager>> const&,
        std::function<Bedrock::NonOwnerPointer<Parties::IPartyProvider>()>,
        ::OreUI::Router&
    );

    MCNAPI ::Bedrock::Threading::Async<World::JoinServerWorldResult>
    _joinExperienceWorld(::ExperienceJoinRequestInfo const&, ::PlayerJoinWorldContext const&);

    MCNAPI void _joinFriendWorld(::NetworkWorldInfo const&, std::function<void(World::JoinServerWorldResult)>);

    MCNAPI void _joinNetworkWorld(
        ::NetworkWorldInfo&,
        ::World::ServerWorldJoiner::ServerType const,
        std::function<void(std::deque<std::unique_ptr<ProgressHandler>>, bool)>,
        std::function<void()>,
        std::function<void(World::JoinServerWorldResult)>
    );

    MCNAPI bool _validateInternetConnection(::Social::User&) const;

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

    MCNAPI void joinThirdPartyServerWorld(
        std::string const&,
        std::function<void(std::deque<std::unique_ptr<ProgressHandler>>, bool)>,
        std::function<void(World::JoinServerWorldResult)>,
        std::function<void()>
    );

    MCNAPI ~ServerWorldJoiner();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IClientInstance&,
        ::IMinecraftEventing&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IThirdPartyServerRepository>>,
        ::ServerLocator&,
        ::World::IServerURLResolver&,
        ::INetworkGameConnector&,
        ::World::ExternalServerWorldList&,
        ::World::FriendServerWorldList&,
        ::World::LanServerWorldList&,
        ::World::ThirdPartyWorldList&,
        bool const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GatheringManager>> const&,
        std::function<Bedrock::NonOwnerPointer<Parties::IPartyProvider>()>,
        ::OreUI::Router&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
