#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TerrainInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> offset;
    ::ll::TypedStorage<4, 4, float> factor;
    ::ll::TypedStorage<4, 4, float> jaggedness;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk2e6893;
    ::ll::UntypedStorage<4, 4> mUnk14adcf;
    ::ll::UntypedStorage<4, 4> mUnk9d38c2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TerrainInfo& operator=(TerrainInfo const&);
    TerrainInfo(TerrainInfo const&);
    TerrainInfo();
#endif // @header-generator platform
};
