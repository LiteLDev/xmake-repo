#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

enum class FloatAttributeOperation : int {
    OVERRIDE    = 0,
    ALPHA_BLEND = 1,
    ADD         = 2,
    SUBTRACT    = 3,
    MULTIPLY    = 4,
    MINIMUM     = 5,
    MAXIMUM     = 6,
};

}
