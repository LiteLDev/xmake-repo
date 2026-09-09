#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TargetResolution : uchar {
    None  = 0,
    p360  = 1,
    p480  = 2,
    p540  = 3,
    p720  = 4,
    p1080 = 5,
    p1440 = 6,
    p2160 = 7,
};
