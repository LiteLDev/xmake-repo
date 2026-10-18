#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TrustedSkinFlag : uchar {
#else // @header-generator platform
enum class TrustedSkinFlag : schar {
#endif // @header-generator platform
    Unset = 0,
    False = 1,
    True  = 2,
};
