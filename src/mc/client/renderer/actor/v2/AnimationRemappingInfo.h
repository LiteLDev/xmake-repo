#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct AnimationRemappingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRemappingOffset;
    ::ll::TypedStorage<4, 4, uint> mRemappingCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AnimationRemappingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRemappingOffset;
    ::ll::TypedStorage<4, 4, uint> mRemappingCount;
    // NOLINTEND
};
#else // @header-generator platform
struct AnimationRemappingInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
