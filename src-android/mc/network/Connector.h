#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class NetworkPeer;
namespace Json { class Value; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct ResolvedExperienceInfo; }
// clang-format on

class Connector {
public:
    // Connector inner types declare
    // clang-format off
    struct ConnectionCallbacks;
    // clang-format on

    // Connector inner types define
    struct ConnectionCallbacks {
    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~ConnectionCallbacks();
    
        virtual bool onNewIncomingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&) = 0;
    
        virtual bool onNewOutgoingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&) = 0;
    
        virtual void onConnectionClosed(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, std::string const&, std::string const&, bool, ::Json::Value const&) = 0;
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Connector::ConnectionCallbacks&> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    Connector& operator=(Connector const&);
    Connector(Connector const&);
    Connector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Connector();

    virtual std::string getLocalIp();

    virtual ushort getPort() const;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;

    virtual void setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);

    virtual bool isIPv4Supported() const;

    virtual bool isIPv6Supported() const;

    virtual ushort getIPv4Port() const;

    virtual ushort getIPv6Port() const;

    virtual ::TransportLayer getNetworkType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Connector(::Connector::ConnectionCallbacks&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Connector::ConnectionCallbacks&);
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

    MCNAPI void $setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);

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
