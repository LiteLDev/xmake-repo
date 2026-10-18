#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextureBindType : uchar {
    Sampler = 0,
    UAV     = 1,
};
#else // @header-generator platform
enum class TextureBindType : uchar {};
#endif // @header-generator platform

}
