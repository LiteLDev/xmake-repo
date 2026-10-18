#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Status : int {
    Success      = 0,
    CycleCreated = 1,
    InvalidStep  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Status : int {
    Success      = 0,
    CycleCreated = 1,
    InvalidStep  = 2,
};
#else // @header-generator platform
enum class Status : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
