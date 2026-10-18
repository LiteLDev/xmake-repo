#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::InputEventPhase {

#if defined(LL_PLAT_A) // @header-generator platform
enum PhaseType : uint {
    NONE            = 0,
    CAPTURING_PHASE = 1,
    AT_TARGET       = 2,
    BUBBLING_PHASE  = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PhaseType : int {
    None           = 0,
    CapturingPhase = 1,
    AtTarget       = 2,
    BubblingPhase  = 3,
};
#else // @header-generator platform
enum class PhaseType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
