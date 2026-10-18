#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum ColorWriteMask : uint {
    // bitfield representation
    CWM_None  = 0,
    CWM_Red   = 1u << 0,
    CWM_Green = 1u << 1,
    CWM_Blue  = 1u << 2,
    CWM_Alpha = 1u << 3,
    CWM_All   = CWM_Red | CWM_Green | CWM_Blue | CWM_Alpha,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ColorWriteMask : int {
    // bitfield representation
    None  = 0,
    Red   = 1 << 0,
    Green = 1 << 1,
    Blue  = 1 << 2,
    Alpha = 1 << 3,
    All   = Red | Green | Blue | Alpha,
};
#else // @header-generator platform
enum class ColorWriteMask : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
