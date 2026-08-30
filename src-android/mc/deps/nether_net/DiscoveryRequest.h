#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet::LanEvents {

struct DiscoveryRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>                mFrom;
    ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::SocketAddress>> mAddr;
    // NOLINTEND
};

} // namespace NetherNet::LanEvents
