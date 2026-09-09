#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CloudLightingParameters.h"

namespace mce::framebuilder {

struct CloudParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::mce::framebuilder::CloudLightingParameters> mCloudLightingParameters;
    ::ll::TypedStorage<4, 4, float>                                         mOpacity;
    ::ll::TypedStorage<4, 4, int>                                           mCloudMeshSize;
    ::ll::TypedStorage<4, 4, int>                                           mGridSize;
    ::ll::TypedStorage<1, 1, bool>                                          mEnableFrustumCulling;
    ::ll::TypedStorage<1, 1, bool>                                          mEnableCloudRenderDistance;
    ::ll::TypedStorage<4, 4, float>                                         mCloudRenderDistanceScale;
    // NOLINTEND
};

} // namespace mce::framebuilder
