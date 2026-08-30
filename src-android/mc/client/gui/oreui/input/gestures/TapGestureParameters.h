#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct TapGestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                  maxTouches;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> timeTolerance;
    ::ll::TypedStorage<4, 4, float>                                                 distanceToleranceCm;
    // NOLINTEND
};

} // namespace OreUI
