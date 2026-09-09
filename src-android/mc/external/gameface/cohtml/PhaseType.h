#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::InputEventPhase {

enum PhaseType : uint {
    NONE            = 0,
    CAPTURING_PHASE = 1,
    AT_TARGET       = 2,
    BUBBLING_PHASE  = 3,
};

}
