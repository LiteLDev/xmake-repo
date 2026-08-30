#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

enum class ShaderFeature : int {
    Execution      = 0,
    ShadowSampling = 1,
    Raytracing     = 2,
    Texture3D      = 3,
};

}
