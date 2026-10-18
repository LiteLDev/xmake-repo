#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

enum class TextFilteringEvent : int {
    Muted                            = 0,
    FloodingDetectedSuppressRequired = 1,
    FloodingDetectedKickRequired     = 2,
    TextProcessorOffline             = 3,
    TextProcessorServiceUnreachable  = 4,
    DisabledByPlayer                 = 5,
};

}
#endif // @header-generator platform
