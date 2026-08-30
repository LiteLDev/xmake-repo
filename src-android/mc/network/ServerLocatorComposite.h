#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/PermissionIPv6.h"
#include "mc/network/PermissionLAN.h"
#include "mc/network/RakNetServerLANVisibility.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/StubServerLocator.h"
#include "mc/network/TransportLayer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AsynchronousIPResolver;
class NetherNetServerLocator;
class NetworkSessionOwner;
class RakNetConnector;
class RakNetServerLocator;
class ServerLocator;
struct NetherNetConnector;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
namespace Social { struct Nonce; }
// clang-format on

class ServerLocatorComposite : public ::StubServerLocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                       mNetworkSessionOwner;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetherNetServerLocator>> mNetherNetServerLocator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RakNetServerLocator>>    mRakNetServerLocator;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLocatorComposite();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerLocatorComposite();

    virtual void _onDisable();

    virtual void _onEnable();

    virtual void startAnnouncingServer(std::string const&, std::string const&, ::GameType, int, int, bool, bool, bool, ::ServerSupportedAuthenticationTypes, ::Social::Nonce const&);

    virtual void stopAnnouncingServer();

    virtual void startServerDiscovery(::PortPair);

    virtual void stopServerDiscovery();

    virtual void addCustomServer(std::string const&, int);

    virtual void addCustomServer(::AsynchronousIPResolver const&, int);

    virtual std::vector<PingedCompatibleServer> getServerList() const;

    virtual void clearServerList();

    virtual void update();

    virtual float getPingTimeForGUID(std::string const&);

    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void (ServerConnectivityTestResult)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerLocatorComposite(
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkSessionOwner>>,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&
    );

    MCNAPI ::ServerLocator& _getActiveServerLocator();

    MCNAPI void initializeNetherNetServerLocator(
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetherNetConnector>>&&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&
    );

    MCNAPI void initializeRakNetServerLocator(
        ::RakNetConnector&,
        ::RakPeerHelper::IPSupportInterface&,
        std::vector<std::string>,
        bool,
        ::RakNetServerLANVisibility,
        ::PermissionLAN,
        ::PermissionIPv6,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkSessionOwner>>,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&
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
    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();

    MCNAPI void $startAnnouncingServer(
        std::string const&,
        std::string const&,
        ::GameType,
        int,
        int,
        bool,
        bool,
        bool,
        ::ServerSupportedAuthenticationTypes,
        ::Social::Nonce const&
    );

    MCNAPI void $stopAnnouncingServer();

    MCNAPI void $startServerDiscovery(::PortPair);

    MCNAPI void $stopServerDiscovery();

    MCNAPI void $addCustomServer(std::string const&, int);

    MCNAPI void $addCustomServer(::AsynchronousIPResolver const&, int);

    MCNAPI std::vector<PingedCompatibleServer> $getServerList() const;

    MCNAPI void $clearServerList();

    MCNAPI void $update();

    MCNAPI float $getPingTimeForGUID(std::string const&);

    MCNAPI void
    $checkCanConnectToCustomServerAsync(std::string, int, std::function<void(ServerConnectivityTestResult)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
