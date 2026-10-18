#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

enum class InputSemantic : uchar {
    Position     = 0,
    Normal       = 1,
    Tangent      = 2,
    Bitangent    = 3,
    Color        = 4,
    Indices      = 5,
    Weight       = 6,
    TexCoord     = 7,
    FragPosition = 8,
    FrontFacing  = 9,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
