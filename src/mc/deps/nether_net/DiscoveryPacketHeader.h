#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacketType.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet {

struct DiscoveryPacketHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort> mPacketLength;
    ::ll::TypedStorage<2, 2, ushort> mPacketType;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnk449f63;
    ::ll::UntypedStorage<2, 2> mUnkfa1d5f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DiscoveryPacketHeader& operator=(DiscoveryPacketHeader const&);
    DiscoveryPacketHeader(DiscoveryPacketHeader const&);
#endif // @header-generator platform
    DiscoveryPacketHeader();
};

} // namespace NetherNet
