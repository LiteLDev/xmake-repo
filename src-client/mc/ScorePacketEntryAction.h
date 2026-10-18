#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ScorePacketEntryAction : uchar {
    Remove           = 0,
    ChangePlayer     = 1,
    ChangeEntity     = 2,
    ChangeFakePlayer = 3,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
