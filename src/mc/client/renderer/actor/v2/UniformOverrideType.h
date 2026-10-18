#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class UniformOverrideType : uchar {
    UVAnim              = 0,
    OverlayColor        = 1,
    ChangeColor         = 2,
    MultiplicitiveColor = 3,
    HurtColor           = 4,
    OnFireColor         = 5,
    Max                 = 6,
    UniqueUniformCount  = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class UniformOverrideType : uchar {
    UVAnim              = 0,
    OverlayColor        = 1,
    ChangeColor         = 2,
    MultiplicitiveColor = 3,
    HurtColor           = 4,
    OnFireColor         = 5,
    Max                 = 6,
    UniqueUniformCount  = 4,
};
#else // @header-generator platform
enum class UniformOverrideType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
