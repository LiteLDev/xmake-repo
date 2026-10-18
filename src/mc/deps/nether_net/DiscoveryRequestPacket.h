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

#if defined(LL_PLAT_A) // @header-generator platform
struct DiscoveryRequestPacket : public ::NetherNet::DiscoveryPacket {
public:
    // prevent constructor by default
    DiscoveryRequestPacket();
};
#else // @header-generator platform
struct DiscoveryRequestPacket : public ::NetherNet::DiscoveryPacket {};
#endif // @header-generator platform

} // namespace NetherNet
