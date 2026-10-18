#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/OnlineSafetyDialogVisibility.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class IClientInstance;
class RealmsAPI;
struct ExperienceJoinRequestInfo;
struct GameConnectionInfoEx;
struct PlayerJoinWorldContext;
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class MultiplayerGameInfo; }
// clang-format on

class INetworkGameConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~INetworkGameConnector() = default;

    virtual void joinRealmsGame(::Realms::World const&, ::Social::GameConnectionInfo const&, ::PlayerJoinWorldContext) = 0;

    virtual void joinRemoteServerWithAddress(::Social::GameConnectionInfo, std::string const&, std::string const&, ::NetworkType, std::shared_ptr<bool>, ::PlayerJoinWorldContext) = 0;

    virtual ::Bedrock::Threading::Async<void> joinMultiplayerGame(::Social::MultiplayerGameInfo const&, ::PlayerJoinWorldContext, ::OnlineSafetyDialogVisibility) = 0;

    virtual void setReconnectionCookie(std::optional<std::variant<GameConnectionInfoEx, Social::MultiplayerGameInfo, ExperienceJoinRequestInfo, Realms::RealmId>> const&) = 0;

    virtual std::optional<std::variant<GameConnectionInfoEx, Social::MultiplayerGameInfo, ExperienceJoinRequestInfo, Realms::RealmId>> getReconnectionCookie() = 0;

    virtual void joinRealmFromConnectLink(::Realms::World const&, ::PlayerJoinWorldContext) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> getPrimaryClientInstance() = 0;

    virtual std::weak_ptr<RealmsAPI> getRealms() = 0;

    virtual void joinRealm(::Realms::World const&, ::IMinecraftEventing::RealmConnectionFlow, ::PlayerJoinWorldContext) = 0;

    virtual ::ClientNetworkSystem& getClientNetworkSystem() = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/events/OnlineSafetyDialogVisibility.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class IClientInstance;
class RealmsAPI;
struct ExperienceJoinRequestInfo;
struct GameConnectionInfoEx;
struct PlayerJoinWorldContext;
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class MultiplayerGameInfo; }
// clang-format on

class INetworkGameConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INetworkGameConnector() = default;

    virtual void joinRealmsGame(
        ::Realms::World const&              realm,
        ::Social::GameConnectionInfo const& gameConnection,
        ::PlayerJoinWorldContext            context
    ) = 0;

    virtual void joinRemoteServerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::std::shared_ptr<bool>      userCancelled,
        ::PlayerJoinWorldContext     context
    ) = 0;

    virtual ::Bedrock::Threading::Async<void> joinMultiplayerGame(
        ::Social::MultiplayerGameInfo const& gameInfo,
        ::PlayerJoinWorldContext             context,
        ::OnlineSafetyDialogVisibility       onlineSafetyDialogVisibility
    ) = 0;

    virtual void setReconnectionCookie(
        ::std::optional<::std::variant<
            ::GameConnectionInfoEx,
            ::Social::MultiplayerGameInfo,
            ::ExperienceJoinRequestInfo,
            ::Realms::RealmId>> const& reconnectCookie
    ) = 0;

    virtual ::std::optional<::std::variant<
        ::GameConnectionInfoEx,
        ::Social::MultiplayerGameInfo,
        ::ExperienceJoinRequestInfo,
        ::Realms::RealmId>>
    getReconnectionCookie() = 0;

    virtual void joinRealmFromConnectLink(::Realms::World const& world, ::PlayerJoinWorldContext context) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getPrimaryClientInstance() = 0;

    virtual ::std::weak_ptr<::RealmsAPI> getRealms() = 0;

    virtual void joinRealm(
        ::Realms::World const&                    world,
        ::IMinecraftEventing::RealmConnectionFlow telemetryEventingConnectionFlow,
        ::PlayerJoinWorldContext                  context
    ) = 0;

    virtual ::ClientNetworkSystem& getClientNetworkSystem() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class INetworkGameConnector {};
#endif // @header-generator platform
#endif // @header-generator platform
