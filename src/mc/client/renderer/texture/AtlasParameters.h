#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct AtlasParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mColorMipCount;
    // NOLINTEND
};
#else // @header-generator platform
struct AtlasParameters {};
#endif // @header-generator platform
