#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DeepLinkType : uchar {
    Library   = 0,
    JoinCode  = 1,
    OpenWorld = 2,
};
#else // @header-generator platform
enum class DeepLinkType : uchar {};
#endif // @header-generator platform
