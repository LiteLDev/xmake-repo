#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstancePackedBools {
public:
    // member variables
    // NOLINTBEGIN
    bool mFaceDimming               : 1;
    bool mRandomizeUVRotation       : 1;
    bool mSupportsTextureVariations : 1;
    bool mAlphaMaskedTint           : 1;
    bool mDithering                 : 1;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockMaterialInstancePackedBools(BlockMaterialInstancePackedBools const&);
#else // @header-generator platform
#endif // @header-generator platform
};
