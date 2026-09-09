#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class RtDebugType : int {
    Off                   = 0,
    RtResourcesDebugBlit  = 1,
    ToneMappingButNoBloom = 2,
    Count                 = 3,
};

}
