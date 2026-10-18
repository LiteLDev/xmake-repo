#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules::fidelityfx {

#if defined(LL_PLAT_A) // @header-generator platform
enum FidelityFXPrecision : uint {
    FULL  = 0,
    HALF  = 1,
    Count = 2,
};
#else // @header-generator platform
enum class FidelityFXPrecision : int {};
#endif // @header-generator platform

}
