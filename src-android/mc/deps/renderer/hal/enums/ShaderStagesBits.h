#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum ShaderStagesBits : uchar {
    NoShaderStagesBit      = 0,
    VertexShaderStageBit   = 1,
    PixelShaderStageBit    = 2,
    GeometryShaderStageBit = 4,
};

}
