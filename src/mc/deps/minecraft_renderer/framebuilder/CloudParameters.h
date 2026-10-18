#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CloudLightingParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct CloudParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
