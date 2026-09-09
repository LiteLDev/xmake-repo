#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

enum class BoolAttributeOperation : int {
    OVERRIDE    = 0,
    ALPHA_BLEND = 1,
    AND         = 2,
    NAND        = 3,
    OR          = 4,
    NOR         = 5,
    XOR         = 6,
    XNOR        = 7,
};

}
