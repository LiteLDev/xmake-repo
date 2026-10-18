#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace NetherNet {

struct DiscoveryResponsePacketHeader : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mApplicationDataLength;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkdab1a9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DiscoveryResponsePacketHeader& operator=(DiscoveryResponsePacketHeader const&);
    DiscoveryResponsePacketHeader(DiscoveryResponsePacketHeader const&);
#endif // @header-generator platform
    DiscoveryResponsePacketHeader();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& LEGACY_PAYLOAD_MAX_SIZE();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace NetherNet
