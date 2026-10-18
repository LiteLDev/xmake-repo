#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ActorDigestFormat : uchar {
    v1_18_30 = 0,
#else // @header-generator platform
enum class ActorDigestFormat : schar {
    V1_18_30 = 0,
#endif // @header-generator platform
};
