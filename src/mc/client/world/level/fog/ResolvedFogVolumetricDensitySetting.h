#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
struct ResolvedFogVolumetricDensitySetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMaxDensity;
    ::ll::TypedStorage<4, 4, float> mMaxDensityHeight;
    ::ll::TypedStorage<4, 4, float> mZeroDensityHeight;
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedFogVolumetricDensitySetting {};
#endif // @header-generator platform
#endif // @header-generator platform
