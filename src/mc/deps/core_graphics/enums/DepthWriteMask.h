#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum DepthWriteMask : uchar {
    DepthWriteMaskNone = 0,
    DepthWriteMaskAll  = 1,
};
#else // @header-generator platform
enum class DepthWriteMask : uchar {};
#endif // @header-generator platform

}
