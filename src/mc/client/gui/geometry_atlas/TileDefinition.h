#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct TileDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mID;
    ::ll::TypedStorage<4, 4, int>  mWidth;
    ::ll::TypedStorage<4, 4, int>  mHeight;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TileDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mID;
    ::ll::TypedStorage<4, 4, int>  mWidth;
    ::ll::TypedStorage<4, 4, int>  mHeight;
    // NOLINTEND
};
#else // @header-generator platform
struct TileDefinition {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
