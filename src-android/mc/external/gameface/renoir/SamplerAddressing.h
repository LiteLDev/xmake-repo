#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum SamplerAddressing : uint {
    SAMA_Wrap   = 0,
    SAMA_Mirror = 1,
    SAMA_Clamp  = 2,
};

}
