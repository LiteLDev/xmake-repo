#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class RtBufferSizes : int {
    Display         = 0,
    Render          = 1,
    QuarterDisplay  = 2,
    HalfDisplay     = 3,
    QuarterRender   = 4,
    HalfRender      = 5,
    ToneCurve       = 6,
    SixteenthRender = 7,
    Custom          = 8,
};

}
