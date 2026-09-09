#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class TextureUsage : int {
    Default      = 0,
    ComputeWrite = 1,
    ReadBack     = 2,
    RenderTarget = 3,
};

}
