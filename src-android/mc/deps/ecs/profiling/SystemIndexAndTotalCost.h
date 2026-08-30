#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Analysis {

struct SystemIndexAndTotalCost {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                                           mSystemIndex;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>> mTotalCost;
    // NOLINTEND
};

} // namespace ECS::Profiling::Analysis
