#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/FrustumCullerType.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"

namespace mce::framebuilder {

struct CullingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::FrustumCullerType> mFrustumCuller;
    ::ll::TypedStorage<1, 1, ::LevelCullerType>   mLevelCuller;
    ::ll::TypedStorage<1, 1, ::LevelCullerType>   mShadowLevelCuller;
    ::ll::TypedStorage<4, 4, float>               mShadowCullerToPlayerDistance;
    ::ll::TypedStorage<4, 4, float>               mShadowCullerMaximumRayDeviation;
    // NOLINTEND
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
