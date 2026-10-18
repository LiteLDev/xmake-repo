#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
enum class EmulatedIndexType : int {
    QuadList = 0,
    Sequence = 1,
};
#else // @header-generator platform
enum class EmulatedIndexType : int {};
#endif // @header-generator platform

}
