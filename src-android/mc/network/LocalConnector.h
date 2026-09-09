#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class LocalConnectivitySystem;
class LocalNetworkPeer;
namespace Social { class GameConnectionInfo; }
// clang-format on

class LocalConnector : public ::Connector, public ::std::enable_shared_from_this<LocalConnector> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                                           mMutex;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                                                 mLocalId;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::weak_ptr<LocalConnector>>> mConnectionsMap;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void()>>>                                   mCallbackQueue;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalConnector();

    virtual std::string getLocalIp();

    virtual ushort getPort() const;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;

    virtual bool isIPv4Supported() const;

    virtual bool isIPv6Supported() const;

    virtual ushort getIPv4Port() const;

    virtual ushort getIPv6Port() const;

    virtual ::TransportLayer getNetworkType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalConnector(::Connector::ConnectionCallbacks&, ::NetworkIdentifier const&);

    MCNAPI bool connect(::NetworkIdentifier const&);

    MCNAPI void disconnect(bool);

    MCNAPI void host(::NetworkIdentifier const&);

    MCNAPI void runEvents();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LocalConnectivitySystem& sLocalConnectivitySystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Connector::ConnectionCallbacks&, ::NetworkIdentifier const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getLocalIp();

    MCNAPI ushort $getPort() const;

    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI bool $isIPv4Supported() const;

    MCNAPI bool $isIPv6Supported() const;

    MCNAPI ushort $getIPv4Port() const;

    MCNAPI ushort $getIPv6Port() const;

    MCNAPI ::TransportLayer $getNetworkType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
