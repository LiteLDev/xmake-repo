#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct uint24_t {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> val;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkaad864;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    uint24_t& operator=(uint24_t const&);
    uint24_t(uint24_t const&);
    uint24_t();
#endif // @header-generator platform
};

} // namespace RakNet
