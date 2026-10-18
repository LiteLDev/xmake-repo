#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { class IUdpSocketFactory; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct TransportConfiguration; }
// clang-format on

namespace NetherNet {

class ITransportFactory {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ITransportFactory() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLoggingLevel(::NetherNet::LogSeverity) = 0;
#else // @header-generator platform
    virtual void setLoggingLevel(::NetherNet::LogSeverity severity) = 0;
#endif // @header-generator platform

    virtual void suspendTransport() = 0;

    virtual void resumeTransport() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetherNet::INetherNetTransportInterface* createTransportInterface(::NetherNet::NetworkID const&, ::NetherNet::TransportConfiguration const&, ::NetherNet::INetherNetTransportInterfaceCallbacks*) = 0;
#else // @header-generator platform
    virtual ::NetherNet::INetherNetTransportInterface* createTransportInterface(
        ::NetherNet::NetworkID const&                       localUserID,
        ::NetherNet::TransportConfiguration const&          configuration,
        ::NetherNet::INetherNetTransportInterfaceCallbacks* pCallbacks
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void destroyTransportInterface(::NetherNet::INetherNetTransportInterface*) = 0;
#else // @header-generator platform
    virtual void destroyTransportInterface(::NetherNet::INetherNetTransportInterface* pSimpleNetworkInterface) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<NetherNet::IUdpSocketFactory> createUdpSocketFactory() = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::NetherNet::IUdpSocketFactory> createUdpSocketFactory() = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
