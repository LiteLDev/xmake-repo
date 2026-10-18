#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayfabBeaconProtocol {

struct PingDatagram {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> header;
    ::ll::TypedStorage<8, 8, ulong>  uniqueId;
    // NOLINTEND
};

} // namespace PlayfabBeaconProtocol
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
