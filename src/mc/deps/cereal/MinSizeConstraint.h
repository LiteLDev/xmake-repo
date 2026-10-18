#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct MinSizeConstraint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mMinSize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mMinSize;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::internal
