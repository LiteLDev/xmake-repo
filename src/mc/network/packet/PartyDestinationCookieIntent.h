#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PartyDestinationCookieIntent : uchar {
#else // @header-generator platform
enum class PartyDestinationCookieIntent : schar {
#endif // @header-generator platform
    Notify = 0,
    OptIn  = 1,
    OptOut = 2,
};
