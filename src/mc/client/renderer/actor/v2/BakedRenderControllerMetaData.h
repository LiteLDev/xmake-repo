#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BakedRenderControllerMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mResourceExpressionCount;
    ::ll::TypedStorage<2, 2, ushort> mMaximumDrawCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BakedRenderControllerMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mResourceExpressionCount;
    ::ll::TypedStorage<2, 2, ushort> mMaximumDrawCount;
    // NOLINTEND
};
#else // @header-generator platform
struct BakedRenderControllerMetaData {};
#endif // @header-generator platform
#endif // @header-generator platform
