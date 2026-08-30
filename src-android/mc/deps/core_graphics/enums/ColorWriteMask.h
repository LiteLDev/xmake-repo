#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum ColorWriteMask : uchar {
    // bitfield representation
    ColorWriteMaskNone  = 0,
    ColorWriteMaskRed   = 1 << 0,
    ColorWriteMaskGreen = 1 << 1,
    ColorWriteMaskBlue  = 1 << 2,
    ColorWriteMaskAlpha = 1 << 3,
    ColorWriteMaskAll   = ColorWriteMaskRed | ColorWriteMaskGreen | ColorWriteMaskBlue | ColorWriteMaskAlpha,
};

}
