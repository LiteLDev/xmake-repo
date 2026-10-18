#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextureUsageFlag : uchar {
    ReadSrc    = 0,
    CopyDst    = 1,
    RenderDst  = 2,
    ComputeDst = 3,
    Count      = 4,
};
#else // @header-generator platform
enum class TextureUsageFlag : uchar {};
#endif // @header-generator platform

}
