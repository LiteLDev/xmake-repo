#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PyramidDataPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                mWidth;
    ::ll::TypedStorage<4, 8, std::optional<float>> mDepth;
    ::ll::TypedStorage<4, 4, float>                mHeight;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                  mWidth;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mDepth;
    ::ll::TypedStorage<4, 4, float>                  mHeight;
#endif // @header-generator platform
    // NOLINTEND
};
