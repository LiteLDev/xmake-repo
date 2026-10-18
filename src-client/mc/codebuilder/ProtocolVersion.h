#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

enum class ProtocolVersion : uint {
    v0_0_1 = 1,
    v0_0_2 = 2,
    v0_0_3 = 2,
    v0_0_4 = 4,
    v1_0_0 = 16777216,
    v1_1_0 = 16842752,
    v1_2_0 = 16908288,
    v1_3_0 = 16973824,
    v1_4_0 = 17039360,
    v1_5_0 = 17104896,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
