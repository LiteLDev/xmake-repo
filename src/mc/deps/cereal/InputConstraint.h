#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct InputConstraint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mMaxLength;
    ::ll::TypedStorage<8, 8, ulong> mMinLength;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mMaxLength;
    ::ll::TypedStorage<8, 8, uint64> mMinLength;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::internal
