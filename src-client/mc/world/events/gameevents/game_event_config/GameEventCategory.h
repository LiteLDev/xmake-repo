#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameEventConfig {

enum GameEventCategory : uchar {
    // bitfield representation
    NoCategory                                 = 0,
    VibrationsCategory                         = 1 << 0,
    IgnoreVibrationsIfSneakingCategory         = 1 << 1,
    IgnoreVibrationsOnDampeningBlockCategory   = 1 << 2,
    IgnoreVibrationsInDampeningBlockCategory   = 1 << 3,
    HandleVibrationsFromDampeningActorCategory = 1 << 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
