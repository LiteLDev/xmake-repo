#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelCullerType : uchar {
    None                      = 0,
    DistanceFieldPerspective  = 1,
    DistanceFieldOrthographic = 2,
    Manhattan                 = 3,
    Shadow                    = 4,
    NoneAsync                 = 5,
    Invalid                   = 6,
};
