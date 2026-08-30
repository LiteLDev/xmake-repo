#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

enum class ColorAttributeOperation : int {
    OVERRIDE    = 0,
    ALPHA_BLEND = 1,
    ADD         = 2,
    SUBTRACT    = 3,
    MULTIPLY    = 4,
};

}
