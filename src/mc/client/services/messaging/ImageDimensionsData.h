#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ImageDimensionsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    // NOLINTEND
};
#else // @header-generator platform
struct ImageDimensionsData {};
#endif // @header-generator platform
