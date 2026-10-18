#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class MaterialRenderType : uchar {
    Vanilla    = 0,
    Prepass    = 1,
    ForwardPBR = 2,
    Count      = 3,
};
#else // @header-generator platform
enum class MaterialRenderType : uchar {};
#endif // @header-generator platform

}
