#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SwapEffect : uchar {
    Discard    = 0,
    Sequential = 1,
};
#else // @header-generator platform
enum class SwapEffect : uchar {};
#endif // @header-generator platform

}
