#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct AllocateAtlasPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AllocateAtlasPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    // NOLINTEND
};
#else // @header-generator platform
struct AllocateAtlasPayload {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
