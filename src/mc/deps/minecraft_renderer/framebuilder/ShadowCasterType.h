#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ShadowCasterType : int {
    Simple = 0,
    Full   = 1,
    None   = 2,
};
#else // @header-generator platform
enum class ShadowCasterType : int {};
#endif // @header-generator platform

}
