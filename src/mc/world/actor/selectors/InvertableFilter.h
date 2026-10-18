#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
struct InvertableFilter {};
#else // @header-generator platform
struct InvertableFilter {
    T0   value;    // this+0x0
    bool inverted; // this+0x4
};
#endif // @header-generator platform
