#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace RakNet { class RakString; }
namespace RakNet { struct NetworkAdapter; }
// clang-format on

#endif // @header-generator platform
namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
class SocketLayer {};
#else // @header-generator platform
class SocketLayer {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void GetMyAdapters(::RakNet::NetworkAdapter* const adapters);

    MCAPI static ::RakNet::RakString GetSubNetForSocketAndIp(::RakNet::RakString inIpString);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RakNet
