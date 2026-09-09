#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::mesh {

enum class VertexField : uchar {
    Position              = 0,
    Normal                = 1,
    Tangent               = 2,
    Bitangent             = 3,
    Color0                = 4,
    Color1                = 5,
    Color2                = 6,
    Color3                = 7,
    Indices               = 8,
    Weight                = 9,
    TexCoord0             = 10,
    TexCoord1             = 11,
    TexCoord2             = 12,
    TexCoord3             = 13,
    TexCoord4             = 14,
    TexCoord5             = 15,
    TexCoord6             = 16,
    TexCoord7             = 17,
    TexCoord8             = 18,
    _count                = 19,
    Color                 = 4,
    UV0                   = 10,
    UV1                   = 11,
    UV2                   = 12,
    PBRTextureIdx         = 14,
    BoneId0               = 8,
    PreviousPosition      = 15,
    HummingbirdPosition   = 0,
    HummingbirdColor      = 4,
    HummingbirdAdditional = 13,
    Mers                  = 18,
    GeoType               = 13,
    InvalidField          = 255,
};

}
