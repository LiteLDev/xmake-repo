#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/p2p/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet {

struct DiscoveryMessagePacketHeader : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::NetherNet::P2P::NetworkID> mRecipientId;
    ::ll::TypedStorage<4, 4, uint>                        mMessageDataLength;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk1c0b63;
    ::ll::UntypedStorage<4, 4> mUnk9d570d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DiscoveryMessagePacketHeader& operator=(DiscoveryMessagePacketHeader const&);
    DiscoveryMessagePacketHeader(DiscoveryMessagePacketHeader const&);
#endif // @header-generator platform
    DiscoveryMessagePacketHeader();
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
