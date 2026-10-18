#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class EntryType : int {
    XboxOffline     = 0,
    XboxOnline      = 1,
    PlatformOffline = 2,
    PlatformOnline  = 3,
    LinkedOffline   = 4,
    LinkedOnline    = 5,
    COUNT           = 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class EntryType : int {
    XboxOffline     = 0,
    XboxOnline      = 1,
    PlatformOffline = 2,
    PlatformOnline  = 3,
    LinkedOffline   = 4,
    LinkedOnline    = 5,
    Count           = 6,
};
#else // @header-generator platform
enum class EntryType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
