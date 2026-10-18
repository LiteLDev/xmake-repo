#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SoundPauseSource : uchar {
    PauseMenu = 0,
    Script    = 1,
    Count     = 2,
};
#endif // @header-generator platform
