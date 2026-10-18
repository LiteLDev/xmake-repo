#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct CacheCoordinates {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>     neighborIndex;
    ::ll::TypedStorage<4, 16, int[4]> lightColorDataIndexArray;
    ::ll::TypedStorage<4, 16, int[4]> cornerDataIndexArray;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CacheCoordinates {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>     neighborIndex;
    ::ll::TypedStorage<4, 16, int[4]> lightColorDataIndexArray;
    ::ll::TypedStorage<4, 16, int[4]> cornerDataIndexArray;
    // NOLINTEND
};
#else // @header-generator platform
struct CacheCoordinates {};
#endif // @header-generator platform
#endif // @header-generator platform
