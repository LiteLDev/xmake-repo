#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum EyeRenderingModeBit : uint64 {
    Unspecified          = 0,
    MonoEye              = 1,
    MonoFlat             = 2,
    MonoUI               = 4,
    AllEyeRenderingModes = 7,
};
#else // @header-generator platform
enum class EyeRenderingModeBit : uint {};
#endif // @header-generator platform
