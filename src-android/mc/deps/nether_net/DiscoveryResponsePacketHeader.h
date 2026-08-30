#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

struct DiscoveryResponsePacketHeader : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mApplicationDataLength;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryResponsePacketHeader();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& LEGACY_PAYLOAD_MAX_SIZE();
    // NOLINTEND
};

} // namespace NetherNet
