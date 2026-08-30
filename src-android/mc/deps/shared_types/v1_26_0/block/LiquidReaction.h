#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_0 {

enum class LiquidReaction : uchar {
    BROKEN     = 0,
    POPPED     = 1,
    BLOCKING   = 2,
    NOREACTION = 3,
};

}
