#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
enum class LayerType : uchar {
    POS    = 0,
    ROT    = 1,
    _count = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LayerType : uchar {
    Pos   = 0,
    Rot   = 1,
    Count = 2,
};
#else // @header-generator platform
enum class LayerType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
