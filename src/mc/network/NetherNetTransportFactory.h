#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/network/NetworkSystemToggles.h"
#include "mc/network/PortConfiguration.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Option;
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class NetherNetTransportFactory {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // NetherNetTransportFactory inner types define
    using TransportPtr = std::unique_ptr<
        NetherNet::INetherNetTransportInterface,
        std::function<void(NetherNet::INetherNetTransportInterface*)>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::NetworkSystemToggles const>  mToggles;
    ::ll::TypedStorage<8, 88, ::PortConfiguration const>     mPortConfig;
    ::ll::TypedStorage<4, 4, ::NetherNet::LogSeverity const> mDefaultLogSeverity;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48>  mUnk78837c;
    ::ll::UntypedStorage<8, 104> mUnk3e43d6;
    ::ll::UntypedStorage<4, 4>   mUnkda3cbc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NetherNetTransportFactory& operator=(NetherNetTransportFactory const&);
    NetherNetTransportFactory(NetherNetTransportFactory const&);
#endif // @header-generator platform
    NetherNetTransportFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NetherNetTransportFactory();
#else // @header-generator platform
    virtual ~NetherNetTransportFactory() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<NetherNet::INetherNetTransportInterface, std::function<void (NetherNet::INetherNetTransportInterface*)>> createTransport(::NetherNet::NetworkID const&, ::NetherNet::INetherNetTransportInterfaceCallbacks*) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetTransportFactory(::NetworkSystemToggles const&, ::PortConfiguration, ::NetherNet::LogSeverity);
#else // @header-generator platform
    virtual ::std::unique_ptr<
        ::NetherNet::INetherNetTransportInterface,
        ::std::function<void(::NetherNet::INetherNetTransportInterface*)>>
    createTransport(
        ::NetherNet::NetworkID const&                       id,
        ::NetherNet::INetherNetTransportInterfaceCallbacks* callbacks
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void setLoggingVerbosity(::Option const& loggingOption);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<
        NetherNet::INetherNetTransportInterface,
        std::function<void(NetherNet::INetherNetTransportInterface*)>>
    $createTransport(::NetherNet::NetworkID const&, ::NetherNet::INetherNetTransportInterfaceCallbacks*) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<
        ::NetherNet::INetherNetTransportInterface,
        ::std::function<void(::NetherNet::INetherNetTransportInterface*)>>
    $createTransport(
        ::NetherNet::NetworkID const&                       id,
        ::NetherNet::INetherNetTransportInterfaceCallbacks* callbacks
    ) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
