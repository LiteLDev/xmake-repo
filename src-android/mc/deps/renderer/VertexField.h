#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class VertexField : ushort {
    Position              = 0,
    Color                 = 1,
    Normal                = 2,
    Tangent               = 3,
    UV0                   = 4,
    UV1                   = 5,
    UV2                   = 6,
    PBRTextureIdx         = 7,
    BoneId0               = 8,
    PreviousPosition      = 9,
    HummingbirdPosition   = 10,
    HummingbirdColor      = 11,
    HummingbirdAdditional = 12,
    Mers                  = 13,
    GeoType               = 14,
    _count                = 15,
    InvalidField          = 65535,
};

}
