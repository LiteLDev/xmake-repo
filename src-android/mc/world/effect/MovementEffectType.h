#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MovementEffectType : int {
    INVALID       = -1,
    GLIDE_BOOST   = 0,
    DOLPHIN_BOOST = 1,
    GEYSER_BOOST  = 2,
    COUNT         = 3,
};
