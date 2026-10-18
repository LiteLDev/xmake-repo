#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct GeometryResourceSpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mGeometryOffset;
    ::ll::TypedStorage<4, 4, uint> mGeometryCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GeometryResourceSpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mGeometryOffset;
    ::ll::TypedStorage<4, 4, uint> mGeometryCount;
    // NOLINTEND
};
#else // @header-generator platform
struct GeometryResourceSpan {};
#endif // @header-generator platform
#endif // @header-generator platform
