#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ShaderFeature : int {
    Execution      = 0,
    ShadowSampling = 1,
    Raytracing     = 2,
    Texture3D      = 3,
};
#else // @header-generator platform
enum class ShaderFeature : int {};
#endif // @header-generator platform

}
