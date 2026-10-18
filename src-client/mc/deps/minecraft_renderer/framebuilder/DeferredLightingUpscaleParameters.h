#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct DeferredLightingUpscaleParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mIndirectSpecularMixedResEnabled;
    ::ll::TypedStorage<4, 4, float>  mDeferredLightingResolutionScale;
    ::ll::TypedStorage<4, 4, float>  mNormalFactor;
    ::ll::TypedStorage<2, 2, ushort> mTileSize;
    ::ll::TypedStorage<1, 1, bool>   mEnableTiling;
    // NOLINTEND
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
