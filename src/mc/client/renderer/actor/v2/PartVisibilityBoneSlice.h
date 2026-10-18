#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct PartVisibilityBoneSlice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                       mPartVisibilityIndex;
    ::ll::TypedStorage<4, 4, uint>                       mBoneOffset;
    ::ll::TypedStorage<8, 16, ::gsl::span<const ushort>> mPartVisibilityOffsets;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PartVisibilityBoneSlice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                       mPartVisibilityIndex;
    ::ll::TypedStorage<4, 4, uint>                       mBoneOffset;
    ::ll::TypedStorage<8, 16, ::gsl::span<ushort const>> mPartVisibilityOffsets;
    // NOLINTEND
};
#else // @header-generator platform
struct PartVisibilityBoneSlice {};
#endif // @header-generator platform
#endif // @header-generator platform
