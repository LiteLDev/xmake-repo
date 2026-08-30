#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct TopologySort {
public:
    // TopologySort inner types define
    enum Enum : uint {
        DirectionFrontToBackMin = 0,
        DirectionFrontToBackAvg = 1,
        DirectionFrontToBackMax = 2,
        DirectionBackToFrontMin = 3,
        DirectionBackToFrontAvg = 4,
        DirectionBackToFrontMax = 5,
        DistanceFrontToBackMin  = 6,
        DistanceFrontToBackAvg  = 7,
        DistanceFrontToBackMax  = 8,
        DistanceBackToFrontMin  = 9,
        DistanceBackToFrontAvg  = 10,
        DistanceBackToFrontMax  = 11,
        Count                   = 12,
    };
};

} // namespace bgfx
