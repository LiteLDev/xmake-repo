#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct NavigateToPositionsIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                               mSpeed;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<3, float, (glm::qualifier)0>>> mTargets;
    ::ll::TypedStorage<8, 8, ulong>                                               mNextTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigateToPositionsIntent& operator=(NavigateToPositionsIntent const&);
    NavigateToPositionsIntent();
};

} // namespace sim
