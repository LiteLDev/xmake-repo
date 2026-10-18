#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum StencilMask : uint {
    StencilMaskNone = 0,
    StencilMaskAll  = 4294967295,
};
#else // @header-generator platform
enum class StencilMask : uint {};
#endif // @header-generator platform

}
