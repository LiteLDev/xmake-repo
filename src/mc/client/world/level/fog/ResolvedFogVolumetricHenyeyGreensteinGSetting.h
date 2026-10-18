#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
struct ResolvedFogVolumetricHenyeyGreensteinGSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHenyeyGreensteinG;
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedFogVolumetricHenyeyGreensteinGSetting {};
#endif // @header-generator platform
#endif // @header-generator platform
