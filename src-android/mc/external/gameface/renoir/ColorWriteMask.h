#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum ColorWriteMask : uint {
    // bitfield representation
    CWM_None  = 0,
    CWM_Red   = 1u << 0,
    CWM_Green = 1u << 1,
    CWM_Blue  = 1u << 2,
    CWM_Alpha = 1u << 3,
    CWM_All   = CWM_Red | CWM_Green | CWM_Blue | CWM_Alpha,
};

}
