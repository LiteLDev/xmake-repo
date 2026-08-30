#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/p2p/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class ServerHello {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::NetherNet::P2P::NetworkID> mId;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerHello();
};

} // namespace NetherNet
