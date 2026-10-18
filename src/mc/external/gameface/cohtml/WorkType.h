#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
enum WorkType : uint {
    WT_Resources = 0,
    WT_Layout    = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class WorkType : int {
    Resources = 0,
    Layout    = 1,
};
#else // @header-generator platform
enum class WorkType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
