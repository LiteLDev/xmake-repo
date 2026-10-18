#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

#if defined(LL_PLAT_A) // @header-generator platform
struct LightClusteringParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                   mLightsPerCluster;
    ::ll::TypedStorage<4, 12, std::array<float, 3>> mClusterSize;
    ::ll::TypedStorage<4, 4, float>                 mClusterFarPlane;
    ::ll::TypedStorage<4, 4, float>                 mFirstClusterDepthMax;
    ::ll::TypedStorage<4, 4, float>                 mSecondClusterDepthMax;
    ::ll::TypedStorage<1, 1, bool>                  mUseAngularGPUClustering;
    // NOLINTEND
};
#else // @header-generator platform
struct LightClusteringParameters {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules
