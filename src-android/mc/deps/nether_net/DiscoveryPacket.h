#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacketHeader.h"
#include "mc/deps/nether_net/DiscoveryPacketType.h"
#include "mc/deps/nether_net/p2p/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

struct DiscoveryPacket : public ::NetherNet::DiscoveryPacketHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::NetherNet::P2P::NetworkID> mSenderId;
    ::ll::TypedStorage<1, 8, char[8]>                     mPad;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryPacket();
};

} // namespace NetherNet
