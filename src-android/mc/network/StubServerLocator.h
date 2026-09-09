#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/ServerLocator.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AsynchronousIPResolver;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
namespace Social { struct Nonce; }
// clang-format on

class StubServerLocator : public ::ServerLocator {
public:
    // prevent constructor by default
    StubServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StubServerLocator();

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
    MCNAPI explicit StubServerLocator(::Bedrock::NonOwnerPointer<AppPlatform> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<AppPlatform> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
