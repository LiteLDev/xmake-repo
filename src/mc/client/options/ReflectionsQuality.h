#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ReflectionsQuality : uchar {
    Off    = 0,
    Low    = 1,
    Medium = 2,
    High   = 3,
    Ultra  = 4,
};
#else // @header-generator platform
enum class ReflectionsQuality : uchar {};
#endif // @header-generator platform
