#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MovementEffectType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    INVALID       = -1,
    GLIDE_BOOST   = 0,
    DOLPHIN_BOOST = 1,
    GEYSER_BOOST  = 2,
    COUNT         = 3,
#else // @header-generator platform
    Invalid      = -1,
    GlideBoost   = 0,
    DolphinBoost = 1,
    GeyserBoost  = 2,
    Count        = 3,
#endif // @header-generator platform
};
