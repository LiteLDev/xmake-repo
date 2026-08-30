#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

enum class SamplerSlotType : int {
    Buffer          = 0,
    CombinedSampler = 1,
    SamplerState    = 2,
    Count           = 3,
};

}
