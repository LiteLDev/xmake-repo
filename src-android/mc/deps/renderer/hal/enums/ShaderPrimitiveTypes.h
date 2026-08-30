#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class ShaderPrimitiveTypes : uchar {
    UnknownPrimitiveType    = 0,
    PrimitiveTypesBegin     = 0,
    Float1                  = 1,
    Float2                  = 2,
    Float3                  = 3,
    Float4                  = 4,
    Int1                    = 5,
    Int2                    = 6,
    Int3                    = 7,
    Int4                    = 8,
    Matrix2x2               = 9,
    Matrix3x3               = 10,
    Matrix4x4               = 11,
    PrimitiveTypesEnd       = 11,
    Sampler1d               = 12,
    Sampler2d               = 13,
    Sampler3d               = 14,
    MaxShaderPrimitiveTypes = 15,
};

}
