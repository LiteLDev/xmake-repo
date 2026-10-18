#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::P2P {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mValue;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    NetworkID();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace NetherNet::P2P
