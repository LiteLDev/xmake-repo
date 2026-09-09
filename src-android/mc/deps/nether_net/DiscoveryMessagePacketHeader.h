#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"
#include "mc/deps/nether_net/p2p/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

struct DiscoveryMessagePacketHeader : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::NetherNet::P2P::NetworkID> mRecipientId;
    ::ll::TypedStorage<4, 4, uint>                        mMessageDataLength;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryMessagePacketHeader();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& LEGACY_PAYLOAD_MAX_SIZE();
    // NOLINTEND
};

} // namespace NetherNet
