#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FaceDimmingMethod : int {
    NDotL       = 0,
    Barycentric = 1,
    BRDF        = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class FaceDimmingMethod : int {
    NDotL       = 0,
    Barycentric = 1,
    Brdf        = 2,
};
#else // @header-generator platform
enum class FaceDimmingMethod : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
