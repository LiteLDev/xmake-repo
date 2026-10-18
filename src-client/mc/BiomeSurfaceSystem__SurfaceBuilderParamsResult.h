#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

namespace BiomeSurfaceSystem {

struct SurfaceBuilderParamsResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, std::array<uchar, 256>> mSurfaceBiomeIndices;
    ::ll::UntypedStorage<8, 24>                        mSurfaceBuilderParams;
    ::ll::TypedStorage<1, 1, bool>                     mAnythingUsesDepthValue;
    // NOLINTEND
};

} // namespace BiomeSurfaceSystem
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
