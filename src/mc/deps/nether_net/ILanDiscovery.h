#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class ILanDiscovery {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual bool IsBroadcastDiscoveryEnabled(::NetherNet::NetworkID) = 0;
#else // @header-generator platform
    virtual bool IsBroadcastDiscoveryEnabled(::NetherNet::NetworkID id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void DisableBroadcastDiscovery(::NetherNet::NetworkID) = 0;
#else // @header-generator platform
    virtual void DisableBroadcastDiscovery(::NetherNet::NetworkID id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void EnableBroadcastDiscovery(::NetherNet::NetworkID) = 0;
#else // @header-generator platform
    virtual void EnableBroadcastDiscovery(::NetherNet::NetworkID id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AddLanHost(::NetherNet::NetworkID, std::string const&, int) = 0;
#else // @header-generator platform
    virtual void AddLanHost(::NetherNet::NetworkID remote, ::std::string const& ipStr, int port) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void RemoveLanHost(::NetherNet::NetworkID) = 0;
#else // @header-generator platform
    virtual void RemoveLanHost(::NetherNet::NetworkID remote) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsNetworkIdOnLan(::NetherNet::NetworkID) = 0;
#else // @header-generator platform
    virtual bool IsNetworkIdOnLan(::NetherNet::NetworkID networkId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendLanBroadcastResponse(::webrtc::SocketAddress const&, ::NetherNet::NetworkID, std::vector<std::byte>) = 0;
#else // @header-generator platform
    virtual void SendLanBroadcastResponse(
        ::webrtc::SocketAddress const& destination,
        ::NetherNet::NetworkID         from,
        ::std::vector<::std::byte>     data
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendSignalingMessageTo(::NetherNet::NetworkID, ::NetherNet::NetworkID, std::vector<std::byte>) = 0;
#else // @header-generator platform
    virtual void SendSignalingMessageTo(
        ::NetherNet::NetworkID     networkIdFrom,
        ::NetherNet::NetworkID     networkIdTo,
        ::std::vector<::std::byte> data
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler* handler) = 0;
#endif // @header-generator platform

    virtual void Suspend() = 0;

    virtual void Resume() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
