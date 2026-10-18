#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BakedResourceOffsets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mGeometryOffset;
    ::ll::TypedStorage<4, 4, uint>   mBaseMaterialOffset;
    ::ll::TypedStorage<4, 4, uint>   mBaseTextureOffset;
    ::ll::TypedStorage<1, 1, uchar>  mIsDynamicBitset;
    ::ll::TypedStorage<2, 2, ushort> mPartVisibilityCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BakedResourceOffsets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mGeometryOffset;
    ::ll::TypedStorage<4, 4, uint>   mBaseMaterialOffset;
    ::ll::TypedStorage<4, 4, uint>   mBaseTextureOffset;
    ::ll::TypedStorage<1, 1, uchar>  mIsDynamicBitset;
    ::ll::TypedStorage<2, 2, ushort> mPartVisibilityCount;
    // NOLINTEND
};
#else // @header-generator platform
struct BakedResourceOffsets {};
#endif // @header-generator platform
#endif // @header-generator platform
