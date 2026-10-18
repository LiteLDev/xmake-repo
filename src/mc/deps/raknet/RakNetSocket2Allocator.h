#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace RakNet { class RakNetSocket2; }
// clang-format on

#endif // @header-generator platform
namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
class RakNetSocket2Allocator {};
#else // @header-generator platform
class RakNetSocket2Allocator {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void DeallocRNS2(::RakNet::RakNetSocket2* s);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RakNet
