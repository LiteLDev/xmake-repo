#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

enum class SamplerType : uchar {
    Type2D                    = 0,
    Type2DArray               = 1,
    Type2DExternal            = 2,
    Type3D                    = 3,
    TypeCube                  = 4,
    TypeCubeArray             = 5,
    TypeStructuredBuffer      = 6,
    TypeRawBuffer             = 7,
    TypeAccelerationStructure = 8,
    TypeShadow2D              = 9,
    TypeShadow2DArray         = 10,
    TypeSamplerState          = 11,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
