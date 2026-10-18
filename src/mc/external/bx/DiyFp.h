#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct DiyFp {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> f;
    ::ll::TypedStorage<4, 4, int>    e;
    // NOLINTEND
};
#else // @header-generator platform
struct DiyFp {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
