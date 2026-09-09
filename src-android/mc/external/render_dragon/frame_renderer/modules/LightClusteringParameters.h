#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

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

} // namespace dragon::framerenderer::modules
