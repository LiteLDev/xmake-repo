#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/p2p/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet {

class ClientHello {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::NetherNet::P2P::NetworkID> mId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk5f766d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ClientHello& operator=(ClientHello const&);
    ClientHello(ClientHello const&);
#endif // @header-generator platform
    ClientHello();
};

} // namespace NetherNet
