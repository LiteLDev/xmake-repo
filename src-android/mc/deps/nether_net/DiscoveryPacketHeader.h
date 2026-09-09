#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacketType.h"

namespace NetherNet {

struct DiscoveryPacketHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mPacketLength;
    ::ll::TypedStorage<2, 2, ushort> mPacketType;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryPacketHeader();
};

} // namespace NetherNet
