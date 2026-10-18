#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacketHeader.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/DiscoveryPacketType.h"
#include "mc/deps/nether_net/p2p/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet {

struct DiscoveryPacket : public ::NetherNet::DiscoveryPacketHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::NetherNet::P2P::NetworkID> mSenderId;
    ::ll::TypedStorage<1, 8, char[8]>                     mPad;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkb0714a;
    ::ll::UntypedStorage<1, 8> mUnkdd53a8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DiscoveryPacket& operator=(DiscoveryPacket const&);
    DiscoveryPacket(DiscoveryPacket const&);
#endif // @header-generator platform
    DiscoveryPacket();
};

} // namespace NetherNet
