#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class EduExternalLinkResourceUriState : uchar {
    None = 0,
    Name = 1,
    Uri  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class EduExternalLinkResourceUriState : uchar {
    None = 0,
    Name = 1,
    Uri  = 2,
};
#else // @header-generator platform
enum class EduExternalLinkResourceUriState : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
