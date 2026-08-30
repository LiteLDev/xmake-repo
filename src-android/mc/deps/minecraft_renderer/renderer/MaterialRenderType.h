#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class MaterialRenderType : uchar {
    Vanilla    = 0,
    Prepass    = 1,
    ForwardPBR = 2,
    Count      = 3,
};

}
