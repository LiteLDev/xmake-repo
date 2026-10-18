#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BakedResourceExtendedOffsets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mExtendedResourceOffset;
    ::ll::TypedStorage<2, 2, ushort> mMaterialCount;
    ::ll::TypedStorage<1, 1, uchar>  mTextureCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BakedResourceExtendedOffsets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mExtendedResourceOffset;
    ::ll::TypedStorage<2, 2, ushort> mMaterialCount;
    ::ll::TypedStorage<1, 1, uchar>  mTextureCount;
    // NOLINTEND
};
#else // @header-generator platform
struct BakedResourceExtendedOffsets {};
#endif // @header-generator platform
#endif // @header-generator platform
