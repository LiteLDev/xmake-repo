#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/NetworkEnableDisableListener.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AppPlatform;
#else // @header-generator platform
#endif // @header-generator platform
class AsynchronousIPResolver;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
namespace Social { struct Nonce; }
// clang-format on

class ServerLocator : public ::NetworkEnableDisableListener {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerLocator() = default;
#else // @header-generator platform
    virtual ~ServerLocator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onDisable();

    virtual void _onEnable();

    virtual void startAnnouncingServer(std::string const&, std::string const&, ::GameType, int, int, bool, bool, bool, ::ServerSupportedAuthenticationTypes, ::Social::Nonce const&) = 0;
#else // @header-generator platform
    virtual void startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           gameType,
        int                                  numPlayers,
        int                                  maxNumPlayers,
        bool                                 isJoinableThroughServerScreen,
        bool                                 isEditorWorld,
        bool                                 isHardcore,
        ::ServerSupportedAuthenticationTypes supportedAuth,
        ::Social::Nonce const&               nonce
    ) = 0;
#endif // @header-generator platform

    virtual void stopAnnouncingServer() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startServerDiscovery(::PortPair) = 0;
#else // @header-generator platform
    virtual void startServerDiscovery(::PortPair ports) = 0;
#endif // @header-generator platform

    virtual void stopServerDiscovery() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addCustomServer(std::string const&, int) = 0;
#else // @header-generator platform
    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addCustomServer(::AsynchronousIPResolver const&, int) = 0;
#else // @header-generator platform
    virtual void addCustomServer(::std::string const& address, int port) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<PingedCompatibleServer> getServerList() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::PingedCompatibleServer> getServerList() const = 0;
#endif // @header-generator platform

    virtual void clearServerList() = 0;

    virtual void update() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getPingTimeForGUID(std::string const&) = 0;
#else // @header-generator platform
    virtual float getPingTimeForGUID(::std::string const& guid) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void (ServerConnectivityTestResult)>) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    ) = 0;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<ServerConnectivityTestResult>
    checkCanConnectToCustomServerAsync(std::string const&, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<::ServerConnectivityTestResult>
    checkCanConnectToCustomServerAsync(::std::string const& hostIpAddress, int port);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND
};
