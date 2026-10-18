#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet::LanEvents {

struct DiscoveryResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>                mFrom;
    ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::SocketAddress>> mAddr;
    ::ll::TypedStorage<8, 24, std::vector<std::byte>>                mApplicationData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk642b57;
    ::ll::UntypedStorage<8, 8>  mUnk438db8;
    ::ll::UntypedStorage<8, 24> mUnkcef483;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DiscoveryResponse& operator=(DiscoveryResponse const&);
    DiscoveryResponse(DiscoveryResponse const&);
    DiscoveryResponse();
#endif // @header-generator platform
};

} // namespace NetherNet::LanEvents
