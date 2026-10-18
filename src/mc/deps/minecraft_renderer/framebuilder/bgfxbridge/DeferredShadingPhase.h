#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DeferredShadingPhase : int {
    UnderWater = 0,
    AboveWater = 1,
};
#else // @header-generator platform
enum class DeferredShadingPhase : int {};
#endif // @header-generator platform

}
