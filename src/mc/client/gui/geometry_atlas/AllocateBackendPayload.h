#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct AllocateBackendPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mCurrentAttempt;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AllocateBackendPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mCurrentAttempt;
    // NOLINTEND
};
#else // @header-generator platform
struct AllocateBackendPayload {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
