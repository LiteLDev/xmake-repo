#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

enum class MinecraftStencilMaskFlags : uchar {
    None       = 0,
    ShadowMask = 1,
    All        = 255,
};

}
