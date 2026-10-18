#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class ISignalingInterface {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ISignalingInterface inner types define
    using SendSignalCallback = std::function<void(NetherNet::ESessionError)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ISignalingInterface() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID, std::string const&, std::function<void (NetherNet::ESessionError)>&&) = 0;
#else // @header-generator platform
    virtual void SendSignal(
        ::NetherNet::NetworkID                              from,
        ::NetherNet::NetworkID                              to,
        ::std::string const&                                message,
        ::std::function<void(::NetherNet::ESessionError)>&& onComplete
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
