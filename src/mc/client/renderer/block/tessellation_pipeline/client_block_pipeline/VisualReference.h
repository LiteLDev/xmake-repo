#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
enum class VisualReference : int {
    Block = 0,
    Item  = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class VisualReference : int {
    Block = 0,
    Item  = 1,
};
#else // @header-generator platform
enum class VisualReference : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
