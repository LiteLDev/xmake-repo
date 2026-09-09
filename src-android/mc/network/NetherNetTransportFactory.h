#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/network/NetworkSystemToggles.h"
#include "mc/network/PortConfiguration.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class NetherNetTransportFactory {
public:
    // NetherNetTransportFactory inner types define
    using TransportPtr = std::unique_ptr<
        NetherNet::INetherNetTransportInterface,
        std::function<void(NetherNet::INetherNetTransportInterface*)>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::NetworkSystemToggles const>  mToggles;
    ::ll::TypedStorage<8, 88, ::PortConfiguration const>     mPortConfig;
    ::ll::TypedStorage<4, 4, ::NetherNet::LogSeverity const> mDefaultLogSeverity;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetTransportFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NetherNetTransportFactory();

    virtual std::unique_ptr<NetherNet::INetherNetTransportInterface, std::function<void (NetherNet::INetherNetTransportInterface*)>> createTransport(::NetherNet::NetworkID const&, ::NetherNet::INetherNetTransportInterfaceCallbacks*) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetTransportFactory(::NetworkSystemToggles const&, ::PortConfiguration, ::NetherNet::LogSeverity);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setLoggingVerbosity(::Option const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetworkSystemToggles const&, ::PortConfiguration, ::NetherNet::LogSeverity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<
        NetherNet::INetherNetTransportInterface,
        std::function<void(NetherNet::INetherNetTransportInterface*)>>
    $createTransport(::NetherNet::NetworkID const&, ::NetherNet::INetherNetTransportInterfaceCallbacks*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
