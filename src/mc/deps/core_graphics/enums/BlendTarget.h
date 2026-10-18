#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BlendTarget : uchar {
    DestColor          = 0,
    SourceColor        = 1,
    Zero               = 2,
    One                = 3,
    OneMinusDestColor  = 4,
    OneMinusSrcColor   = 5,
    SourceAlpha        = 6,
    DestAlpha          = 7,
    OneMinusSrcAlpha   = 8,
    UnknownBlendTarget = 9,
};
#else // @header-generator platform
enum class BlendTarget : uchar {};
#endif // @header-generator platform

}
