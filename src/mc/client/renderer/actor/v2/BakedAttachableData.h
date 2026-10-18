#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BakedAttachableData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<1>> mBits;
    ::ll::TypedStorage<4, 4, uint>           mParentSetupExpressionOffset;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BakedAttachableData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<1>> mBits;
    ::ll::TypedStorage<4, 4, uint>             mParentSetupExpressionOffset;
    // NOLINTEND
};
#else // @header-generator platform
struct BakedAttachableData {};
#endif // @header-generator platform
#endif // @header-generator platform
