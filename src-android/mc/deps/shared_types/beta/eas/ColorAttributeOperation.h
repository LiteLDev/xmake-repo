#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta {

enum class ColorAttributeOperation : int {
    OVERRIDE    = 0,
    ALPHA_BLEND = 1,
    ADD         = 2,
    SUBTRACT    = 3,
    MULTIPLY    = 4,
};

}
