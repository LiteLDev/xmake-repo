#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum ComparisonFunction : uint {
    CMP_Never        = 0,
    CMP_Less         = 1,
    CMP_LessEqual    = 2,
    CMP_Greater      = 3,
    CMP_GreaterEqual = 4,
    CMP_Equal        = 5,
    CMP_NotEqual     = 6,
    CMP_Always       = 7,
};

}
