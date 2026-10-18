#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum ShaderStagesBits : uchar {
    NoShaderStagesBit      = 0,
    VertexShaderStageBit   = 1,
    PixelShaderStageBit    = 2,
    GeometryShaderStageBit = 4,
};
#else // @header-generator platform
enum class ShaderStagesBits : uchar {};
#endif // @header-generator platform

}
